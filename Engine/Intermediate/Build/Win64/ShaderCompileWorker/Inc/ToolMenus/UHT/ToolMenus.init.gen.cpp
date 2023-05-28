// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolMenus_init() {}
	TOOLMENUS_API UFunction* Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature();
	TOOLMENUS_API UFunction* Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature();
	TOOLMENUS_API UFunction* Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature();
	TOOLMENUS_API UFunction* Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature();
	TOOLMENUS_API UFunction* Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ToolMenus;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ToolMenus()
	{
		if (!Z_Registration_Info_UPackage__Script_ToolMenus.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ToolMenus",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000080,
				0xE4261560,
				0x9B0DF0D1,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ToolMenus.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ToolMenus.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ToolMenus(Z_Construct_UPackage__Script_ToolMenus, TEXT("/Script/ToolMenus"), Z_Registration_Info_UPackage__Script_ToolMenus, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE4261560, 0x9B0DF0D1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
