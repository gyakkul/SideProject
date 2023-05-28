// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePacketHandler_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PacketHandler;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PacketHandler()
	{
		if (!Z_Registration_Info_UPackage__Script_PacketHandler.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PacketHandler",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x3FC6A692,
				0x97A27437,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PacketHandler.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PacketHandler.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PacketHandler(Z_Construct_UPackage__Script_PacketHandler, TEXT("/Script/PacketHandler"), Z_Registration_Info_UPackage__Script_PacketHandler, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3FC6A692, 0x97A27437));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
