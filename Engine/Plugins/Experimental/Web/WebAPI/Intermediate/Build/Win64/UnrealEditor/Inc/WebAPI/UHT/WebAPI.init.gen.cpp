// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPI_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_WebAPI;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_WebAPI()
	{
		if (!Z_Registration_Info_UPackage__Script_WebAPI.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/WebAPI",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x4B5A9FDE,
				0x2D682CB1,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_WebAPI.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_WebAPI.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_WebAPI(Z_Construct_UPackage__Script_WebAPI, TEXT("/Script/WebAPI"), Z_Registration_Info_UPackage__Script_WebAPI, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4B5A9FDE, 0x2D682CB1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
