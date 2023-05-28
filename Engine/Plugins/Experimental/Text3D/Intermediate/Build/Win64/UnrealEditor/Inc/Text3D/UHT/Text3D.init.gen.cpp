// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeText3D_init() {}
	TEXT3D_API UFunction* Z_Construct_UDelegateFunction_UText3DComponent_TextGenerated__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Text3D;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Text3D()
	{
		if (!Z_Registration_Info_UPackage__Script_Text3D.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UText3DComponent_TextGenerated__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Text3D",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1BD1F9E2,
				0x3545C854,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Text3D.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Text3D.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Text3D(Z_Construct_UPackage__Script_Text3D, TEXT("/Script/Text3D"), Z_Registration_Info_UPackage__Script_Text3D, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1BD1F9E2, 0x3545C854));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
