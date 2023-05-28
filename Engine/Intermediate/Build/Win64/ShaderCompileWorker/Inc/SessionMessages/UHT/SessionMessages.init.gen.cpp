// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSessionMessages_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SessionMessages;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SessionMessages()
	{
		if (!Z_Registration_Info_UPackage__Script_SessionMessages.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SessionMessages",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x53852BBC,
				0xED52D5EE,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SessionMessages.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SessionMessages.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SessionMessages(Z_Construct_UPackage__Script_SessionMessages, TEXT("/Script/SessionMessages"), Z_Registration_Info_UPackage__Script_SessionMessages, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x53852BBC, 0xED52D5EE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
