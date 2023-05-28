// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryFramework_init() {}
	GEOMETRYFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_GeometryFramework_OnDynamicMeshModifiedBP__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GeometryFramework;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GeometryFramework()
	{
		if (!Z_Registration_Info_UPackage__Script_GeometryFramework.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GeometryFramework_OnDynamicMeshModifiedBP__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GeometryFramework",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC57F2774,
				0xAE37645E,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GeometryFramework.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GeometryFramework.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GeometryFramework(Z_Construct_UPackage__Script_GeometryFramework, TEXT("/Script/GeometryFramework"), Z_Registration_Info_UPackage__Script_GeometryFramework, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC57F2774, 0xAE37645E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
