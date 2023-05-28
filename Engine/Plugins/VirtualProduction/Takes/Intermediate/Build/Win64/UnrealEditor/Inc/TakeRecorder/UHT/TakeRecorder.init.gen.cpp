// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeRecorder_init() {}
	TAKERECORDER_API UFunction* Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderCancelled__DelegateSignature();
	TAKERECORDER_API UFunction* Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderFinished__DelegateSignature();
	TAKERECORDER_API UFunction* Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderMarkedFrameAdded__DelegateSignature();
	TAKERECORDER_API UFunction* Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderPanelChanged__DelegateSignature();
	TAKERECORDER_API UFunction* Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderPreInitialize__DelegateSignature();
	TAKERECORDER_API UFunction* Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderStarted__DelegateSignature();
	TAKERECORDER_API UFunction* Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderStopped__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TakeRecorder;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TakeRecorder()
	{
		if (!Z_Registration_Info_UPackage__Script_TakeRecorder.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderCancelled__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderFinished__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderMarkedFrameAdded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderPanelChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderPreInitialize__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderStarted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TakeRecorder_OnTakeRecorderStopped__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TakeRecorder",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000100,
				0xEB77CB2A,
				0x811DE086,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TakeRecorder.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TakeRecorder.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TakeRecorder(Z_Construct_UPackage__Script_TakeRecorder, TEXT("/Script/TakeRecorder"), Z_Registration_Info_UPackage__Script_TakeRecorder, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEB77CB2A, 0x811DE086));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
