// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiUserServer_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MultiUserServer;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MultiUserServer()
	{
		if (!Z_Registration_Info_UPackage__Script_MultiUserServer.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MultiUserServer",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000100,
				0x09870C0F,
				0x41C5E48C,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MultiUserServer.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MultiUserServer.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MultiUserServer(Z_Construct_UPackage__Script_MultiUserServer, TEXT("/Script/MultiUserServer"), Z_Registration_Info_UPackage__Script_MultiUserServer, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x09870C0F, 0x41C5E48C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
