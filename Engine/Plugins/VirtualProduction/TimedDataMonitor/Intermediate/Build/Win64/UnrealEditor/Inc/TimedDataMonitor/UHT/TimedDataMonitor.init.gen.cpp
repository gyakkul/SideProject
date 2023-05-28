// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimedDataMonitor_init() {}
	TIMEDDATAMONITOR_API UFunction* Z_Construct_UDelegateFunction_TimedDataMonitor_TimedDataIdentifierListChangedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TimedDataMonitor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TimedDataMonitor()
	{
		if (!Z_Registration_Info_UPackage__Script_TimedDataMonitor.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TimedDataMonitor_TimedDataIdentifierListChangedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TimedDataMonitor",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000100,
				0x4A1F4FD0,
				0x41005ECD,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TimedDataMonitor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TimedDataMonitor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TimedDataMonitor(Z_Construct_UPackage__Script_TimedDataMonitor, TEXT("/Script/TimedDataMonitor"), Z_Registration_Info_UPackage__Script_TimedDataMonitor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4A1F4FD0, 0x41005ECD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
