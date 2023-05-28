// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClientPilotBlackboardManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientPilotBlackboardManager() {}
// Cross Module References
	CLIENTPILOT_API UClass* Z_Construct_UClass_UClientPilotBlackboard_NoRegister();
	CLIENTPILOT_API UClass* Z_Construct_UClass_UClientPilotBlackboardManager();
	CLIENTPILOT_API UClass* Z_Construct_UClass_UClientPilotBlackboardManager_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ClientPilot();
// End Cross Module References
	void UClientPilotBlackboardManager::StaticRegisterNativesUClientPilotBlackboardManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClientPilotBlackboardManager);
	UClass* Z_Construct_UClass_UClientPilotBlackboardManager_NoRegister()
	{
		return UClientPilotBlackboardManager::StaticClass();
	}
	struct Z_Construct_UClass_UClientPilotBlackboardManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PilotBlackboard_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PilotBlackboard;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClientPilotBlackboardManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClientPilot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClientPilotBlackboardManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClientPilotBlackboardManager.h" },
		{ "ModuleRelativePath", "Public/ClientPilotBlackboardManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClientPilotBlackboardManager_Statics::NewProp_PilotBlackboard_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClientPilotBlackboardManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UClientPilotBlackboardManager_Statics::NewProp_PilotBlackboard = { "PilotBlackboard", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClientPilotBlackboardManager, PilotBlackboard), Z_Construct_UClass_UClientPilotBlackboard_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClientPilotBlackboardManager_Statics::NewProp_PilotBlackboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClientPilotBlackboardManager_Statics::NewProp_PilotBlackboard_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClientPilotBlackboardManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClientPilotBlackboardManager_Statics::NewProp_PilotBlackboard,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClientPilotBlackboardManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClientPilotBlackboardManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClientPilotBlackboardManager_Statics::ClassParams = {
		&UClientPilotBlackboardManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClientPilotBlackboardManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClientPilotBlackboardManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClientPilotBlackboardManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClientPilotBlackboardManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClientPilotBlackboardManager()
	{
		if (!Z_Registration_Info_UClass_UClientPilotBlackboardManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClientPilotBlackboardManager.OuterSingleton, Z_Construct_UClass_UClientPilotBlackboardManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClientPilotBlackboardManager.OuterSingleton;
	}
	template<> CLIENTPILOT_API UClass* StaticClass<UClientPilotBlackboardManager>()
	{
		return UClientPilotBlackboardManager::StaticClass();
	}
	UClientPilotBlackboardManager::UClientPilotBlackboardManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClientPilotBlackboardManager);
	UClientPilotBlackboardManager::~UClientPilotBlackboardManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboardManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboardManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClientPilotBlackboardManager, UClientPilotBlackboardManager::StaticClass, TEXT("UClientPilotBlackboardManager"), &Z_Registration_Info_UClass_UClientPilotBlackboardManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClientPilotBlackboardManager), 609906938U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboardManager_h_578529659(TEXT("/Script/ClientPilot"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboardManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClientPilot_Public_ClientPilotBlackboardManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
