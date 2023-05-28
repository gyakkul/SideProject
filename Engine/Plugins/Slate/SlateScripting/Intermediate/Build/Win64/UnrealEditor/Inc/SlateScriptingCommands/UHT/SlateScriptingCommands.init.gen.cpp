// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateScriptingCommands_init() {}
	SLATESCRIPTINGCOMMANDS_API UFunction* Z_Construct_UDelegateFunction_SlateScriptingCommands_CanExecuteCommand__DelegateSignature();
	SLATESCRIPTINGCOMMANDS_API UFunction* Z_Construct_UDelegateFunction_SlateScriptingCommands_ExecuteCommand__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SlateScriptingCommands;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SlateScriptingCommands()
	{
		if (!Z_Registration_Info_UPackage__Script_SlateScriptingCommands.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SlateScriptingCommands_CanExecuteCommand__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SlateScriptingCommands_ExecuteCommand__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SlateScriptingCommands",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDDAE935D,
				0x980CF2D3,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SlateScriptingCommands.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SlateScriptingCommands.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SlateScriptingCommands(Z_Construct_UPackage__Script_SlateScriptingCommands, TEXT("/Script/SlateScriptingCommands"), Z_Registration_Info_UPackage__Script_SlateScriptingCommands, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDDAE935D, 0x980CF2D3));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
