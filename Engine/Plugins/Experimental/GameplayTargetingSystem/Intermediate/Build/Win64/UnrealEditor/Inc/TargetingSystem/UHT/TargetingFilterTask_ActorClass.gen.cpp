// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTargetingSystem/Tasks/TargetingFilterTask_ActorClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetingFilterTask_ActorClass() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingFilterTask_ActorClass();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingFilterTask_ActorClass_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingFilterTask_BasicFilterTemplate();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	void UTargetingFilterTask_ActorClass::StaticRegisterNativesUTargetingFilterTask_ActorClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetingFilterTask_ActorClass);
	UClass* Z_Construct_UClass_UTargetingFilterTask_ActorClass_NoRegister()
	{
		return UTargetingFilterTask_ActorClass::StaticClass();
	}
	struct Z_Construct_UClass_UTargetingFilterTask_ActorClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_RequiredActorClassFilters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredActorClassFilters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RequiredActorClassFilters;
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_IgnoredActorClassFilters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredActorClassFilters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoredActorClassFilters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetingFilterTask_ActorClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTargetingFilterTask_BasicFilterTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingFilterTask_ActorClass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09@class UTargetingFilterTask_ActorClass\n*\n*\x09Simple filtering task where we check the targets class type against the\n*\x09required and ignored class types.\n*/" },
		{ "IncludePath", "Tasks/TargetingFilterTask_ActorClass.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Tasks/TargetingFilterTask_ActorClass.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@class UTargetingFilterTask_ActorClass\n\nSimple filtering task where we check the targets class type against the\nrequired and ignored class types." },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UTargetingFilterTask_ActorClass_Statics::NewProp_RequiredActorClassFilters_Inner = { "RequiredActorClassFilters", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingFilterTask_ActorClass_Statics::NewProp_RequiredActorClassFilters_MetaData[] = {
		{ "AllowAbstract", "TRUE" },
		{ "Category", "Targeting Filter | Class" },
		{ "Comment", "/** The set of required actor classes (must be one of these types to not be filtered out) */" },
		{ "ModuleRelativePath", "Tasks/TargetingFilterTask_ActorClass.h" },
		{ "ToolTip", "The set of required actor classes (must be one of these types to not be filtered out)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTargetingFilterTask_ActorClass_Statics::NewProp_RequiredActorClassFilters = { "RequiredActorClassFilters", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetingFilterTask_ActorClass, RequiredActorClassFilters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTargetingFilterTask_ActorClass_Statics::NewProp_RequiredActorClassFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_ActorClass_Statics::NewProp_RequiredActorClassFilters_MetaData)) };
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UTargetingFilterTask_ActorClass_Statics::NewProp_IgnoredActorClassFilters_Inner = { "IgnoredActorClassFilters", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingFilterTask_ActorClass_Statics::NewProp_IgnoredActorClassFilters_MetaData[] = {
		{ "AllowAbstract", "TRUE" },
		{ "Category", "Targeting Filter | Class" },
		{ "Comment", "/** The set of ignored actor classes (must NOT be one of these types) */" },
		{ "ModuleRelativePath", "Tasks/TargetingFilterTask_ActorClass.h" },
		{ "ToolTip", "The set of ignored actor classes (must NOT be one of these types)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTargetingFilterTask_ActorClass_Statics::NewProp_IgnoredActorClassFilters = { "IgnoredActorClassFilters", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetingFilterTask_ActorClass, IgnoredActorClassFilters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTargetingFilterTask_ActorClass_Statics::NewProp_IgnoredActorClassFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_ActorClass_Statics::NewProp_IgnoredActorClassFilters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetingFilterTask_ActorClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingFilterTask_ActorClass_Statics::NewProp_RequiredActorClassFilters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingFilterTask_ActorClass_Statics::NewProp_RequiredActorClassFilters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingFilterTask_ActorClass_Statics::NewProp_IgnoredActorClassFilters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingFilterTask_ActorClass_Statics::NewProp_IgnoredActorClassFilters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetingFilterTask_ActorClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetingFilterTask_ActorClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetingFilterTask_ActorClass_Statics::ClassParams = {
		&UTargetingFilterTask_ActorClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTargetingFilterTask_ActorClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_ActorClass_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTargetingFilterTask_ActorClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_ActorClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTargetingFilterTask_ActorClass()
	{
		if (!Z_Registration_Info_UClass_UTargetingFilterTask_ActorClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetingFilterTask_ActorClass.OuterSingleton, Z_Construct_UClass_UTargetingFilterTask_ActorClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTargetingFilterTask_ActorClass.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UClass* StaticClass<UTargetingFilterTask_ActorClass>()
	{
		return UTargetingFilterTask_ActorClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetingFilterTask_ActorClass);
	UTargetingFilterTask_ActorClass::~UTargetingFilterTask_ActorClass() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingFilterTask_ActorClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingFilterTask_ActorClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTargetingFilterTask_ActorClass, UTargetingFilterTask_ActorClass::StaticClass, TEXT("UTargetingFilterTask_ActorClass"), &Z_Registration_Info_UClass_UTargetingFilterTask_ActorClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetingFilterTask_ActorClass), 1018617712U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingFilterTask_ActorClass_h_374302482(TEXT("/Script/TargetingSystem"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingFilterTask_ActorClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingFilterTask_ActorClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
