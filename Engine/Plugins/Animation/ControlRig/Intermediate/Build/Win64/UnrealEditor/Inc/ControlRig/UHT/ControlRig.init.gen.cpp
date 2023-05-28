// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRig_init() {}
	CONTROLRIG_API UFunction* Z_Construct_UDelegateFunction_ControlRig_ControlRigComponentDelegate__DelegateSignature();
	CONTROLRIG_API UFunction* Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ControlRig;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ControlRig()
	{
		if (!Z_Registration_Info_UPackage__Script_ControlRig.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ControlRig_ControlRigComponentDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ControlRig",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9440BDEF,
				0xB8DE35FB,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ControlRig.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ControlRig.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ControlRig(Z_Construct_UPackage__Script_ControlRig, TEXT("/Script/ControlRig"), Z_Registration_Info_UPackage__Script_ControlRig, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9440BDEF, 0xB8DE35FB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
