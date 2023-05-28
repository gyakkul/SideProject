// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AchievementQueryCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAchievementQueryCallbackProxy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UAchievementQueryCallbackProxy();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UAchievementQueryCallbackProxy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	DEFINE_FUNCTION(UAchievementQueryCallbackProxy::execCacheAchievementDescriptions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAchievementQueryCallbackProxy**)Z_Param__Result=UAchievementQueryCallbackProxy::CacheAchievementDescriptions(Z_Param_WorldContextObject,Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAchievementQueryCallbackProxy::execCacheAchievements)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAchievementQueryCallbackProxy**)Z_Param__Result=UAchievementQueryCallbackProxy::CacheAchievements(Z_Param_WorldContextObject,Z_Param_PlayerController);
		P_NATIVE_END;
	}
	void UAchievementQueryCallbackProxy::StaticRegisterNativesUAchievementQueryCallbackProxy()
	{
		UClass* Class = UAchievementQueryCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CacheAchievementDescriptions", &UAchievementQueryCallbackProxy::execCacheAchievementDescriptions },
			{ "CacheAchievements", &UAchievementQueryCallbackProxy::execCacheAchievements },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics
	{
		struct AchievementQueryCallbackProxy_eventCacheAchievementDescriptions_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			UAchievementQueryCallbackProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AchievementQueryCallbackProxy_eventCacheAchievementDescriptions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AchievementQueryCallbackProxy_eventCacheAchievementDescriptions_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AchievementQueryCallbackProxy_eventCacheAchievementDescriptions_Parms, ReturnValue), Z_Construct_UClass_UAchievementQueryCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Achievements" },
		{ "Comment", "// Fetches and caches achievement descriptions from the default online subsystem\n" },
		{ "ModuleRelativePath", "Classes/AchievementQueryCallbackProxy.h" },
		{ "ToolTip", "Fetches and caches achievement descriptions from the default online subsystem" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementQueryCallbackProxy, nullptr, "CacheAchievementDescriptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::AchievementQueryCallbackProxy_eventCacheAchievementDescriptions_Parms), Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics
	{
		struct AchievementQueryCallbackProxy_eventCacheAchievements_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			UAchievementQueryCallbackProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AchievementQueryCallbackProxy_eventCacheAchievements_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AchievementQueryCallbackProxy_eventCacheAchievements_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AchievementQueryCallbackProxy_eventCacheAchievements_Parms, ReturnValue), Z_Construct_UClass_UAchievementQueryCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Achievements" },
		{ "Comment", "// Fetches and caches achievement progress from the default online subsystem\n" },
		{ "ModuleRelativePath", "Classes/AchievementQueryCallbackProxy.h" },
		{ "ToolTip", "Fetches and caches achievement progress from the default online subsystem" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementQueryCallbackProxy, nullptr, "CacheAchievements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::AchievementQueryCallbackProxy_eventCacheAchievements_Parms), Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAchievementQueryCallbackProxy);
	UClass* Z_Construct_UClass_UAchievementQueryCallbackProxy_NoRegister()
	{
		return UAchievementQueryCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions, "CacheAchievementDescriptions" }, // 999073951
		{ &Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements, "CacheAchievements" }, // 3627206033
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AchievementQueryCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/AchievementQueryCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful query\n" },
		{ "ModuleRelativePath", "Classes/AchievementQueryCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful query" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAchievementQueryCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 2258189322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful query\n" },
		{ "ModuleRelativePath", "Classes/AchievementQueryCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful query" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAchievementQueryCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::NewProp_OnFailure_MetaData)) }; // 2258189322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAchievementQueryCallbackProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::ClassParams = {
		&UAchievementQueryCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAchievementQueryCallbackProxy()
	{
		if (!Z_Registration_Info_UClass_UAchievementQueryCallbackProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAchievementQueryCallbackProxy.OuterSingleton, Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAchievementQueryCallbackProxy.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UAchievementQueryCallbackProxy>()
	{
		return UAchievementQueryCallbackProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAchievementQueryCallbackProxy);
	UAchievementQueryCallbackProxy::~UAchievementQueryCallbackProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementQueryCallbackProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementQueryCallbackProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAchievementQueryCallbackProxy, UAchievementQueryCallbackProxy::StaticClass, TEXT("UAchievementQueryCallbackProxy"), &Z_Registration_Info_UClass_UAchievementQueryCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAchievementQueryCallbackProxy), 3037042918U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementQueryCallbackProxy_h_3565664170(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementQueryCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementQueryCallbackProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
