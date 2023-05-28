// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleEventReceiverBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleEventType();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleEventReceiverBase::StaticRegisterNativesUParticleModuleEventReceiverBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleEventReceiverBase);
	UClass* Z_Construct_UClass_UParticleModuleEventReceiverBase_NoRegister()
	{
		return UParticleModuleEventReceiverBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventGeneratorType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EventGeneratorType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleEventBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Event/ParticleModuleEventReceiverBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::NewProp_EventGeneratorType_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The type of event that will generate the kill. */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverBase.h" },
		{ "ToolTip", "The type of event that will generate the kill." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::NewProp_EventGeneratorType = { "EventGeneratorType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleEventReceiverBase, EventGeneratorType), Z_Construct_UEnum_Engine_EParticleEventType, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::NewProp_EventGeneratorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::NewProp_EventGeneratorType_MetaData)) }; // 4211795998
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The name of the emitter of interest for generating the event. */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverBase.h" },
		{ "ToolTip", "The name of the emitter of interest for generating the event." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleEventReceiverBase, EventName), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::NewProp_EventName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::NewProp_EventGeneratorType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::NewProp_EventName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleEventReceiverBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::ClassParams = {
		&UParticleModuleEventReceiverBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::PropPointers),
		0,
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleEventReceiverBase()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleEventReceiverBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleEventReceiverBase.OuterSingleton, Z_Construct_UClass_UParticleModuleEventReceiverBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleEventReceiverBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleEventReceiverBase>()
	{
		return UParticleModuleEventReceiverBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleEventReceiverBase);
	UParticleModuleEventReceiverBase::~UParticleModuleEventReceiverBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleEventReceiverBase, UParticleModuleEventReceiverBase::StaticClass, TEXT("UParticleModuleEventReceiverBase"), &Z_Registration_Info_UClass_UParticleModuleEventReceiverBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleEventReceiverBase), 2356728079U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverBase_h_3892374273(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
