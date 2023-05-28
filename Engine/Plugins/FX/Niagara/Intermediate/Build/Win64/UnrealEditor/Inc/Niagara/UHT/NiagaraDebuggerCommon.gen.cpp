// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraDebuggerCommon.h"
#include "../Public/NiagaraScalabilityState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDebuggerCommon() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETickingGroup();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDebugHUDSettings();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDebugHUDSettings_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENCPoolMethod();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDebugHudFont();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDebugHudHAlign();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDebugHUDOverviewMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfGraphMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfSampleMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDebugHudVAlign();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDebugPlaybackMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraExecutionState();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraGpuComputeTickStage();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSimTarget();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScalabilityState();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraOutlinerTimingData;
class UScriptStruct* FNiagaraOutlinerTimingData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerTimingData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraOutlinerTimingData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraOutlinerTimingData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraOutlinerTimingData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraOutlinerTimingData>()
{
	return FNiagaraOutlinerTimingData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameThread_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GameThread;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderThread_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RenderThread;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// Niagara Outliner.\n" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Niagara Outliner." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraOutlinerTimingData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::NewProp_GameThread_MetaData[] = {
		{ "Category", "Time" },
		{ "Comment", "/** Game thread time, including concurrent tasks*/" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Game thread time, including concurrent tasks" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::NewProp_GameThread = { "GameThread", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerTimingData, GameThread), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::NewProp_GameThread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::NewProp_GameThread_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::NewProp_RenderThread_MetaData[] = {
		{ "Category", "Time" },
		{ "Comment", "/** Render thread time. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Render thread time." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::NewProp_RenderThread = { "RenderThread", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerTimingData, RenderThread), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::NewProp_RenderThread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::NewProp_RenderThread_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::NewProp_GameThread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::NewProp_RenderThread,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraOutlinerTimingData",
		sizeof(FNiagaraOutlinerTimingData),
		alignof(FNiagaraOutlinerTimingData),
		Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerTimingData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraOutlinerTimingData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraOutlinerTimingData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraOutlinerEmitterInstanceData;
class UScriptStruct* FNiagaraOutlinerEmitterInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerEmitterInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraOutlinerEmitterInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraOutlinerEmitterInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraOutlinerEmitterInstanceData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraOutlinerEmitterInstanceData>()
{
	return FNiagaraOutlinerEmitterInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EmitterName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SimTarget_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimTarget_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SimTarget;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ExecState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumParticles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumParticles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresPersistentIDs_MetaData[];
#endif
		static void NewProp_bRequiresPersistentIDs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresPersistentIDs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraOutlinerEmitterInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_EmitterName_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "//Name of this emitter.\n" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Name of this emitter." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerEmitterInstanceData, EmitterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_EmitterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_EmitterName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_SimTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_SimTarget_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "//TODO: Move to shared asset representation.\n" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "TODO: Move to shared asset representation." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_SimTarget = { "SimTarget", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerEmitterInstanceData, SimTarget), Z_Construct_UEnum_Niagara_ENiagaraSimTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_SimTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_SimTarget_MetaData)) }; // 348263643
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_ExecState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_ExecState_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "//TODO: Move to shared asset representation.\n" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "TODO: Move to shared asset representation." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_ExecState = { "ExecState", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerEmitterInstanceData, ExecState), Z_Construct_UEnum_Niagara_ENiagaraExecutionState, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_ExecState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_ExecState_MetaData)) }; // 2418915668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_NumParticles_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_NumParticles = { "NumParticles", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerEmitterInstanceData, NumParticles), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_NumParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_NumParticles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_bRequiresPersistentIDs_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_bRequiresPersistentIDs_SetBit(void* Obj)
	{
		((FNiagaraOutlinerEmitterInstanceData*)Obj)->bRequiresPersistentIDs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_bRequiresPersistentIDs = { "bRequiresPersistentIDs", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraOutlinerEmitterInstanceData), &Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_bRequiresPersistentIDs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_bRequiresPersistentIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_bRequiresPersistentIDs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_EmitterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_SimTarget_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_SimTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_ExecState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_ExecState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_NumParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewProp_bRequiresPersistentIDs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraOutlinerEmitterInstanceData",
		sizeof(FNiagaraOutlinerEmitterInstanceData),
		alignof(FNiagaraOutlinerEmitterInstanceData),
		Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerEmitterInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraOutlinerEmitterInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraOutlinerEmitterInstanceData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemInstanceData;
class UScriptStruct* FNiagaraOutlinerSystemInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraOutlinerSystemInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemInstanceData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraOutlinerSystemInstanceData>()
{
	return FNiagaraOutlinerSystemInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ComponentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LWCTile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LWCTile;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Emitters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Emitters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Emitters;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ActualExecutionState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActualExecutionState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActualExecutionState;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_RequestedExecutionState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestedExecutionState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RequestedExecutionState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalabilityState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalabilityState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPendingKill_MetaData[];
#endif
		static void NewProp_bPendingKill_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingKill;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsingCullProxy_MetaData[];
#endif
		static void NewProp_bUsingCullProxy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsingCullProxy;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PoolMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoolMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PoolMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AverageTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AverageTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickGroup_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TickGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GpuTickStage_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GpuTickStage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSolo_MetaData[];
#endif
		static void NewProp_bIsSolo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSolo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresDistanceFieldData_MetaData[];
#endif
		static void NewProp_bRequiresDistanceFieldData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresDistanceFieldData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresDepthBuffer_MetaData[];
#endif
		static void NewProp_bRequiresDepthBuffer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresDepthBuffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresEarlyViewData_MetaData[];
#endif
		static void NewProp_bRequiresEarlyViewData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresEarlyViewData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresViewUniformBuffer_MetaData[];
#endif
		static void NewProp_bRequiresViewUniformBuffer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresViewUniformBuffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresRayTracingScene_MetaData[];
#endif
		static void NewProp_bRequiresRayTracingScene_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresRayTracingScene;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Outliner information on a specific system instance. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Outliner information on a specific system instance." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraOutlinerSystemInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ComponentName_MetaData[] = {
		{ "Category", "System" },
		{ "Comment", "/** Name of the component object for this instance, if there is one. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Name of the component object for this instance, if there is one." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerSystemInstanceData, ComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ComponentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_LWCTile_MetaData[] = {
		{ "Category", "System" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_LWCTile = { "LWCTile", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerSystemInstanceData, LWCTile), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_LWCTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_LWCTile_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_Emitters_Inner = { "Emitters", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData, METADATA_PARAMS(nullptr, 0) }; // 2004544238
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_Emitters_MetaData[] = {
		{ "Category", "System" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_Emitters = { "Emitters", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerSystemInstanceData, Emitters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_Emitters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_Emitters_MetaData)) }; // 2004544238
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ActualExecutionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ActualExecutionState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ActualExecutionState = { "ActualExecutionState", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerSystemInstanceData, ActualExecutionState), Z_Construct_UEnum_Niagara_ENiagaraExecutionState, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ActualExecutionState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ActualExecutionState_MetaData)) }; // 2418915668
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_RequestedExecutionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_RequestedExecutionState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_RequestedExecutionState = { "RequestedExecutionState", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerSystemInstanceData, RequestedExecutionState), Z_Construct_UEnum_Niagara_ENiagaraExecutionState, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_RequestedExecutionState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_RequestedExecutionState_MetaData)) }; // 2418915668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ScalabilityState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ScalabilityState = { "ScalabilityState", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerSystemInstanceData, ScalabilityState), Z_Construct_UScriptStruct_FNiagaraScalabilityState, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ScalabilityState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ScalabilityState_MetaData)) }; // 1333267525
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bPendingKill_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bPendingKill_SetBit(void* Obj)
	{
		((FNiagaraOutlinerSystemInstanceData*)Obj)->bPendingKill = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bPendingKill = { "bPendingKill", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraOutlinerSystemInstanceData), &Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bPendingKill_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bPendingKill_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bPendingKill_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bUsingCullProxy_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bUsingCullProxy_SetBit(void* Obj)
	{
		((FNiagaraOutlinerSystemInstanceData*)Obj)->bUsingCullProxy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bUsingCullProxy = { "bUsingCullProxy", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraOutlinerSystemInstanceData), &Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bUsingCullProxy_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bUsingCullProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bUsingCullProxy_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_PoolMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_PoolMethod_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_PoolMethod = { "PoolMethod", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerSystemInstanceData, PoolMethod), Z_Construct_UEnum_Niagara_ENCPoolMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_PoolMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_PoolMethod_MetaData)) }; // 852487868
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_AverageTime_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_AverageTime = { "AverageTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerSystemInstanceData, AverageTime), Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_AverageTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_AverageTime_MetaData)) }; // 3894092918
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_MaxTime_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_MaxTime = { "MaxTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerSystemInstanceData, MaxTime), Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_MaxTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_MaxTime_MetaData)) }; // 3894092918
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_TickGroup_MetaData[] = {
		{ "Category", "Ticking" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_TickGroup = { "TickGroup", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerSystemInstanceData, TickGroup), Z_Construct_UEnum_Engine_ETickingGroup, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_TickGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_TickGroup_MetaData)) }; // 4250878082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_GpuTickStage_MetaData[] = {
		{ "Category", "Ticking" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_GpuTickStage = { "GpuTickStage", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerSystemInstanceData, GpuTickStage), Z_Construct_UEnum_Niagara_ENiagaraGpuComputeTickStage, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_GpuTickStage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_GpuTickStage_MetaData)) }; // 397138429
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bIsSolo_MetaData[] = {
		{ "Category", "Gpu" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bIsSolo_SetBit(void* Obj)
	{
		((FNiagaraOutlinerSystemInstanceData*)Obj)->bIsSolo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bIsSolo = { "bIsSolo", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraOutlinerSystemInstanceData), &Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bIsSolo_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bIsSolo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bIsSolo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresDistanceFieldData_MetaData[] = {
		{ "Category", "Gpu" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresDistanceFieldData_SetBit(void* Obj)
	{
		((FNiagaraOutlinerSystemInstanceData*)Obj)->bRequiresDistanceFieldData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresDistanceFieldData = { "bRequiresDistanceFieldData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraOutlinerSystemInstanceData), &Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresDistanceFieldData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresDistanceFieldData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresDistanceFieldData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresDepthBuffer_MetaData[] = {
		{ "Category", "Gpu" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresDepthBuffer_SetBit(void* Obj)
	{
		((FNiagaraOutlinerSystemInstanceData*)Obj)->bRequiresDepthBuffer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresDepthBuffer = { "bRequiresDepthBuffer", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraOutlinerSystemInstanceData), &Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresDepthBuffer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresDepthBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresDepthBuffer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresEarlyViewData_MetaData[] = {
		{ "Category", "Gpu" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresEarlyViewData_SetBit(void* Obj)
	{
		((FNiagaraOutlinerSystemInstanceData*)Obj)->bRequiresEarlyViewData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresEarlyViewData = { "bRequiresEarlyViewData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraOutlinerSystemInstanceData), &Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresEarlyViewData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresEarlyViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresEarlyViewData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresViewUniformBuffer_MetaData[] = {
		{ "Category", "Gpu" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresViewUniformBuffer_SetBit(void* Obj)
	{
		((FNiagaraOutlinerSystemInstanceData*)Obj)->bRequiresViewUniformBuffer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresViewUniformBuffer = { "bRequiresViewUniformBuffer", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraOutlinerSystemInstanceData), &Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresViewUniformBuffer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresViewUniformBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresViewUniformBuffer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresRayTracingScene_MetaData[] = {
		{ "Category", "Gpu" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresRayTracingScene_SetBit(void* Obj)
	{
		((FNiagaraOutlinerSystemInstanceData*)Obj)->bRequiresRayTracingScene = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresRayTracingScene = { "bRequiresRayTracingScene", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraOutlinerSystemInstanceData), &Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresRayTracingScene_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresRayTracingScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresRayTracingScene_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_LWCTile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_Emitters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_Emitters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ActualExecutionState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ActualExecutionState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_RequestedExecutionState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_RequestedExecutionState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_ScalabilityState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bPendingKill,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bUsingCullProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_PoolMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_PoolMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_AverageTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_MaxTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_TickGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_GpuTickStage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bIsSolo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresDistanceFieldData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresDepthBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresEarlyViewData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresViewUniformBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewProp_bRequiresRayTracingScene,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraOutlinerSystemInstanceData",
		sizeof(FNiagaraOutlinerSystemInstanceData),
		alignof(FNiagaraOutlinerSystemInstanceData),
		Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemInstanceData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemData;
class UScriptStruct* FNiagaraOutlinerSystemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraOutlinerSystemData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraOutlinerSystemData>()
{
	return FNiagaraOutlinerSystemData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SystemInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SystemInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AveragePerFrameTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AveragePerFrameTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPerFrameTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxPerFrameTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AveragePerInstanceTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AveragePerInstanceTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPerInstanceTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxPerInstanceTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Wrapper for array of system instance outliner data so that it can be placed in a map. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Wrapper for array of system instance outliner data so that it can be placed in a map." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraOutlinerSystemData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_SystemInstances_Inner = { "SystemInstances", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData, METADATA_PARAMS(nullptr, 0) }; // 2634148200
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_SystemInstances_MetaData[] = {
		{ "Category", "System" },
		{ "Comment", "/** Map of System Instance data indexed by the UNiagaraSystem name. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Map of System Instance data indexed by the UNiagaraSystem name." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_SystemInstances = { "SystemInstances", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerSystemData, SystemInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_SystemInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_SystemInstances_MetaData)) }; // 2634148200
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_AveragePerFrameTime_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_AveragePerFrameTime = { "AveragePerFrameTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerSystemData, AveragePerFrameTime), Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_AveragePerFrameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_AveragePerFrameTime_MetaData)) }; // 3894092918
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_MaxPerFrameTime_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_MaxPerFrameTime = { "MaxPerFrameTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerSystemData, MaxPerFrameTime), Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_MaxPerFrameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_MaxPerFrameTime_MetaData)) }; // 3894092918
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_AveragePerInstanceTime_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_AveragePerInstanceTime = { "AveragePerInstanceTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerSystemData, AveragePerInstanceTime), Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_AveragePerInstanceTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_AveragePerInstanceTime_MetaData)) }; // 3894092918
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_MaxPerInstanceTime_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_MaxPerInstanceTime = { "MaxPerInstanceTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerSystemData, MaxPerInstanceTime), Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_MaxPerInstanceTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_MaxPerInstanceTime_MetaData)) }; // 3894092918
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_SystemInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_SystemInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_AveragePerFrameTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_MaxPerFrameTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_AveragePerInstanceTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewProp_MaxPerInstanceTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraOutlinerSystemData",
		sizeof(FNiagaraOutlinerSystemData),
		alignof(FNiagaraOutlinerSystemData),
		Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraOutlinerWorldData;
class UScriptStruct* FNiagaraOutlinerWorldData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerWorldData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraOutlinerWorldData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraOutlinerWorldData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraOutlinerWorldData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraOutlinerWorldData>()
{
	return FNiagaraOutlinerWorldData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Systems_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Systems_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Systems_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Systems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasBegunPlay_MetaData[];
#endif
		static void NewProp_bHasBegunPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBegunPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_WorldType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NetMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AveragePerFrameTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AveragePerFrameTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPerFrameTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxPerFrameTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** All information about a specific world for the Niagara Outliner. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "All information about a specific world for the Niagara Outliner." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraOutlinerWorldData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_Systems_ValueProp = { "Systems", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData, METADATA_PARAMS(nullptr, 0) }; // 3532953236
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_Systems_Key_KeyProp = { "Systems_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_Systems_MetaData[] = {
		{ "Category", "World" },
		{ "Comment", "/** Map of System Instance data indexed by the UNiagaraSystem name. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Map of System Instance data indexed by the UNiagaraSystem name." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_Systems = { "Systems", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerWorldData, Systems), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_Systems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_Systems_MetaData)) }; // 3532953236
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_bHasBegunPlay_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_bHasBegunPlay_SetBit(void* Obj)
	{
		((FNiagaraOutlinerWorldData*)Obj)->bHasBegunPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_bHasBegunPlay = { "bHasBegunPlay", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraOutlinerWorldData), &Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_bHasBegunPlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_bHasBegunPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_bHasBegunPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_WorldType_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_WorldType = { "WorldType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerWorldData, WorldType), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_WorldType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_WorldType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_NetMode_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_NetMode = { "NetMode", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerWorldData, NetMode), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_NetMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_NetMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_AveragePerFrameTime_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_AveragePerFrameTime = { "AveragePerFrameTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerWorldData, AveragePerFrameTime), Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_AveragePerFrameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_AveragePerFrameTime_MetaData)) }; // 3894092918
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_MaxPerFrameTime_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_MaxPerFrameTime = { "MaxPerFrameTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerWorldData, MaxPerFrameTime), Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_MaxPerFrameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_MaxPerFrameTime_MetaData)) }; // 3894092918
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_Systems_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_Systems_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_Systems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_bHasBegunPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_WorldType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_NetMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_AveragePerFrameTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewProp_MaxPerFrameTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraOutlinerWorldData",
		sizeof(FNiagaraOutlinerWorldData),
		alignof(FNiagaraOutlinerWorldData),
		Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerWorldData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraOutlinerWorldData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraOutlinerWorldData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraOutlinerData;
class UScriptStruct* FNiagaraOutlinerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraOutlinerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraOutlinerData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraOutlinerData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraOutlinerData>()
{
	return FNiagaraOutlinerData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldData_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_WorldData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_WorldData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraOutlinerData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::NewProp_WorldData_ValueProp = { "WorldData", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData, METADATA_PARAMS(nullptr, 0) }; // 2975294628
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::NewProp_WorldData_Key_KeyProp = { "WorldData_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::NewProp_WorldData_MetaData[] = {
		{ "Category", "Outliner" },
		{ "Comment", "/** Map all world data indexed by the world name. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Map all world data indexed by the world name." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::NewProp_WorldData = { "WorldData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerData, WorldData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::NewProp_WorldData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::NewProp_WorldData_MetaData)) }; // 2975294628
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::NewProp_WorldData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::NewProp_WorldData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::NewProp_WorldData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraOutlinerData",
		sizeof(FNiagaraOutlinerData),
		alignof(FNiagaraOutlinerData),
		Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerData()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraOutlinerData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraOutlinerData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDebuggerRequestConnection;
class UScriptStruct* FNiagaraDebuggerRequestConnection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDebuggerRequestConnection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDebuggerRequestConnection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDebuggerRequestConnection"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDebuggerRequestConnection.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDebuggerRequestConnection>()
{
	return FNiagaraDebuggerRequestConnection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \nMessaged broadcast from debugger to request a connection to a particular session. \nIf any matching client is found and it accepts, it will return a FNiagaraDebuggerAcceptConnection message to the sender. \n*/" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Messaged broadcast from debugger to request a connection to a particular session.\nIf any matching client is found and it accepts, it will return a FNiagaraDebuggerAcceptConnection message to the sender." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDebuggerRequestConnection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebuggerRequestConnection, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebuggerRequestConnection, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::NewProp_InstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::NewProp_InstanceId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::NewProp_SessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::NewProp_InstanceId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDebuggerRequestConnection",
		sizeof(FNiagaraDebuggerRequestConnection),
		alignof(FNiagaraDebuggerRequestConnection),
		Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraDebuggerRequestConnection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDebuggerRequestConnection.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraDebuggerRequestConnection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDebuggerAcceptConnection;
class UScriptStruct* FNiagaraDebuggerAcceptConnection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDebuggerAcceptConnection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDebuggerAcceptConnection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDebuggerAcceptConnection"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDebuggerAcceptConnection.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDebuggerAcceptConnection>()
{
	return FNiagaraDebuggerAcceptConnection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Response message from the a debugger client accepting a connection requested by a FNiagaraDebuggerRequestConnection message. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Response message from the a debugger client accepting a connection requested by a FNiagaraDebuggerRequestConnection message." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDebuggerAcceptConnection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebuggerAcceptConnection, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebuggerAcceptConnection, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::NewProp_InstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::NewProp_InstanceId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::NewProp_SessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::NewProp_InstanceId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDebuggerAcceptConnection",
		sizeof(FNiagaraDebuggerAcceptConnection),
		alignof(FNiagaraDebuggerAcceptConnection),
		Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraDebuggerAcceptConnection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDebuggerAcceptConnection.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraDebuggerAcceptConnection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDebuggerConnectionClosed;
class UScriptStruct* FNiagaraDebuggerConnectionClosed::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDebuggerConnectionClosed.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDebuggerConnectionClosed.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDebuggerConnectionClosed"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDebuggerConnectionClosed.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDebuggerConnectionClosed>()
{
	return FNiagaraDebuggerConnectionClosed::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Empty message informing a debugger client that the debugger is closing the connection. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Empty message informing a debugger client that the debugger is closing the connection." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDebuggerConnectionClosed>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebuggerConnectionClosed, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebuggerConnectionClosed, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::NewProp_InstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::NewProp_InstanceId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::NewProp_SessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::NewProp_InstanceId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDebuggerConnectionClosed",
		sizeof(FNiagaraDebuggerConnectionClosed),
		alignof(FNiagaraDebuggerConnectionClosed),
		Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraDebuggerConnectionClosed.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDebuggerConnectionClosed.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraDebuggerConnectionClosed.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDebuggerExecuteConsoleCommand;
class UScriptStruct* FNiagaraDebuggerExecuteConsoleCommand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDebuggerExecuteConsoleCommand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDebuggerExecuteConsoleCommand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDebuggerExecuteConsoleCommand"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDebuggerExecuteConsoleCommand.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDebuggerExecuteConsoleCommand>()
{
	return FNiagaraDebuggerExecuteConsoleCommand::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresWorld_MetaData[];
#endif
		static void NewProp_bRequiresWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresWorld;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Command that will execute a console command on the debugger client. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Command that will execute a console command on the debugger client." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDebuggerExecuteConsoleCommand>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewProp_Command_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebuggerExecuteConsoleCommand, Command), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewProp_Command_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewProp_bRequiresWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewProp_bRequiresWorld_SetBit(void* Obj)
	{
		((FNiagaraDebuggerExecuteConsoleCommand*)Obj)->bRequiresWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewProp_bRequiresWorld = { "bRequiresWorld", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebuggerExecuteConsoleCommand), &Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewProp_bRequiresWorld_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewProp_bRequiresWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewProp_bRequiresWorld_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewProp_Command,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewProp_bRequiresWorld,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDebuggerExecuteConsoleCommand",
		sizeof(FNiagaraDebuggerExecuteConsoleCommand),
		alignof(FNiagaraDebuggerExecuteConsoleCommand),
		Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraDebuggerExecuteConsoleCommand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDebuggerExecuteConsoleCommand.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraDebuggerExecuteConsoleCommand.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDebuggerOutlinerUpdate;
class UScriptStruct* FNiagaraDebuggerOutlinerUpdate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDebuggerOutlinerUpdate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDebuggerOutlinerUpdate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDebuggerOutlinerUpdate"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDebuggerOutlinerUpdate.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDebuggerOutlinerUpdate>()
{
	return FNiagaraDebuggerOutlinerUpdate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutlinerData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutlinerData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Message containing updated outliner information sent from the client to the debugger. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Message containing updated outliner information sent from the client to the debugger." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDebuggerOutlinerUpdate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::NewProp_OutlinerData_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::NewProp_OutlinerData = { "OutlinerData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebuggerOutlinerUpdate, OutlinerData), Z_Construct_UScriptStruct_FNiagaraOutlinerData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::NewProp_OutlinerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::NewProp_OutlinerData_MetaData)) }; // 320273720
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::NewProp_OutlinerData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDebuggerOutlinerUpdate",
		sizeof(FNiagaraDebuggerOutlinerUpdate),
		alignof(FNiagaraDebuggerOutlinerUpdate),
		Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraDebuggerOutlinerUpdate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDebuggerOutlinerUpdate.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraDebuggerOutlinerUpdate.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraDebugPlaybackMode;
	static UEnum* ENiagaraDebugPlaybackMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDebugPlaybackMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraDebugPlaybackMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugPlaybackMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDebugPlaybackMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraDebugPlaybackMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDebugPlaybackMode>()
	{
		return ENiagaraDebugPlaybackMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraDebugPlaybackMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraDebugPlaybackMode_Statics::Enumerators[] = {
		{ "ENiagaraDebugPlaybackMode::Play", (int64)ENiagaraDebugPlaybackMode::Play },
		{ "ENiagaraDebugPlaybackMode::Loop", (int64)ENiagaraDebugPlaybackMode::Loop },
		{ "ENiagaraDebugPlaybackMode::Paused", (int64)ENiagaraDebugPlaybackMode::Paused },
		{ "ENiagaraDebugPlaybackMode::Step", (int64)ENiagaraDebugPlaybackMode::Step },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraDebugPlaybackMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// End of messages.\n//////////////////////////////////////////////////////////////////////////\n" },
		{ "Loop.Name", "ENiagaraDebugPlaybackMode::Loop" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "Paused.Name", "ENiagaraDebugPlaybackMode::Paused" },
		{ "Play.Name", "ENiagaraDebugPlaybackMode::Play" },
		{ "Step.Name", "ENiagaraDebugPlaybackMode::Step" },
		{ "ToolTip", "End of messages." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraDebugPlaybackMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraDebugPlaybackMode",
		"ENiagaraDebugPlaybackMode",
		Z_Construct_UEnum_Niagara_ENiagaraDebugPlaybackMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDebugPlaybackMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraDebugPlaybackMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDebugPlaybackMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraDebugPlaybackMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDebugPlaybackMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraDebugPlaybackMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraDebugPlaybackMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraDebugPlaybackMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraDebugHudHAlign;
	static UEnum* ENiagaraDebugHudHAlign_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDebugHudHAlign.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraDebugHudHAlign.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHudHAlign, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDebugHudHAlign"));
		}
		return Z_Registration_Info_UEnum_ENiagaraDebugHudHAlign.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDebugHudHAlign>()
	{
		return ENiagaraDebugHudHAlign_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraDebugHudHAlign_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraDebugHudHAlign_Statics::Enumerators[] = {
		{ "ENiagaraDebugHudHAlign::Left", (int64)ENiagaraDebugHudHAlign::Left },
		{ "ENiagaraDebugHudHAlign::Center", (int64)ENiagaraDebugHudHAlign::Center },
		{ "ENiagaraDebugHudHAlign::Right", (int64)ENiagaraDebugHudHAlign::Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraDebugHudHAlign_Statics::Enum_MetaDataParams[] = {
		{ "Center.Name", "ENiagaraDebugHudHAlign::Center" },
		{ "Left.Name", "ENiagaraDebugHudHAlign::Left" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "Right.Name", "ENiagaraDebugHudHAlign::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraDebugHudHAlign_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraDebugHudHAlign",
		"ENiagaraDebugHudHAlign",
		Z_Construct_UEnum_Niagara_ENiagaraDebugHudHAlign_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDebugHudHAlign_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraDebugHudHAlign_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDebugHudHAlign_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraDebugHudHAlign()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDebugHudHAlign.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraDebugHudHAlign.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraDebugHudHAlign_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraDebugHudHAlign.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraDebugHudVAlign;
	static UEnum* ENiagaraDebugHudVAlign_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDebugHudVAlign.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraDebugHudVAlign.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHudVAlign, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDebugHudVAlign"));
		}
		return Z_Registration_Info_UEnum_ENiagaraDebugHudVAlign.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDebugHudVAlign>()
	{
		return ENiagaraDebugHudVAlign_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraDebugHudVAlign_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraDebugHudVAlign_Statics::Enumerators[] = {
		{ "ENiagaraDebugHudVAlign::Top", (int64)ENiagaraDebugHudVAlign::Top },
		{ "ENiagaraDebugHudVAlign::Center", (int64)ENiagaraDebugHudVAlign::Center },
		{ "ENiagaraDebugHudVAlign::Bottom", (int64)ENiagaraDebugHudVAlign::Bottom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraDebugHudVAlign_Statics::Enum_MetaDataParams[] = {
		{ "Bottom.Name", "ENiagaraDebugHudVAlign::Bottom" },
		{ "Center.Name", "ENiagaraDebugHudVAlign::Center" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "Top.Name", "ENiagaraDebugHudVAlign::Top" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraDebugHudVAlign_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraDebugHudVAlign",
		"ENiagaraDebugHudVAlign",
		Z_Construct_UEnum_Niagara_ENiagaraDebugHudVAlign_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDebugHudVAlign_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraDebugHudVAlign_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDebugHudVAlign_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraDebugHudVAlign()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDebugHudVAlign.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraDebugHudVAlign.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraDebugHudVAlign_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraDebugHudVAlign.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraDebugHudFont;
	static UEnum* ENiagaraDebugHudFont_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDebugHudFont.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraDebugHudFont.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHudFont, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDebugHudFont"));
		}
		return Z_Registration_Info_UEnum_ENiagaraDebugHudFont.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDebugHudFont>()
	{
		return ENiagaraDebugHudFont_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraDebugHudFont_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraDebugHudFont_Statics::Enumerators[] = {
		{ "ENiagaraDebugHudFont::Small", (int64)ENiagaraDebugHudFont::Small },
		{ "ENiagaraDebugHudFont::Normal", (int64)ENiagaraDebugHudFont::Normal },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraDebugHudFont_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "Normal.Name", "ENiagaraDebugHudFont::Normal" },
		{ "Small.Name", "ENiagaraDebugHudFont::Small" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraDebugHudFont_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraDebugHudFont",
		"ENiagaraDebugHudFont",
		Z_Construct_UEnum_Niagara_ENiagaraDebugHudFont_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDebugHudFont_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraDebugHudFont_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDebugHudFont_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraDebugHudFont()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDebugHudFont.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraDebugHudFont.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraDebugHudFont_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraDebugHudFont.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraDebugHudVerbosity;
	static UEnum* ENiagaraDebugHudVerbosity_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDebugHudVerbosity.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraDebugHudVerbosity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDebugHudVerbosity"));
		}
		return Z_Registration_Info_UEnum_ENiagaraDebugHudVerbosity.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDebugHudVerbosity>()
	{
		return ENiagaraDebugHudVerbosity_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity_Statics::Enumerators[] = {
		{ "ENiagaraDebugHudVerbosity::None", (int64)ENiagaraDebugHudVerbosity::None },
		{ "ENiagaraDebugHudVerbosity::Basic", (int64)ENiagaraDebugHudVerbosity::Basic },
		{ "ENiagaraDebugHudVerbosity::Verbose", (int64)ENiagaraDebugHudVerbosity::Verbose },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity_Statics::Enum_MetaDataParams[] = {
		{ "Basic.Name", "ENiagaraDebugHudVerbosity::Basic" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "None.Name", "ENiagaraDebugHudVerbosity::None" },
		{ "Verbose.Name", "ENiagaraDebugHudVerbosity::Verbose" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraDebugHudVerbosity",
		"ENiagaraDebugHudVerbosity",
		Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDebugHudVerbosity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraDebugHudVerbosity.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraDebugHudVerbosity.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDebugHudTextOptions;
class UScriptStruct* FNiagaraDebugHudTextOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDebugHudTextOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDebugHudTextOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDebugHudTextOptions"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDebugHudTextOptions.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDebugHudTextOptions>()
{
	return FNiagaraDebugHudTextOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Font_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Font;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HorizontalAlignment;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VerticalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDebugHudTextOptions>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_Font_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_Font_MetaData[] = {
		{ "Category", "Text Options" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHudTextOptions, Font), Z_Construct_UEnum_Niagara_ENiagaraDebugHudFont, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_Font_MetaData)) }; // 351821973
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_HorizontalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Text Options" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHudTextOptions, HorizontalAlignment), Z_Construct_UEnum_Niagara_ENiagaraDebugHudHAlign, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_HorizontalAlignment_MetaData)) }; // 3062898863
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_VerticalAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Text Options" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHudTextOptions, VerticalAlignment), Z_Construct_UEnum_Niagara_ENiagaraDebugHudVAlign, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_VerticalAlignment_MetaData)) }; // 3924587120
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_ScreenOffset_MetaData[] = {
		{ "Category", "Text Options" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_ScreenOffset = { "ScreenOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHudTextOptions, ScreenOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_ScreenOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_ScreenOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_Font_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_Font,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_HorizontalAlignment_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_HorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_VerticalAlignment_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_VerticalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewProp_ScreenOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDebugHudTextOptions",
		sizeof(FNiagaraDebugHudTextOptions),
		alignof(FNiagaraDebugHudTextOptions),
		Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraDebugHudTextOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDebugHudTextOptions.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraDebugHudTextOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDebugHUDVariable;
class UScriptStruct* FNiagaraDebugHUDVariable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDebugHUDVariable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDebugHUDVariable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDebugHUDVariable"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDebugHUDVariable.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDebugHUDVariable>()
{
	return FNiagaraDebugHUDVariable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDebugHUDVariable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDVariable*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDVariable), &Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "/** Name of attributes to match, uses wildcard matching. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Name of attributes to match, uses wildcard matching." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDVariable, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDebugHUDVariable",
		sizeof(FNiagaraDebugHUDVariable),
		alignof(FNiagaraDebugHUDVariable),
		Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraDebugHUDVariable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDebugHUDVariable.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraDebugHUDVariable.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraDebugHUDOverviewMode;
	static UEnum* ENiagaraDebugHUDOverviewMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDebugHUDOverviewMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraDebugHUDOverviewMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHUDOverviewMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDebugHUDOverviewMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraDebugHUDOverviewMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDebugHUDOverviewMode>()
	{
		return ENiagaraDebugHUDOverviewMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraDebugHUDOverviewMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraDebugHUDOverviewMode_Statics::Enumerators[] = {
		{ "ENiagaraDebugHUDOverviewMode::Overview", (int64)ENiagaraDebugHUDOverviewMode::Overview },
		{ "ENiagaraDebugHUDOverviewMode::Scalability", (int64)ENiagaraDebugHUDOverviewMode::Scalability },
		{ "ENiagaraDebugHUDOverviewMode::Performance", (int64)ENiagaraDebugHUDOverviewMode::Performance },
		{ "ENiagaraDebugHUDOverviewMode::GpuComputePerformance", (int64)ENiagaraDebugHUDOverviewMode::GpuComputePerformance },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraDebugHUDOverviewMode_Statics::Enum_MetaDataParams[] = {
		{ "GpuComputePerformance.Name", "ENiagaraDebugHUDOverviewMode::GpuComputePerformance" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "Overview.Name", "ENiagaraDebugHUDOverviewMode::Overview" },
		{ "Performance.Name", "ENiagaraDebugHUDOverviewMode::Performance" },
		{ "Scalability.Name", "ENiagaraDebugHUDOverviewMode::Scalability" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraDebugHUDOverviewMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraDebugHUDOverviewMode",
		"ENiagaraDebugHUDOverviewMode",
		Z_Construct_UEnum_Niagara_ENiagaraDebugHUDOverviewMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDebugHUDOverviewMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraDebugHUDOverviewMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDebugHUDOverviewMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraDebugHUDOverviewMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDebugHUDOverviewMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraDebugHUDOverviewMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraDebugHUDOverviewMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraDebugHUDOverviewMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfGraphMode;
	static UEnum* ENiagaraDebugHUDPerfGraphMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfGraphMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfGraphMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfGraphMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDebugHUDPerfGraphMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfGraphMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDebugHUDPerfGraphMode>()
	{
		return ENiagaraDebugHUDPerfGraphMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfGraphMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfGraphMode_Statics::Enumerators[] = {
		{ "ENiagaraDebugHUDPerfGraphMode::None", (int64)ENiagaraDebugHUDPerfGraphMode::None },
		{ "ENiagaraDebugHUDPerfGraphMode::GameThread", (int64)ENiagaraDebugHUDPerfGraphMode::GameThread },
		{ "ENiagaraDebugHUDPerfGraphMode::RenderThread", (int64)ENiagaraDebugHUDPerfGraphMode::RenderThread },
		{ "ENiagaraDebugHUDPerfGraphMode::GPU", (int64)ENiagaraDebugHUDPerfGraphMode::GPU },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfGraphMode_Statics::Enum_MetaDataParams[] = {
		{ "GameThread.Name", "ENiagaraDebugHUDPerfGraphMode::GameThread" },
		{ "GPU.Name", "ENiagaraDebugHUDPerfGraphMode::GPU" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "None.Name", "ENiagaraDebugHUDPerfGraphMode::None" },
		{ "RenderThread.Name", "ENiagaraDebugHUDPerfGraphMode::RenderThread" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfGraphMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraDebugHUDPerfGraphMode",
		"ENiagaraDebugHUDPerfGraphMode",
		Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfGraphMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfGraphMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfGraphMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfGraphMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfGraphMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfGraphMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfGraphMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfGraphMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfGraphMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfSampleMode;
	static UEnum* ENiagaraDebugHUDPerfSampleMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfSampleMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfSampleMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfSampleMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDebugHUDPerfSampleMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfSampleMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDebugHUDPerfSampleMode>()
	{
		return ENiagaraDebugHUDPerfSampleMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfSampleMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfSampleMode_Statics::Enumerators[] = {
		{ "ENiagaraDebugHUDPerfSampleMode::FrameTotal", (int64)ENiagaraDebugHUDPerfSampleMode::FrameTotal },
		{ "ENiagaraDebugHUDPerfSampleMode::PerInstanceAverage", (int64)ENiagaraDebugHUDPerfSampleMode::PerInstanceAverage },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfSampleMode_Statics::Enum_MetaDataParams[] = {
		{ "FrameTotal.Name", "ENiagaraDebugHUDPerfSampleMode::FrameTotal" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "PerInstanceAverage.Name", "ENiagaraDebugHUDPerfSampleMode::PerInstanceAverage" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfSampleMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraDebugHUDPerfSampleMode",
		"ENiagaraDebugHUDPerfSampleMode",
		Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfSampleMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfSampleMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfSampleMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfSampleMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfSampleMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfSampleMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfSampleMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfSampleMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfSampleMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDebugHUDSettingsData;
class UScriptStruct* FNiagaraDebugHUDSettingsData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDebugHUDSettingsData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDebugHUDSettingsData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDebugHUDSettingsData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDebugHUDSettingsData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDebugHUDSettingsData>()
{
	return FNiagaraDebugHUDSettingsData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWidgetEnabled_MetaData[];
#endif
		static void NewProp_bWidgetEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWidgetEnabled;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHudEnabled_MetaData[];
#endif
		static void NewProp_bHudEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHudEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHudRenderingEnabled_MetaData[];
#endif
		static void NewProp_bHudRenderingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHudRenderingEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValidateSystemSimulationDataBuffers_MetaData[];
#endif
		static void NewProp_bValidateSystemSimulationDataBuffers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidateSystemSimulationDataBuffers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValidateParticleDataBuffers_MetaData[];
#endif
		static void NewProp_bValidateParticleDataBuffers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidateParticleDataBuffers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverviewEnabled_MetaData[];
#endif
		static void NewProp_bOverviewEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverviewEnabled;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OverviewMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverviewMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverviewMode;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OverviewFont_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverviewFont_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverviewFont;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverviewLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverviewLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowRegisteredComponents_MetaData[];
#endif
		static void NewProp_bShowRegisteredComponents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRegisteredComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverviewShowFilteredSystemOnly_MetaData[];
#endif
		static void NewProp_bOverviewShowFilteredSystemOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverviewShowFilteredSystemOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActorFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bComponentFilterEnabled_MetaData[];
#endif
		static void NewProp_bComponentFilterEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComponentFilterEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ComponentFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSystemFilterEnabled_MetaData[];
#endif
		static void NewProp_bSystemFilterEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSystemFilterEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SystemFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEmitterFilterEnabled_MetaData[];
#endif
		static void NewProp_bEmitterFilterEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmitterFilterEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EmitterFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActorFilterEnabled_MetaData[];
#endif
		static void NewProp_bActorFilterEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActorFilterEnabled;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SystemDebugVerbosity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemDebugVerbosity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SystemDebugVerbosity;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SystemEmitterVerbosity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemEmitterVerbosity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SystemEmitterVerbosity;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DataInterfaceVerbosity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataInterfaceVerbosity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataInterfaceVerbosity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSystemShowBounds_MetaData[];
#endif
		static void NewProp_bSystemShowBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSystemShowBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemBoundsSolidBoxAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SystemBoundsSolidBoxAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSystemShowActiveOnlyInWorld_MetaData[];
#endif
		static void NewProp_bSystemShowActiveOnlyInWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSystemShowActiveOnlyInWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowSystemVariables_MetaData[];
#endif
		static void NewProp_bShowSystemVariables_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSystemVariables;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SystemVariables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemVariables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SystemVariables;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemTextOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SystemTextOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowParticleVariables_MetaData[];
#endif
		static void NewProp_bShowParticleVariables_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowParticleVariables;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGpuParticleReadback_MetaData[];
#endif
		static void NewProp_bEnableGpuParticleReadback_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGpuParticleReadback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowParticleIndex_MetaData[];
#endif
		static void NewProp_bShowParticleIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowParticleIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticlesVariables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticlesVariables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParticlesVariables;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleTextOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleTextOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowParticlesVariablesWithSystem_MetaData[];
#endif
		static void NewProp_bShowParticlesVariablesWithSystem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowParticlesVariablesWithSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowParticleVariablesVertical_MetaData[];
#endif
		static void NewProp_bShowParticleVariablesVertical_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowParticleVariablesVertical;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaxParticlesToDisplay_MetaData[];
#endif
		static void NewProp_bUseMaxParticlesToDisplay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaxParticlesToDisplay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseParticleDisplayClip_MetaData[];
#endif
		static void NewProp_bUseParticleDisplayClip_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseParticleDisplayClip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleDisplayClip_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleDisplayClip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseParticleDisplayCenterRadius_MetaData[];
#endif
		static void NewProp_bUseParticleDisplayCenterRadius_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseParticleDisplayCenterRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleDisplayCenterRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParticleDisplayCenterRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxParticlesToDisplay_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxParticlesToDisplay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerfReportFrames_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PerfReportFrames;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PerfSampleMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerfSampleMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PerfSampleMode;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PerfGraphMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerfGraphMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PerfGraphMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerfHistoryFrames_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PerfHistoryFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerfGraphTimeRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PerfGraphTimeRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerfGraphSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerfGraphSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerfGraphAxisColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerfGraphAxisColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSmoothing_MetaData[];
#endif
		static void NewProp_bEnableSmoothing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSmoothing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SmoothingWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverviewHeadingColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverviewHeadingColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverviewDetailColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverviewDetailColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverviewDetailHighlightColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverviewDetailHighlightColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWorldErrorTextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InWorldErrorTextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWorldTextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InWorldTextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageInfoTextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MessageInfoTextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageWarningTextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MessageWarningTextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageErrorTextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MessageErrorTextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemColorTableOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SystemColorTableOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemColorSeed_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SystemColorSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemColorHSVMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SystemColorHSVMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemColorHSVMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SystemColorHSVMax;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlaybackMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaybackMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlaybackRateEnabled_MetaData[];
#endif
		static void NewProp_bPlaybackRateEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaybackRateEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoopTimeEnabled_MetaData[];
#endif
		static void NewProp_bLoopTimeEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoopTimeEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoopTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LoopTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowGlobalBudgetInfo_MetaData[];
#endif
		static void NewProp_bShowGlobalBudgetInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGlobalBudgetInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Settings for Niagara debug HUD. Contained in it's own struct so that we can pass it whole in a message to the debugger client. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Settings for Niagara debug HUD. Contained in it's own struct so that we can pass it whole in a message to the debugger client." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDebugHUDSettingsData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bWidgetEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bWidgetEnabled_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bWidgetEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bWidgetEnabled = { "bWidgetEnabled", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bWidgetEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bWidgetEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bWidgetEnabled_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bHudEnabled_MetaData[] = {
		{ "Category", "Debug General" },
		{ "Comment", "/** Primary control for all HUD features. */" },
		{ "DisplayName", "Debug HUD Enabled" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Primary control for all HUD features." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bHudEnabled_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bHudEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bHudEnabled = { "bHudEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bHudEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bHudEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bHudEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bHudRenderingEnabled_MetaData[] = {
		{ "Category", "Debug General" },
		{ "Comment", "/** Primary control for HUD rendering. */" },
		{ "DisplayName", "Debug HUD Rendering Enabled" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Primary control for HUD rendering." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bHudRenderingEnabled_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bHudRenderingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bHudRenderingEnabled = { "bHudRenderingEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bHudRenderingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bHudRenderingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bHudRenderingEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateSystemSimulationDataBuffers_MetaData[] = {
		{ "Category", "Debug General" },
		{ "Comment", "/**\n\x09When enabled all Niagara systems that pass the filter will have the simulation data buffers validation.\n\x09i.e. we will look for NaN or other invalidate data  inside it\n\x09Note: This will have an impact on performance.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When enabled all Niagara systems that pass the filter will have the simulation data buffers validation.\ni.e. we will look for NaN or other invalidate data  inside it\nNote: This will have an impact on performance." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateSystemSimulationDataBuffers_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bValidateSystemSimulationDataBuffers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateSystemSimulationDataBuffers = { "bValidateSystemSimulationDataBuffers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateSystemSimulationDataBuffers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateSystemSimulationDataBuffers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateSystemSimulationDataBuffers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateParticleDataBuffers_MetaData[] = {
		{ "Category", "Debug General" },
		{ "Comment", "/**\n\x09When enabled all Niagara systems that pass the filter will have the particle data buffers validation.\n\x09i.e. we will look for NaN or other invalidate data  inside it\n\x09Note: This will have an impact on performance.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When enabled all Niagara systems that pass the filter will have the particle data buffers validation.\ni.e. we will look for NaN or other invalidate data  inside it\nNote: This will have an impact on performance." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateParticleDataBuffers_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bValidateParticleDataBuffers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateParticleDataBuffers = { "bValidateParticleDataBuffers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateParticleDataBuffers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateParticleDataBuffers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateParticleDataBuffers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bOverviewEnabled_MetaData[] = {
		{ "Category", "Debug Overview" },
		{ "Comment", "/** When enabled the overview display will be enabled. */" },
		{ "DisplayName", "Debug Overview Enabled" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When enabled the overview display will be enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bOverviewEnabled_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bOverviewEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bOverviewEnabled = { "bOverviewEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bOverviewEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bOverviewEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bOverviewEnabled_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewMode_MetaData[] = {
		{ "Category", "Debug Overview" },
		{ "DisplayName", "Debug Overview Mode" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewMode = { "OverviewMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, OverviewMode), Z_Construct_UEnum_Niagara_ENiagaraDebugHUDOverviewMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewMode_MetaData)) }; // 2197438099
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewFont_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewFont_MetaData[] = {
		{ "Category", "Debug Overview" },
		{ "Comment", "/** Overview display font to use. */" },
		{ "DisplayName", "Debug Overview Font" },
		{ "EditCondition", "bOverviewEnabled" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Overview display font to use." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewFont = { "OverviewFont", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, OverviewFont), Z_Construct_UEnum_Niagara_ENiagaraDebugHudFont, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewFont_MetaData)) }; // 351821973
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewLocation_MetaData[] = {
		{ "Category", "Debug Overview" },
		{ "Comment", "/** Overview display location. */" },
		{ "DisplayName", "Debug Overview Text Location" },
		{ "EditCondition", "bOverviewEnabled" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Overview display location." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewLocation = { "OverviewLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, OverviewLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowRegisteredComponents_MetaData[] = {
		{ "Category", "Debug Overview" },
		{ "Comment", "/** Overview display font to use. */" },
		{ "EditCondition", "bOverviewEnabled && OverviewMode == ENiagaraDebugHUDOverviewMode::Overview" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Overview display font to use." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowRegisteredComponents_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bShowRegisteredComponents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowRegisteredComponents = { "bShowRegisteredComponents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowRegisteredComponents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowRegisteredComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowRegisteredComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bOverviewShowFilteredSystemOnly_MetaData[] = {
		{ "Category", "Debug Overview" },
		{ "Comment", "/** When enabled the overview will only show the filter system information. */" },
		{ "EditCondition", "bOverviewEnabled" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When enabled the overview will only show the filter system information." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bOverviewShowFilteredSystemOnly_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bOverviewShowFilteredSystemOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bOverviewShowFilteredSystemOnly = { "bOverviewShowFilteredSystemOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bOverviewShowFilteredSystemOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bOverviewShowFilteredSystemOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bOverviewShowFilteredSystemOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ActorFilter_MetaData[] = {
		{ "Category", "Debug Filter" },
		{ "Comment", "/**\n\x09Wildcard filter which is compared against the Components Actor name to narrow down the detailed information.\n\x09""For example, \"*Water*\" would match all actors that contain the string \"water\".\n\x09*/" },
		{ "EditCondition", "bActorFilterEnabled" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Wildcard filter which is compared against the Components Actor name to narrow down the detailed information.\nFor example, \"*Water*\" would match all actors that contain the string \"water\"." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ActorFilter = { "ActorFilter", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, ActorFilter), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ActorFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ActorFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bComponentFilterEnabled_MetaData[] = {
		{ "Category", "Debug Filter" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bComponentFilterEnabled_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bComponentFilterEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bComponentFilterEnabled = { "bComponentFilterEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bComponentFilterEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bComponentFilterEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bComponentFilterEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ComponentFilter_MetaData[] = {
		{ "Category", "Debug Filter" },
		{ "Comment", "/**\n\x09Wildcard filter for the components to show more detailed information about.\n\x09""For example, \"*MyComp*\" would match all components that contain MyComp.\n\x09*/" },
		{ "EditCondition", "bComponentFilterEnabled" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Wildcard filter for the components to show more detailed information about.\nFor example, \"*MyComp*\" would match all components that contain MyComp." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ComponentFilter = { "ComponentFilter", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, ComponentFilter), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ComponentFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ComponentFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemFilterEnabled_MetaData[] = {
		{ "Category", "Debug Filter" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemFilterEnabled_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bSystemFilterEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemFilterEnabled = { "bSystemFilterEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemFilterEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemFilterEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemFilterEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemFilter_MetaData[] = {
		{ "Category", "Debug Filter" },
		{ "Comment", "/**\n\x09Wildcard filter for the systems to show more detailed information about.\n\x09""For example,. \"NS_*\" would match all systems starting with NS_.\n\x09*/" },
		{ "EditCondition", "bSystemFilterEnabled" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Wildcard filter for the systems to show more detailed information about.\nFor example,. \"NS_*\" would match all systems starting with NS_." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemFilter = { "SystemFilter", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, SystemFilter), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEmitterFilterEnabled_MetaData[] = {
		{ "Category", "Debug Filter" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEmitterFilterEnabled_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bEmitterFilterEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEmitterFilterEnabled = { "bEmitterFilterEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEmitterFilterEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEmitterFilterEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEmitterFilterEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_EmitterFilter_MetaData[] = {
		{ "Category", "Debug Filter" },
		{ "Comment", "/**\n\x09Wildcard filter used to match emitters when generating particle attribute view.\n\x09""For example,. \"Fluid*\" would match all emtiters starting with Fluid and only particle attributes for those would be visible.\n\x09*/" },
		{ "EditCondition", "bEmitterFilterEnabled" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Wildcard filter used to match emitters when generating particle attribute view.\nFor example,. \"Fluid*\" would match all emtiters starting with Fluid and only particle attributes for those would be visible." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_EmitterFilter = { "EmitterFilter", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, EmitterFilter), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_EmitterFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_EmitterFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bActorFilterEnabled_MetaData[] = {
		{ "Category", "Debug Filter" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bActorFilterEnabled_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bActorFilterEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bActorFilterEnabled = { "bActorFilterEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bActorFilterEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bActorFilterEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bActorFilterEnabled_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemDebugVerbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemDebugVerbosity_MetaData[] = {
		{ "Category", "Debug System" },
		{ "Comment", "/** When enabled system debug information will be displayed in world. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When enabled system debug information will be displayed in world." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemDebugVerbosity = { "SystemDebugVerbosity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, SystemDebugVerbosity), Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemDebugVerbosity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemDebugVerbosity_MetaData)) }; // 549596781
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemEmitterVerbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemEmitterVerbosity_MetaData[] = {
		{ "Category", "Debug System" },
		{ "Comment", "/** When enabled we show information about emitter / particle counts. */" },
		{ "EditCondition", "SystemDebugVerbosity != ENiagaraDebugHudVerbosity::None" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When enabled we show information about emitter / particle counts." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemEmitterVerbosity = { "SystemEmitterVerbosity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, SystemEmitterVerbosity), Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemEmitterVerbosity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemEmitterVerbosity_MetaData)) }; // 549596781
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_DataInterfaceVerbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_DataInterfaceVerbosity_MetaData[] = {
		{ "Category", "Debug System" },
		{ "Comment", "/** When enabled allows data interfaces to include additional debugging information. */" },
		{ "EditCondition", "SystemDebugVerbosity != ENiagaraDebugHudVerbosity::None" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When enabled allows data interfaces to include additional debugging information." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_DataInterfaceVerbosity = { "DataInterfaceVerbosity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, DataInterfaceVerbosity), Z_Construct_UEnum_Niagara_ENiagaraDebugHudVerbosity, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_DataInterfaceVerbosity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_DataInterfaceVerbosity_MetaData)) }; // 549596781
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowBounds_MetaData[] = {
		{ "Category", "Debug System" },
		{ "Comment", "/** When enabled will show the system bounds for all filtered systems. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When enabled will show the system bounds for all filtered systems." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowBounds_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bSystemShowBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowBounds = { "bSystemShowBounds", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowBounds_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemBoundsSolidBoxAlpha_MetaData[] = {
		{ "Category", "Debug System" },
		{ "Comment", "/** When bounds display is enabled allows you to draw a solid box if alpha is > 0. */" },
		{ "EditCondition", "bSystemShowBounds" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When bounds display is enabled allows you to draw a solid box if alpha is > 0." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemBoundsSolidBoxAlpha = { "SystemBoundsSolidBoxAlpha", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, SystemBoundsSolidBoxAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemBoundsSolidBoxAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemBoundsSolidBoxAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowActiveOnlyInWorld_MetaData[] = {
		{ "Category", "Debug System" },
		{ "Comment", "/** When disabled in world rendering will show systems deactivated by scalability. */" },
		{ "EditCondition", "SystemDebugVerbosity != ENiagaraDebugHudVerbosity::None" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When disabled in world rendering will show systems deactivated by scalability." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowActiveOnlyInWorld_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bSystemShowActiveOnlyInWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowActiveOnlyInWorld = { "bSystemShowActiveOnlyInWorld", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowActiveOnlyInWorld_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowActiveOnlyInWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowActiveOnlyInWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowSystemVariables_MetaData[] = {
		{ "Category", "Debug System" },
		{ "Comment", "/** Should we display the system attributes. */" },
		{ "DisplayName", "Show System Attributes" },
		{ "EditCondition", "SystemDebugVerbosity != ENiagaraDebugHudVerbosity::None" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Should we display the system attributes." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowSystemVariables_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bShowSystemVariables = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowSystemVariables = { "bShowSystemVariables", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowSystemVariables_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowSystemVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowSystemVariables_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemVariables_Inner = { "SystemVariables", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable, METADATA_PARAMS(nullptr, 0) }; // 2458231597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemVariables_MetaData[] = {
		{ "Category", "Debug System" },
		{ "Comment", "/**\n\x09List of attributes to show about the system, each entry uses wildcard matching.\n\x09""For example, \"System.*\" would match all system attributes.\n\x09*/" },
		{ "DisplayName", "System Attributes" },
		{ "EditCondition", "SystemDebugVerbosity != ENiagaraDebugHudVerbosity::None && bShowSystemVariables" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "List of attributes to show about the system, each entry uses wildcard matching.\nFor example, \"System.*\" would match all system attributes." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemVariables = { "SystemVariables", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, SystemVariables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemVariables_MetaData)) }; // 2458231597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemTextOptions_MetaData[] = {
		{ "Category", "Debug System" },
		{ "Comment", "/** Sets display text options for system information. */" },
		{ "EditCondition", "SystemDebugVerbosity != ENiagaraDebugHudVerbosity::None" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Sets display text options for system information." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemTextOptions = { "SystemTextOptions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, SystemTextOptions), Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemTextOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemTextOptions_MetaData)) }; // 1615630876
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleVariables_MetaData[] = {
		{ "Category", "Debug Particles" },
		{ "Comment", "/** When enabled will show particle attributes from the list. */" },
		{ "DisplayName", "Show Particle Attributes" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When enabled will show particle attributes from the list." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleVariables_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bShowParticleVariables = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleVariables = { "bShowParticleVariables", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleVariables_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleVariables_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnableGpuParticleReadback_MetaData[] = {
		{ "Category", "Debug Particles" },
		{ "Comment", "/**\n\x09When enabled GPU particle data will be copied from the GPU to the CPU.\n\x09Warning: This has an impact on performance & memory since we copy the whole buffer.\n\x09The displayed data is latent since we are seeing what happened a few frames ago.\n\x09*/" },
		{ "EditCondition", "bShowParticleVariables" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When enabled GPU particle data will be copied from the GPU to the CPU.\nWarning: This has an impact on performance & memory since we copy the whole buffer.\nThe displayed data is latent since we are seeing what happened a few frames ago." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnableGpuParticleReadback_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bEnableGpuParticleReadback = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnableGpuParticleReadback = { "bEnableGpuParticleReadback", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnableGpuParticleReadback_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnableGpuParticleReadback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnableGpuParticleReadback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleIndex_MetaData[] = {
		{ "Category", "Debug Particles" },
		{ "Comment", "/**\n\x09When enabled the particle index will be displayed along with any attributes.\n\x09Note: This is the index in the particle data buffer and not the persistent ID index.\n\x09*/" },
		{ "EditCondition", "bShowParticleVariables" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When enabled the particle index will be displayed along with any attributes.\nNote: This is the index in the particle data buffer and not the persistent ID index." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleIndex_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bShowParticleIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleIndex = { "bShowParticleIndex", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleIndex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticlesVariables_Inner = { "ParticlesVariables", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable, METADATA_PARAMS(nullptr, 0) }; // 2458231597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticlesVariables_MetaData[] = {
		{ "Category", "Debug Particles" },
		{ "Comment", "/**\n\x09List of attributes to show per particle, each entry uses wildcard matching.\n\x09""For example, \"*Position\" would match all attributes that end in Position.\n\x09*/" },
		{ "DisplayName", "Particle Attributes" },
		{ "EditCondition", "bShowParticleVariables" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "List of attributes to show per particle, each entry uses wildcard matching.\nFor example, \"*Position\" would match all attributes that end in Position." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticlesVariables = { "ParticlesVariables", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, ParticlesVariables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticlesVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticlesVariables_MetaData)) }; // 2458231597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticleTextOptions_MetaData[] = {
		{ "Category", "Debug Particles" },
		{ "Comment", "/** Sets display text options for particle information. */" },
		{ "EditCondition", "bShowParticleVariables" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Sets display text options for particle information." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticleTextOptions = { "ParticleTextOptions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, ParticleTextOptions), Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticleTextOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticleTextOptions_MetaData)) }; // 1615630876
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticlesVariablesWithSystem_MetaData[] = {
		{ "Category", "Debug Particles" },
		{ "Comment", "/**\n\x09When enabled particle attributes will display with the system information\n\x09rather than in world at the particle location.\n\x09*/" },
		{ "DisplayName", "Show Particles Attributes With System" },
		{ "EditCondition", "bShowParticleVariables" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When enabled particle attributes will display with the system information\nrather than in world at the particle location." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticlesVariablesWithSystem_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bShowParticlesVariablesWithSystem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticlesVariablesWithSystem = { "bShowParticlesVariablesWithSystem", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticlesVariablesWithSystem_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticlesVariablesWithSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticlesVariablesWithSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleVariablesVertical_MetaData[] = {
		{ "Category", "Debug Particles" },
		{ "DisplayName", "Show Particle Attributes Vertical" },
		{ "EditCondition", "bShowParticleVariables" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleVariablesVertical_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bShowParticleVariablesVertical = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleVariablesVertical = { "bShowParticleVariablesVertical", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleVariablesVertical_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleVariablesVertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleVariablesVertical_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseMaxParticlesToDisplay_MetaData[] = {
		{ "Category", "Debug Particles" },
		{ "EditCondition", "bShowParticleVariables" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseMaxParticlesToDisplay_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bUseMaxParticlesToDisplay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseMaxParticlesToDisplay = { "bUseMaxParticlesToDisplay", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseMaxParticlesToDisplay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseMaxParticlesToDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseMaxParticlesToDisplay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseParticleDisplayClip_MetaData[] = {
		{ "Category", "Debug Particles" },
		{ "Comment", "/** When enabled we use the clip planes to narrow down which particles to display */" },
		{ "EditCondition", "bShowParticleVariables" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When enabled we use the clip planes to narrow down which particles to display" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseParticleDisplayClip_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bUseParticleDisplayClip = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseParticleDisplayClip = { "bUseParticleDisplayClip", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseParticleDisplayClip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseParticleDisplayClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseParticleDisplayClip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticleDisplayClip_MetaData[] = {
		{ "Category", "Debug Particles" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Clipping planes used to display particle attributes. */" },
		{ "EditCondition", "bShowParticleVariables" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Clipping planes used to display particle attributes." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticleDisplayClip = { "ParticleDisplayClip", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, ParticleDisplayClip), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticleDisplayClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticleDisplayClip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseParticleDisplayCenterRadius_MetaData[] = {
		{ "Category", "Debug Particles" },
		{ "Comment", "/** When enabled we use a radius from the display center to avoid showing too many particle attributes. */" },
		{ "EditCondition", "bShowParticleVariables" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When enabled we use a radius from the display center to avoid showing too many particle attributes." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseParticleDisplayCenterRadius_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bUseParticleDisplayCenterRadius = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseParticleDisplayCenterRadius = { "bUseParticleDisplayCenterRadius", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseParticleDisplayCenterRadius_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseParticleDisplayCenterRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseParticleDisplayCenterRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticleDisplayCenterRadius_MetaData[] = {
		{ "Category", "Debug Particles" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Radius from screen center where 0 is center to 1.0 is edge to avoid display too many particle attributes. */" },
		{ "EditCondition", "bShowParticleVariables" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Radius from screen center where 0 is center to 1.0 is edge to avoid display too many particle attributes." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticleDisplayCenterRadius = { "ParticleDisplayCenterRadius", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, ParticleDisplayCenterRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticleDisplayCenterRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticleDisplayCenterRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_MaxParticlesToDisplay_MetaData[] = {
		{ "Category", "Debug Particles" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09When enabled, the maximum number of particles to show information about.\n\x09When disabled all particles will show attributes, this can result in poor performance & potential OOM on some platforms.\n\x09*/" },
		{ "EditCondition", "bUseMaxParticlesToDisplay && bShowParticleVariables" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "When enabled, the maximum number of particles to show information about.\nWhen disabled all particles will show attributes, this can result in poor performance & potential OOM on some platforms." },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_MaxParticlesToDisplay = { "MaxParticlesToDisplay", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, MaxParticlesToDisplay), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_MaxParticlesToDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_MaxParticlesToDisplay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfReportFrames_MetaData[] = {
		{ "Category", "Perf Overview" },
		{ "Comment", "/** How many frames to capture in between updates to the max and average perf report values. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "How many frames to capture in between updates to the max and average perf report values." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfReportFrames = { "PerfReportFrames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, PerfReportFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfReportFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfReportFrames_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfSampleMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfSampleMode_MetaData[] = {
		{ "Category", "Perf Overview" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfSampleMode = { "PerfSampleMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, PerfSampleMode), Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfSampleMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfSampleMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfSampleMode_MetaData)) }; // 68877927
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfGraphMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfGraphMode_MetaData[] = {
		{ "Category", "Perf Overview" },
		{ "Comment", "/** Time range of the Y Axis of the perf graph */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Time range of the Y Axis of the perf graph" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfGraphMode = { "PerfGraphMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, PerfGraphMode), Z_Construct_UEnum_Niagara_ENiagaraDebugHUDPerfGraphMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfGraphMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfGraphMode_MetaData)) }; // 4284451424
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfHistoryFrames_MetaData[] = {
		{ "Category", "Perf Overview" },
		{ "Comment", "/** How many frames of history to display in the perf graphs. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "How many frames of history to display in the perf graphs." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfHistoryFrames = { "PerfHistoryFrames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, PerfHistoryFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfHistoryFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfHistoryFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfGraphTimeRange_MetaData[] = {
		{ "Category", "Perf Overview" },
		{ "Comment", "/** Time range of the Y Axis of the perf graph */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Time range of the Y Axis of the perf graph" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfGraphTimeRange = { "PerfGraphTimeRange", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, PerfGraphTimeRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfGraphTimeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfGraphTimeRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfGraphSize_MetaData[] = {
		{ "Category", "Perf Overview" },
		{ "Comment", "/** Pixel size of the perf graph. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Pixel size of the perf graph." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfGraphSize = { "PerfGraphSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, PerfGraphSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfGraphSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfGraphSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfGraphAxisColor_MetaData[] = {
		{ "Category", "Perf Overview" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfGraphAxisColor = { "PerfGraphAxisColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, PerfGraphAxisColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfGraphAxisColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfGraphAxisColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnableSmoothing_MetaData[] = {
		{ "Category", "Perf Overview" },
		{ "Comment", "// True if perf graphs should be smoothed.\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "True if perf graphs should be smoothed." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnableSmoothing_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bEnableSmoothing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnableSmoothing = { "bEnableSmoothing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnableSmoothing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnableSmoothing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnableSmoothing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SmoothingWidth_MetaData[] = {
		{ "Category", "Perf Overview" },
		{ "Comment", "//Number of samples to use either size of a value when smoothing perf graphs.\n" },
		{ "EditCondition", "bEnableSmoothing" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Number of samples to use either size of a value when smoothing perf graphs." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SmoothingWidth = { "SmoothingWidth", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, SmoothingWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SmoothingWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SmoothingWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_DefaultBackgroundColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "// Default background color used generally for panels\n" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Default background color used generally for panels" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_DefaultBackgroundColor = { "DefaultBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, DefaultBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_DefaultBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_DefaultBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewHeadingColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "// Overview heading text color\n" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Overview heading text color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewHeadingColor = { "OverviewHeadingColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, OverviewHeadingColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewHeadingColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewHeadingColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewDetailColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "// Overview detail text color\n" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Overview detail text color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewDetailColor = { "OverviewDetailColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, OverviewDetailColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewDetailColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewDetailColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewDetailHighlightColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "// Overview detail highlight text color\n" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Overview detail highlight text color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewDetailHighlightColor = { "OverviewDetailHighlightColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, OverviewDetailHighlightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewDetailHighlightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewDetailHighlightColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_InWorldErrorTextColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "// In world text if an error is detected\n" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "In world text if an error is detected" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_InWorldErrorTextColor = { "InWorldErrorTextColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, InWorldErrorTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_InWorldErrorTextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_InWorldErrorTextColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_InWorldTextColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "// In world text color\n" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "In world text color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_InWorldTextColor = { "InWorldTextColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, InWorldTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_InWorldTextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_InWorldTextColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_MessageInfoTextColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "// Message display text color\n" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Message display text color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_MessageInfoTextColor = { "MessageInfoTextColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, MessageInfoTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_MessageInfoTextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_MessageInfoTextColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_MessageWarningTextColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "// Message display warning text color\n" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Message display warning text color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_MessageWarningTextColor = { "MessageWarningTextColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, MessageWarningTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_MessageWarningTextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_MessageWarningTextColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_MessageErrorTextColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "// Message display error text color\n" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Message display error text color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_MessageErrorTextColor = { "MessageErrorTextColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, MessageErrorTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_MessageErrorTextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_MessageErrorTextColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemColorTableOpacity_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "/** Opacity of the system color background tile in overview table rows. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Opacity of the system color background tile in overview table rows." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemColorTableOpacity = { "SystemColorTableOpacity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, SystemColorTableOpacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemColorTableOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemColorTableOpacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemColorSeed_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "/** Additional seed value for random system colors. Useful if current colors of systems are too similar. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Additional seed value for random system colors. Useful if current colors of systems are too similar." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemColorSeed = { "SystemColorSeed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, SystemColorSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemColorSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemColorSeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemColorHSVMin_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "/** Minimum HSV values for the random colors generated for each System. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Minimum HSV values for the random colors generated for each System." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemColorHSVMin = { "SystemColorHSVMin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, SystemColorHSVMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemColorHSVMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemColorHSVMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemColorHSVMax_MetaData[] = {
		{ "Category", "Colors" },
		{ "Comment", "/** Maximum HSV values for the random colors generated for each System. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Maximum HSV values for the random colors generated for each System." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemColorHSVMax = { "SystemColorHSVMax", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, SystemColorHSVMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemColorHSVMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemColorHSVMax_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PlaybackMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PlaybackMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PlaybackMode = { "PlaybackMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, PlaybackMode), Z_Construct_UEnum_Niagara_ENiagaraDebugPlaybackMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PlaybackMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PlaybackMode_MetaData)) }; // 2851553552
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bPlaybackRateEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bPlaybackRateEnabled_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bPlaybackRateEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bPlaybackRateEnabled = { "bPlaybackRateEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bPlaybackRateEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bPlaybackRateEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bPlaybackRateEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PlaybackRate_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PlaybackRate = { "PlaybackRate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, PlaybackRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PlaybackRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PlaybackRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bLoopTimeEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bLoopTimeEnabled_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bLoopTimeEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bLoopTimeEnabled = { "bLoopTimeEnabled", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bLoopTimeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bLoopTimeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bLoopTimeEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_LoopTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_LoopTime = { "LoopTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebugHUDSettingsData, LoopTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_LoopTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_LoopTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowGlobalBudgetInfo_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowGlobalBudgetInfo_SetBit(void* Obj)
	{
		((FNiagaraDebugHUDSettingsData*)Obj)->bShowGlobalBudgetInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowGlobalBudgetInfo = { "bShowGlobalBudgetInfo", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebugHUDSettingsData), &Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowGlobalBudgetInfo_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowGlobalBudgetInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowGlobalBudgetInfo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bWidgetEnabled,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bHudEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bHudRenderingEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateSystemSimulationDataBuffers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bValidateParticleDataBuffers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bOverviewEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewFont_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewFont,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowRegisteredComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bOverviewShowFilteredSystemOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ActorFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bComponentFilterEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ComponentFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemFilterEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEmitterFilterEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_EmitterFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bActorFilterEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemDebugVerbosity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemDebugVerbosity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemEmitterVerbosity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemEmitterVerbosity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_DataInterfaceVerbosity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_DataInterfaceVerbosity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemBoundsSolidBoxAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bSystemShowActiveOnlyInWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowSystemVariables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemVariables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemVariables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemTextOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleVariables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnableGpuParticleReadback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticlesVariables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticlesVariables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticleTextOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticlesVariablesWithSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowParticleVariablesVertical,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseMaxParticlesToDisplay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseParticleDisplayClip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticleDisplayClip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bUseParticleDisplayCenterRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_ParticleDisplayCenterRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_MaxParticlesToDisplay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfReportFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfSampleMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfSampleMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfGraphMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfGraphMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfHistoryFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfGraphTimeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfGraphSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PerfGraphAxisColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bEnableSmoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SmoothingWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_DefaultBackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewHeadingColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewDetailColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_OverviewDetailHighlightColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_InWorldErrorTextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_InWorldTextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_MessageInfoTextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_MessageWarningTextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_MessageErrorTextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemColorTableOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemColorSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemColorHSVMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_SystemColorHSVMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PlaybackMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PlaybackMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bPlaybackRateEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_PlaybackRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bLoopTimeEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_LoopTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewProp_bShowGlobalBudgetInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDebugHUDSettingsData",
		sizeof(FNiagaraDebugHUDSettingsData),
		alignof(FNiagaraDebugHUDSettingsData),
		Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraDebugHUDSettingsData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDebugHUDSettingsData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraDebugHUDSettingsData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraRequestSimpleClientInfoMessage;
class UScriptStruct* FNiagaraRequestSimpleClientInfoMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraRequestSimpleClientInfoMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraRequestSimpleClientInfoMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraRequestSimpleClientInfoMessage"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraRequestSimpleClientInfoMessage.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraRequestSimpleClientInfoMessage>()
{
	return FNiagaraRequestSimpleClientInfoMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Message passed from debugger to client when it needs updated simple client info. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Message passed from debugger to client when it needs updated simple client info." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraRequestSimpleClientInfoMessage>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraRequestSimpleClientInfoMessage",
		sizeof(FNiagaraRequestSimpleClientInfoMessage),
		alignof(FNiagaraRequestSimpleClientInfoMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraRequestSimpleClientInfoMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraRequestSimpleClientInfoMessage.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraRequestSimpleClientInfoMessage.InnerSingleton;
	}
	void UNiagaraDebugHUDSettings::StaticRegisterNativesUNiagaraDebugHUDSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDebugHUDSettings);
	UClass* Z_Construct_UClass_UNiagaraDebugHUDSettings_NoRegister()
	{
		return UNiagaraDebugHUDSettings::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraDebuggerCommon.h" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDebugHUDSettings, Data), Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::NewProp_Data_MetaData)) }; // 3268732371
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDebugHUDSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::ClassParams = {
		&UNiagaraDebugHUDSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDebugHUDSettings()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDebugHUDSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDebugHUDSettings.OuterSingleton, Z_Construct_UClass_UNiagaraDebugHUDSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDebugHUDSettings.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDebugHUDSettings>()
	{
		return UNiagaraDebugHUDSettings::StaticClass();
	}
	UNiagaraDebugHUDSettings::UNiagaraDebugHUDSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDebugHUDSettings);
	UNiagaraDebugHUDSettings::~UNiagaraDebugHUDSettings() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraOutlinerCaptureSettings;
class UScriptStruct* FNiagaraOutlinerCaptureSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerCaptureSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraOutlinerCaptureSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraOutlinerCaptureSettings"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraOutlinerCaptureSettings.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraOutlinerCaptureSettings>()
{
	return FNiagaraOutlinerCaptureSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTriggerCapture_MetaData[];
#endif
		static void NewProp_bTriggerCapture_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggerCapture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureDelayFrames_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_CaptureDelayFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGatherPerfData_MetaData[];
#endif
		static void NewProp_bGatherPerfData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGatherPerfData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimCacheCaptureFrames_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SimCacheCaptureFrames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraOutlinerCaptureSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bTriggerCapture_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Press to trigger a single capture of Niagara data from the connected debugger client. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Press to trigger a single capture of Niagara data from the connected debugger client." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bTriggerCapture_SetBit(void* Obj)
	{
		((FNiagaraOutlinerCaptureSettings*)Obj)->bTriggerCapture = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bTriggerCapture = { "bTriggerCapture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraOutlinerCaptureSettings), &Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bTriggerCapture_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bTriggerCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bTriggerCapture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_CaptureDelayFrames_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How many frames to delay capture. If gathering performance data, this is how many frames will be collected. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "How many frames to delay capture. If gathering performance data, this is how many frames will be collected." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_CaptureDelayFrames = { "CaptureDelayFrames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerCaptureSettings, CaptureDelayFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_CaptureDelayFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_CaptureDelayFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bGatherPerfData_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bGatherPerfData_SetBit(void* Obj)
	{
		((FNiagaraOutlinerCaptureSettings*)Obj)->bGatherPerfData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bGatherPerfData = { "bGatherPerfData", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraOutlinerCaptureSettings), &Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bGatherPerfData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bGatherPerfData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bGatherPerfData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_SimCacheCaptureFrames_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How many frames capture when capturing a sim cache. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "How many frames capture when capturing a sim cache." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_SimCacheCaptureFrames = { "SimCacheCaptureFrames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerCaptureSettings, SimCacheCaptureFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_SimCacheCaptureFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_SimCacheCaptureFrames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bTriggerCapture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_CaptureDelayFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_bGatherPerfData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewProp_SimCacheCaptureFrames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraOutlinerCaptureSettings",
		sizeof(FNiagaraOutlinerCaptureSettings),
		alignof(FNiagaraOutlinerCaptureSettings),
		Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerCaptureSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraOutlinerCaptureSettings.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraOutlinerCaptureSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSimpleClientInfo;
class UScriptStruct* FNiagaraSimpleClientInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSimpleClientInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSimpleClientInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSimpleClientInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSimpleClientInfo.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSimpleClientInfo>()
{
	return FNiagaraSimpleClientInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Systems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Systems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Systems;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Components_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Components;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Emitters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Emitters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Emitters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Simple information on the connected client for use in continuous or immediate response UI elements. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Simple information on the connected client for use in continuous or immediate response UI elements." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSimpleClientInfo>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Systems_Inner = { "Systems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Systems_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "/** List of all system names in the scene. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "List of all system names in the scene." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Systems = { "Systems", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimpleClientInfo, Systems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Systems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Systems_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Actors_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "/** List of all actors with Niagara components. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "List of all actors with Niagara components." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimpleClientInfo, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Actors_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Components_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "/** List of all Niagara components. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "List of all Niagara components." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimpleClientInfo, Components), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Components_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Components_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Emitters_Inner = { "Emitters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Emitters_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "/** List of all Niagara emitters. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "List of all Niagara emitters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Emitters = { "Emitters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimpleClientInfo, Emitters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Emitters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Emitters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Systems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Systems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Components_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Components,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Emitters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewProp_Emitters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSimpleClientInfo",
		sizeof(FNiagaraSimpleClientInfo),
		alignof(FNiagaraSimpleClientInfo),
		Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraSimpleClientInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSimpleClientInfo.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraSimpleClientInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSystemSimCacheCaptureRequest;
class UScriptStruct* FNiagaraSystemSimCacheCaptureRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSystemSimCacheCaptureRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSystemSimCacheCaptureRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSystemSimCacheCaptureRequest"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSystemSimCacheCaptureRequest.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSystemSimCacheCaptureRequest>()
{
	return FNiagaraSystemSimCacheCaptureRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureDelayFrames_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_CaptureDelayFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureFrames_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_CaptureFrames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Message sent from the debugger to a client to request a sim cache capture for a particular component. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Message sent from the debugger to a client to request a sim cache capture for a particular component." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSystemSimCacheCaptureRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::NewProp_ComponentName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of the component we're going to capture. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Name of the component we're going to capture." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSystemSimCacheCaptureRequest, ComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::NewProp_ComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::NewProp_ComponentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::NewProp_CaptureDelayFrames_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How many frames to delay capture. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "How many frames to delay capture." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::NewProp_CaptureDelayFrames = { "CaptureDelayFrames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSystemSimCacheCaptureRequest, CaptureDelayFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::NewProp_CaptureDelayFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::NewProp_CaptureDelayFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::NewProp_CaptureFrames_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How many frames to capture. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "How many frames to capture." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::NewProp_CaptureFrames = { "CaptureFrames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSystemSimCacheCaptureRequest, CaptureFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::NewProp_CaptureFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::NewProp_CaptureFrames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::NewProp_ComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::NewProp_CaptureDelayFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::NewProp_CaptureFrames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSystemSimCacheCaptureRequest",
		sizeof(FNiagaraSystemSimCacheCaptureRequest),
		alignof(FNiagaraSystemSimCacheCaptureRequest),
		Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraSystemSimCacheCaptureRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSystemSimCacheCaptureRequest.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraSystemSimCacheCaptureRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSystemSimCacheCaptureReply;
class UScriptStruct* FNiagaraSystemSimCacheCaptureReply::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSystemSimCacheCaptureReply.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSystemSimCacheCaptureReply.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSystemSimCacheCaptureReply"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSystemSimCacheCaptureReply.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSystemSimCacheCaptureReply>()
{
	return FNiagaraSystemSimCacheCaptureReply::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SimCacheData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimCacheData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SimCacheData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Message sent from a debugger client to a connected debugger containing the results of a sim cache capture. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Message sent from a debugger client to a connected debugger containing the results of a sim cache capture." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSystemSimCacheCaptureReply>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply_Statics::NewProp_ComponentName_MetaData[] = {
		{ "Comment", "/** Name of the captured component. */" },
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
		{ "ToolTip", "Name of the captured component." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSystemSimCacheCaptureReply, ComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply_Statics::NewProp_ComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply_Statics::NewProp_ComponentName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply_Statics::NewProp_SimCacheData_Inner = { "SimCacheData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply_Statics::NewProp_SimCacheData_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDebuggerCommon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply_Statics::NewProp_SimCacheData = { "SimCacheData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSystemSimCacheCaptureReply, SimCacheData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply_Statics::NewProp_SimCacheData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply_Statics::NewProp_SimCacheData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply_Statics::NewProp_ComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply_Statics::NewProp_SimCacheData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply_Statics::NewProp_SimCacheData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSystemSimCacheCaptureReply",
		sizeof(FNiagaraSystemSimCacheCaptureReply),
		alignof(FNiagaraSystemSimCacheCaptureReply),
		Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraSystemSimCacheCaptureReply.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSystemSimCacheCaptureReply.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraSystemSimCacheCaptureReply.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDebuggerCommon_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDebuggerCommon_h_Statics::EnumInfo[] = {
		{ ENiagaraDebugPlaybackMode_StaticEnum, TEXT("ENiagaraDebugPlaybackMode"), &Z_Registration_Info_UEnum_ENiagaraDebugPlaybackMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2851553552U) },
		{ ENiagaraDebugHudHAlign_StaticEnum, TEXT("ENiagaraDebugHudHAlign"), &Z_Registration_Info_UEnum_ENiagaraDebugHudHAlign, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3062898863U) },
		{ ENiagaraDebugHudVAlign_StaticEnum, TEXT("ENiagaraDebugHudVAlign"), &Z_Registration_Info_UEnum_ENiagaraDebugHudVAlign, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3924587120U) },
		{ ENiagaraDebugHudFont_StaticEnum, TEXT("ENiagaraDebugHudFont"), &Z_Registration_Info_UEnum_ENiagaraDebugHudFont, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 351821973U) },
		{ ENiagaraDebugHudVerbosity_StaticEnum, TEXT("ENiagaraDebugHudVerbosity"), &Z_Registration_Info_UEnum_ENiagaraDebugHudVerbosity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 549596781U) },
		{ ENiagaraDebugHUDOverviewMode_StaticEnum, TEXT("ENiagaraDebugHUDOverviewMode"), &Z_Registration_Info_UEnum_ENiagaraDebugHUDOverviewMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2197438099U) },
		{ ENiagaraDebugHUDPerfGraphMode_StaticEnum, TEXT("ENiagaraDebugHUDPerfGraphMode"), &Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfGraphMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4284451424U) },
		{ ENiagaraDebugHUDPerfSampleMode_StaticEnum, TEXT("ENiagaraDebugHUDPerfSampleMode"), &Z_Registration_Info_UEnum_ENiagaraDebugHUDPerfSampleMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 68877927U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDebuggerCommon_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraOutlinerTimingData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraOutlinerTimingData_Statics::NewStructOps, TEXT("NiagaraOutlinerTimingData"), &Z_Registration_Info_UScriptStruct_NiagaraOutlinerTimingData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraOutlinerTimingData), 3894092918U) },
		{ FNiagaraOutlinerEmitterInstanceData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraOutlinerEmitterInstanceData_Statics::NewStructOps, TEXT("NiagaraOutlinerEmitterInstanceData"), &Z_Registration_Info_UScriptStruct_NiagaraOutlinerEmitterInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraOutlinerEmitterInstanceData), 2004544238U) },
		{ FNiagaraOutlinerSystemInstanceData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraOutlinerSystemInstanceData_Statics::NewStructOps, TEXT("NiagaraOutlinerSystemInstanceData"), &Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraOutlinerSystemInstanceData), 2634148200U) },
		{ FNiagaraOutlinerSystemData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData_Statics::NewStructOps, TEXT("NiagaraOutlinerSystemData"), &Z_Registration_Info_UScriptStruct_NiagaraOutlinerSystemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraOutlinerSystemData), 3532953236U) },
		{ FNiagaraOutlinerWorldData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraOutlinerWorldData_Statics::NewStructOps, TEXT("NiagaraOutlinerWorldData"), &Z_Registration_Info_UScriptStruct_NiagaraOutlinerWorldData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraOutlinerWorldData), 2975294628U) },
		{ FNiagaraOutlinerData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraOutlinerData_Statics::NewStructOps, TEXT("NiagaraOutlinerData"), &Z_Registration_Info_UScriptStruct_NiagaraOutlinerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraOutlinerData), 320273720U) },
		{ FNiagaraDebuggerRequestConnection::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDebuggerRequestConnection_Statics::NewStructOps, TEXT("NiagaraDebuggerRequestConnection"), &Z_Registration_Info_UScriptStruct_NiagaraDebuggerRequestConnection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDebuggerRequestConnection), 2151675625U) },
		{ FNiagaraDebuggerAcceptConnection::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDebuggerAcceptConnection_Statics::NewStructOps, TEXT("NiagaraDebuggerAcceptConnection"), &Z_Registration_Info_UScriptStruct_NiagaraDebuggerAcceptConnection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDebuggerAcceptConnection), 1883369862U) },
		{ FNiagaraDebuggerConnectionClosed::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDebuggerConnectionClosed_Statics::NewStructOps, TEXT("NiagaraDebuggerConnectionClosed"), &Z_Registration_Info_UScriptStruct_NiagaraDebuggerConnectionClosed, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDebuggerConnectionClosed), 137314614U) },
		{ FNiagaraDebuggerExecuteConsoleCommand::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDebuggerExecuteConsoleCommand_Statics::NewStructOps, TEXT("NiagaraDebuggerExecuteConsoleCommand"), &Z_Registration_Info_UScriptStruct_NiagaraDebuggerExecuteConsoleCommand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDebuggerExecuteConsoleCommand), 3330495238U) },
		{ FNiagaraDebuggerOutlinerUpdate::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDebuggerOutlinerUpdate_Statics::NewStructOps, TEXT("NiagaraDebuggerOutlinerUpdate"), &Z_Registration_Info_UScriptStruct_NiagaraDebuggerOutlinerUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDebuggerOutlinerUpdate), 1693771471U) },
		{ FNiagaraDebugHudTextOptions::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDebugHudTextOptions_Statics::NewStructOps, TEXT("NiagaraDebugHudTextOptions"), &Z_Registration_Info_UScriptStruct_NiagaraDebugHudTextOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDebugHudTextOptions), 1615630876U) },
		{ FNiagaraDebugHUDVariable::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDebugHUDVariable_Statics::NewStructOps, TEXT("NiagaraDebugHUDVariable"), &Z_Registration_Info_UScriptStruct_NiagaraDebugHUDVariable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDebugHUDVariable), 2458231597U) },
		{ FNiagaraDebugHUDSettingsData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDebugHUDSettingsData_Statics::NewStructOps, TEXT("NiagaraDebugHUDSettingsData"), &Z_Registration_Info_UScriptStruct_NiagaraDebugHUDSettingsData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDebugHUDSettingsData), 3268732371U) },
		{ FNiagaraRequestSimpleClientInfoMessage::StaticStruct, Z_Construct_UScriptStruct_FNiagaraRequestSimpleClientInfoMessage_Statics::NewStructOps, TEXT("NiagaraRequestSimpleClientInfoMessage"), &Z_Registration_Info_UScriptStruct_NiagaraRequestSimpleClientInfoMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraRequestSimpleClientInfoMessage), 3767413864U) },
		{ FNiagaraOutlinerCaptureSettings::StaticStruct, Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings_Statics::NewStructOps, TEXT("NiagaraOutlinerCaptureSettings"), &Z_Registration_Info_UScriptStruct_NiagaraOutlinerCaptureSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraOutlinerCaptureSettings), 2712967502U) },
		{ FNiagaraSimpleClientInfo::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo_Statics::NewStructOps, TEXT("NiagaraSimpleClientInfo"), &Z_Registration_Info_UScriptStruct_NiagaraSimpleClientInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSimpleClientInfo), 3121704494U) },
		{ FNiagaraSystemSimCacheCaptureRequest::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureRequest_Statics::NewStructOps, TEXT("NiagaraSystemSimCacheCaptureRequest"), &Z_Registration_Info_UScriptStruct_NiagaraSystemSimCacheCaptureRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSystemSimCacheCaptureRequest), 489434092U) },
		{ FNiagaraSystemSimCacheCaptureReply::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSystemSimCacheCaptureReply_Statics::NewStructOps, TEXT("NiagaraSystemSimCacheCaptureReply"), &Z_Registration_Info_UScriptStruct_NiagaraSystemSimCacheCaptureReply, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSystemSimCacheCaptureReply), 190602555U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDebuggerCommon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDebugHUDSettings, UNiagaraDebugHUDSettings::StaticClass, TEXT("UNiagaraDebugHUDSettings"), &Z_Registration_Info_UClass_UNiagaraDebugHUDSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDebugHUDSettings), 3237507631U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDebuggerCommon_h_2382859824(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDebuggerCommon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDebuggerCommon_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDebuggerCommon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDebuggerCommon_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDebuggerCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDebuggerCommon_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
