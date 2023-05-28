// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersona_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Persona;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Persona()
	{
		if (!Z_Registration_Info_UPackage__Script_Persona.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Persona",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xBDF32637,
				0x2E1FB847,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Persona.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Persona.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Persona(Z_Construct_UPackage__Script_Persona, TEXT("/Script/Persona"), Z_Registration_Info_UPackage__Script_Persona, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBDF32637, 0x2E1FB847));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
