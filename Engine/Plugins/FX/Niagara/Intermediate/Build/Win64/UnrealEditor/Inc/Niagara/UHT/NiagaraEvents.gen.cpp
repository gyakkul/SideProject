// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraEvents.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraEvents() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEventReceiverEmitterAction();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraCollisionEventPayload;
class UScriptStruct* FNiagaraCollisionEventPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraCollisionEventPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraCollisionEventPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraCollisionEventPayload"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraCollisionEventPayload.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraCollisionEventPayload>()
{
	return FNiagaraCollisionEventPayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PhysicalMaterialIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Type struct for collision event payloads; collision event data set is based on this\n *  TODO: figure out how we can pipe attributes from the colliding particle in here\n */" },
		{ "ModuleRelativePath", "Classes/NiagaraEvents.h" },
		{ "ToolTip", "Type struct for collision event payloads; collision event data set is based on this\nTODO: figure out how we can pipe attributes from the colliding particle in here" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraCollisionEventPayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionPos_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionPos = { "CollisionPos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraCollisionEventPayload, CollisionPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionNormal_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionNormal = { "CollisionNormal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraCollisionEventPayload, CollisionNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionVelocity = { "CollisionVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraCollisionEventPayload, CollisionVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_ParticleIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEvents.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_ParticleIndex = { "ParticleIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraCollisionEventPayload, ParticleIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_ParticleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_ParticleIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_PhysicalMaterialIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEvents.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_PhysicalMaterialIndex = { "PhysicalMaterialIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraCollisionEventPayload, PhysicalMaterialIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_PhysicalMaterialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_PhysicalMaterialIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_CollisionVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_ParticleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewProp_PhysicalMaterialIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraCollisionEventPayload",
		sizeof(FNiagaraCollisionEventPayload),
		alignof(FNiagaraCollisionEventPayload),
		Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraCollisionEventPayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraCollisionEventPayload.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraCollisionEventPayload.InnerSingleton;
	}
	void UNiagaraEventReceiverEmitterAction::StaticRegisterNativesUNiagaraEventReceiverEmitterAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraEventReceiverEmitterAction);
	UClass* Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_NoRegister()
	{
		return UNiagaraEventReceiverEmitterAction::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\nBase class for actions that an event receiver will perform at the emitter level.\n*/" },
		{ "IncludePath", "NiagaraEvents.h" },
		{ "ModuleRelativePath", "Classes/NiagaraEvents.h" },
		{ "ToolTip", "Base class for actions that an event receiver will perform at the emitter level." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraEventReceiverEmitterAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_Statics::ClassParams = {
		&UNiagaraEventReceiverEmitterAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraEventReceiverEmitterAction()
	{
		if (!Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction.OuterSingleton, Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraEventReceiverEmitterAction>()
	{
		return UNiagaraEventReceiverEmitterAction::StaticClass();
	}
	UNiagaraEventReceiverEmitterAction::UNiagaraEventReceiverEmitterAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraEventReceiverEmitterAction);
	UNiagaraEventReceiverEmitterAction::~UNiagaraEventReceiverEmitterAction() {}
	void UNiagaraEventReceiverEmitterAction_SpawnParticles::StaticRegisterNativesUNiagaraEventReceiverEmitterAction_SpawnParticles()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraEventReceiverEmitterAction_SpawnParticles);
	UClass* Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_NoRegister()
	{
		return UNiagaraEventReceiverEmitterAction_SpawnParticles::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumParticles_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumParticles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraEventReceiverEmitterAction,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraEvents.h" },
		{ "ModuleRelativePath", "Classes/NiagaraEvents.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::NewProp_NumParticles_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** Number of particles to spawn per event received. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEvents.h" },
		{ "ToolTip", "Number of particles to spawn per event received." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::NewProp_NumParticles = { "NumParticles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraEventReceiverEmitterAction_SpawnParticles, NumParticles), METADATA_PARAMS(Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::NewProp_NumParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::NewProp_NumParticles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::NewProp_NumParticles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraEventReceiverEmitterAction_SpawnParticles>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::ClassParams = {
		&UNiagaraEventReceiverEmitterAction_SpawnParticles::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles()
	{
		if (!Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles.OuterSingleton, Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraEventReceiverEmitterAction_SpawnParticles>()
	{
		return UNiagaraEventReceiverEmitterAction_SpawnParticles::StaticClass();
	}
	UNiagaraEventReceiverEmitterAction_SpawnParticles::UNiagaraEventReceiverEmitterAction_SpawnParticles(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraEventReceiverEmitterAction_SpawnParticles);
	UNiagaraEventReceiverEmitterAction_SpawnParticles::~UNiagaraEventReceiverEmitterAction_SpawnParticles() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEvents_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEvents_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraCollisionEventPayload::StaticStruct, Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload_Statics::NewStructOps, TEXT("NiagaraCollisionEventPayload"), &Z_Registration_Info_UScriptStruct_NiagaraCollisionEventPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraCollisionEventPayload), 3740370772U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEvents_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraEventReceiverEmitterAction, UNiagaraEventReceiverEmitterAction::StaticClass, TEXT("UNiagaraEventReceiverEmitterAction"), &Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraEventReceiverEmitterAction), 613828245U) },
		{ Z_Construct_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles, UNiagaraEventReceiverEmitterAction_SpawnParticles::StaticClass, TEXT("UNiagaraEventReceiverEmitterAction_SpawnParticles"), &Z_Registration_Info_UClass_UNiagaraEventReceiverEmitterAction_SpawnParticles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraEventReceiverEmitterAction_SpawnParticles), 1047479244U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEvents_h_2840819472(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEvents_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEvents_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEvents_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEvents_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
