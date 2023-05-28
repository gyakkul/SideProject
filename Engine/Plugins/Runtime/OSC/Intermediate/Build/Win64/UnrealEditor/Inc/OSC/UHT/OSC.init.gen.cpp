// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSC_init() {}
	OSC_API UFunction* Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature();
	OSC_API UFunction* Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature();
	OSC_API UFunction* Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature();
	OSC_API UFunction* Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OSC;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OSC()
	{
		if (!Z_Registration_Info_UPackage__Script_OSC.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OSC",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xCA66FC98,
				0xFB8A7886,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OSC.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OSC.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OSC(Z_Construct_UPackage__Script_OSC, TEXT("/Script/OSC"), Z_Registration_Info_UPackage__Script_OSC, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCA66FC98, 0xFB8A7886));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
