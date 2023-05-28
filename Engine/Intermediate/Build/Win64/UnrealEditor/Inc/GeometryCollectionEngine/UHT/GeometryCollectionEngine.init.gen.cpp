// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionEngine_init() {}
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature();
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature();
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature();
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature();
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature();
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature();
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature();
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature();
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GeometryCollectionEngine;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine()
	{
		if (!Z_Registration_Info_UPackage__Script_GeometryCollectionEngine.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GeometryCollectionEngine",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xCCE3C0B1,
				0x80345663,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GeometryCollectionEngine.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GeometryCollectionEngine.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GeometryCollectionEngine(Z_Construct_UPackage__Script_GeometryCollectionEngine, TEXT("/Script/GeometryCollectionEngine"), Z_Registration_Info_UPackage__Script_GeometryCollectionEngine, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCCE3C0B1, 0x80345663));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
