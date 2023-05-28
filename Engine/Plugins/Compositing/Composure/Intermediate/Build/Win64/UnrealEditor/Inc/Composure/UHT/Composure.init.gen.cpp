// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComposure_init() {}
	COMPOSURE_API UFunction* Z_Construct_UDelegateFunction_Composure_DynamicOnFinalPassRendered__DelegateSignature();
	COMPOSURE_API UFunction* Z_Construct_UDelegateFunction_Composure_DynamicOnTransformPassRendered__DelegateSignature();
	COMPOSURE_API UFunction* Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Composure;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Composure()
	{
		if (!Z_Registration_Info_UPackage__Script_Composure.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Composure_DynamicOnFinalPassRendered__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Composure_DynamicOnTransformPassRendered__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Composure",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF205FA5C,
				0x3CAC9519,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Composure.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Composure.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Composure(Z_Construct_UPackage__Script_Composure, TEXT("/Script/Composure"), Z_Registration_Info_UPackage__Script_Composure, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF205FA5C, 0x3CAC9519));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
