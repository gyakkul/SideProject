// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleSystemComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemComponent();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemReplay_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleEventType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSignificanceLevel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSysParamType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETrailWidthMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ParticleReplayState();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ParticleSystemLODMethod();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFXSystemSpawnParameters();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleSysParam();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleSysParamType;
	static UEnum* EParticleSysParamType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EParticleSysParamType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EParticleSysParamType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSysParamType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EParticleSysParamType"));
		}
		return Z_Registration_Info_UEnum_EParticleSysParamType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleSysParamType>()
	{
		return EParticleSysParamType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EParticleSysParamType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EParticleSysParamType_Statics::Enumerators[] = {
		{ "PSPT_None", (int64)PSPT_None },
		{ "PSPT_Scalar", (int64)PSPT_Scalar },
		{ "PSPT_ScalarRand", (int64)PSPT_ScalarRand },
		{ "PSPT_Vector", (int64)PSPT_Vector },
		{ "PSPT_VectorRand", (int64)PSPT_VectorRand },
		{ "PSPT_Color", (int64)PSPT_Color },
		{ "PSPT_Actor", (int64)PSPT_Actor },
		{ "PSPT_Material", (int64)PSPT_Material },
		{ "PSPT_VectorUnitRand", (int64)PSPT_VectorUnitRand },
		{ "PSPT_MAX", (int64)PSPT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EParticleSysParamType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Enum for specifying type of a name instance parameter. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "PSPT_Actor.DisplayName", "Actor" },
		{ "PSPT_Actor.Name", "PSPT_Actor" },
		{ "PSPT_Color.DisplayName", "Color" },
		{ "PSPT_Color.Name", "PSPT_Color" },
		{ "PSPT_Material.DisplayName", "Material" },
		{ "PSPT_Material.Name", "PSPT_Material" },
		{ "PSPT_MAX.Name", "PSPT_MAX" },
		{ "PSPT_None.DisplayName", "None" },
		{ "PSPT_None.Name", "PSPT_None" },
		{ "PSPT_Scalar.DisplayName", "Scalar" },
		{ "PSPT_Scalar.Name", "PSPT_Scalar" },
		{ "PSPT_ScalarRand.DisplayName", "Scalar Random" },
		{ "PSPT_ScalarRand.Name", "PSPT_ScalarRand" },
		{ "PSPT_Vector.DisplayName", "Vector" },
		{ "PSPT_Vector.Name", "PSPT_Vector" },
		{ "PSPT_VectorRand.DisplayName", "Vector Random" },
		{ "PSPT_VectorRand.Name", "PSPT_VectorRand" },
		{ "PSPT_VectorUnitRand.DisplayName", "Vector Unit Random" },
		{ "PSPT_VectorUnitRand.Name", "PSPT_VectorUnitRand" },
		{ "ToolTip", "Enum for specifying type of a name instance parameter." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EParticleSysParamType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EParticleSysParamType",
		"EParticleSysParamType",
		Z_Construct_UEnum_Engine_EParticleSysParamType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleSysParamType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EParticleSysParamType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleSysParamType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EParticleSysParamType()
	{
		if (!Z_Registration_Info_UEnum_EParticleSysParamType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleSysParamType.InnerSingleton, Z_Construct_UEnum_Engine_EParticleSysParamType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EParticleSysParamType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ParticleReplayState;
	static UEnum* ParticleReplayState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ParticleReplayState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ParticleReplayState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ParticleReplayState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ParticleReplayState"));
		}
		return Z_Registration_Info_UEnum_ParticleReplayState.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ParticleReplayState>()
	{
		return ParticleReplayState_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ParticleReplayState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ParticleReplayState_Statics::Enumerators[] = {
		{ "PRS_Disabled", (int64)PRS_Disabled },
		{ "PRS_Capturing", (int64)PRS_Capturing },
		{ "PRS_Replaying", (int64)PRS_Replaying },
		{ "PRS_MAX", (int64)PRS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ParticleReplayState_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Particle system replay state */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "PRS_Capturing.Comment", "/** Capture all particle data to the clip specified by ReplayClipIDNumber.  The frame to capture\n\x09\x09must be specified using the ReplayFrameIndex */" },
		{ "PRS_Capturing.DisplayName", "Capturing" },
		{ "PRS_Capturing.Name", "PRS_Capturing" },
		{ "PRS_Capturing.ToolTip", "Capture all particle data to the clip specified by ReplayClipIDNumber.  The frame to capture\n              must be specified using the ReplayFrameIndex" },
		{ "PRS_Disabled.Comment", "/** Replay system is disabled.  Particles are simulated and rendered normally. */" },
		{ "PRS_Disabled.DisplayName", "Disabled" },
		{ "PRS_Disabled.Name", "PRS_Disabled" },
		{ "PRS_Disabled.ToolTip", "Replay system is disabled.  Particles are simulated and rendered normally." },
		{ "PRS_MAX.Name", "PRS_MAX" },
		{ "PRS_Replaying.Comment", "/** Replay captured particle state from the clip specified by ReplayClipIDNumber.  The frame to play\n\x09\x09must be specified using the ReplayFrameIndex */" },
		{ "PRS_Replaying.DisplayName", "Replaying" },
		{ "PRS_Replaying.Name", "PRS_Replaying" },
		{ "PRS_Replaying.ToolTip", "Replay captured particle state from the clip specified by ReplayClipIDNumber.  The frame to play\n              must be specified using the ReplayFrameIndex" },
		{ "ToolTip", "Particle system replay state" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ParticleReplayState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ParticleReplayState",
		"ParticleReplayState",
		Z_Construct_UEnum_Engine_ParticleReplayState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ParticleReplayState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ParticleReplayState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ParticleReplayState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ParticleReplayState()
	{
		if (!Z_Registration_Info_UEnum_ParticleReplayState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ParticleReplayState.InnerSingleton, Z_Construct_UEnum_Engine_ParticleReplayState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ParticleReplayState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleEventType;
	static UEnum* EParticleEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EParticleEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EParticleEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleEventType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EParticleEventType"));
		}
		return Z_Registration_Info_UEnum_EParticleEventType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleEventType>()
	{
		return EParticleEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EParticleEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EParticleEventType_Statics::Enumerators[] = {
		{ "EPET_Any", (int64)EPET_Any },
		{ "EPET_Spawn", (int64)EPET_Spawn },
		{ "EPET_Death", (int64)EPET_Death },
		{ "EPET_Collision", (int64)EPET_Collision },
		{ "EPET_Burst", (int64)EPET_Burst },
		{ "EPET_Blueprint", (int64)EPET_Blueprint },
		{ "EPET_MAX", (int64)EPET_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EParticleEventType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Event type\n */" },
		{ "EPET_Any.Comment", "/** Any - allow any event */" },
		{ "EPET_Any.DisplayName", "Any" },
		{ "EPET_Any.Name", "EPET_Any" },
		{ "EPET_Any.ToolTip", "Any - allow any event" },
		{ "EPET_Blueprint.Comment", "/** Blueprint - an event generated by level script */" },
		{ "EPET_Blueprint.DisplayName", "Blueprint" },
		{ "EPET_Blueprint.Name", "EPET_Blueprint" },
		{ "EPET_Blueprint.ToolTip", "Blueprint - an event generated by level script" },
		{ "EPET_Burst.Comment", "/** Burst - a particle burst event */" },
		{ "EPET_Burst.DisplayName", "Burst" },
		{ "EPET_Burst.Name", "EPET_Burst" },
		{ "EPET_Burst.ToolTip", "Burst - a particle burst event" },
		{ "EPET_Collision.Comment", "/** Collision - a particle collision event */" },
		{ "EPET_Collision.DisplayName", "Collision" },
		{ "EPET_Collision.Name", "EPET_Collision" },
		{ "EPET_Collision.ToolTip", "Collision - a particle collision event" },
		{ "EPET_Death.Comment", "/** Death - a particle death event */" },
		{ "EPET_Death.DisplayName", "Death" },
		{ "EPET_Death.Name", "EPET_Death" },
		{ "EPET_Death.ToolTip", "Death - a particle death event" },
		{ "EPET_MAX.Name", "EPET_MAX" },
		{ "EPET_Spawn.Comment", "/** Spawn - a particle spawn event */" },
		{ "EPET_Spawn.DisplayName", "Spawn" },
		{ "EPET_Spawn.Name", "EPET_Spawn" },
		{ "EPET_Spawn.ToolTip", "Spawn - a particle spawn event" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Event type" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EParticleEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EParticleEventType",
		"EParticleEventType",
		Z_Construct_UEnum_Engine_EParticleEventType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleEventType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EParticleEventType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleEventType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EParticleEventType()
	{
		if (!Z_Registration_Info_UEnum_EParticleEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleEventType.InnerSingleton, Z_Construct_UEnum_Engine_EParticleEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EParticleEventType.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnSystemFinished_Parms
		{
			UParticleSystemComponent* PSystem;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::NewProp_PSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::NewProp_PSystem = { "PSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnSystemFinished_Parms, PSystem), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::NewProp_PSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::NewProp_PSystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::NewProp_PSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the particle system is done\n" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Called when the particle system is done" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnSystemFinished__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::_Script_Engine_eventOnSystemFinished_Parms), Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSystemFinished_DelegateWrapper(const FMulticastScriptDelegate& OnSystemFinished, UParticleSystemComponent* PSystem)
{
	struct _Script_Engine_eventOnSystemFinished_Parms
	{
		UParticleSystemComponent* PSystem;
	};
	_Script_Engine_eventOnSystemFinished_Parms Parms;
	Parms.PSystem=PSystem;
	OnSystemFinished.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParticleSysParam;
class UScriptStruct* FParticleSysParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleSysParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParticleSysParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleSysParam, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ParticleSysParam"));
	}
	return Z_Registration_Info_UScriptStruct_ParticleSysParam.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleSysParam>()
{
	return FParticleSysParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FParticleSysParam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ParamType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scalar_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scalar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scalar_Low_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scalar_Low;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector_Low_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector_Low;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleSysParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct used for a particular named instance parameter for this ParticleSystemComponent. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Struct used for a particular named instance parameter for this ParticleSystemComponent." },
	};
#endif
	void* Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleSysParam>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ParticleSysParam" },
		{ "Comment", "/** The name of the parameter */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "The name of the parameter" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParticleSysParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_ParamType_MetaData[] = {
		{ "Category", "ParticleSysParam" },
		{ "Comment", "/**\n\x09 *\x09The type of parameters\n\x09 *\x09PSPT_None       - There is no data type\n\x09 *\x09PSPT_Scalar     - Use the scalar value\n\x09 *\x09PSPT_ScalarRand - Select a scalar value in the range [Scalar_Low..Scalar)\n\x09 *\x09PSPT_Vector     - Use the vector value\n\x09 *\x09PSPT_VectorRand - Select a vector value in the range [Vector_Low..Vector)\n\x09 *\x09PSPT_Color      - Use the color value\n\x09 *\x09PSPT_Actor      - Use the actor value\n\x09 *\x09PSPT_Material   - Use the material value\n\x09 *\x09PSPT_VectorUnitRand - Select a random unit vector and scale along the range [Vector_Low..Vector)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "The type of parameters\nPSPT_None       - There is no data type\nPSPT_Scalar     - Use the scalar value\nPSPT_ScalarRand - Select a scalar value in the range [Scalar_Low..Scalar)\nPSPT_Vector     - Use the vector value\nPSPT_VectorRand - Select a vector value in the range [Vector_Low..Vector)\nPSPT_Color      - Use the color value\nPSPT_Actor      - Use the actor value\nPSPT_Material   - Use the material value\nPSPT_VectorUnitRand - Select a random unit vector and scale along the range [Vector_Low..Vector)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_ParamType = { "ParamType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParticleSysParam, ParamType), Z_Construct_UEnum_Engine_EParticleSysParamType, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_ParamType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_ParamType_MetaData)) }; // 3182418651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Scalar_MetaData[] = {
		{ "Category", "ParticleSysParam" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Scalar = { "Scalar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParticleSysParam, Scalar), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Scalar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Scalar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Scalar_Low_MetaData[] = {
		{ "Category", "ParticleSysParam" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Scalar_Low = { "Scalar_Low", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParticleSysParam, Scalar_Low), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Scalar_Low_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Scalar_Low_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Vector_MetaData[] = {
		{ "Category", "ParticleSysParam" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParticleSysParam, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Vector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Vector_Low_MetaData[] = {
		{ "Category", "ParticleSysParam" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Vector_Low = { "Vector_Low", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParticleSysParam, Vector_Low), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Vector_Low_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Vector_Low_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "ParticleSysParam" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParticleSysParam, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Actor_MetaData[] = {
		{ "Category", "ParticleSysParam" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParticleSysParam, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "ParticleSysParam" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParticleSysParam, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParticleSysParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_ParamType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Scalar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Scalar_Low,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Vector_Low,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewProp_Material,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleSysParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ParticleSysParam",
		sizeof(FParticleSysParam),
		alignof(FParticleSysParam),
		Z_Construct_UScriptStruct_FParticleSysParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleSysParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleSysParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleSysParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParticleSysParam()
	{
		if (!Z_Registration_Info_UScriptStruct_ParticleSysParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParticleSysParam.InnerSingleton, Z_Construct_UScriptStruct_FParticleSysParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ParticleSysParam.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FXSystemSpawnParameters;
class UScriptStruct* FFXSystemSpawnParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FXSystemSpawnParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FXSystemSpawnParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFXSystemSpawnParameters, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("FXSystemSpawnParameters"));
	}
	return Z_Registration_Info_UScriptStruct_FXSystemSpawnParameters.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFXSystemSpawnParameters>()
{
	return FFXSystemSpawnParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Parameters controlling the spawning behavior of FX systems via the SpawnSystemAtLocation and SpawnSystemAttached. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Parameters controlling the spawning behavior of FX systems via the SpawnSystemAtLocation and SpawnSystemAttached." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFXSystemSpawnParameters>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"FXSystemSpawnParameters",
		sizeof(FFXSystemSpawnParameters),
		alignof(FFXSystemSpawnParameters),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFXSystemSpawnParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_FXSystemSpawnParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FXSystemSpawnParameters.InnerSingleton, Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FXSystemSpawnParameters.InnerSingleton;
	}
	DEFINE_FUNCTION(UFXSystemComponent::execReleaseToPool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseToPool();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFXSystemComponent::execSetUseAutoManageAttachment)
	{
		P_GET_UBOOL(Z_Param_bAutoManage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseAutoManageAttachment(Z_Param_bAutoManage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFXSystemComponent::execSetAutoAttachmentParameters)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Parent);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_GET_ENUM(EAttachmentRule,Z_Param_LocationRule);
		P_GET_ENUM(EAttachmentRule,Z_Param_RotationRule);
		P_GET_ENUM(EAttachmentRule,Z_Param_ScaleRule);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoAttachmentParameters(Z_Param_Parent,Z_Param_SocketName,EAttachmentRule(Z_Param_LocationRule),EAttachmentRule(Z_Param_RotationRule),EAttachmentRule(Z_Param_ScaleRule));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFXSystemComponent::execSetEmitterEnable)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_EmitterName);
		P_GET_UBOOL(Z_Param_bNewEnableState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEmitterEnable(Z_Param_EmitterName,Z_Param_bNewEnableState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFXSystemComponent::execGetFXSystemAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFXSystemAsset**)Z_Param__Result=P_THIS->GetFXSystemAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFXSystemComponent::execSetActorParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_OBJECT(AActor,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActorParameter(Z_Param_ParameterName,Z_Param_Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFXSystemComponent::execSetColorParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FLinearColor,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorParameter(Z_Param_ParameterName,Z_Param_Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFXSystemComponent::execSetVectorParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FVector,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVectorParameter(Z_Param_ParameterName,Z_Param_Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFXSystemComponent::execSetFloatParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloatParameter(Z_Param_ParameterName,Z_Param_Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFXSystemComponent::execSetIntParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIntParameter(Z_Param_ParameterName,Z_Param_Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFXSystemComponent::execSetBoolParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_UBOOL(Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoolParameter(Z_Param_ParameterName,Z_Param_Param);
		P_NATIVE_END;
	}
	void UFXSystemComponent::StaticRegisterNativesUFXSystemComponent()
	{
		UClass* Class = UFXSystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFXSystemAsset", &UFXSystemComponent::execGetFXSystemAsset },
			{ "ReleaseToPool", &UFXSystemComponent::execReleaseToPool },
			{ "SetActorParameter", &UFXSystemComponent::execSetActorParameter },
			{ "SetAutoAttachmentParameters", &UFXSystemComponent::execSetAutoAttachmentParameters },
			{ "SetBoolParameter", &UFXSystemComponent::execSetBoolParameter },
			{ "SetColorParameter", &UFXSystemComponent::execSetColorParameter },
			{ "SetEmitterEnable", &UFXSystemComponent::execSetEmitterEnable },
			{ "SetFloatParameter", &UFXSystemComponent::execSetFloatParameter },
			{ "SetIntParameter", &UFXSystemComponent::execSetIntParameter },
			{ "SetUseAutoManageAttachment", &UFXSystemComponent::execSetUseAutoManageAttachment },
			{ "SetVectorParameter", &UFXSystemComponent::execSetVectorParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset_Statics
	{
		struct FXSystemComponent_eventGetFXSystemAsset_Parms
		{
			UFXSystemAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FXSystemComponent_eventGetFXSystemAsset_Parms, ReturnValue), Z_Construct_UClass_UFXSystemAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/** \n\x09 * Get the referenced FXSystem asset.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Get the referenced FXSystem asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFXSystemComponent, nullptr, "GetFXSystemAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset_Statics::FXSystemComponent_eventGetFXSystemAsset_Parms), Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFXSystemComponent_ReleaseToPool_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFXSystemComponent_ReleaseToPool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09 * Deactivates this system and releases it to the pool on completion.\n\x09 * Usage of this PSC reference after this call is unsafe.\n\x09 * You should clear out your references to it.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Deactivates this system and releases it to the pool on completion.\nUsage of this PSC reference after this call is unsafe.\nYou should clear out your references to it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFXSystemComponent_ReleaseToPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFXSystemComponent, nullptr, "ReleaseToPool", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFXSystemComponent_ReleaseToPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_ReleaseToPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFXSystemComponent_ReleaseToPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFXSystemComponent_ReleaseToPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics
	{
		struct FXSystemComponent_eventSetActorParameter_Parms
		{
			FName ParameterName;
			AActor* Param;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Param;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FXSystemComponent_eventSetActorParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FXSystemComponent_eventSetActorParameter_Parms, Param), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/** \n\x09 *\x09Set a named actor instance parameter on this ParticleSystemComponent. \n\x09 *\x09Updates the parameter if it already exists, or creates a new entry if not. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Set a named actor instance parameter on this ParticleSystemComponent.\nUpdates the parameter if it already exists, or creates a new entry if not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFXSystemComponent, nullptr, "SetActorParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::FXSystemComponent_eventSetActorParameter_Parms), Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFXSystemComponent_SetActorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFXSystemComponent_SetActorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics
	{
		struct FXSystemComponent_eventSetAutoAttachmentParameters_Parms
		{
			USceneComponent* Parent;
			FName SocketName;
			EAttachmentRule LocationRule;
			EAttachmentRule RotationRule;
			EAttachmentRule ScaleRule;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LocationRule_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LocationRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationRule_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleRule_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScaleRule;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FXSystemComponent_eventSetAutoAttachmentParameters_Parms, Parent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_Parent_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FXSystemComponent_eventSetAutoAttachmentParameters_Parms, SocketName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_LocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_LocationRule = { "LocationRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FXSystemComponent_eventSetAutoAttachmentParameters_Parms, LocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(nullptr, 0) }; // 1532071077
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_RotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_RotationRule = { "RotationRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FXSystemComponent_eventSetAutoAttachmentParameters_Parms, RotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(nullptr, 0) }; // 1532071077
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_ScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_ScaleRule = { "ScaleRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FXSystemComponent_eventSetAutoAttachmentParameters_Parms, ScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(nullptr, 0) }; // 1532071077
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_LocationRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_LocationRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_RotationRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_RotationRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_ScaleRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::NewProp_ScaleRule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09 * Set AutoAttachParent, AutoAttachSocketName, AutoAttachLocationRule, AutoAttachRotationRule, AutoAttachScaleRule to the specified parameters. Does not change bAutoManageAttachment; that must be set separately.\n\x09 * @param  Parent\x09\x09\x09""Component to attach to.\n\x09 * @param  SocketName\x09\x09Socket on Parent to attach to.\n\x09 * @param  LocationRule\x09\x09Option for how we handle our location when we attach to Parent.\n\x09 * @param  RotationRule\x09\x09Option for how we handle our rotation when we attach to Parent.\n\x09 * @param  ScaleRule\x09\x09Option for how we handle our scale when we attach to Parent.\n\x09 * @see bAutoManageAttachment, AutoAttachParent, AutoAttachSocketName, AutoAttachLocationRule, AutoAttachRotationRule, AutoAttachScaleRule\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Set AutoAttachParent, AutoAttachSocketName, AutoAttachLocationRule, AutoAttachRotationRule, AutoAttachScaleRule to the specified parameters. Does not change bAutoManageAttachment; that must be set separately.\n@param  Parent                       Component to attach to.\n@param  SocketName           Socket on Parent to attach to.\n@param  LocationRule         Option for how we handle our location when we attach to Parent.\n@param  RotationRule         Option for how we handle our rotation when we attach to Parent.\n@param  ScaleRule            Option for how we handle our scale when we attach to Parent.\n@see bAutoManageAttachment, AutoAttachParent, AutoAttachSocketName, AutoAttachLocationRule, AutoAttachRotationRule, AutoAttachScaleRule" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFXSystemComponent, nullptr, "SetAutoAttachmentParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::FXSystemComponent_eventSetAutoAttachmentParameters_Parms), Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics
	{
		struct FXSystemComponent_eventSetBoolParameter_Parms
		{
			FName ParameterName;
			bool Param;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static void NewProp_Param_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Param;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FXSystemComponent_eventSetBoolParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::NewProp_Param_SetBit(void* Obj)
	{
		((FXSystemComponent_eventSetBoolParameter_Parms*)Obj)->Param = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FXSystemComponent_eventSetBoolParameter_Parms), &Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::NewProp_Param_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**Change a named boolean parameter, ParticleSystemComponent converts to float.*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Change a named boolean parameter, ParticleSystemComponent converts to float." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFXSystemComponent, nullptr, "SetBoolParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::FXSystemComponent_eventSetBoolParameter_Parms), Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics
	{
		struct FXSystemComponent_eventSetColorParameter_Parms
		{
			FName ParameterName;
			FLinearColor Param;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Param;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FXSystemComponent_eventSetColorParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FXSystemComponent_eventSetColorParameter_Parms, Param), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/** \n\x09 *\x09Set a named color instance parameter on this ParticleSystemComponent. \n\x09 *\x09Updates the parameter if it already exists, or creates a new entry if not. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Set a named color instance parameter on this ParticleSystemComponent.\nUpdates the parameter if it already exists, or creates a new entry if not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFXSystemComponent, nullptr, "SetColorParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::FXSystemComponent_eventSetColorParameter_Parms), Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFXSystemComponent_SetColorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFXSystemComponent_SetColorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics
	{
		struct FXSystemComponent_eventSetEmitterEnable_Parms
		{
			FName EmitterName;
			bool bNewEnableState;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_EmitterName;
		static void NewProp_bNewEnableState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewEnableState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FXSystemComponent_eventSetEmitterEnable_Parms, EmitterName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::NewProp_bNewEnableState_SetBit(void* Obj)
	{
		((FXSystemComponent_eventSetEmitterEnable_Parms*)Obj)->bNewEnableState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::NewProp_bNewEnableState = { "bNewEnableState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FXSystemComponent_eventSetEmitterEnable_Parms), &Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::NewProp_bNewEnableState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::NewProp_EmitterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::NewProp_bNewEnableState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09 *\x09""Enables/Disables a sub-emitter\n\x09 *\n\x09 *\x09@param\x09""EmitterName\x09\x09\x09The name of the sub-emitter to set it on\n\x09 *\x09@param\x09""bNewEnableState\x09\x09The value to set it to\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Enables/Disables a sub-emitter\n\n@param  EmitterName                     The name of the sub-emitter to set it on\n@param  bNewEnableState         The value to set it to" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFXSystemComponent, nullptr, "SetEmitterEnable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::FXSystemComponent_eventSetEmitterEnable_Parms), Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics
	{
		struct FXSystemComponent_eventSetFloatParameter_Parms
		{
			FName ParameterName;
			float Param;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FXSystemComponent_eventSetFloatParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FXSystemComponent_eventSetFloatParameter_Parms, Param), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/** Change a named float parameter */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Change a named float parameter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFXSystemComponent, nullptr, "SetFloatParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::FXSystemComponent_eventSetFloatParameter_Parms), Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics
	{
		struct FXSystemComponent_eventSetIntParameter_Parms
		{
			FName ParameterName;
			int32 Param;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Param;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FXSystemComponent_eventSetIntParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FXSystemComponent_eventSetIntParameter_Parms, Param), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/** Change a named int parameter */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Change a named int parameter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFXSystemComponent, nullptr, "SetIntParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::FXSystemComponent_eventSetIntParameter_Parms), Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFXSystemComponent_SetIntParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFXSystemComponent_SetIntParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics
	{
		struct FXSystemComponent_eventSetUseAutoManageAttachment_Parms
		{
			bool bAutoManage;
		};
		static void NewProp_bAutoManage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoManage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::NewProp_bAutoManage_SetBit(void* Obj)
	{
		((FXSystemComponent_eventSetUseAutoManageAttachment_Parms*)Obj)->bAutoManage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::NewProp_bAutoManage = { "bAutoManage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FXSystemComponent_eventSetUseAutoManageAttachment_Parms), &Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::NewProp_bAutoManage_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::NewProp_bAutoManage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09 * Sets whether we should automatically attach to AutoAttachParent when activated, and detach from our parent when completed.\n\x09 * This overrides any current attachment that may be present at the time of activation (deferring initial attachment until activation, if AutoAttachParent is null).\n\x09 * When enabled, detachment occurs regardless of whether AutoAttachParent is assigned, and the relative transform from the time of activation is restored.\n\x09 * This also disables attachment on dedicated servers, where we don't actually activate even if bAutoActivate is true.\n\x09 * @see SetAutoAttachmentParameters()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Sets whether we should automatically attach to AutoAttachParent when activated, and detach from our parent when completed.\nThis overrides any current attachment that may be present at the time of activation (deferring initial attachment until activation, if AutoAttachParent is null).\nWhen enabled, detachment occurs regardless of whether AutoAttachParent is assigned, and the relative transform from the time of activation is restored.\nThis also disables attachment on dedicated servers, where we don't actually activate even if bAutoActivate is true.\n@see SetAutoAttachmentParameters()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFXSystemComponent, nullptr, "SetUseAutoManageAttachment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::FXSystemComponent_eventSetUseAutoManageAttachment_Parms), Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics
	{
		struct FXSystemComponent_eventSetVectorParameter_Parms
		{
			FName ParameterName;
			FVector Param;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Param;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FXSystemComponent_eventSetVectorParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FXSystemComponent_eventSetVectorParameter_Parms, Param), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/** \n\x09 *\x09Set a named vector instance parameter on this ParticleSystemComponent.\n\x09 *\x09Updates the parameter if it already exists, or creates a new entry if not. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Set a named vector instance parameter on this ParticleSystemComponent.\nUpdates the parameter if it already exists, or creates a new entry if not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFXSystemComponent, nullptr, "SetVectorParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::FXSystemComponent_eventSetVectorParameter_Parms), Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFXSystemComponent);
	UClass* Z_Construct_UClass_UFXSystemComponent_NoRegister()
	{
		return UFXSystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFXSystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFXSystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFXSystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFXSystemComponent_GetFXSystemAsset, "GetFXSystemAsset" }, // 2602455899
		{ &Z_Construct_UFunction_UFXSystemComponent_ReleaseToPool, "ReleaseToPool" }, // 2084996322
		{ &Z_Construct_UFunction_UFXSystemComponent_SetActorParameter, "SetActorParameter" }, // 4000867094
		{ &Z_Construct_UFunction_UFXSystemComponent_SetAutoAttachmentParameters, "SetAutoAttachmentParameters" }, // 2530532422
		{ &Z_Construct_UFunction_UFXSystemComponent_SetBoolParameter, "SetBoolParameter" }, // 3936148087
		{ &Z_Construct_UFunction_UFXSystemComponent_SetColorParameter, "SetColorParameter" }, // 454639234
		{ &Z_Construct_UFunction_UFXSystemComponent_SetEmitterEnable, "SetEmitterEnable" }, // 3612527529
		{ &Z_Construct_UFunction_UFXSystemComponent_SetFloatParameter, "SetFloatParameter" }, // 692691471
		{ &Z_Construct_UFunction_UFXSystemComponent_SetIntParameter, "SetIntParameter" }, // 2799822905
		{ &Z_Construct_UFunction_UFXSystemComponent_SetUseAutoManageAttachment, "SetUseAutoManageAttachment" }, // 3792020027
		{ &Z_Construct_UFunction_UFXSystemComponent_SetVectorParameter, "SetVectorParameter" }, // 3619612704
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFXSystemComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Particles/ParticleSystemComponent.h" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFXSystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFXSystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFXSystemComponent_Statics::ClassParams = {
		&UFXSystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UFXSystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFXSystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFXSystemComponent()
	{
		if (!Z_Registration_Info_UClass_UFXSystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFXSystemComponent.OuterSingleton, Z_Construct_UClass_UFXSystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFXSystemComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UFXSystemComponent>()
	{
		return UFXSystemComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFXSystemComponent);
	UFXSystemComponent::~UFXSystemComponent() {}
	DEFINE_FUNCTION(UParticleSystemComponent::execGenerateParticleEvent)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InEventName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InEmitterTime);
		P_GET_STRUCT(FVector,Z_Param_InLocation);
		P_GET_STRUCT(FVector,Z_Param_InDirection);
		P_GET_STRUCT(FVector,Z_Param_InVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateParticleEvent(Z_Param_InEventName,Z_Param_InEmitterTime,Z_Param_InLocation,Z_Param_InDirection,Z_Param_InVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParticleSystemComponent::execGetNamedMaterial)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetNamedMaterial(Z_Param_InName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParticleSystemComponent::execCreateNamedDynamicMaterialInstance)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_GET_OBJECT(UMaterialInterface,Z_Param_SourceMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->CreateNamedDynamicMaterialInstance(Z_Param_InName,Z_Param_SourceMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParticleSystemComponent::execSetTrailSourceData)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InFirstSocketName);
		P_GET_PROPERTY(FNameProperty,Z_Param_InSecondSocketName);
		P_GET_PROPERTY(FByteProperty,Z_Param_InWidthMode);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWidth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrailSourceData(Z_Param_InFirstSocketName,Z_Param_InSecondSocketName,ETrailWidthMode(Z_Param_InWidthMode),Z_Param_InWidth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParticleSystemComponent::execEndTrails)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndTrails();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParticleSystemComponent::execBeginTrails)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InFirstSocketName);
		P_GET_PROPERTY(FNameProperty,Z_Param_InSecondSocketName);
		P_GET_PROPERTY(FByteProperty,Z_Param_InWidthMode);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWidth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginTrails(Z_Param_InFirstSocketName,Z_Param_InSecondSocketName,ETrailWidthMode(Z_Param_InWidthMode),Z_Param_InWidth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParticleSystemComponent::execGetNumActiveParticles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumActiveParticles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParticleSystemComponent::execSetTemplate)
	{
		P_GET_OBJECT(UParticleSystem,Z_Param_NewTemplate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTemplate(Z_Param_NewTemplate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParticleSystemComponent::execSetMaterialParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_OBJECT(UMaterialInterface,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterialParameter(Z_Param_ParameterName,Z_Param_Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParticleSystemComponent::execGetBeamTargetStrength)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_TargetIndex);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutTargetStrength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBeamTargetStrength(Z_Param_EmitterIndex,Z_Param_TargetIndex,Z_Param_Out_OutTargetStrength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParticleSystemComponent::execGetBeamTargetTangent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_TargetIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutTangentPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBeamTargetTangent(Z_Param_EmitterIndex,Z_Param_TargetIndex,Z_Param_Out_OutTangentPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParticleSystemComponent::execGetBeamTargetPoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_TargetIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutTargetPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBeamTargetPoint(Z_Param_EmitterIndex,Z_Param_TargetIndex,Z_Param_Out_OutTargetPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParticleSystemComponent::execGetBeamSourceStrength)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceIndex);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutSourceStrength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBeamSourceStrength(Z_Param_EmitterIndex,Z_Param_SourceIndex,Z_Param_Out_OutSourceStrength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParticleSystemComponent::execGetBeamSourceTangent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutTangentPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBeamSourceTangent(Z_Param_EmitterIndex,Z_Param_SourceIndex,Z_Param_Out_OutTangentPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParticleSystemComponent::execGetBeamSourcePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutSourcePoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBeamSourcePoint(Z_Param_EmitterIndex,Z_Param_SourceIndex,Z_Param_Out_OutSourcePoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParticleSystemComponent::execGetBeamEndPoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutEndPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBeamEndPoint(Z_Param_EmitterIndex,Z_Param_Out_OutEndPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParticleSystemComponent::execSetBeamTargetStrength)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewTargetStrength);
		P_GET_PROPERTY(FIntProperty,Z_Param_TargetIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBeamTargetStrength(Z_Param_EmitterIndex,Z_Param_NewTargetStrength,Z_Param_TargetIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParticleSystemComponent::execSetBeamTargetTangent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
		P_GET_STRUCT(FVector,Z_Param_NewTangentPoint);
		P_GET_PROPERTY(FIntProperty,Z_Param_TargetIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBeamTargetTangent(Z_Param_EmitterIndex,Z_Param_NewTangentPoint,Z_Param_TargetIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParticleSystemComponent::execSetBeamTargetPoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
		P_GET_STRUCT(FVector,Z_Param_NewTargetPoint);
		P_GET_PROPERTY(FIntProperty,Z_Param_TargetIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBeamTargetPoint(Z_Param_EmitterIndex,Z_Param_NewTargetPoint,Z_Param_TargetIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParticleSystemComponent::execSetBeamSourceStrength)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewSourceStrength);
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBeamSourceStrength(Z_Param_EmitterIndex,Z_Param_NewSourceStrength,Z_Param_SourceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParticleSystemComponent::execSetBeamSourceTangent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
		P_GET_STRUCT(FVector,Z_Param_NewTangentPoint);
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBeamSourceTangent(Z_Param_EmitterIndex,Z_Param_NewTangentPoint,Z_Param_SourceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParticleSystemComponent::execSetBeamSourcePoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
		P_GET_STRUCT(FVector,Z_Param_NewSourcePoint);
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBeamSourcePoint(Z_Param_EmitterIndex,Z_Param_NewSourcePoint,Z_Param_SourceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParticleSystemComponent::execSetBeamEndPoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
		P_GET_STRUCT(FVector,Z_Param_NewEndPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBeamEndPoint(Z_Param_EmitterIndex,Z_Param_NewEndPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParticleSystemComponent::execSetAutoAttachParams)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Parent);
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_GET_PROPERTY(FByteProperty,Z_Param_LocationType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoAttachParams(Z_Param_Parent,Z_Param_SocketName,EAttachLocation::Type(Z_Param_LocationType));
		P_NATIVE_END;
	}
	void UParticleSystemComponent::StaticRegisterNativesUParticleSystemComponent()
	{
		UClass* Class = UParticleSystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginTrails", &UParticleSystemComponent::execBeginTrails },
			{ "CreateNamedDynamicMaterialInstance", &UParticleSystemComponent::execCreateNamedDynamicMaterialInstance },
			{ "EndTrails", &UParticleSystemComponent::execEndTrails },
			{ "GenerateParticleEvent", &UParticleSystemComponent::execGenerateParticleEvent },
			{ "GetBeamEndPoint", &UParticleSystemComponent::execGetBeamEndPoint },
			{ "GetBeamSourcePoint", &UParticleSystemComponent::execGetBeamSourcePoint },
			{ "GetBeamSourceStrength", &UParticleSystemComponent::execGetBeamSourceStrength },
			{ "GetBeamSourceTangent", &UParticleSystemComponent::execGetBeamSourceTangent },
			{ "GetBeamTargetPoint", &UParticleSystemComponent::execGetBeamTargetPoint },
			{ "GetBeamTargetStrength", &UParticleSystemComponent::execGetBeamTargetStrength },
			{ "GetBeamTargetTangent", &UParticleSystemComponent::execGetBeamTargetTangent },
			{ "GetNamedMaterial", &UParticleSystemComponent::execGetNamedMaterial },
			{ "GetNumActiveParticles", &UParticleSystemComponent::execGetNumActiveParticles },
			{ "SetAutoAttachParams", &UParticleSystemComponent::execSetAutoAttachParams },
			{ "SetBeamEndPoint", &UParticleSystemComponent::execSetBeamEndPoint },
			{ "SetBeamSourcePoint", &UParticleSystemComponent::execSetBeamSourcePoint },
			{ "SetBeamSourceStrength", &UParticleSystemComponent::execSetBeamSourceStrength },
			{ "SetBeamSourceTangent", &UParticleSystemComponent::execSetBeamSourceTangent },
			{ "SetBeamTargetPoint", &UParticleSystemComponent::execSetBeamTargetPoint },
			{ "SetBeamTargetStrength", &UParticleSystemComponent::execSetBeamTargetStrength },
			{ "SetBeamTargetTangent", &UParticleSystemComponent::execSetBeamTargetTangent },
			{ "SetMaterialParameter", &UParticleSystemComponent::execSetMaterialParameter },
			{ "SetTemplate", &UParticleSystemComponent::execSetTemplate },
			{ "SetTrailSourceData", &UParticleSystemComponent::execSetTrailSourceData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics
	{
		struct ParticleSystemComponent_eventBeginTrails_Parms
		{
			FName InFirstSocketName;
			FName InSecondSocketName;
			TEnumAsByte<ETrailWidthMode> InWidthMode;
			float InWidth;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InFirstSocketName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSecondSocketName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InWidthMode;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InWidth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::NewProp_InFirstSocketName = { "InFirstSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventBeginTrails_Parms, InFirstSocketName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::NewProp_InSecondSocketName = { "InSecondSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventBeginTrails_Parms, InSecondSocketName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::NewProp_InWidthMode = { "InWidthMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventBeginTrails_Parms, InWidthMode), Z_Construct_UEnum_Engine_ETrailWidthMode, METADATA_PARAMS(nullptr, 0) }; // 1564502693
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::NewProp_InWidth = { "InWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventBeginTrails_Parms, InWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::NewProp_InFirstSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::NewProp_InSecondSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::NewProp_InWidthMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::NewProp_InWidth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Particles|Trails" },
		{ "Comment", "/**\n\x09* Begins all trail emitters in this component.\n\x09*\n\x09* @param\x09InFirstSocketName\x09The name of the first socket for the trail.\n\x09* @param\x09InSecondSocketName\x09The name of the second socket for the trail.\n\x09* @param\x09InWidthMode\x09\x09\x09How the width value is applied to the trail.\n\x09* @param\x09InWidth\x09\x09\x09\x09The width of the trail.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Begins all trail emitters in this component.\n\n@param        InFirstSocketName       The name of the first socket for the trail.\n@param        InSecondSocketName      The name of the second socket for the trail.\n@param        InWidthMode                     How the width value is applied to the trail.\n@param        InWidth                         The width of the trail." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "BeginTrails", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::ParticleSystemComponent_eventBeginTrails_Parms), Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_BeginTrails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_BeginTrails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics
	{
		struct ParticleSystemComponent_eventCreateNamedDynamicMaterialInstance_Parms
		{
			FName InName;
			UMaterialInterface* SourceMaterial;
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceMaterial;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventCreateNamedDynamicMaterialInstance_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::NewProp_SourceMaterial = { "SourceMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventCreateNamedDynamicMaterialInstance_Parms, SourceMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventCreateNamedDynamicMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::NewProp_SourceMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/**\n\x09* Creates a Dynamic Material Instance for the specified named material override, optionally from the supplied material.\n\x09* @param Name - The slot name of the material to replace.  If invalid, the material is unchanged and NULL is returned.\n\x09*/" },
		{ "CPP_Default_SourceMaterial", "None" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Creates a Dynamic Material Instance for the specified named material override, optionally from the supplied material.\n@param Name - The slot name of the material to replace.  If invalid, the material is unchanged and NULL is returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "CreateNamedDynamicMaterialInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::ParticleSystemComponent_eventCreateNamedDynamicMaterialInstance_Parms), Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParticleSystemComponent_EndTrails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_EndTrails_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Particles|Trails" },
		{ "Comment", "/**\n\x09* Ends all trail emitters in this component.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Ends all trail emitters in this component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_EndTrails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "EndTrails", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_EndTrails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_EndTrails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_EndTrails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_EndTrails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics
	{
		struct ParticleSystemComponent_eventGenerateParticleEvent_Parms
		{
			FName InEventName;
			float InEmitterTime;
			FVector InLocation;
			FVector InDirection;
			FVector InVelocity;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InEventName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEmitterTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InEmitterTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InEventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InEventName = { "InEventName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGenerateParticleEvent_Parms, InEventName), METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InEventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InEventName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InEmitterTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InEmitterTime = { "InEmitterTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGenerateParticleEvent_Parms, InEmitterTime), METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InEmitterTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InEmitterTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGenerateParticleEvent_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InDirection = { "InDirection", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGenerateParticleEvent_Parms, InDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InVelocity = { "InVelocity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGenerateParticleEvent_Parms, InVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InEventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InEmitterTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::NewProp_InVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09 *\x09Record a kismet event.\n\x09 *\n\x09 *\x09@param\x09InEventName\x09\x09\x09\x09The name of the event that fired.\n\x09 *\x09@param\x09InEmitterTime\x09\x09\x09The emitter time when the event fired.\n\x09 *\x09@param\x09InLocation\x09\x09\x09\x09The location of the particle when the event fired.\n\x09 *\x09@param\x09InVelocity\x09\x09\x09\x09The velocity of the particle when the event fired.\n\x09 *\x09@param\x09InNormal\x09\x09\x09\x09Normal vector of the collision in coordinate system of the returner. Zero=none.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Record a kismet event.\n\n@param  InEventName                             The name of the event that fired.\n@param  InEmitterTime                   The emitter time when the event fired.\n@param  InLocation                              The location of the particle when the event fired.\n@param  InVelocity                              The velocity of the particle when the event fired.\n@param  InNormal                                Normal vector of the collision in coordinate system of the returner. Zero=none." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "GenerateParticleEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::ParticleSystemComponent_eventGenerateParticleEvent_Parms), Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics
	{
		struct ParticleSystemComponent_eventGetBeamEndPoint_Parms
		{
			int32 EmitterIndex;
			FVector OutEndPoint;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutEndPoint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamEndPoint_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::NewProp_OutEndPoint = { "OutEndPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamEndPoint_Parms, OutEndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ParticleSystemComponent_eventGetBeamEndPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ParticleSystemComponent_eventGetBeamEndPoint_Parms), &Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::NewProp_EmitterIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::NewProp_OutEndPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09*\x09Get the beam end point\n\x09*\n\x09*\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to get the value of\n\x09*\n\x09*\x09@return\x09true\x09\x09""EmitterIndex is valid and End point is set - OutEndPoint is valid\n\x09*\x09\x09\x09""false\x09\x09""EmitterIndex invalid or End point is not set - OutEndPoint is invalid\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Get the beam end point\n\n@param  EmitterIndex            The index of the emitter to get the value of\n\n@return true            EmitterIndex is valid and End point is set - OutEndPoint is valid\n                false           EmitterIndex invalid or End point is not set - OutEndPoint is invalid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "GetBeamEndPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::ParticleSystemComponent_eventGetBeamEndPoint_Parms), Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics
	{
		struct ParticleSystemComponent_eventGetBeamSourcePoint_Parms
		{
			int32 EmitterIndex;
			int32 SourceIndex;
			FVector OutSourcePoint;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutSourcePoint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourcePoint_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourcePoint_Parms, SourceIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::NewProp_OutSourcePoint = { "OutSourcePoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourcePoint_Parms, OutSourcePoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ParticleSystemComponent_eventGetBeamSourcePoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ParticleSystemComponent_eventGetBeamSourcePoint_Parms), &Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::NewProp_EmitterIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::NewProp_SourceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::NewProp_OutSourcePoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09*\x09Get the beam source point\n\x09*\n\x09*\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to get\n\x09*\x09@param\x09SourceIndex\x09\x09\x09Which beam within the emitter to get\n\x09*\x09@param\x09OutSourcePoint\x09\x09Value of source point\n\x09*\n\x09*\x09@return\x09true\x09\x09""EmitterIndex and SourceIndex are valid - OutSourcePoint is valid\n\x09*\x09\x09\x09""false\x09\x09""EmitterIndex or SourceIndex is invalid - OutSourcePoint is invalid\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Get the beam source point\n\n@param  EmitterIndex            The index of the emitter to get\n@param  SourceIndex                     Which beam within the emitter to get\n@param  OutSourcePoint          Value of source point\n\n@return true            EmitterIndex and SourceIndex are valid - OutSourcePoint is valid\n                false           EmitterIndex or SourceIndex is invalid - OutSourcePoint is invalid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "GetBeamSourcePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::ParticleSystemComponent_eventGetBeamSourcePoint_Parms), Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics
	{
		struct ParticleSystemComponent_eventGetBeamSourceStrength_Parms
		{
			int32 EmitterIndex;
			int32 SourceIndex;
			float OutSourceStrength;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutSourceStrength;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourceStrength_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourceStrength_Parms, SourceIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::NewProp_OutSourceStrength = { "OutSourceStrength", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourceStrength_Parms, OutSourceStrength), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ParticleSystemComponent_eventGetBeamSourceStrength_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ParticleSystemComponent_eventGetBeamSourceStrength_Parms), &Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::NewProp_EmitterIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::NewProp_SourceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::NewProp_OutSourceStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09*\x09Get the beam source strength\n\x09*\n\x09*\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to get\n\x09*\x09@param\x09SourceIndex\x09\x09\x09Which beam within the emitter to get\n\x09*\x09@param\x09OutSourceStrength\x09\x09Value of source tangent\n\x09*\n\x09*\x09@return\x09true\x09\x09""EmitterIndex and SourceIndex are valid - OutSourceStrength is valid\n\x09*\x09\x09\x09""false\x09\x09""EmitterIndex or SourceIndex is invalid - OutSourceStrength is invalid\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Get the beam source strength\n\n@param  EmitterIndex            The index of the emitter to get\n@param  SourceIndex                     Which beam within the emitter to get\n@param  OutSourceStrength               Value of source tangent\n\n@return true            EmitterIndex and SourceIndex are valid - OutSourceStrength is valid\n                false           EmitterIndex or SourceIndex is invalid - OutSourceStrength is invalid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "GetBeamSourceStrength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::ParticleSystemComponent_eventGetBeamSourceStrength_Parms), Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics
	{
		struct ParticleSystemComponent_eventGetBeamSourceTangent_Parms
		{
			int32 EmitterIndex;
			int32 SourceIndex;
			FVector OutTangentPoint;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTangentPoint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourceTangent_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourceTangent_Parms, SourceIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::NewProp_OutTangentPoint = { "OutTangentPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamSourceTangent_Parms, OutTangentPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ParticleSystemComponent_eventGetBeamSourceTangent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ParticleSystemComponent_eventGetBeamSourceTangent_Parms), &Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::NewProp_EmitterIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::NewProp_SourceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::NewProp_OutTangentPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09*\x09Get the beam source tangent\n\x09*\n\x09*\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to get\n\x09*\x09@param\x09SourceIndex\x09\x09\x09Which beam within the emitter to get\n\x09*\x09@param\x09OutTangentPoint\x09\x09Value of source tangent\n\x09*\n\x09*\x09@return\x09true\x09\x09""EmitterIndex and SourceIndex are valid - OutTangentPoint is valid\n\x09*\x09\x09\x09""false\x09\x09""EmitterIndex or SourceIndex is invalid - OutTangentPoint is invalid\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Get the beam source tangent\n\n@param  EmitterIndex            The index of the emitter to get\n@param  SourceIndex                     Which beam within the emitter to get\n@param  OutTangentPoint         Value of source tangent\n\n@return true            EmitterIndex and SourceIndex are valid - OutTangentPoint is valid\n                false           EmitterIndex or SourceIndex is invalid - OutTangentPoint is invalid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "GetBeamSourceTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::ParticleSystemComponent_eventGetBeamSourceTangent_Parms), Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics
	{
		struct ParticleSystemComponent_eventGetBeamTargetPoint_Parms
		{
			int32 EmitterIndex;
			int32 TargetIndex;
			FVector OutTargetPoint;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTargetPoint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetPoint_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetPoint_Parms, TargetIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::NewProp_OutTargetPoint = { "OutTargetPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetPoint_Parms, OutTargetPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ParticleSystemComponent_eventGetBeamTargetPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ParticleSystemComponent_eventGetBeamTargetPoint_Parms), &Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::NewProp_EmitterIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::NewProp_TargetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::NewProp_OutTargetPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09*\x09Get the beam target point\n\x09*\n\x09*\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to get\n\x09*\x09@param\x09TargetIndex\x09\x09\x09Which beam within the emitter to get\n\x09*\x09@param\x09OutTargetPoint\x09\x09Value of target point\n\x09*\n\x09*\x09@return\x09true\x09\x09""EmitterIndex and TargetIndex are valid - OutTargetPoint is valid\n\x09*\x09\x09\x09""false\x09\x09""EmitterIndex or TargetIndex is invalid - OutTargetPoint is invalid\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Get the beam target point\n\n@param  EmitterIndex            The index of the emitter to get\n@param  TargetIndex                     Which beam within the emitter to get\n@param  OutTargetPoint          Value of target point\n\n@return true            EmitterIndex and TargetIndex are valid - OutTargetPoint is valid\n                false           EmitterIndex or TargetIndex is invalid - OutTargetPoint is invalid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "GetBeamTargetPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::ParticleSystemComponent_eventGetBeamTargetPoint_Parms), Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics
	{
		struct ParticleSystemComponent_eventGetBeamTargetStrength_Parms
		{
			int32 EmitterIndex;
			int32 TargetIndex;
			float OutTargetStrength;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutTargetStrength;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetStrength_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetStrength_Parms, TargetIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::NewProp_OutTargetStrength = { "OutTargetStrength", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetStrength_Parms, OutTargetStrength), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ParticleSystemComponent_eventGetBeamTargetStrength_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ParticleSystemComponent_eventGetBeamTargetStrength_Parms), &Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::NewProp_EmitterIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::NewProp_TargetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::NewProp_OutTargetStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09*\x09Get the beam target strength\n\x09*\n\x09*\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to get\n\x09*\x09@param\x09TargetIndex\x09\x09\x09Which beam within the emitter to get\n\x09*\x09@param\x09OutTargetStrength\x09Value of target tangent\n\x09*\n\x09*\x09@return\x09true\x09\x09""EmitterIndex and TargetIndex are valid - OutTargetStrength is valid\n\x09*\x09\x09\x09""false\x09\x09""EmitterIndex or TargetIndex is invalid - OutTargetStrength is invalid\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Get the beam target strength\n\n@param  EmitterIndex            The index of the emitter to get\n@param  TargetIndex                     Which beam within the emitter to get\n@param  OutTargetStrength       Value of target tangent\n\n@return true            EmitterIndex and TargetIndex are valid - OutTargetStrength is valid\n                false           EmitterIndex or TargetIndex is invalid - OutTargetStrength is invalid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "GetBeamTargetStrength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::ParticleSystemComponent_eventGetBeamTargetStrength_Parms), Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics
	{
		struct ParticleSystemComponent_eventGetBeamTargetTangent_Parms
		{
			int32 EmitterIndex;
			int32 TargetIndex;
			FVector OutTangentPoint;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTangentPoint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetTangent_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetTangent_Parms, TargetIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::NewProp_OutTangentPoint = { "OutTangentPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetBeamTargetTangent_Parms, OutTangentPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ParticleSystemComponent_eventGetBeamTargetTangent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ParticleSystemComponent_eventGetBeamTargetTangent_Parms), &Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::NewProp_EmitterIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::NewProp_TargetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::NewProp_OutTangentPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09*\x09Get the beam target tangent\n\x09*\n\x09*\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to get\n\x09*\x09@param\x09TargetIndex\x09\x09\x09Which beam within the emitter to get\n\x09*\x09@param\x09OutTangentPoint\x09\x09Value of target tangent\n\x09*\n\x09*\x09@return\x09true\x09\x09""EmitterIndex and TargetIndex are valid - OutTangentPoint is valid\n\x09*\x09\x09\x09""false\x09\x09""EmitterIndex or TargetIndex is invalid - OutTangentPoint is invalid\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Get the beam target tangent\n\n@param  EmitterIndex            The index of the emitter to get\n@param  TargetIndex                     Which beam within the emitter to get\n@param  OutTangentPoint         Value of target tangent\n\n@return true            EmitterIndex and TargetIndex are valid - OutTangentPoint is valid\n                false           EmitterIndex or TargetIndex is invalid - OutTangentPoint is invalid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "GetBeamTargetTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::ParticleSystemComponent_eventGetBeamTargetTangent_Parms), Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics
	{
		struct ParticleSystemComponent_eventGetNamedMaterial_Parms
		{
			FName InName;
			UMaterialInterface* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetNamedMaterial_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetNamedMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Returns a named material. If this named material is not found, returns NULL. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Returns a named material. If this named material is not found, returns NULL." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "GetNamedMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::ParticleSystemComponent_eventGetNamedMaterial_Parms), Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles_Statics
	{
		struct ParticleSystemComponent_eventGetNumActiveParticles_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventGetNumActiveParticles_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/** Get the current number of active particles in this system */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Get the current number of active particles in this system" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "GetNumActiveParticles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles_Statics::ParticleSystemComponent_eventGetNumActiveParticles_Parms), Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics
	{
		struct ParticleSystemComponent_eventSetAutoAttachParams_Parms
		{
			USceneComponent* Parent;
			FName SocketName;
			TEnumAsByte<EAttachLocation::Type> LocationType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LocationType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetAutoAttachParams_Parms, Parent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::NewProp_Parent_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetAutoAttachParams_Parms, SocketName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetAutoAttachParams_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) }; // 1954919674
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::NewProp_LocationType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09 * DEPRECATED: Set AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType to the specified parameters. Does not change bAutoManageAttachment; that must be set separately.\n\x09 * @param  Parent\x09\x09\x09""Component to attach to. \n\x09 * @param  SocketName\x09\x09Socket on Parent to attach to.\n\x09 * @param  LocationType\x09\x09Option for how we handle our location when we attach to Parent.\n\x09 * @see bAutoManageAttachment, AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType\n\x09 */" },
		{ "CPP_Default_LocationType", "KeepRelativeOffset" },
		{ "CPP_Default_SocketName", "None" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use Set Auto Attachment Parameters" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "DEPRECATED: Set AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType to the specified parameters. Does not change bAutoManageAttachment; that must be set separately.\n@param  Parent                       Component to attach to.\n@param  SocketName           Socket on Parent to attach to.\n@param  LocationType         Option for how we handle our location when we attach to Parent.\n@see bAutoManageAttachment, AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "SetAutoAttachParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::ParticleSystemComponent_eventSetAutoAttachParams_Parms), Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics
	{
		struct ParticleSystemComponent_eventSetBeamEndPoint_Parms
		{
			int32 EmitterIndex;
			FVector NewEndPoint;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewEndPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamEndPoint_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::NewProp_NewEndPoint = { "NewEndPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamEndPoint_Parms, NewEndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::NewProp_EmitterIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::NewProp_NewEndPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09 *\x09Set the beam end point\n\x09 *\n\x09 *\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to set it on\n\x09 *\x09@param\x09NewEndPoint\x09\x09\x09The value to set it to\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Set the beam end point\n\n@param  EmitterIndex            The index of the emitter to set it on\n@param  NewEndPoint                     The value to set it to" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "SetBeamEndPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::ParticleSystemComponent_eventSetBeamEndPoint_Parms), Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics
	{
		struct ParticleSystemComponent_eventSetBeamSourcePoint_Parms
		{
			int32 EmitterIndex;
			FVector NewSourcePoint;
			int32 SourceIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewSourcePoint;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourcePoint_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::NewProp_NewSourcePoint = { "NewSourcePoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourcePoint_Parms, NewSourcePoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourcePoint_Parms, SourceIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::NewProp_EmitterIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::NewProp_NewSourcePoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::NewProp_SourceIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09 *\x09Set the beam source point\n\x09 *\n\x09 *\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to set it on\n\x09 *\x09@param\x09NewSourcePoint\x09\x09The value to set it to\n\x09 *\x09@param\x09SourceIndex\x09\x09\x09Which beam within the emitter to set it on\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Set the beam source point\n\n@param  EmitterIndex            The index of the emitter to set it on\n@param  NewSourcePoint          The value to set it to\n@param  SourceIndex                     Which beam within the emitter to set it on" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "SetBeamSourcePoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::ParticleSystemComponent_eventSetBeamSourcePoint_Parms), Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics
	{
		struct ParticleSystemComponent_eventSetBeamSourceStrength_Parms
		{
			int32 EmitterIndex;
			float NewSourceStrength;
			int32 SourceIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSourceStrength;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourceStrength_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::NewProp_NewSourceStrength = { "NewSourceStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourceStrength_Parms, NewSourceStrength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourceStrength_Parms, SourceIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::NewProp_EmitterIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::NewProp_NewSourceStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::NewProp_SourceIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09 *\x09Set the beam source strength\n\x09 *\n\x09 *\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to set it on\n\x09 *\x09@param\x09NewSourceStrength\x09The value to set it to\n\x09 *\x09@param\x09SourceIndex\x09\x09\x09Which beam within the emitter to set it on\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Set the beam source strength\n\n@param  EmitterIndex            The index of the emitter to set it on\n@param  NewSourceStrength       The value to set it to\n@param  SourceIndex                     Which beam within the emitter to set it on" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "SetBeamSourceStrength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::ParticleSystemComponent_eventSetBeamSourceStrength_Parms), Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics
	{
		struct ParticleSystemComponent_eventSetBeamSourceTangent_Parms
		{
			int32 EmitterIndex;
			FVector NewTangentPoint;
			int32 SourceIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTangentPoint;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourceTangent_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::NewProp_NewTangentPoint = { "NewTangentPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourceTangent_Parms, NewTangentPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamSourceTangent_Parms, SourceIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::NewProp_EmitterIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::NewProp_NewTangentPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::NewProp_SourceIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09 *\x09Set the beam source tangent\n\x09 *\n\x09 *\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to set it on\n\x09 *\x09@param\x09NewTangentPoint\x09\x09The value to set it to\n\x09 *\x09@param\x09SourceIndex\x09\x09\x09Which beam within the emitter to set it on\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Set the beam source tangent\n\n@param  EmitterIndex            The index of the emitter to set it on\n@param  NewTangentPoint         The value to set it to\n@param  SourceIndex                     Which beam within the emitter to set it on" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "SetBeamSourceTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::ParticleSystemComponent_eventSetBeamSourceTangent_Parms), Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics
	{
		struct ParticleSystemComponent_eventSetBeamTargetPoint_Parms
		{
			int32 EmitterIndex;
			FVector NewTargetPoint;
			int32 TargetIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTargetPoint;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetPoint_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::NewProp_NewTargetPoint = { "NewTargetPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetPoint_Parms, NewTargetPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetPoint_Parms, TargetIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::NewProp_EmitterIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::NewProp_NewTargetPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::NewProp_TargetIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09 *\x09Set the beam target point\n\x09 *\n\x09 *\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to set it on\n\x09 *\x09@param\x09NewTargetPoint\x09\x09The value to set it to\n\x09 *\x09@param\x09TargetIndex\x09\x09\x09Which beam within the emitter to set it on\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Set the beam target point\n\n@param  EmitterIndex            The index of the emitter to set it on\n@param  NewTargetPoint          The value to set it to\n@param  TargetIndex                     Which beam within the emitter to set it on" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "SetBeamTargetPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::ParticleSystemComponent_eventSetBeamTargetPoint_Parms), Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics
	{
		struct ParticleSystemComponent_eventSetBeamTargetStrength_Parms
		{
			int32 EmitterIndex;
			float NewTargetStrength;
			int32 TargetIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTargetStrength;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetStrength_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::NewProp_NewTargetStrength = { "NewTargetStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetStrength_Parms, NewTargetStrength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetStrength_Parms, TargetIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::NewProp_EmitterIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::NewProp_NewTargetStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::NewProp_TargetIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09 *\x09Set the beam target strength\n\x09 *\n\x09 *\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to set it on\n\x09 *\x09@param\x09NewTargetStrength\x09The value to set it to\n\x09 *\x09@param\x09TargetIndex\x09\x09\x09Which beam within the emitter to set it on\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Set the beam target strength\n\n@param  EmitterIndex            The index of the emitter to set it on\n@param  NewTargetStrength       The value to set it to\n@param  TargetIndex                     Which beam within the emitter to set it on" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "SetBeamTargetStrength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::ParticleSystemComponent_eventSetBeamTargetStrength_Parms), Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics
	{
		struct ParticleSystemComponent_eventSetBeamTargetTangent_Parms
		{
			int32 EmitterIndex;
			FVector NewTangentPoint;
			int32 TargetIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTangentPoint;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetTangent_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::NewProp_NewTangentPoint = { "NewTangentPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetTangent_Parms, NewTangentPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetBeamTargetTangent_Parms, TargetIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::NewProp_EmitterIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::NewProp_NewTangentPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::NewProp_TargetIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/**\n\x09 *\x09Set the beam target tangent\n\x09 *\n\x09 *\x09@param\x09""EmitterIndex\x09\x09The index of the emitter to set it on\n\x09 *\x09@param\x09NewTangentPoint\x09\x09The value to set it to\n\x09 *\x09@param\x09TargetIndex\x09\x09\x09Which beam within the emitter to set it on\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Set the beam target tangent\n\n@param  EmitterIndex            The index of the emitter to set it on\n@param  NewTangentPoint         The value to set it to\n@param  TargetIndex                     Which beam within the emitter to set it on" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "SetBeamTargetTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::ParticleSystemComponent_eventSetBeamTargetTangent_Parms), Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics
	{
		struct ParticleSystemComponent_eventSetMaterialParameter_Parms
		{
			FName ParameterName;
			UMaterialInterface* Param;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Param;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetMaterialParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetMaterialParameter_Parms, Param), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/** \n\x09 *\x09Set a named material instance parameter on this ParticleSystemComponent. \n\x09 *\x09Updates the parameter if it already exists, or creates a new entry if not. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Set a named material instance parameter on this ParticleSystemComponent.\nUpdates the parameter if it already exists, or creates a new entry if not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "SetMaterialParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::ParticleSystemComponent_eventSetMaterialParameter_Parms), Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParticleSystemComponent_SetTemplate_Statics
	{
		struct ParticleSystemComponent_eventSetTemplate_Parms
		{
			UParticleSystem* NewTemplate;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetTemplate_Statics::NewProp_NewTemplate = { "NewTemplate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetTemplate_Parms, NewTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_SetTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetTemplate_Statics::NewProp_NewTemplate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_SetTemplate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Components|ParticleSystem" },
		{ "Comment", "/** Change the ParticleSystem used by this ParticleSystemComponent */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Change the ParticleSystem used by this ParticleSystemComponent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_SetTemplate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "SetTemplate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetTemplate_Statics::ParticleSystemComponent_eventSetTemplate_Parms), Z_Construct_UFunction_UParticleSystemComponent_SetTemplate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetTemplate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_SetTemplate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetTemplate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetTemplate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_SetTemplate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics
	{
		struct ParticleSystemComponent_eventSetTrailSourceData_Parms
		{
			FName InFirstSocketName;
			FName InSecondSocketName;
			TEnumAsByte<ETrailWidthMode> InWidthMode;
			float InWidth;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InFirstSocketName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSecondSocketName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InWidthMode;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InWidth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::NewProp_InFirstSocketName = { "InFirstSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetTrailSourceData_Parms, InFirstSocketName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::NewProp_InSecondSocketName = { "InSecondSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetTrailSourceData_Parms, InSecondSocketName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::NewProp_InWidthMode = { "InWidthMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetTrailSourceData_Parms, InWidthMode), Z_Construct_UEnum_Engine_ETrailWidthMode, METADATA_PARAMS(nullptr, 0) }; // 1564502693
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::NewProp_InWidth = { "InWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParticleSystemComponent_eventSetTrailSourceData_Parms, InWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::NewProp_InFirstSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::NewProp_InSecondSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::NewProp_InWidthMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::NewProp_InWidth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Effects|Particles|Trails" },
		{ "Comment", "/**\n\x09* Sets the defining data for all trails in this component.\n\x09*\n\x09* @param\x09InFirstSocketName\x09The name of the first socket for the trail.\n\x09* @param\x09InSecondSocketName\x09The name of the second socket for the trail.\n\x09* @param\x09InWidthMode\x09\x09\x09How the width value is applied to the trail.\n\x09* @param\x09InWidth\x09\x09\x09\x09The width of the trail.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Sets the defining data for all trails in this component.\n\n@param        InFirstSocketName       The name of the first socket for the trail.\n@param        InSecondSocketName      The name of the second socket for the trail.\n@param        InWidthMode                     How the width value is applied to the trail.\n@param        InWidth                         The width of the trail." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticleSystemComponent, nullptr, "SetTrailSourceData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::ParticleSystemComponent_eventSetTrailSourceData_Parms), Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleSystemComponent);
	UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister()
	{
		return UParticleSystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UParticleSystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Template;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EmitterMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EmitterMaterials;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkelMeshComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkelMeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SkelMeshComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetOnDetach_MetaData[];
#endif
		static void NewProp_bResetOnDetach_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetOnDetach;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateOnDedicatedServer_MetaData[];
#endif
		static void NewProp_bUpdateOnDedicatedServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateOnDedicatedServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRecycling_MetaData[];
#endif
		static void NewProp_bAllowRecycling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRecycling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoManageAttachment_MetaData[];
#endif
		static void NewProp_bAutoManageAttachment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoManageAttachment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoAttachWeldSimulatedBodies_MetaData[];
#endif
		static void NewProp_bAutoAttachWeldSimulatedBodies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoAttachWeldSimulatedBodies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWarmingUp_MetaData[];
#endif
		static void NewProp_bWarmingUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarmingUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideLODMethod_MetaData[];
#endif
		static void NewProp_bOverrideLODMethod_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLODMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipUpdateDynamicDataDuringTick_MetaData[];
#endif
		static void NewProp_bSkipUpdateDynamicDataDuringTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipUpdateDynamicDataDuringTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LODMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RequiredSignificance_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredSignificance_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RequiredSignificance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnParticleSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnParticleSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnParticleBurst_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnParticleBurst;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnParticleDeath_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnParticleDeath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnParticleCollide_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnParticleCollide;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOldPositionValid_MetaData[];
#endif
		static void NewProp_bOldPositionValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOldPositionValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartSysVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PartSysVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarmupTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarmupTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarmupTickRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarmupTickRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondsBeforeInactive_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondsBeforeInactive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTimeBeforeForceUpdateTransform_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTimeBeforeForceUpdateTransform;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorLODLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EditorLODLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorDetailMode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EditorDetailMode;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReplayClips_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplayClips_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReplayClips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomTimeDilation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomTimeDilation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachParent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AutoAttachParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AutoAttachSocketName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachLocationType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoAttachLocationType;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoAttachLocationRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachLocationRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoAttachLocationRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoAttachRotationRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachRotationRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoAttachRotationRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoAttachScaleRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAttachScaleRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoAttachScaleRule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSystemFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSystemFinished;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleSystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFXSystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UParticleSystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UParticleSystemComponent_BeginTrails, "BeginTrails" }, // 4042990177
		{ &Z_Construct_UFunction_UParticleSystemComponent_CreateNamedDynamicMaterialInstance, "CreateNamedDynamicMaterialInstance" }, // 753314919
		{ &Z_Construct_UFunction_UParticleSystemComponent_EndTrails, "EndTrails" }, // 203318622
		{ &Z_Construct_UFunction_UParticleSystemComponent_GenerateParticleEvent, "GenerateParticleEvent" }, // 3146134287
		{ &Z_Construct_UFunction_UParticleSystemComponent_GetBeamEndPoint, "GetBeamEndPoint" }, // 1512195283
		{ &Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourcePoint, "GetBeamSourcePoint" }, // 317260550
		{ &Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceStrength, "GetBeamSourceStrength" }, // 3640810968
		{ &Z_Construct_UFunction_UParticleSystemComponent_GetBeamSourceTangent, "GetBeamSourceTangent" }, // 1701171277
		{ &Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetPoint, "GetBeamTargetPoint" }, // 3919930333
		{ &Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetStrength, "GetBeamTargetStrength" }, // 3752372328
		{ &Z_Construct_UFunction_UParticleSystemComponent_GetBeamTargetTangent, "GetBeamTargetTangent" }, // 1225569384
		{ &Z_Construct_UFunction_UParticleSystemComponent_GetNamedMaterial, "GetNamedMaterial" }, // 4116838614
		{ &Z_Construct_UFunction_UParticleSystemComponent_GetNumActiveParticles, "GetNumActiveParticles" }, // 52146839
		{ &Z_Construct_UFunction_UParticleSystemComponent_SetAutoAttachParams, "SetAutoAttachParams" }, // 2814292320
		{ &Z_Construct_UFunction_UParticleSystemComponent_SetBeamEndPoint, "SetBeamEndPoint" }, // 4028408449
		{ &Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourcePoint, "SetBeamSourcePoint" }, // 2226027890
		{ &Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceStrength, "SetBeamSourceStrength" }, // 1580030401
		{ &Z_Construct_UFunction_UParticleSystemComponent_SetBeamSourceTangent, "SetBeamSourceTangent" }, // 40681923
		{ &Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetPoint, "SetBeamTargetPoint" }, // 4020624290
		{ &Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetStrength, "SetBeamTargetStrength" }, // 2257789625
		{ &Z_Construct_UFunction_UParticleSystemComponent_SetBeamTargetTangent, "SetBeamTargetTangent" }, // 3065778069
		{ &Z_Construct_UFunction_UParticleSystemComponent_SetMaterialParameter, "SetMaterialParameter" }, // 3545015512
		{ &Z_Construct_UFunction_UParticleSystemComponent_SetTemplate, "SetTemplate" }, // 315069581
		{ &Z_Construct_UFunction_UParticleSystemComponent_SetTrailSourceData, "SetTrailSourceData" }, // 3266145165
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** \n * A particle emitter.\n */" },
		{ "DisplayName", "Cascade Particle System Component" },
		{ "HideCategories", "Object Physics Collision Mobility VirtualTexture" },
		{ "IncludePath", "Particles/ParticleSystemComponent.h" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "A particle emitter." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_Template_MetaData[] = {
		{ "Category", "Particles" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, Template), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_Template_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_Template_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_EmitterMaterials_Inner = { "EmitterMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_EmitterMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_EmitterMaterials = { "EmitterMaterials", nullptr, (EPropertyFlags)0x0014000000202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, EmitterMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_EmitterMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_EmitterMaterials_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_SkelMeshComponents_Inner = { "SkelMeshComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_SkelMeshComponents_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09The skeletal mesh components used with the socket location module.\n\x09 *\x09This is to prevent them from being garbage collected.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "The skeletal mesh components used with the socket location module.\nThis is to prevent them from being garbage collected." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_SkelMeshComponents = { "SkelMeshComponents", nullptr, (EPropertyFlags)0x0014008000202008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, SkelMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_SkelMeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_SkelMeshComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bResetOnDetach_MetaData[] = {
		{ "Category", "Particles" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
#endif
	void Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bResetOnDetach_SetBit(void* Obj)
	{
		((UParticleSystemComponent*)Obj)->bResetOnDetach = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bResetOnDetach = { "bResetOnDetach", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleSystemComponent), &Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bResetOnDetach_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bResetOnDetach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bResetOnDetach_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bUpdateOnDedicatedServer_MetaData[] = {
		{ "Comment", "/** whether to update the particle system on dedicated servers */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "whether to update the particle system on dedicated servers" },
	};
#endif
	void Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bUpdateOnDedicatedServer_SetBit(void* Obj)
	{
		((UParticleSystemComponent*)Obj)->bUpdateOnDedicatedServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bUpdateOnDedicatedServer = { "bUpdateOnDedicatedServer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleSystemComponent), &Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bUpdateOnDedicatedServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bUpdateOnDedicatedServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bUpdateOnDedicatedServer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAllowRecycling_MetaData[] = {
		{ "Category", "Particles" },
		{ "Comment", "/**\n\x09 * If true, this Particle System will be available for recycling after it has completed. Auto-destroyed systems cannot be recycled.\n\x09 * Some systems (currently particle trail effects) can recycle components to avoid respawning them to play new effects.\n\x09 * This is only an optimization and does not change particle system behavior, aside from not triggering normal component initialization events more than once.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "If true, this Particle System will be available for recycling after it has completed. Auto-destroyed systems cannot be recycled.\nSome systems (currently particle trail effects) can recycle components to avoid respawning them to play new effects.\nThis is only an optimization and does not change particle system behavior, aside from not triggering normal component initialization events more than once." },
	};
#endif
	void Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAllowRecycling_SetBit(void* Obj)
	{
		((UParticleSystemComponent*)Obj)->bAllowRecycling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAllowRecycling = { "bAllowRecycling", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleSystemComponent), &Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAllowRecycling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAllowRecycling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAllowRecycling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAutoManageAttachment_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * True if we should automatically attach to AutoAttachParent when activated, and detach from our parent when completed.\n\x09 * This overrides any current attachment that may be present at the time of activation (deferring initial attachment until activation, if AutoAttachParent is null).\n\x09 * When enabled, detachment occurs regardless of whether AutoAttachParent is assigned, and the relative transform from the time of activation is restored.\n\x09 * This also disables attachment on dedicated servers, where we don't actually activate even if bAutoActivate is true.\n\x09 * @see AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "True if we should automatically attach to AutoAttachParent when activated, and detach from our parent when completed.\nThis overrides any current attachment that may be present at the time of activation (deferring initial attachment until activation, if AutoAttachParent is null).\nWhen enabled, detachment occurs regardless of whether AutoAttachParent is assigned, and the relative transform from the time of activation is restored.\nThis also disables attachment on dedicated servers, where we don't actually activate even if bAutoActivate is true.\n@see AutoAttachParent, AutoAttachSocketName, AutoAttachLocationType" },
	};
#endif
	void Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAutoManageAttachment_SetBit(void* Obj)
	{
		((UParticleSystemComponent*)Obj)->bAutoManageAttachment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAutoManageAttachment = { "bAutoManageAttachment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleSystemComponent), &Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAutoManageAttachment_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAutoManageAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAutoManageAttachment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAutoAttachWeldSimulatedBodies_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Option for how we handle bWeldSimulatedBodies when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Option for how we handle bWeldSimulatedBodies when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment" },
	};
#endif
	void Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAutoAttachWeldSimulatedBodies_SetBit(void* Obj)
	{
		((UParticleSystemComponent*)Obj)->bAutoAttachWeldSimulatedBodies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAutoAttachWeldSimulatedBodies = { "bAutoAttachWeldSimulatedBodies", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleSystemComponent), &Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAutoAttachWeldSimulatedBodies_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAutoAttachWeldSimulatedBodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAutoAttachWeldSimulatedBodies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bWarmingUp_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
#endif
	void Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bWarmingUp_SetBit(void* Obj)
	{
		((UParticleSystemComponent*)Obj)->bWarmingUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bWarmingUp = { "bWarmingUp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleSystemComponent), &Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bWarmingUp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bWarmingUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bWarmingUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bOverrideLODMethod_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** indicates that the component's LODMethod overrides the Template's */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "indicates that the component's LODMethod overrides the Template's" },
	};
#endif
	void Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bOverrideLODMethod_SetBit(void* Obj)
	{
		((UParticleSystemComponent*)Obj)->bOverrideLODMethod = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bOverrideLODMethod = { "bOverrideLODMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleSystemComponent), &Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bOverrideLODMethod_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bOverrideLODMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bOverrideLODMethod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bSkipUpdateDynamicDataDuringTick_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09""Flag indicating that dynamic updating of render data should NOT occur during Tick.\n\x09 *\x09This is used primarily to allow for warming up and simulated effects to a certain state.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Flag indicating that dynamic updating of render data should NOT occur during Tick.\nThis is used primarily to allow for warming up and simulated effects to a certain state." },
	};
#endif
	void Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bSkipUpdateDynamicDataDuringTick_SetBit(void* Obj)
	{
		((UParticleSystemComponent*)Obj)->bSkipUpdateDynamicDataDuringTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bSkipUpdateDynamicDataDuringTick = { "bSkipUpdateDynamicDataDuringTick", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleSystemComponent), &Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bSkipUpdateDynamicDataDuringTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bSkipUpdateDynamicDataDuringTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bSkipUpdateDynamicDataDuringTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_LODMethod_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** The method of LOD level determination to utilize for this particle system */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "The method of LOD level determination to utilize for this particle system" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_LODMethod = { "LODMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, LODMethod), Z_Construct_UEnum_Engine_ParticleSystemLODMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_LODMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_LODMethod_MetaData)) }; // 506550998
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_RequiredSignificance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_RequiredSignificance_MetaData[] = {
		{ "Comment", "/** The significance this component requires of it's emitters for them to be enabled. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "The significance this component requires of it's emitters for them to be enabled." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_RequiredSignificance = { "RequiredSignificance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, RequiredSignificance), Z_Construct_UEnum_Engine_EParticleSignificanceLevel, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_RequiredSignificance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_RequiredSignificance_MetaData)) }; // 292229255
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_InstanceParameters_Inner = { "InstanceParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FParticleSysParam, METADATA_PARAMS(nullptr, 0) }; // 719272395
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_InstanceParameters_MetaData[] = {
		{ "Category", "Particles" },
		{ "Comment", "/**\n\x09 *\x09""Array holding name instance parameters for this ParticleSystemComponent.\n\x09 *\x09Parameters can be used in Cascade using DistributionFloat/VectorParticleParameters.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Array holding name instance parameters for this ParticleSystemComponent.\nParameters can be used in Cascade using DistributionFloat/VectorParticleParameters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_InstanceParameters = { "InstanceParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, InstanceParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_InstanceParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_InstanceParameters_MetaData)) }; // 719272395
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleSpawn_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleSpawn = { "OnParticleSpawn", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, OnParticleSpawn), Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleSpawn_MetaData)) }; // 3780380025
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleBurst_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleBurst = { "OnParticleBurst", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, OnParticleBurst), Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleBurst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleBurst_MetaData)) }; // 2757088418
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleDeath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleDeath = { "OnParticleDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, OnParticleDeath), Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleDeath_MetaData)) }; // 1578142285
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleCollide_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleCollide = { "OnParticleCollide", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, OnParticleCollide), Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleCollide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleCollide_MetaData)) }; // 1154817354
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bOldPositionValid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
#endif
	void Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bOldPositionValid_SetBit(void* Obj)
	{
		((UParticleSystemComponent*)Obj)->bOldPositionValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bOldPositionValid = { "bOldPositionValid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UParticleSystemComponent), &Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bOldPositionValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bOldPositionValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bOldPositionValid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OldPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OldPosition = { "OldPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, OldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OldPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_PartSysVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_PartSysVelocity = { "PartSysVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, PartSysVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_PartSysVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_PartSysVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_WarmupTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_WarmupTime = { "WarmupTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, WarmupTime), METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_WarmupTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_WarmupTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_WarmupTickRate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_WarmupTickRate = { "WarmupTickRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, WarmupTickRate), METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_WarmupTickRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_WarmupTickRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_SecondsBeforeInactive_MetaData[] = {
		{ "Category", "Particles" },
		{ "Comment", "/**\n\x09 * Number of seconds of emitter not being rendered that need to pass before it\n\x09 * no longer gets ticked/ becomes inactive.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Number of seconds of emitter not being rendered that need to pass before it\nno longer gets ticked/ becomes inactive." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_SecondsBeforeInactive = { "SecondsBeforeInactive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, SecondsBeforeInactive), METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_SecondsBeforeInactive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_SecondsBeforeInactive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_MaxTimeBeforeForceUpdateTransform_MetaData[] = {
		{ "Comment", "/**\n\x09 * Time between forced UpdateTransforms for systems that use dynamically calculated bounds,\n\x09 * Which is effectively how often the bounds are shrunk.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Time between forced UpdateTransforms for systems that use dynamically calculated bounds,\nWhich is effectively how often the bounds are shrunk." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_MaxTimeBeforeForceUpdateTransform = { "MaxTimeBeforeForceUpdateTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, MaxTimeBeforeForceUpdateTransform), METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_MaxTimeBeforeForceUpdateTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_MaxTimeBeforeForceUpdateTransform_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_EditorLODLevel_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09INTERNAL. Used by the editor to set the LODLevel\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "INTERNAL. Used by the editor to set the LODLevel" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_EditorLODLevel = { "EditorLODLevel", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, EditorLODLevel), METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_EditorLODLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_EditorLODLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_EditorDetailMode_MetaData[] = {
		{ "Comment", "/**\n\x09 * Used for applying Cascade's detail mode setting to in-level particle systems\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Used for applying Cascade's detail mode setting to in-level particle systems" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_EditorDetailMode = { "EditorDetailMode", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, EditorDetailMode), METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_EditorDetailMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_EditorDetailMode_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_ReplayClips_Inner = { "ReplayClips", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UParticleSystemReplay_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_ReplayClips_MetaData[] = {
		{ "Comment", "/** Array of replay clips for this particle system component.  These are serialized to disk.  You really should never add anything to this in the editor.  It's exposed so that you can delete clips if you need to, but be careful when doing so! */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Array of replay clips for this particle system component.  These are serialized to disk.  You really should never add anything to this in the editor.  It's exposed so that you can delete clips if you need to, but be careful when doing so!" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_ReplayClips = { "ReplayClips", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, ReplayClips), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_ReplayClips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_ReplayClips_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_CustomTimeDilation_MetaData[] = {
		{ "Category", "Particles" },
		{ "Comment", "/** Scales DeltaTime in UParticleSystemComponent::Tick(...) */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Scales DeltaTime in UParticleSystemComponent::Tick(...)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_CustomTimeDilation = { "CustomTimeDilation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, CustomTimeDilation), METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_CustomTimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_CustomTimeDilation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachParent_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Component we automatically attach to when activated, if bAutoManageAttachment is true.\n\x09 * If null during registration, we assign the existing AttachParent and defer attachment until we activate.\n\x09 * @see bAutoManageAttachment\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Component we automatically attach to when activated, if bAutoManageAttachment is true.\nIf null during registration, we assign the existing AttachParent and defer attachment until we activate.\n@see bAutoManageAttachment" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachParent = { "AutoAttachParent", nullptr, (EPropertyFlags)0x00140000000a080d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, AutoAttachParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachParent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachSocketName_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Socket we automatically attach to on the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * If no auto attach socket name is set during registration, the current attach socket will be\n\x09 * assigned to AutoAttachSocketName and used when activated.\n\x09 * @see bAutoManageAttachment\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Socket we automatically attach to on the AutoAttachParent, if bAutoManageAttachment is true.\nIf no auto attach socket name is set during registration, the current attach socket will be\nassigned to AutoAttachSocketName and used when activated.\n@see bAutoManageAttachment" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachSocketName = { "AutoAttachSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, AutoAttachSocketName), METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachSocketName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachLocationType_MetaData[] = {
		{ "Comment", "/**\n\x09 * DEPRECATED: Options for how we handle our location when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment, EAttachLocation::Type\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "DEPRECATED: Options for how we handle our location when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachLocation::Type" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachLocationType = { "AutoAttachLocationType", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, AutoAttachLocationType_DEPRECATED), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachLocationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachLocationType_MetaData)) }; // 1954919674
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachLocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachLocationRule_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Options for how we handle our location when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment, EAttachmentRule\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Options for how we handle our location when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachLocationRule = { "AutoAttachLocationRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, AutoAttachLocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachLocationRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachLocationRule_MetaData)) }; // 1532071077
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachRotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachRotationRule_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Options for how we handle our rotation when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment, EAttachmentRule\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Options for how we handle our rotation when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachRotationRule = { "AutoAttachRotationRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, AutoAttachRotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachRotationRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachRotationRule_MetaData)) }; // 1532071077
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachScaleRule_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/**\n\x09 * Options for how we handle our scale when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n\x09 * @see bAutoManageAttachment, EAttachmentRule\n\x09 */" },
		{ "EditCondition", "bAutoManageAttachment" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Options for how we handle our scale when we attach to the AutoAttachParent, if bAutoManageAttachment is true.\n@see bAutoManageAttachment, EAttachmentRule" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachScaleRule = { "AutoAttachScaleRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, AutoAttachScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachScaleRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachScaleRule_MetaData)) }; // 1532071077
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnSystemFinished_MetaData[] = {
		{ "Comment", "// Called when the particle system is done\n" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleSystemComponent.h" },
		{ "ToolTip", "Called when the particle system is done" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnSystemFinished = { "OnSystemFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleSystemComponent, OnSystemFinished), Z_Construct_UDelegateFunction_Engine_OnSystemFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnSystemFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnSystemFinished_MetaData)) }; // 3933599548
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleSystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_Template,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_EmitterMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_EmitterMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_SkelMeshComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_SkelMeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bResetOnDetach,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bUpdateOnDedicatedServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAllowRecycling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAutoManageAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bAutoAttachWeldSimulatedBodies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bWarmingUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bOverrideLODMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bSkipUpdateDynamicDataDuringTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_LODMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_RequiredSignificance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_RequiredSignificance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_InstanceParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_InstanceParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleBurst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleDeath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnParticleCollide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_bOldPositionValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_PartSysVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_WarmupTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_WarmupTickRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_SecondsBeforeInactive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_MaxTimeBeforeForceUpdateTransform,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_EditorLODLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_EditorDetailMode,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_ReplayClips_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_ReplayClips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_CustomTimeDilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachSocketName,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachLocationType,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachLocationRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachLocationRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachRotationRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachRotationRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachScaleRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_AutoAttachScaleRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleSystemComponent_Statics::NewProp_OnSystemFinished,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleSystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleSystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleSystemComponent_Statics::ClassParams = {
		&UParticleSystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UParticleSystemComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleSystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleSystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleSystemComponent()
	{
		if (!Z_Registration_Info_UClass_UParticleSystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleSystemComponent.OuterSingleton, Z_Construct_UClass_UParticleSystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleSystemComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleSystemComponent>()
	{
		return UParticleSystemComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleSystemComponent);
	UParticleSystemComponent::~UParticleSystemComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UParticleSystemComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_Statics::EnumInfo[] = {
		{ EParticleSysParamType_StaticEnum, TEXT("EParticleSysParamType"), &Z_Registration_Info_UEnum_EParticleSysParamType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3182418651U) },
		{ ParticleReplayState_StaticEnum, TEXT("ParticleReplayState"), &Z_Registration_Info_UEnum_ParticleReplayState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3818815886U) },
		{ EParticleEventType_StaticEnum, TEXT("EParticleEventType"), &Z_Registration_Info_UEnum_EParticleEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4211795998U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_Statics::ScriptStructInfo[] = {
		{ FParticleSysParam::StaticStruct, Z_Construct_UScriptStruct_FParticleSysParam_Statics::NewStructOps, TEXT("ParticleSysParam"), &Z_Registration_Info_UScriptStruct_ParticleSysParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParticleSysParam), 719272395U) },
		{ FFXSystemSpawnParameters::StaticStruct, Z_Construct_UScriptStruct_FFXSystemSpawnParameters_Statics::NewStructOps, TEXT("FXSystemSpawnParameters"), &Z_Registration_Info_UScriptStruct_FXSystemSpawnParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFXSystemSpawnParameters), 902604475U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFXSystemComponent, UFXSystemComponent::StaticClass, TEXT("UFXSystemComponent"), &Z_Registration_Info_UClass_UFXSystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFXSystemComponent), 70187663U) },
		{ Z_Construct_UClass_UParticleSystemComponent, UParticleSystemComponent::StaticClass, TEXT("UParticleSystemComponent"), &Z_Registration_Info_UClass_UParticleSystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleSystemComponent), 958647064U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_1167143827(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleSystemComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
