// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MLAdapter/Source/MLAdapter/Public/Managers/MLAdapterNoRPCManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLAdapterNoRPCManager() {}
// Cross Module References
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterManager();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterNoRPCManager();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterNoRPCManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MLAdapter();
// End Cross Module References
	void UMLAdapterNoRPCManager::StaticRegisterNativesUMLAdapterNoRPCManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLAdapterNoRPCManager);
	UClass* Z_Construct_UClass_UMLAdapterNoRPCManager_NoRegister()
	{
		return UMLAdapterNoRPCManager::StaticClass();
	}
	struct Z_Construct_UClass_UMLAdapterNoRPCManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLAdapterNoRPCManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLAdapterManager,
		(UObject* (*)())Z_Construct_UPackage__Script_MLAdapter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterNoRPCManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMLAdapterNoRPCManager won't start the RPC server and will immediately start a session and spawn the default agent. This is\n * intended to be used when there will only be a single inference agent that exists for the life of the game.\n */" },
		{ "IncludePath", "Managers/MLAdapterNoRPCManager.h" },
		{ "ModuleRelativePath", "Public/Managers/MLAdapterNoRPCManager.h" },
		{ "ToolTip", "UMLAdapterNoRPCManager won't start the RPC server and will immediately start a session and spawn the default agent. This is\nintended to be used when there will only be a single inference agent that exists for the life of the game." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLAdapterNoRPCManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLAdapterNoRPCManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLAdapterNoRPCManager_Statics::ClassParams = {
		&UMLAdapterNoRPCManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMLAdapterNoRPCManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterNoRPCManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLAdapterNoRPCManager()
	{
		if (!Z_Registration_Info_UClass_UMLAdapterNoRPCManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLAdapterNoRPCManager.OuterSingleton, Z_Construct_UClass_UMLAdapterNoRPCManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLAdapterNoRPCManager.OuterSingleton;
	}
	template<> MLADAPTER_API UClass* StaticClass<UMLAdapterNoRPCManager>()
	{
		return UMLAdapterNoRPCManager::StaticClass();
	}
	UMLAdapterNoRPCManager::UMLAdapterNoRPCManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLAdapterNoRPCManager);
	UMLAdapterNoRPCManager::~UMLAdapterNoRPCManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterNoRPCManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterNoRPCManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLAdapterNoRPCManager, UMLAdapterNoRPCManager::StaticClass, TEXT("UMLAdapterNoRPCManager"), &Z_Registration_Info_UClass_UMLAdapterNoRPCManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLAdapterNoRPCManager), 570595336U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterNoRPCManager_h_2109535067(TEXT("/Script/MLAdapter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterNoRPCManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterNoRPCManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
