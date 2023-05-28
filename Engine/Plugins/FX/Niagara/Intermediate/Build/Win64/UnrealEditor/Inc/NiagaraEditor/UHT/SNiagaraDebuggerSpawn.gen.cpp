// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Widgets/SNiagaraDebuggerSpawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNiagaraDebuggerSpawn() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDebuggerSpawnData;
class UScriptStruct* FNiagaraDebuggerSpawnData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDebuggerSpawnData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDebuggerSpawnData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraDebuggerSpawnData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDebuggerSpawnData.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraDebuggerSpawnData>()
{
	return FNiagaraDebuggerSpawnData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SystemsToSpawn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemsToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SystemsToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnAllAtOnce_MetaData[];
#endif
		static void NewProp_bSpawnAllAtOnce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnAllAtOnce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenSpawns_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenSpawns;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKillBeforeSpawn_MetaData[];
#endif
		static void NewProp_bKillBeforeSpawn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKillBeforeSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWorldLocation_MetaData[];
#endif
		static void NewProp_bWorldLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttachToPlayer_MetaData[];
#endif
		static void NewProp_bAttachToPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttachToPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoActivate_MetaData[];
#endif
		static void NewProp_bAutoActivate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoActivate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroy_MetaData[];
#endif
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoPreCullCheck_MetaData[];
#endif
		static void NewProp_bDoPreCullCheck_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoPreCullCheck;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Widgets/SNiagaraDebuggerSpawn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDebuggerSpawnData>();
	}
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_SystemsToSpawn_Inner = { "SystemsToSpawn", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_SystemsToSpawn_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** List of all the systems we want to spawn. */" },
		{ "ModuleRelativePath", "Private/Widgets/SNiagaraDebuggerSpawn.h" },
		{ "ToolTip", "List of all the systems we want to spawn." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_SystemsToSpawn = { "SystemsToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebuggerSpawnData, SystemsToSpawn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_SystemsToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_SystemsToSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bSpawnAllAtOnce_MetaData[] = {
		{ "Category", "Spawn" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/Widgets/SNiagaraDebuggerSpawn.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bSpawnAllAtOnce_SetBit(void* Obj)
	{
		((FNiagaraDebuggerSpawnData*)Obj)->bSpawnAllAtOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bSpawnAllAtOnce = { "bSpawnAllAtOnce", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebuggerSpawnData), &Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bSpawnAllAtOnce_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bSpawnAllAtOnce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bSpawnAllAtOnce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_TimeBetweenSpawns_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** The time delay we should use between spawning if we have a list to spawn. */" },
		{ "EditCondition", "!bSpawnAllAtOnce" },
		{ "ModuleRelativePath", "Private/Widgets/SNiagaraDebuggerSpawn.h" },
		{ "ToolTip", "The time delay we should use between spawning if we have a list to spawn." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_TimeBetweenSpawns = { "TimeBetweenSpawns", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebuggerSpawnData, TimeBetweenSpawns), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_TimeBetweenSpawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_TimeBetweenSpawns_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bKillBeforeSpawn_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** Should we kill systems we spawn before we spawn another. */" },
		{ "ModuleRelativePath", "Private/Widgets/SNiagaraDebuggerSpawn.h" },
		{ "ToolTip", "Should we kill systems we spawn before we spawn another." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bKillBeforeSpawn_SetBit(void* Obj)
	{
		((FNiagaraDebuggerSpawnData*)Obj)->bKillBeforeSpawn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bKillBeforeSpawn = { "bKillBeforeSpawn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebuggerSpawnData), &Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bKillBeforeSpawn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bKillBeforeSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bKillBeforeSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bWorldLocation_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** When true the location is a world location, when false it's relative to the player and is in camera space. */" },
		{ "ModuleRelativePath", "Private/Widgets/SNiagaraDebuggerSpawn.h" },
		{ "ToolTip", "When true the location is a world location, when false it's relative to the player and is in camera space." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bWorldLocation_SetBit(void* Obj)
	{
		((FNiagaraDebuggerSpawnData*)Obj)->bWorldLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bWorldLocation = { "bWorldLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebuggerSpawnData), &Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bWorldLocation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bWorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bWorldLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** The location we should use to spawn the system at, either world or local to the player depending on WorldLocation flag. */" },
		{ "ModuleRelativePath", "Private/Widgets/SNiagaraDebuggerSpawn.h" },
		{ "ToolTip", "The location we should use to spawn the system at, either world or local to the player depending on WorldLocation flag." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDebuggerSpawnData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bAttachToPlayer_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** Should we attach to the player controlled by the camera or not */" },
		{ "ModuleRelativePath", "Private/Widgets/SNiagaraDebuggerSpawn.h" },
		{ "ToolTip", "Should we attach to the player controlled by the camera or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bAttachToPlayer_SetBit(void* Obj)
	{
		((FNiagaraDebuggerSpawnData*)Obj)->bAttachToPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bAttachToPlayer = { "bAttachToPlayer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebuggerSpawnData), &Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bAttachToPlayer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bAttachToPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bAttachToPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bAutoActivate_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** Should we auto activate or not */" },
		{ "ModuleRelativePath", "Private/Widgets/SNiagaraDebuggerSpawn.h" },
		{ "ToolTip", "Should we auto activate or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bAutoActivate_SetBit(void* Obj)
	{
		((FNiagaraDebuggerSpawnData*)Obj)->bAutoActivate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bAutoActivate = { "bAutoActivate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebuggerSpawnData), &Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bAutoActivate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bAutoActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bAutoActivate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bAutoDestroy_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** Should we auto destroy when complete or not */" },
		{ "ModuleRelativePath", "Private/Widgets/SNiagaraDebuggerSpawn.h" },
		{ "ToolTip", "Should we auto destroy when complete or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((FNiagaraDebuggerSpawnData*)Obj)->bAutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebuggerSpawnData), &Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bAutoDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bAutoDestroy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bDoPreCullCheck_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** Should we perform the pre cull check or not */" },
		{ "ModuleRelativePath", "Private/Widgets/SNiagaraDebuggerSpawn.h" },
		{ "ToolTip", "Should we perform the pre cull check or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bDoPreCullCheck_SetBit(void* Obj)
	{
		((FNiagaraDebuggerSpawnData*)Obj)->bDoPreCullCheck = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bDoPreCullCheck = { "bDoPreCullCheck", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraDebuggerSpawnData), &Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bDoPreCullCheck_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bDoPreCullCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bDoPreCullCheck_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_SystemsToSpawn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_SystemsToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bSpawnAllAtOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_TimeBetweenSpawns,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bKillBeforeSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bWorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bAttachToPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bAutoActivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bAutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewProp_bDoPreCullCheck,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraDebuggerSpawnData",
		sizeof(FNiagaraDebuggerSpawnData),
		alignof(FNiagaraDebuggerSpawnData),
		Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraDebuggerSpawnData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDebuggerSpawnData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraDebuggerSpawnData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Widgets_SNiagaraDebuggerSpawn_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Widgets_SNiagaraDebuggerSpawn_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraDebuggerSpawnData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDebuggerSpawnData_Statics::NewStructOps, TEXT("NiagaraDebuggerSpawnData"), &Z_Registration_Info_UScriptStruct_NiagaraDebuggerSpawnData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDebuggerSpawnData), 3173780286U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Widgets_SNiagaraDebuggerSpawn_h_1637696541(TEXT("/Script/NiagaraEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Widgets_SNiagaraDebuggerSpawn_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Widgets_SNiagaraDebuggerSpawn_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
