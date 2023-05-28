// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/Perception/AISense_Team.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Team() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Team();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Team_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAITeamStimulusEvent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AITeamStimulusEvent;
class UScriptStruct* FAITeamStimulusEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AITeamStimulusEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AITeamStimulusEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAITeamStimulusEvent, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AITeamStimulusEvent"));
	}
	return Z_Registration_Info_UScriptStruct_AITeamStimulusEvent.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAITeamStimulusEvent>()
{
	return FAITeamStimulusEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Broadcaster_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Broadcaster;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enemy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Enemy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Team.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAITeamStimulusEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewProp_Broadcaster_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Team.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewProp_Broadcaster = { "Broadcaster", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAITeamStimulusEvent, Broadcaster), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewProp_Broadcaster_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewProp_Broadcaster_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewProp_Enemy_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Team.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAITeamStimulusEvent, Enemy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewProp_Enemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewProp_Enemy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewProp_Broadcaster,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewProp_Enemy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"AITeamStimulusEvent",
		sizeof(FAITeamStimulusEvent),
		alignof(FAITeamStimulusEvent),
		Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAITeamStimulusEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_AITeamStimulusEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AITeamStimulusEvent.InnerSingleton, Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AITeamStimulusEvent.InnerSingleton;
	}
	void UAISense_Team::StaticRegisterNativesUAISense_Team()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISense_Team);
	UClass* Z_Construct_UClass_UAISense_Team_NoRegister()
	{
		return UAISense_Team::StaticClass();
	}
	struct Z_Construct_UClass_UAISense_Team_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredEvents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredEvents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredEvents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISense_Team_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISense,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Team_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AISense_Team.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Team.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISense_Team_Statics::NewProp_RegisteredEvents_Inner = { "RegisteredEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAITeamStimulusEvent, METADATA_PARAMS(nullptr, 0) }; // 1976727325
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Team_Statics::NewProp_RegisteredEvents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Team.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISense_Team_Statics::NewProp_RegisteredEvents = { "RegisteredEvents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISense_Team, RegisteredEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAISense_Team_Statics::NewProp_RegisteredEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Team_Statics::NewProp_RegisteredEvents_MetaData)) }; // 1976727325
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_Team_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Team_Statics::NewProp_RegisteredEvents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Team_Statics::NewProp_RegisteredEvents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISense_Team_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_Team>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Team_Statics::ClassParams = {
		&UAISense_Team::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISense_Team_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Team_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAISense_Team_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Team_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISense_Team()
	{
		if (!Z_Registration_Info_UClass_UAISense_Team.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISense_Team.OuterSingleton, Z_Construct_UClass_UAISense_Team_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAISense_Team.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UAISense_Team>()
	{
		return UAISense_Team::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Team);
	UAISense_Team::~UAISense_Team() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_Statics::ScriptStructInfo[] = {
		{ FAITeamStimulusEvent::StaticStruct, Z_Construct_UScriptStruct_FAITeamStimulusEvent_Statics::NewStructOps, TEXT("AITeamStimulusEvent"), &Z_Registration_Info_UScriptStruct_AITeamStimulusEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAITeamStimulusEvent), 1976727325U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAISense_Team, UAISense_Team::StaticClass, TEXT("UAISense_Team"), &Z_Registration_Info_UClass_UAISense_Team, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISense_Team), 2682842156U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_3074200868(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Team_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
