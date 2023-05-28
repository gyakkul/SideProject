// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualCamera_init() {}
	VIRTUALCAMERA_API UFunction* Z_Construct_UDelegateFunction_UVCamBlueprintFunctionLibrary_OnTakeRecorderSlateChanged_VCam__DelegateSignature();
	VIRTUALCAMERA_API UFunction* Z_Construct_UDelegateFunction_VirtualCamera_OnActorClickedDelegate__DelegateSignature();
	VIRTUALCAMERA_API UFunction* Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedAnyActor__DelegateSignature();
	VIRTUALCAMERA_API UFunction* Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedViewportActor__DelegateSignature();
	VIRTUALCAMERA_API UFunction* Z_Construct_UDelegateFunction_VirtualCamera_OnStreamStarted__DelegateSignature();
	VIRTUALCAMERA_API UFunction* Z_Construct_UDelegateFunction_VirtualCamera_OnStreamStopped__DelegateSignature();
	VIRTUALCAMERA_API UFunction* Z_Construct_UDelegateFunction_VirtualCamera_PreSetVirtualCameraTransform__DelegateSignature();
	VIRTUALCAMERA_API UFunction* Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraResetOffsetsDelegate__DelegateSignature();
	VIRTUALCAMERA_API UFunction* Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegate__DelegateSignature();
	VIRTUALCAMERA_API UFunction* Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegateGroup__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VirtualCamera;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VirtualCamera()
	{
		if (!Z_Registration_Info_UPackage__Script_VirtualCamera.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UVCamBlueprintFunctionLibrary_OnTakeRecorderSlateChanged_VCam__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VirtualCamera_OnActorClickedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedAnyActor__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VirtualCamera_OnSelectedViewportActor__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VirtualCamera_OnStreamStarted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VirtualCamera_OnStreamStopped__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VirtualCamera_PreSetVirtualCameraTransform__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraResetOffsetsDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegateGroup__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VirtualCamera",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x14EF7DC8,
				0xD36E266B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VirtualCamera.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VirtualCamera.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VirtualCamera(Z_Construct_UPackage__Script_VirtualCamera, TEXT("/Script/VirtualCamera"), Z_Registration_Info_UPackage__Script_VirtualCamera, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x14EF7DC8, 0xD36E266B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
