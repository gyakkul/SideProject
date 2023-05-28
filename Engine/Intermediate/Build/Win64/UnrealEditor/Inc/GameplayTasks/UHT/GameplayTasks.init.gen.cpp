// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTasks_init() {}
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_GameplayTasks_GameplayTaskSpawnActorDelegate__DelegateSignature();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GameplayTasks;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GameplayTasks()
	{
		if (!Z_Registration_Info_UPackage__Script_GameplayTasks.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GameplayTasks_GameplayTaskSpawnActorDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UGameplayTask_TimeLimitedExecution_TaskFinishDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GameplayTasks",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xEDAC6145,
				0x2244A62A,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GameplayTasks.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GameplayTasks.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GameplayTasks(Z_Construct_UPackage__Script_GameplayTasks, TEXT("/Script/GameplayTasks"), Z_Registration_Info_UPackage__Script_GameplayTasks, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEDAC6145, 0x2244A62A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
