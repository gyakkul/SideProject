// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteControlCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlCommon() {}
// Cross Module References
	REMOTECONTROLCOMMON_API UEnum* Z_Construct_UEnum_RemoteControlCommon_ERCMask();
	REMOTECONTROLCOMMON_API UEnum* Z_Construct_UEnum_RemoteControlCommon_ERCProtocolBinding();
	UPackage* Z_Construct_UPackage__Script_RemoteControlCommon();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERCProtocolBinding;
	static UEnum* ERCProtocolBinding_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERCProtocolBinding.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERCProtocolBinding.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RemoteControlCommon_ERCProtocolBinding, (UObject*)Z_Construct_UPackage__Script_RemoteControlCommon(), TEXT("ERCProtocolBinding"));
		}
		return Z_Registration_Info_UEnum_ERCProtocolBinding.OuterSingleton;
	}
	template<> REMOTECONTROLCOMMON_API UEnum* StaticEnum<ERCProtocolBinding::Op>()
	{
		return ERCProtocolBinding_StaticEnum();
	}
	struct Z_Construct_UEnum_RemoteControlCommon_ERCProtocolBinding_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RemoteControlCommon_ERCProtocolBinding_Statics::Enumerators[] = {
		{ "ERCProtocolBinding::Added", (int64)ERCProtocolBinding::Added },
		{ "ERCProtocolBinding::Removed", (int64)ERCProtocolBinding::Removed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RemoteControlCommon_ERCProtocolBinding_Statics::Enum_MetaDataParams[] = {
		{ "Added.Name", "ERCProtocolBinding::Added" },
		{ "ModuleRelativePath", "Public/RemoteControlCommon.h" },
		{ "Removed.Name", "ERCProtocolBinding::Removed" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RemoteControlCommon_ERCProtocolBinding_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RemoteControlCommon,
		nullptr,
		"ERCProtocolBinding",
		"ERCProtocolBinding::Op",
		Z_Construct_UEnum_RemoteControlCommon_ERCProtocolBinding_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteControlCommon_ERCProtocolBinding_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_RemoteControlCommon_ERCProtocolBinding_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteControlCommon_ERCProtocolBinding_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RemoteControlCommon_ERCProtocolBinding()
	{
		if (!Z_Registration_Info_UEnum_ERCProtocolBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERCProtocolBinding.InnerSingleton, Z_Construct_UEnum_RemoteControlCommon_ERCProtocolBinding_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERCProtocolBinding.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERCMask;
	static UEnum* ERCMask_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERCMask.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERCMask.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RemoteControlCommon_ERCMask, (UObject*)Z_Construct_UPackage__Script_RemoteControlCommon(), TEXT("ERCMask"));
		}
		return Z_Registration_Info_UEnum_ERCMask.OuterSingleton;
	}
	template<> REMOTECONTROLCOMMON_API UEnum* StaticEnum<ERCMask>()
	{
		return ERCMask_StaticEnum();
	}
	struct Z_Construct_UEnum_RemoteControlCommon_ERCMask_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RemoteControlCommon_ERCMask_Statics::Enumerators[] = {
		{ "ERCMask::NoMask", (int64)ERCMask::NoMask },
		{ "ERCMask::MaskA", (int64)ERCMask::MaskA },
		{ "ERCMask::MaskB", (int64)ERCMask::MaskB },
		{ "ERCMask::MaskC", (int64)ERCMask::MaskC },
		{ "ERCMask::MaskD", (int64)ERCMask::MaskD },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RemoteControlCommon_ERCMask_Statics::Enum_MetaDataParams[] = {
		{ "MaskA.Name", "ERCMask::MaskA" },
		{ "MaskB.Name", "ERCMask::MaskB" },
		{ "MaskC.Name", "ERCMask::MaskC" },
		{ "MaskD.Name", "ERCMask::MaskD" },
		{ "ModuleRelativePath", "Public/RemoteControlCommon.h" },
		{ "NoMask.Name", "ERCMask::NoMask" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RemoteControlCommon_ERCMask_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RemoteControlCommon,
		nullptr,
		"ERCMask",
		"ERCMask",
		Z_Construct_UEnum_RemoteControlCommon_ERCMask_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteControlCommon_ERCMask_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RemoteControlCommon_ERCMask_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteControlCommon_ERCMask_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RemoteControlCommon_ERCMask()
	{
		if (!Z_Registration_Info_UEnum_ERCMask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERCMask.InnerSingleton, Z_Construct_UEnum_RemoteControlCommon_ERCMask_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERCMask.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RemoteControlCommon_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RemoteControlCommon_h_Statics::EnumInfo[] = {
		{ ERCProtocolBinding_StaticEnum, TEXT("ERCProtocolBinding"), &Z_Registration_Info_UEnum_ERCProtocolBinding, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3215685381U) },
		{ ERCMask_StaticEnum, TEXT("ERCMask"), &Z_Registration_Info_UEnum_ERCMask, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 271155464U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RemoteControlCommon_h_4120615864(TEXT("/Script/RemoteControlCommon"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RemoteControlCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RemoteControlCommon_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
