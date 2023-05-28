// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceControl_init() {}
	SOURCECONTROL_API UFunction* Z_Construct_UDelegateFunction_USourceControlHelpers_QueryFileStateDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SourceControl;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SourceControl()
	{
		if (!Z_Registration_Info_UPackage__Script_SourceControl.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_USourceControlHelpers_QueryFileStateDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SourceControl",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000080,
				0x8E0D8344,
				0xD5F6B23F,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SourceControl.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SourceControl.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SourceControl(Z_Construct_UPackage__Script_SourceControl, TEXT("/Script/SourceControl"), Z_Registration_Info_UPackage__Script_SourceControl, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8E0D8344, 0xD5F6B23F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
