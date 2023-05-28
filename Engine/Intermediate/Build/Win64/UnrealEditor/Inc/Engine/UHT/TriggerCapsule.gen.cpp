// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TriggerCapsule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerCapsule() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBase();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerCapsule();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerCapsule_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ATriggerCapsule::StaticRegisterNativesATriggerCapsule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATriggerCapsule);
	UClass* Z_Construct_UClass_ATriggerCapsule_NoRegister()
	{
		return ATriggerCapsule::StaticClass();
	}
	struct Z_Construct_UClass_ATriggerCapsule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriggerCapsule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerCapsule_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A capsule shaped trigger, used to generate overlap events in the level */" },
		{ "IncludePath", "Engine/TriggerCapsule.h" },
		{ "ModuleRelativePath", "Classes/Engine/TriggerCapsule.h" },
		{ "ToolTip", "A capsule shaped trigger, used to generate overlap events in the level" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriggerCapsule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerCapsule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATriggerCapsule_Statics::ClassParams = {
		&ATriggerCapsule::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATriggerCapsule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerCapsule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATriggerCapsule()
	{
		if (!Z_Registration_Info_UClass_ATriggerCapsule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATriggerCapsule.OuterSingleton, Z_Construct_UClass_ATriggerCapsule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATriggerCapsule.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ATriggerCapsule>()
	{
		return ATriggerCapsule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerCapsule);
	ATriggerCapsule::~ATriggerCapsule() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATriggerCapsule, ATriggerCapsule::StaticClass, TEXT("ATriggerCapsule"), &Z_Registration_Info_UClass_ATriggerCapsule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATriggerCapsule), 537975549U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_1199595374(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerCapsule_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
