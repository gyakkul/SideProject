// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleEventGenerator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventGenerator();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventGenerator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventSendToGame_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleEventType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParticleEvent_GenerateInfo;
class UScriptStruct* FParticleEvent_GenerateInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleEvent_GenerateInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParticleEvent_GenerateInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ParticleEvent_GenerateInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ParticleEvent_GenerateInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleEvent_GenerateInfo>()
{
	return FParticleEvent_GenerateInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParticleFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstTimeOnly_MetaData[];
#endif
		static void NewProp_FirstTimeOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FirstTimeOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastTimeOnly_MetaData[];
#endif
		static void NewProp_LastTimeOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LastTimeOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseReflectedImpactVector_MetaData[];
#endif
		static void NewProp_UseReflectedImpactVector_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseReflectedImpactVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseOrbitOffset_MetaData[];
#endif
		static void NewProp_bUseOrbitOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOrbitOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CustomName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleModuleEventsToSendToGame_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParticleModuleEventsToSendToGame_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleModuleEventsToSendToGame_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParticleModuleEventsToSendToGame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleEvent_GenerateInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** The type of event. */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "The type of event." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParticleEvent_GenerateInfo, Type), Z_Construct_UEnum_Engine_EParticleEventType, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_Type_MetaData)) }; // 4211795998
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** How often to trigger the event (<= 1 means EVERY time). */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "How often to trigger the event (<= 1 means EVERY time)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParticleEvent_GenerateInfo, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleFrequency_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** Only fire the first time (collision only). */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "Only fire the first time (collision only)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleFrequency = { "ParticleFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParticleEvent_GenerateInfo, ParticleFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_FirstTimeOnly_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** Only fire the first time (collision only). */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "Only fire the first time (collision only)." },
	};
#endif
	void Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_FirstTimeOnly_SetBit(void* Obj)
	{
		((FParticleEvent_GenerateInfo*)Obj)->FirstTimeOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_FirstTimeOnly = { "FirstTimeOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FParticleEvent_GenerateInfo), &Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_FirstTimeOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_FirstTimeOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_FirstTimeOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_LastTimeOnly_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** Only fire the last time (collision only). */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "Only fire the last time (collision only)." },
	};
#endif
	void Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_LastTimeOnly_SetBit(void* Obj)
	{
		((FParticleEvent_GenerateInfo*)Obj)->LastTimeOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_LastTimeOnly = { "LastTimeOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FParticleEvent_GenerateInfo), &Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_LastTimeOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_LastTimeOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_LastTimeOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_UseReflectedImpactVector_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** Use the impact FVector not the hit normal (collision only). */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "Use the impact FVector not the hit normal (collision only)." },
	};
#endif
	void Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_UseReflectedImpactVector_SetBit(void* Obj)
	{
		((FParticleEvent_GenerateInfo*)Obj)->UseReflectedImpactVector = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_UseReflectedImpactVector = { "UseReflectedImpactVector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FParticleEvent_GenerateInfo), &Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_UseReflectedImpactVector_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_UseReflectedImpactVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_UseReflectedImpactVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_bUseOrbitOffset_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** Use the orbit offset when computing the position at which the event occurred. */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "Use the orbit offset when computing the position at which the event occurred." },
	};
#endif
	void Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_bUseOrbitOffset_SetBit(void* Obj)
	{
		((FParticleEvent_GenerateInfo*)Obj)->bUseOrbitOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_bUseOrbitOffset = { "bUseOrbitOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FParticleEvent_GenerateInfo), &Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_bUseOrbitOffset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_bUseOrbitOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_bUseOrbitOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_CustomName_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** Should the event tag with a custom name? Leave blank for the default. */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "Should the event tag with a custom name? Leave blank for the default." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_CustomName = { "CustomName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParticleEvent_GenerateInfo, CustomName), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_CustomName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_CustomName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleModuleEventsToSendToGame_Inner_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** The events we want to fire off when this event has been generated */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "The events we want to fire off when this event has been generated" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleModuleEventsToSendToGame_Inner = { "ParticleModuleEventsToSendToGame", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UParticleModuleEventSendToGame_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleModuleEventsToSendToGame_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleModuleEventsToSendToGame_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleModuleEventsToSendToGame_MetaData[] = {
		{ "Category", "ParticleEvent_GenerateInfo" },
		{ "Comment", "/** The events we want to fire off when this event has been generated */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ToolTip", "The events we want to fire off when this event has been generated" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleModuleEventsToSendToGame = { "ParticleModuleEventsToSendToGame", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParticleEvent_GenerateInfo, ParticleModuleEventsToSendToGame), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleModuleEventsToSendToGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleModuleEventsToSendToGame_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_FirstTimeOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_LastTimeOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_UseReflectedImpactVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_bUseOrbitOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_CustomName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleModuleEventsToSendToGame_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewProp_ParticleModuleEventsToSendToGame,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ParticleEvent_GenerateInfo",
		sizeof(FParticleEvent_GenerateInfo),
		alignof(FParticleEvent_GenerateInfo),
		Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ParticleEvent_GenerateInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParticleEvent_GenerateInfo.InnerSingleton, Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ParticleEvent_GenerateInfo.InnerSingleton;
	}
	void UParticleModuleEventGenerator::StaticRegisterNativesUParticleModuleEventGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleEventGenerator);
	UClass* Z_Construct_UClass_UParticleModuleEventGenerator_NoRegister()
	{
		return UParticleModuleEventGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleEventGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Events_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Events;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleEventGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleEventBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventGenerator_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Event Generator" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Event/ParticleModuleEventGenerator.h" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleEventGenerator_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000008000000008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo, METADATA_PARAMS(nullptr, 0) }; // 2393071967
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventGenerator_Statics::NewProp_Events_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/**\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventGenerator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleEventGenerator_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0010008002000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleEventGenerator, Events), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventGenerator_Statics::NewProp_Events_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventGenerator_Statics::NewProp_Events_MetaData)) }; // 2393071967
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleEventGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventGenerator_Statics::NewProp_Events_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventGenerator_Statics::NewProp_Events,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleEventGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleEventGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleEventGenerator_Statics::ClassParams = {
		&UParticleModuleEventGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleEventGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventGenerator_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleEventGenerator()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleEventGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleEventGenerator.OuterSingleton, Z_Construct_UClass_UParticleModuleEventGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleEventGenerator.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleEventGenerator>()
	{
		return UParticleModuleEventGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleEventGenerator);
	UParticleModuleEventGenerator::~UParticleModuleEventGenerator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_Statics::ScriptStructInfo[] = {
		{ FParticleEvent_GenerateInfo::StaticStruct, Z_Construct_UScriptStruct_FParticleEvent_GenerateInfo_Statics::NewStructOps, TEXT("ParticleEvent_GenerateInfo"), &Z_Registration_Info_UScriptStruct_ParticleEvent_GenerateInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParticleEvent_GenerateInfo), 2393071967U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleEventGenerator, UParticleModuleEventGenerator::StaticClass, TEXT("UParticleModuleEventGenerator"), &Z_Registration_Info_UClass_UParticleModuleEventGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleEventGenerator), 986549635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_4223495530(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventGenerator_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
