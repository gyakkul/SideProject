// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPRoles_init() {}
	VPROLES_API UFunction* Z_Construct_UDelegateFunction_UVirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VPRoles;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VPRoles()
	{
		if (!Z_Registration_Info_UPackage__Script_VPRoles.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UVirtualProductionRolesSubsystem_OnRolesChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VPRoles",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x43A63689,
				0x1415B99B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VPRoles.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VPRoles.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VPRoles(Z_Construct_UPackage__Script_VPRoles, TEXT("/Script/VPRoles"), Z_Registration_Info_UPackage__Script_VPRoles, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x43A63689, 0x1415B99B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
