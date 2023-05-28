// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePythonScriptPlugin_init() {}
	PYTHONSCRIPTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestDelegate__DelegateSignature();
	PYTHONSCRIPTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestMulticastDelegate__DelegateSignature();
	PYTHONSCRIPTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestSlateTickDelegate__DelegateSignature();
	PYTHONSCRIPTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_UPyTestStructDelegate_OnNameCollisionDelegate__DelegateSignature();
	PYTHONSCRIPTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_UPyTestVectorDelegate_OnNameCollisionDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PythonScriptPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PythonScriptPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_PythonScriptPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestMulticastDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestSlateTickDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UPyTestStructDelegate_OnNameCollisionDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UPyTestVectorDelegate_OnNameCollisionDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PythonScriptPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000100,
				0xD83BE4F4,
				0x436BC47B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PythonScriptPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PythonScriptPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PythonScriptPlugin(Z_Construct_UPackage__Script_PythonScriptPlugin, TEXT("/Script/PythonScriptPlugin"), Z_Registration_Info_UPackage__Script_PythonScriptPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD83BE4F4, 0x436BC47B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
