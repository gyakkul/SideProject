// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzureSpatialAnchors_init() {}
	AZURESPATIALANCHORS_API UFunction* Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASAAnchorLocatedDelegate__DelegateSignature();
	AZURESPATIALANCHORS_API UFunction* Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASALocateAnchorsCompletedDelegate__DelegateSignature();
	AZURESPATIALANCHORS_API UFunction* Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AzureSpatialAnchors;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AzureSpatialAnchors()
	{
		if (!Z_Registration_Info_UPackage__Script_AzureSpatialAnchors.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASAAnchorLocatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASALocateAnchorsCompletedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AzureSpatialAnchors",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8C10407B,
				0x0B948C9C,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AzureSpatialAnchors.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AzureSpatialAnchors.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AzureSpatialAnchors(Z_Construct_UPackage__Script_AzureSpatialAnchors, TEXT("/Script/AzureSpatialAnchors"), Z_Registration_Info_UPackage__Script_AzureSpatialAnchors, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8C10407B, 0x0B948C9C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
