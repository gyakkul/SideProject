// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorTests_init() {}
	EDITORTESTS_API UFunction* Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestEventSignature__DelegateSignature();
	EDITORTESTS_API UFunction* Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestFinishedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_EditorTests;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_EditorTests()
	{
		if (!Z_Registration_Info_UPackage__Script_EditorTests.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestEventSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EditorTests_EditorUtilityTestFinishedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/EditorTests",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000040,
				0xF86E645E,
				0x8BC74858,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_EditorTests.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_EditorTests.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_EditorTests(Z_Construct_UPackage__Script_EditorTests, TEXT("/Script/EditorTests"), Z_Registration_Info_UPackage__Script_EditorTests, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF86E645E, 0x8BC74858));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
