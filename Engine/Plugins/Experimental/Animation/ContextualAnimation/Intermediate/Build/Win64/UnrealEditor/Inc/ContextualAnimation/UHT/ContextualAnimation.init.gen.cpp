// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContextualAnimation_init() {}
	CONTEXTUALANIMATION_API UFunction* Z_Construct_UDelegateFunction_ContextualAnimation_ContextualAnimSceneActorCompDelegate__DelegateSignature();
	CONTEXTUALANIMATION_API UFunction* Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorJoined__DelegateSignature();
	CONTEXTUALANIMATION_API UFunction* Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorLeft__DelegateSignature();
	CONTEXTUALANIMATION_API UFunction* Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneEnded__DelegateSignature();
	CONTEXTUALANIMATION_API UFunction* Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneNotify__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ContextualAnimation;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ContextualAnimation()
	{
		if (!Z_Registration_Info_UPackage__Script_ContextualAnimation.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ContextualAnimation_ContextualAnimSceneActorCompDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorJoined__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorLeft__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneEnded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneNotify__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ContextualAnimation",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x44858468,
				0x9236D81B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ContextualAnimation.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ContextualAnimation.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ContextualAnimation(Z_Construct_UPackage__Script_ContextualAnimation, TEXT("/Script/ContextualAnimation"), Z_Registration_Info_UPackage__Script_ContextualAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x44858468, 0x9236D81B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
