// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithInterchangeScripting_init() {}
	DATASMITHINTERCHANGESCRIPTING_API UFunction* Z_Construct_UDelegateFunction_DatasmithInterchangeScripting_DatasmithInterchangeImportEnded__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DatasmithInterchangeScripting;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DatasmithInterchangeScripting()
	{
		if (!Z_Registration_Info_UPackage__Script_DatasmithInterchangeScripting.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DatasmithInterchangeScripting_DatasmithInterchangeImportEnded__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DatasmithInterchangeScripting",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE3D7EB71,
				0x27FFD7F6,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DatasmithInterchangeScripting.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DatasmithInterchangeScripting.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DatasmithInterchangeScripting(Z_Construct_UPackage__Script_DatasmithInterchangeScripting, TEXT("/Script/DatasmithInterchangeScripting"), Z_Registration_Info_UPackage__Script_DatasmithInterchangeScripting, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE3D7EB71, 0x27FFD7F6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
