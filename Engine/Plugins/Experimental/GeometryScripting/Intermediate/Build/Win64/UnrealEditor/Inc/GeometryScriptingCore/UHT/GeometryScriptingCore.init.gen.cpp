// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryScriptingCore_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GeometryScriptingCore;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore()
	{
		if (!Z_Registration_Info_UPackage__Script_GeometryScriptingCore.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GeometryScriptingCore",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x7CDBB650,
				0x41D2434F,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GeometryScriptingCore.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GeometryScriptingCore.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GeometryScriptingCore(Z_Construct_UPackage__Script_GeometryScriptingCore, TEXT("/Script/GeometryScriptingCore"), Z_Registration_Info_UPackage__Script_GeometryScriptingCore, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7CDBB650, 0x41D2434F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
