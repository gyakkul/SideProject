// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataInterface/NiagaraDataInterfaceDataChannelSpawn.h"
#include "../Public/NiagaraDataInterfaceEmitterBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceDataChannelSpawn() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceDataChannelSpawn::StaticRegisterNativesUNiagaraDataInterfaceDataChannelSpawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceDataChannelSpawn);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn_NoRegister()
	{
		return UNiagaraDataInterfaceDataChannelSpawn::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSpawnGroupToDataChannelIndex_MetaData[];
#endif
		static void NewProp_bOverrideSpawnGroupToDataChannelIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSpawnGroupToDataChannelIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn_Statics::Class_MetaDataParams[] = {
		{ "Category", "Data Channels" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Spawn From Data Channel" },
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceDataChannelSpawn.h" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDataChannelSpawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn_Statics::NewProp_EmitterBinding_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/** The emitter into which we will spawn. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDataChannelSpawn.h" },
		{ "ToolTip", "The emitter into which we will spawn." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn_Statics::NewProp_EmitterBinding = { "EmitterBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceDataChannelSpawn, EmitterBinding), Z_Construct_UScriptStruct_FNiagaraDataInterfaceEmitterBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn_Statics::NewProp_EmitterBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn_Statics::NewProp_EmitterBinding_MetaData)) }; // 3553360873
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn_Statics::NewProp_bOverrideSpawnGroupToDataChannelIndex_MetaData[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/** \n\x09If true, we override the SpawnGroup of any generated spawns with the element index of the data channel that generated the spawn. \n\x09This allows the particle spawn script to subsequently access further data from the Data Channel at this index.\n\x09*/" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDataChannelSpawn.h" },
		{ "ToolTip", "If true, we override the SpawnGroup of any generated spawns with the element index of the data channel that generated the spawn.\nThis allows the particle spawn script to subsequently access further data from the Data Channel at this index." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn_Statics::NewProp_bOverrideSpawnGroupToDataChannelIndex_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceDataChannelSpawn*)Obj)->bOverrideSpawnGroupToDataChannelIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn_Statics::NewProp_bOverrideSpawnGroupToDataChannelIndex = { "bOverrideSpawnGroupToDataChannelIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceDataChannelSpawn), &Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn_Statics::NewProp_bOverrideSpawnGroupToDataChannelIndex_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn_Statics::NewProp_bOverrideSpawnGroupToDataChannelIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn_Statics::NewProp_bOverrideSpawnGroupToDataChannelIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn_Statics::NewProp_EmitterBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn_Statics::NewProp_bOverrideSpawnGroupToDataChannelIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceDataChannelSpawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn_Statics::ClassParams = {
		&UNiagaraDataInterfaceDataChannelSpawn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelSpawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelSpawn.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelSpawn.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceDataChannelSpawn>()
	{
		return UNiagaraDataInterfaceDataChannelSpawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceDataChannelSpawn);
	UNiagaraDataInterfaceDataChannelSpawn::~UNiagaraDataInterfaceDataChannelSpawn() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDataChannelSpawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDataChannelSpawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceDataChannelSpawn, UNiagaraDataInterfaceDataChannelSpawn::StaticClass, TEXT("UNiagaraDataInterfaceDataChannelSpawn"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelSpawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceDataChannelSpawn), 661375606U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDataChannelSpawn_h_675500891(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDataChannelSpawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDataChannelSpawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
