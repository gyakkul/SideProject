// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Emitter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmitter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AEmitter();
	ENGINE_API UClass* Z_Construct_UClass_AEmitter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventParticleSpawnSignature_Parms
		{
			FName EventName;
			float EmitterTime;
			FVector Location;
			FVector Velocity;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EmitterTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleSpawnSignature_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::NewProp_EmitterTime = { "EmitterTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleSpawnSignature_Parms, EmitterTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleSpawnSignature_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleSpawnSignature_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::NewProp_EmitterTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::NewProp_Velocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Fires when a particle is spawned\n\x09* @param EventName - Custom event name for the Spawn Event.\n\x09* @param EmitterTime - The emitter time when the event occured.\n\x09* @param Location - Location at which the particle was spawned.\n\x09* @param Velocity - Initial velocity of the spawned particle.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
		{ "ToolTip", "Fires when a particle is spawned\n@param EventName - Custom event name for the Spawn Event.\n@param EmitterTime - The emitter time when the event occured.\n@param Location - Location at which the particle was spawned.\n@param Velocity - Initial velocity of the spawned particle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ParticleSpawnSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::_Script_Engine_eventParticleSpawnSignature_Parms), Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FParticleSpawnSignature_DelegateWrapper(const FMulticastScriptDelegate& ParticleSpawnSignature, FName EventName, float EmitterTime, FVector Location, FVector Velocity)
{
	struct _Script_Engine_eventParticleSpawnSignature_Parms
	{
		FName EventName;
		float EmitterTime;
		FVector Location;
		FVector Velocity;
	};
	_Script_Engine_eventParticleSpawnSignature_Parms Parms;
	Parms.EventName=EventName;
	Parms.EmitterTime=EmitterTime;
	Parms.Location=Location;
	Parms.Velocity=Velocity;
	ParticleSpawnSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventParticleBurstSignature_Parms
		{
			FName EventName;
			float EmitterTime;
			int32 ParticleCount;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EmitterTime;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleBurstSignature_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::NewProp_EmitterTime = { "EmitterTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleBurstSignature_Parms, EmitterTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::NewProp_ParticleCount = { "ParticleCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleBurstSignature_Parms, ParticleCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::NewProp_EmitterTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::NewProp_ParticleCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Fires when a particle system bursts\n\x09* @param EventName - Custom event name for the Burst Event\n\x09* @param EmitterTime - The emitter time when the event occured.\n\x09* @param ParticleCount - The number of particles spawned in the burst.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
		{ "ToolTip", "Fires when a particle system bursts\n@param EventName - Custom event name for the Burst Event\n@param EmitterTime - The emitter time when the event occured.\n@param ParticleCount - The number of particles spawned in the burst." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ParticleBurstSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::_Script_Engine_eventParticleBurstSignature_Parms), Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FParticleBurstSignature_DelegateWrapper(const FMulticastScriptDelegate& ParticleBurstSignature, FName EventName, float EmitterTime, int32 ParticleCount)
{
	struct _Script_Engine_eventParticleBurstSignature_Parms
	{
		FName EventName;
		float EmitterTime;
		int32 ParticleCount;
	};
	_Script_Engine_eventParticleBurstSignature_Parms Parms;
	Parms.EventName=EventName;
	Parms.EmitterTime=EmitterTime;
	Parms.ParticleCount=ParticleCount;
	ParticleBurstSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventParticleDeathSignature_Parms
		{
			FName EventName;
			float EmitterTime;
			int32 ParticleTime;
			FVector Location;
			FVector Velocity;
			FVector Direction;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EmitterTime;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleDeathSignature_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::NewProp_EmitterTime = { "EmitterTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleDeathSignature_Parms, EmitterTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::NewProp_ParticleTime = { "ParticleTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleDeathSignature_Parms, ParticleTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleDeathSignature_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleDeathSignature_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleDeathSignature_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::NewProp_EmitterTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::NewProp_ParticleTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Fires when a particle dies\n\x09* @param EventName - Custom event name for the Death Event.\n\x09* @param EmitterTime - The emitter time when the event occured.\n\x09* @param ParticleTime - How long the particle had been alive at the time of the event.\n\x09* @param Location - Location the particle was at when it died.\n\x09* @param Velocity - Velocity of the particle when it died.\n\x09* @param Direction - Direction of the particle when it died.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
		{ "ToolTip", "Fires when a particle dies\n@param EventName - Custom event name for the Death Event.\n@param EmitterTime - The emitter time when the event occured.\n@param ParticleTime - How long the particle had been alive at the time of the event.\n@param Location - Location the particle was at when it died.\n@param Velocity - Velocity of the particle when it died.\n@param Direction - Direction of the particle when it died." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ParticleDeathSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::_Script_Engine_eventParticleDeathSignature_Parms), Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FParticleDeathSignature_DelegateWrapper(const FMulticastScriptDelegate& ParticleDeathSignature, FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction)
{
	struct _Script_Engine_eventParticleDeathSignature_Parms
	{
		FName EventName;
		float EmitterTime;
		int32 ParticleTime;
		FVector Location;
		FVector Velocity;
		FVector Direction;
	};
	_Script_Engine_eventParticleDeathSignature_Parms Parms;
	Parms.EventName=EventName;
	Parms.EmitterTime=EmitterTime;
	Parms.ParticleTime=ParticleTime;
	Parms.Location=Location;
	Parms.Velocity=Velocity;
	Parms.Direction=Direction;
	ParticleDeathSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventParticleCollisionSignature_Parms
		{
			FName EventName;
			float EmitterTime;
			int32 ParticleTime;
			FVector Location;
			FVector Velocity;
			FVector Direction;
			FVector Normal;
			FName BoneName;
			UPhysicalMaterial* PhysMat;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EmitterTime;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_EmitterTime = { "EmitterTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, EmitterTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_ParticleTime = { "ParticleTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, ParticleTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_PhysMat = { "PhysMat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, PhysMat), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_EmitterTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_ParticleTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_PhysMat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Fires when a particle dies\n\x09* @param EventName - Custom event name for the Collision Event.\n\x09* @param EmitterTime - The emitter time when the event occured.\n\x09* @param ParticleTime - How long the particle had been alive at the time of the event.\n\x09* @param Location - Location of the collision.\n\x09* @param Velocity - Velocity of the particle at the point of collision.\n\x09* @param Direction - Direction of the particle at the point of collision.\n\x09* @param Normal - Normal to the surface with which collision occurred.\n\x09* @param BoneName- Name of the bone that the particle collided with. (Only valid if collision was with a Skeletal Mesh)\n\x09* @param PhysMat - Physical Material for this collision.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
		{ "ToolTip", "Fires when a particle dies\n@param EventName - Custom event name for the Collision Event.\n@param EmitterTime - The emitter time when the event occured.\n@param ParticleTime - How long the particle had been alive at the time of the event.\n@param Location - Location of the collision.\n@param Velocity - Velocity of the particle at the point of collision.\n@param Direction - Direction of the particle at the point of collision.\n@param Normal - Normal to the surface with which collision occurred.\n@param BoneName- Name of the bone that the particle collided with. (Only valid if collision was with a Skeletal Mesh)\n@param PhysMat - Physical Material for this collision." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "ParticleCollisionSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::_Script_Engine_eventParticleCollisionSignature_Parms), Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FParticleCollisionSignature_DelegateWrapper(const FMulticastScriptDelegate& ParticleCollisionSignature, FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, UPhysicalMaterial* PhysMat)
{
	struct _Script_Engine_eventParticleCollisionSignature_Parms
	{
		FName EventName;
		float EmitterTime;
		int32 ParticleTime;
		FVector Location;
		FVector Velocity;
		FVector Direction;
		FVector Normal;
		FName BoneName;
		UPhysicalMaterial* PhysMat;
	};
	_Script_Engine_eventParticleCollisionSignature_Parms Parms;
	Parms.EventName=EventName;
	Parms.EmitterTime=EmitterTime;
	Parms.ParticleTime=ParticleTime;
	Parms.Location=Location;
	Parms.Velocity=Velocity;
	Parms.Direction=Direction;
	Parms.Normal=Normal;
	Parms.BoneName=BoneName;
	Parms.PhysMat=PhysMat;
	ParticleCollisionSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AEmitter::execSetMaterialParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_OBJECT(UMaterialInterface,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterialParameter(Z_Param_ParameterName,Z_Param_Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEmitter::execSetActorParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_OBJECT(AActor,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActorParameter(Z_Param_ParameterName,Z_Param_Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEmitter::execSetColorParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FLinearColor,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorParameter(Z_Param_ParameterName,Z_Param_Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEmitter::execSetVectorParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FVector,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVectorParameter(Z_Param_ParameterName,Z_Param_Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEmitter::execSetFloatParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloatParameter(Z_Param_ParameterName,Z_Param_Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEmitter::execSetTemplate)
	{
		P_GET_OBJECT(UParticleSystem,Z_Param_NewTemplate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTemplate(Z_Param_NewTemplate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEmitter::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEmitter::execToggleActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEmitter::execDeactivate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Deactivate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEmitter::execActivate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Activate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEmitter::execOnRep_bCurrentlyActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bCurrentlyActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEmitter::execOnParticleSystemFinished)
	{
		P_GET_OBJECT(UParticleSystemComponent,Z_Param_FinishedComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnParticleSystemFinished(Z_Param_FinishedComponent);
		P_NATIVE_END;
	}
	void AEmitter::StaticRegisterNativesAEmitter()
	{
		UClass* Class = AEmitter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate", &AEmitter::execActivate },
			{ "Deactivate", &AEmitter::execDeactivate },
			{ "IsActive", &AEmitter::execIsActive },
			{ "OnParticleSystemFinished", &AEmitter::execOnParticleSystemFinished },
			{ "OnRep_bCurrentlyActive", &AEmitter::execOnRep_bCurrentlyActive },
			{ "SetActorParameter", &AEmitter::execSetActorParameter },
			{ "SetColorParameter", &AEmitter::execSetColorParameter },
			{ "SetFloatParameter", &AEmitter::execSetFloatParameter },
			{ "SetMaterialParameter", &AEmitter::execSetMaterialParameter },
			{ "SetTemplate", &AEmitter::execSetTemplate },
			{ "SetVectorParameter", &AEmitter::execSetVectorParameter },
			{ "ToggleActive", &AEmitter::execToggleActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEmitter_Activate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmitter_Activate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particles" },
		{ "Comment", "// BEGIN DEPRECATED (use component functions now in level script)\n" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
		{ "ToolTip", "BEGIN DEPRECATED (use component functions now in level script)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmitter_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, nullptr, "Activate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmitter_Activate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEmitter_Activate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmitter_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEmitter_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEmitter_Deactivate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmitter_Deactivate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particles" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmitter_Deactivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, nullptr, "Deactivate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmitter_Deactivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEmitter_Deactivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmitter_Deactivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEmitter_Deactivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEmitter_IsActive_Statics
	{
		struct Emitter_eventIsActive_Parms
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
	void Z_Construct_UFunction_AEmitter_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Emitter_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEmitter_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Emitter_eventIsActive_Parms), &Z_Construct_UFunction_AEmitter_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEmitter_IsActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEmitter_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmitter_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particles" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmitter_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, nullptr, "IsActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEmitter_IsActive_Statics::Emitter_eventIsActive_Parms), Z_Construct_UFunction_AEmitter_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEmitter_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmitter_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEmitter_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmitter_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEmitter_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics
	{
		struct Emitter_eventOnParticleSystemFinished_Parms
		{
			UParticleSystemComponent* FinishedComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinishedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FinishedComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::NewProp_FinishedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::NewProp_FinishedComponent = { "FinishedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Emitter_eventOnParticleSystemFinished_Parms, FinishedComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::NewProp_FinishedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::NewProp_FinishedComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::NewProp_FinishedComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, nullptr, "OnParticleSystemFinished", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::Emitter_eventOnParticleSystemFinished_Parms), Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmitter_OnParticleSystemFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEmitter_OnRep_bCurrentlyActive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmitter_OnRep_bCurrentlyActive_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Replication Notification Callbacks */" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
		{ "ToolTip", "Replication Notification Callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmitter_OnRep_bCurrentlyActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, nullptr, "OnRep_bCurrentlyActive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmitter_OnRep_bCurrentlyActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEmitter_OnRep_bCurrentlyActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmitter_OnRep_bCurrentlyActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEmitter_OnRep_bCurrentlyActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEmitter_SetActorParameter_Statics
	{
		struct Emitter_eventSetActorParameter_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AEmitter_SetActorParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Emitter_eventSetActorParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEmitter_SetActorParameter_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Emitter_eventSetActorParameter_Parms, Param), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEmitter_SetActorParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEmitter_SetActorParameter_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEmitter_SetActorParameter_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmitter_SetActorParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particles|Parameters" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmitter_SetActorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, nullptr, "SetActorParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEmitter_SetActorParameter_Statics::Emitter_eventSetActorParameter_Parms), Z_Construct_UFunction_AEmitter_SetActorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEmitter_SetActorParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmitter_SetActorParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEmitter_SetActorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmitter_SetActorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEmitter_SetActorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEmitter_SetColorParameter_Statics
	{
		struct Emitter_eventSetColorParameter_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AEmitter_SetColorParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Emitter_eventSetColorParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEmitter_SetColorParameter_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Emitter_eventSetColorParameter_Parms, Param), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEmitter_SetColorParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEmitter_SetColorParameter_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEmitter_SetColorParameter_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmitter_SetColorParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particles|Parameters" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmitter_SetColorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, nullptr, "SetColorParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEmitter_SetColorParameter_Statics::Emitter_eventSetColorParameter_Parms), Z_Construct_UFunction_AEmitter_SetColorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEmitter_SetColorParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmitter_SetColorParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEmitter_SetColorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmitter_SetColorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEmitter_SetColorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics
	{
		struct Emitter_eventSetFloatParameter_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Emitter_eventSetFloatParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Emitter_eventSetFloatParameter_Parms, Param), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particles|Parameters" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, nullptr, "SetFloatParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics::Emitter_eventSetFloatParameter_Parms), Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmitter_SetFloatParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics
	{
		struct Emitter_eventSetMaterialParameter_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Emitter_eventSetMaterialParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Emitter_eventSetMaterialParameter_Parms, Param), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particles|Parameters" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, nullptr, "SetMaterialParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics::Emitter_eventSetMaterialParameter_Parms), Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmitter_SetMaterialParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEmitter_SetTemplate_Statics
	{
		struct Emitter_eventSetTemplate_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEmitter_SetTemplate_Statics::NewProp_NewTemplate = { "NewTemplate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Emitter_eventSetTemplate_Parms, NewTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEmitter_SetTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEmitter_SetTemplate_Statics::NewProp_NewTemplate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmitter_SetTemplate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particles" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmitter_SetTemplate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, nullptr, "SetTemplate", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEmitter_SetTemplate_Statics::Emitter_eventSetTemplate_Parms), Z_Construct_UFunction_AEmitter_SetTemplate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEmitter_SetTemplate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmitter_SetTemplate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEmitter_SetTemplate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmitter_SetTemplate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEmitter_SetTemplate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics
	{
		struct Emitter_eventSetVectorParameter_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Emitter_eventSetVectorParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Emitter_eventSetVectorParameter_Parms, Param), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particles|Parameters" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, nullptr, "SetVectorParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics::Emitter_eventSetVectorParameter_Parms), Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmitter_SetVectorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEmitter_ToggleActive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmitter_ToggleActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particles" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmitter_ToggleActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, nullptr, "ToggleActive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmitter_ToggleActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEmitter_ToggleActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmitter_ToggleActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEmitter_ToggleActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEmitter);
	UClass* Z_Construct_UClass_AEmitter_NoRegister()
	{
		return AEmitter::StaticClass();
	}
	struct Z_Construct_UClass_AEmitter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParticleSystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnSystemFinish_MetaData[];
#endif
		static void NewProp_bDestroyOnSystemFinish_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnSystemFinish;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPostUpdateTickGroup_MetaData[];
#endif
		static void NewProp_bPostUpdateTickGroup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPostUpdateTickGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCurrentlyActive_MetaData[];
#endif
		static void NewProp_bCurrentlyActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCurrentlyActive;
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
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpriteComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEmitter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEmitter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEmitter_Activate, "Activate" }, // 3612180832
		{ &Z_Construct_UFunction_AEmitter_Deactivate, "Deactivate" }, // 2137838596
		{ &Z_Construct_UFunction_AEmitter_IsActive, "IsActive" }, // 1707506050
		{ &Z_Construct_UFunction_AEmitter_OnParticleSystemFinished, "OnParticleSystemFinished" }, // 1550282415
		{ &Z_Construct_UFunction_AEmitter_OnRep_bCurrentlyActive, "OnRep_bCurrentlyActive" }, // 1237830651
		{ &Z_Construct_UFunction_AEmitter_SetActorParameter, "SetActorParameter" }, // 1531303371
		{ &Z_Construct_UFunction_AEmitter_SetColorParameter, "SetColorParameter" }, // 2777504872
		{ &Z_Construct_UFunction_AEmitter_SetFloatParameter, "SetFloatParameter" }, // 2516120835
		{ &Z_Construct_UFunction_AEmitter_SetMaterialParameter, "SetMaterialParameter" }, // 3281125433
		{ &Z_Construct_UFunction_AEmitter_SetTemplate, "SetTemplate" }, // 2769766355
		{ &Z_Construct_UFunction_AEmitter_SetVectorParameter, "SetVectorParameter" }, // 305133984
		{ &Z_Construct_UFunction_AEmitter_ToggleActive, "ToggleActive" }, // 1185398991
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Activation Components|Activation Input Collision Game|Damage" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Particles/Emitter.h" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitter_Statics::NewProp_ParticleSystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Emitter" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Particles|Beam,Particles|Parameters,Particles,Effects|Components|ParticleSystem,Rendering,Activation,Components|Activation" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AEmitter_Statics::NewProp_ParticleSystemComponent = { "ParticleSystemComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEmitter, ParticleSystemComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEmitter_Statics::NewProp_ParticleSystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEmitter_Statics::NewProp_ParticleSystemComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitter_Statics::NewProp_bDestroyOnSystemFinish_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	void Z_Construct_UClass_AEmitter_Statics::NewProp_bDestroyOnSystemFinish_SetBit(void* Obj)
	{
		((AEmitter*)Obj)->bDestroyOnSystemFinish = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEmitter_Statics::NewProp_bDestroyOnSystemFinish = { "bDestroyOnSystemFinish", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AEmitter), &Z_Construct_UClass_AEmitter_Statics::NewProp_bDestroyOnSystemFinish_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEmitter_Statics::NewProp_bDestroyOnSystemFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEmitter_Statics::NewProp_bDestroyOnSystemFinish_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitter_Statics::NewProp_bPostUpdateTickGroup_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	void Z_Construct_UClass_AEmitter_Statics::NewProp_bPostUpdateTickGroup_SetBit(void* Obj)
	{
		((AEmitter*)Obj)->bPostUpdateTickGroup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEmitter_Statics::NewProp_bPostUpdateTickGroup = { "bPostUpdateTickGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AEmitter), &Z_Construct_UClass_AEmitter_Statics::NewProp_bPostUpdateTickGroup_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEmitter_Statics::NewProp_bPostUpdateTickGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEmitter_Statics::NewProp_bPostUpdateTickGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitter_Statics::NewProp_bCurrentlyActive_MetaData[] = {
		{ "Comment", "/** used to update status of toggleable level placed emitters on clients */" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
		{ "ToolTip", "used to update status of toggleable level placed emitters on clients" },
	};
#endif
	void Z_Construct_UClass_AEmitter_Statics::NewProp_bCurrentlyActive_SetBit(void* Obj)
	{
		((AEmitter*)Obj)->bCurrentlyActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEmitter_Statics::NewProp_bCurrentlyActive = { "bCurrentlyActive", "OnRep_bCurrentlyActive", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AEmitter), &Z_Construct_UClass_AEmitter_Statics::NewProp_bCurrentlyActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEmitter_Statics::NewProp_bCurrentlyActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEmitter_Statics::NewProp_bCurrentlyActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleSpawn_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleSpawn = { "OnParticleSpawn", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEmitter, OnParticleSpawn), Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleSpawn_MetaData)) }; // 3780380025
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleBurst_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleBurst = { "OnParticleBurst", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEmitter, OnParticleBurst), Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleBurst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleBurst_MetaData)) }; // 2757088418
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleDeath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleDeath = { "OnParticleDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEmitter, OnParticleDeath), Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleDeath_MetaData)) }; // 1578142285
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleCollide_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleCollide = { "OnParticleCollide", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEmitter, OnParticleCollide), Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleCollide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleCollide_MetaData)) }; // 1154817354
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitter_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AEmitter_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0044000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEmitter, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEmitter_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEmitter_Statics::NewProp_SpriteComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitter_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AEmitter_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0044000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEmitter, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEmitter_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEmitter_Statics::NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEmitter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitter_Statics::NewProp_ParticleSystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitter_Statics::NewProp_bDestroyOnSystemFinish,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitter_Statics::NewProp_bPostUpdateTickGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitter_Statics::NewProp_bCurrentlyActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleBurst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleDeath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleCollide,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitter_Statics::NewProp_SpriteComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitter_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEmitter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEmitter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEmitter_Statics::ClassParams = {
		&AEmitter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEmitter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEmitter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEmitter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEmitter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEmitter()
	{
		if (!Z_Registration_Info_UClass_AEmitter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEmitter.OuterSingleton, Z_Construct_UClass_AEmitter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEmitter.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<AEmitter>()
	{
		return AEmitter::StaticClass();
	}

	void AEmitter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bCurrentlyActive(TEXT("bCurrentlyActive"));

		const bool bIsValid = true
			&& Name_bCurrentlyActive == ClassReps[(int32)ENetFields_Private::bCurrentlyActive].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AEmitter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEmitter);
	AEmitter::~AEmitter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEmitter, AEmitter::StaticClass, TEXT("AEmitter"), &Z_Registration_Info_UClass_AEmitter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEmitter), 2714919543U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_3076011629(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Emitter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
