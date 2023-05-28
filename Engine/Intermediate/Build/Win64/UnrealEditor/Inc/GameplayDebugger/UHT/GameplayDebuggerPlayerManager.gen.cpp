// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayDebuggerPlayerManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayDebuggerPlayerManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerPlayerManager();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerPlayerManager_NoRegister();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerLocalController_NoRegister();
	GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData();
	UPackage* Z_Construct_UPackage__Script_GameplayDebugger();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayDebuggerPlayerData;
class UScriptStruct* FGameplayDebuggerPlayerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerPlayerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayDebuggerPlayerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData, (UObject*)Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerPlayerData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayDebuggerPlayerData.OuterSingleton;
}
template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<FGameplayDebuggerPlayerData>()
{
	return FGameplayDebuggerPlayerData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Replicator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Replicator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerPlayerData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_Controller_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerPlayerData, Controller), Z_Construct_UClass_UGameplayDebuggerLocalController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_Controller_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_InputComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerPlayerData, InputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_InputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_InputComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_Replicator_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_Replicator = { "Replicator", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerPlayerData, Replicator), Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_Replicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_Replicator_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_InputComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewProp_Replicator,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
		nullptr,
		&NewStructOps,
		"GameplayDebuggerPlayerData",
		sizeof(FGameplayDebuggerPlayerData),
		alignof(FGameplayDebuggerPlayerData),
		Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerPlayerData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayDebuggerPlayerData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayDebuggerPlayerData.InnerSingleton;
	}
	void AGameplayDebuggerPlayerManager::StaticRegisterNativesAGameplayDebuggerPlayerManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayDebuggerPlayerManager);
	UClass* Z_Construct_UClass_AGameplayDebuggerPlayerManager_NoRegister()
	{
		return AGameplayDebuggerPlayerManager::StaticClass();
	}
	struct Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerData;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PendingRegistrations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingRegistrations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingRegistrations;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorWorldData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorWorldData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayDebuggerPlayerManager.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PlayerData_Inner = { "PlayerData", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData, METADATA_PARAMS(nullptr, 0) }; // 2505676229
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PlayerData_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayDebuggerPlayerManager, PlayerData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PlayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PlayerData_MetaData)) }; // 2505676229
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PendingRegistrations_Inner = { "PendingRegistrations", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PendingRegistrations_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PendingRegistrations = { "PendingRegistrations", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayDebuggerPlayerManager, PendingRegistrations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PendingRegistrations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PendingRegistrations_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_EditorWorldData_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerPlayerManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_EditorWorldData = { "EditorWorldData", nullptr, (EPropertyFlags)0x0020088800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayDebuggerPlayerManager, EditorWorldData), Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData, METADATA_PARAMS(Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_EditorWorldData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_EditorWorldData_MetaData)) }; // 2505676229
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PlayerData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PlayerData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PendingRegistrations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_PendingRegistrations,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::NewProp_EditorWorldData,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayDebuggerPlayerManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::ClassParams = {
		&AGameplayDebuggerPlayerManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::PropPointers),
		0,
		0x049002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameplayDebuggerPlayerManager()
	{
		if (!Z_Registration_Info_UClass_AGameplayDebuggerPlayerManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayDebuggerPlayerManager.OuterSingleton, Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameplayDebuggerPlayerManager.OuterSingleton;
	}
	template<> GAMEPLAYDEBUGGER_API UClass* StaticClass<AGameplayDebuggerPlayerManager>()
	{
		return AGameplayDebuggerPlayerManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayDebuggerPlayerManager);
	AGameplayDebuggerPlayerManager::~AGameplayDebuggerPlayerManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_Statics::ScriptStructInfo[] = {
		{ FGameplayDebuggerPlayerData::StaticStruct, Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics::NewStructOps, TEXT("GameplayDebuggerPlayerData"), &Z_Registration_Info_UScriptStruct_GameplayDebuggerPlayerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayDebuggerPlayerData), 2505676229U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayDebuggerPlayerManager, AGameplayDebuggerPlayerManager::StaticClass, TEXT("AGameplayDebuggerPlayerManager"), &Z_Registration_Info_UClass_AGameplayDebuggerPlayerManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayDebuggerPlayerManager), 2101435179U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_2678632996(TEXT("/Script/GameplayDebugger"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
