// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFeaturesSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeaturesSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeaturePluginStateMachine_NoRegister();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeaturesProjectPolicies_NoRegister();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeaturesSubsystem();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeaturesSubsystem_NoRegister();
	GAMEFEATURES_API UEnum* Z_Construct_UEnum_GameFeatures_EGameFeatureTargetState();
	GAMEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FGameFeaturePluginIdentifier();
	GAMEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FInstallBundlePluginProtocolMetaData();
	UPackage* Z_Construct_UPackage__Script_GameFeatures();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameFeatureTargetState;
	static UEnum* EGameFeatureTargetState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameFeatureTargetState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameFeatureTargetState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameFeatures_EGameFeatureTargetState, (UObject*)Z_Construct_UPackage__Script_GameFeatures(), TEXT("EGameFeatureTargetState"));
		}
		return Z_Registration_Info_UEnum_EGameFeatureTargetState.OuterSingleton;
	}
	template<> GAMEFEATURES_API UEnum* StaticEnum<EGameFeatureTargetState>()
	{
		return EGameFeatureTargetState_StaticEnum();
	}
	struct Z_Construct_UEnum_GameFeatures_EGameFeatureTargetState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameFeatures_EGameFeatureTargetState_Statics::Enumerators[] = {
		{ "EGameFeatureTargetState::Installed", (int64)EGameFeatureTargetState::Installed },
		{ "EGameFeatureTargetState::Registered", (int64)EGameFeatureTargetState::Registered },
		{ "EGameFeatureTargetState::Loaded", (int64)EGameFeatureTargetState::Loaded },
		{ "EGameFeatureTargetState::Active", (int64)EGameFeatureTargetState::Active },
		{ "EGameFeatureTargetState::Count", (int64)EGameFeatureTargetState::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameFeatures_EGameFeatureTargetState_Statics::Enum_MetaDataParams[] = {
		{ "Active.Name", "EGameFeatureTargetState::Active" },
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EGameFeatureTargetState::Count" },
		{ "Installed.Name", "EGameFeatureTargetState::Installed" },
		{ "Loaded.Name", "EGameFeatureTargetState::Loaded" },
		{ "ModuleRelativePath", "Public/GameFeaturesSubsystem.h" },
		{ "Registered.Name", "EGameFeatureTargetState::Registered" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameFeatures_EGameFeatureTargetState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameFeatures,
		nullptr,
		"EGameFeatureTargetState",
		"EGameFeatureTargetState",
		Z_Construct_UEnum_GameFeatures_EGameFeatureTargetState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameFeatures_EGameFeatureTargetState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameFeatures_EGameFeatureTargetState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameFeatures_EGameFeatureTargetState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameFeatures_EGameFeatureTargetState()
	{
		if (!Z_Registration_Info_UEnum_EGameFeatureTargetState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameFeatureTargetState.InnerSingleton, Z_Construct_UEnum_GameFeatures_EGameFeatureTargetState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameFeatureTargetState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameFeaturePluginIdentifier;
class UScriptStruct* FGameFeaturePluginIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameFeaturePluginIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameFeaturePluginIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameFeaturePluginIdentifier, (UObject*)Z_Construct_UPackage__Script_GameFeatures(), TEXT("GameFeaturePluginIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_GameFeaturePluginIdentifier.OuterSingleton;
}
template<> GAMEFEATURES_API UScriptStruct* StaticStruct<FGameFeaturePluginIdentifier>()
{
	return FGameFeaturePluginIdentifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameFeaturePluginIdentifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameFeaturePluginIdentifier_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct used to transform a GameFeaturePlugin URL into something that can uniquely identify the GameFeaturePlugin\n    without including any transient data being passed in through the URL */" },
		{ "ModuleRelativePath", "Public/GameFeaturesSubsystem.h" },
		{ "ToolTip", "Struct used to transform a GameFeaturePlugin URL into something that can uniquely identify the GameFeaturePlugin\n   without including any transient data being passed in through the URL" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameFeaturePluginIdentifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameFeaturePluginIdentifier>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameFeaturePluginIdentifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameFeatures,
		nullptr,
		&NewStructOps,
		"GameFeaturePluginIdentifier",
		sizeof(FGameFeaturePluginIdentifier),
		alignof(FGameFeaturePluginIdentifier),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameFeaturePluginIdentifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameFeaturePluginIdentifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameFeaturePluginIdentifier()
	{
		if (!Z_Registration_Info_UScriptStruct_GameFeaturePluginIdentifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameFeaturePluginIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FGameFeaturePluginIdentifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameFeaturePluginIdentifier.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstallBundlePluginProtocolMetaData;
class UScriptStruct* FInstallBundlePluginProtocolMetaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstallBundlePluginProtocolMetaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstallBundlePluginProtocolMetaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstallBundlePluginProtocolMetaData, (UObject*)Z_Construct_UPackage__Script_GameFeatures(), TEXT("InstallBundlePluginProtocolMetaData"));
	}
	return Z_Registration_Info_UScriptStruct_InstallBundlePluginProtocolMetaData.OuterSingleton;
}
template<> GAMEFEATURES_API UScriptStruct* StaticStruct<FInstallBundlePluginProtocolMetaData>()
{
	return FInstallBundlePluginProtocolMetaData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInstallBundlePluginProtocolMetaData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstallBundlePluginProtocolMetaData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFeaturesSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInstallBundlePluginProtocolMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstallBundlePluginProtocolMetaData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstallBundlePluginProtocolMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameFeatures,
		nullptr,
		&NewStructOps,
		"InstallBundlePluginProtocolMetaData",
		sizeof(FInstallBundlePluginProtocolMetaData),
		alignof(FInstallBundlePluginProtocolMetaData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInstallBundlePluginProtocolMetaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstallBundlePluginProtocolMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInstallBundlePluginProtocolMetaData()
	{
		if (!Z_Registration_Info_UScriptStruct_InstallBundlePluginProtocolMetaData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstallBundlePluginProtocolMetaData.InnerSingleton, Z_Construct_UScriptStruct_FInstallBundlePluginProtocolMetaData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InstallBundlePluginProtocolMetaData.InnerSingleton;
	}
	void UGameFeaturesSubsystem::StaticRegisterNativesUGameFeaturesSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeaturesSubsystem);
	UClass* Z_Construct_UClass_UGameFeaturesSubsystem_NoRegister()
	{
		return UGameFeaturesSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UGameFeaturesSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GameFeaturePluginStateMachines_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameFeaturePluginStateMachines_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameFeaturePluginStateMachines_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GameFeaturePluginStateMachines;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TerminalGameFeaturePluginStateMachines_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerminalGameFeaturePluginStateMachines_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TerminalGameFeaturePluginStateMachines;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Observers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Observers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Observers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameSpecificPolicies_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GameSpecificPolicies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFeaturesSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFeatures,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeaturesSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** The manager subsystem for game features */" },
		{ "IncludePath", "GameFeaturesSubsystem.h" },
		{ "ModuleRelativePath", "Public/GameFeaturesSubsystem.h" },
		{ "ToolTip", "The manager subsystem for game features" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_GameFeaturePluginStateMachines_ValueProp = { "GameFeaturePluginStateMachines", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UGameFeaturePluginStateMachine_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_GameFeaturePluginStateMachines_Key_KeyProp = { "GameFeaturePluginStateMachines_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameFeaturePluginIdentifier, METADATA_PARAMS(nullptr, 0) }; // 3449590307
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_GameFeaturePluginStateMachines_MetaData[] = {
		{ "Comment", "/** The list of all game feature plugin state machine objects */" },
		{ "ModuleRelativePath", "Public/GameFeaturesSubsystem.h" },
		{ "ToolTip", "The list of all game feature plugin state machine objects" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_GameFeaturePluginStateMachines = { "GameFeaturePluginStateMachines", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameFeaturesSubsystem, GameFeaturePluginStateMachines), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_GameFeaturePluginStateMachines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_GameFeaturePluginStateMachines_MetaData)) }; // 3449590307
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_TerminalGameFeaturePluginStateMachines_Inner = { "TerminalGameFeaturePluginStateMachines", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGameFeaturePluginStateMachine_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_TerminalGameFeaturePluginStateMachines_MetaData[] = {
		{ "Comment", "/** Game feature plugin state machine objects that are being terminated. Used to prevent GC until termination is complete. */" },
		{ "ModuleRelativePath", "Public/GameFeaturesSubsystem.h" },
		{ "ToolTip", "Game feature plugin state machine objects that are being terminated. Used to prevent GC until termination is complete." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_TerminalGameFeaturePluginStateMachines = { "TerminalGameFeaturePluginStateMachines", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameFeaturesSubsystem, TerminalGameFeaturePluginStateMachines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_TerminalGameFeaturePluginStateMachines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_TerminalGameFeaturePluginStateMachines_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_Observers_Inner = { "Observers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_Observers_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFeaturesSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_Observers = { "Observers", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameFeaturesSubsystem, Observers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_Observers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_Observers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_GameSpecificPolicies_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFeaturesSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_GameSpecificPolicies = { "GameSpecificPolicies", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameFeaturesSubsystem, GameSpecificPolicies), Z_Construct_UClass_UGameFeaturesProjectPolicies_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_GameSpecificPolicies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_GameSpecificPolicies_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeaturesSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_GameFeaturePluginStateMachines_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_GameFeaturePluginStateMachines_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_GameFeaturePluginStateMachines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_TerminalGameFeaturePluginStateMachines_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_TerminalGameFeaturePluginStateMachines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_Observers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_Observers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeaturesSubsystem_Statics::NewProp_GameSpecificPolicies,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFeaturesSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeaturesSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeaturesSubsystem_Statics::ClassParams = {
		&UGameFeaturesSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameFeaturesSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeaturesSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameFeaturesSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeaturesSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFeaturesSubsystem()
	{
		if (!Z_Registration_Info_UClass_UGameFeaturesSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeaturesSubsystem.OuterSingleton, Z_Construct_UClass_UGameFeaturesSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFeaturesSubsystem.OuterSingleton;
	}
	template<> GAMEFEATURES_API UClass* StaticClass<UGameFeaturesSubsystem>()
	{
		return UGameFeaturesSubsystem::StaticClass();
	}
	UGameFeaturesSubsystem::UGameFeaturesSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeaturesSubsystem);
	UGameFeaturesSubsystem::~UGameFeaturesSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_Statics::EnumInfo[] = {
		{ EGameFeatureTargetState_StaticEnum, TEXT("EGameFeatureTargetState"), &Z_Registration_Info_UEnum_EGameFeatureTargetState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 532961067U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FGameFeaturePluginIdentifier::StaticStruct, Z_Construct_UScriptStruct_FGameFeaturePluginIdentifier_Statics::NewStructOps, TEXT("GameFeaturePluginIdentifier"), &Z_Registration_Info_UScriptStruct_GameFeaturePluginIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameFeaturePluginIdentifier), 3449590307U) },
		{ FInstallBundlePluginProtocolMetaData::StaticStruct, Z_Construct_UScriptStruct_FInstallBundlePluginProtocolMetaData_Statics::NewStructOps, TEXT("InstallBundlePluginProtocolMetaData"), &Z_Registration_Info_UScriptStruct_InstallBundlePluginProtocolMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstallBundlePluginProtocolMetaData), 2317635623U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeaturesSubsystem, UGameFeaturesSubsystem::StaticClass, TEXT("UGameFeaturesSubsystem"), &Z_Registration_Info_UClass_UGameFeaturesSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeaturesSubsystem), 1131462393U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_3600094098(TEXT("/Script/GameFeatures"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
