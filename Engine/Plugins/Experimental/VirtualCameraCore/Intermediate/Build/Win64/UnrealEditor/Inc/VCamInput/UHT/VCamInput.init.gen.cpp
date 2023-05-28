// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamInput_init() {}
	VCAMINPUT_API UFunction* Z_Construct_UDelegateFunction_VCamInput_AnalogInputDelegate__DelegateSignature();
	VCAMINPUT_API UFunction* Z_Construct_UDelegateFunction_VCamInput_KeyInputDelegate__DelegateSignature();
	VCAMINPUT_API UFunction* Z_Construct_UDelegateFunction_VCamInput_MotionInputEvent__DelegateSignature();
	VCAMINPUT_API UFunction* Z_Construct_UDelegateFunction_VCamInput_OnKeySelected__DelegateSignature();
	VCAMINPUT_API UFunction* Z_Construct_UDelegateFunction_VCamInput_OnKeySelectionCanceled__DelegateSignature();
	VCAMINPUT_API UFunction* Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VCamInput;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VCamInput()
	{
		if (!Z_Registration_Info_UPackage__Script_VCamInput.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_VCamInput_AnalogInputDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VCamInput_KeyInputDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VCamInput_MotionInputEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VCamInput_OnKeySelected__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VCamInput_OnKeySelectionCanceled__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VCamInput_PointerInputDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VCamInput",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xBA6E178F,
				0xCB6629DB,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VCamInput.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VCamInput.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VCamInput(Z_Construct_UPackage__Script_VCamInput, TEXT("/Script/VCamInput"), Z_Registration_Info_UPackage__Script_VCamInput, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBA6E178F, 0xCB6629DB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
