// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IRemoteControlModule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIRemoteControlModule() {}
// Cross Module References
	REMOTECONTROL_API UEnum* Z_Construct_UEnum_RemoteControl_ERCAccess();
	REMOTECONTROL_API UEnum* Z_Construct_UEnum_RemoteControl_ERCModifyOperation();
	REMOTECONTROL_API UEnum* Z_Construct_UEnum_RemoteControl_ERCTransactionMode();
	UPackage* Z_Construct_UPackage__Script_RemoteControl();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERCTransactionMode;
	static UEnum* ERCTransactionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERCTransactionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERCTransactionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RemoteControl_ERCTransactionMode, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("ERCTransactionMode"));
		}
		return Z_Registration_Info_UEnum_ERCTransactionMode.OuterSingleton;
	}
	template<> REMOTECONTROL_API UEnum* StaticEnum<ERCTransactionMode>()
	{
		return ERCTransactionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_RemoteControl_ERCTransactionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RemoteControl_ERCTransactionMode_Statics::Enumerators[] = {
		{ "ERCTransactionMode::NONE", (int64)ERCTransactionMode::NONE },
		{ "ERCTransactionMode::AUTOMATIC", (int64)ERCTransactionMode::AUTOMATIC },
		{ "ERCTransactionMode::MANUAL", (int64)ERCTransactionMode::MANUAL },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RemoteControl_ERCTransactionMode_Statics::Enum_MetaDataParams[] = {
		{ "AUTOMATIC.Name", "ERCTransactionMode::AUTOMATIC" },
		{ "MANUAL.Name", "ERCTransactionMode::MANUAL" },
		{ "ModuleRelativePath", "Public/IRemoteControlModule.h" },
		{ "NONE.Name", "ERCTransactionMode::NONE" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RemoteControl_ERCTransactionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		"ERCTransactionMode",
		"ERCTransactionMode",
		Z_Construct_UEnum_RemoteControl_ERCTransactionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteControl_ERCTransactionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RemoteControl_ERCTransactionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteControl_ERCTransactionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RemoteControl_ERCTransactionMode()
	{
		if (!Z_Registration_Info_UEnum_ERCTransactionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERCTransactionMode.InnerSingleton, Z_Construct_UEnum_RemoteControl_ERCTransactionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERCTransactionMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERCAccess;
	static UEnum* ERCAccess_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERCAccess.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERCAccess.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RemoteControl_ERCAccess, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("ERCAccess"));
		}
		return Z_Registration_Info_UEnum_ERCAccess.OuterSingleton;
	}
	template<> REMOTECONTROL_API UEnum* StaticEnum<ERCAccess>()
	{
		return ERCAccess_StaticEnum();
	}
	struct Z_Construct_UEnum_RemoteControl_ERCAccess_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RemoteControl_ERCAccess_Statics::Enumerators[] = {
		{ "ERCAccess::NO_ACCESS", (int64)ERCAccess::NO_ACCESS },
		{ "ERCAccess::READ_ACCESS", (int64)ERCAccess::READ_ACCESS },
		{ "ERCAccess::WRITE_ACCESS", (int64)ERCAccess::WRITE_ACCESS },
		{ "ERCAccess::WRITE_TRANSACTION_ACCESS", (int64)ERCAccess::WRITE_TRANSACTION_ACCESS },
		{ "ERCAccess::WRITE_MANUAL_TRANSACTION_ACCESS", (int64)ERCAccess::WRITE_MANUAL_TRANSACTION_ACCESS },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RemoteControl_ERCAccess_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Requested access mode to a remote property\n */" },
		{ "ModuleRelativePath", "Public/IRemoteControlModule.h" },
		{ "NO_ACCESS.Name", "ERCAccess::NO_ACCESS" },
		{ "READ_ACCESS.Name", "ERCAccess::READ_ACCESS" },
		{ "ToolTip", "Requested access mode to a remote property" },
		{ "WRITE_ACCESS.Name", "ERCAccess::WRITE_ACCESS" },
		{ "WRITE_MANUAL_TRANSACTION_ACCESS.Name", "ERCAccess::WRITE_MANUAL_TRANSACTION_ACCESS" },
		{ "WRITE_TRANSACTION_ACCESS.Name", "ERCAccess::WRITE_TRANSACTION_ACCESS" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RemoteControl_ERCAccess_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		"ERCAccess",
		"ERCAccess",
		Z_Construct_UEnum_RemoteControl_ERCAccess_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteControl_ERCAccess_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RemoteControl_ERCAccess_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteControl_ERCAccess_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RemoteControl_ERCAccess()
	{
		if (!Z_Registration_Info_UEnum_ERCAccess.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERCAccess.InnerSingleton, Z_Construct_UEnum_RemoteControl_ERCAccess_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERCAccess.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERCModifyOperation;
	static UEnum* ERCModifyOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERCModifyOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERCModifyOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RemoteControl_ERCModifyOperation, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("ERCModifyOperation"));
		}
		return Z_Registration_Info_UEnum_ERCModifyOperation.OuterSingleton;
	}
	template<> REMOTECONTROL_API UEnum* StaticEnum<ERCModifyOperation>()
	{
		return ERCModifyOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_RemoteControl_ERCModifyOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RemoteControl_ERCModifyOperation_Statics::Enumerators[] = {
		{ "ERCModifyOperation::EQUAL", (int64)ERCModifyOperation::EQUAL },
		{ "ERCModifyOperation::ADD", (int64)ERCModifyOperation::ADD },
		{ "ERCModifyOperation::SUBTRACT", (int64)ERCModifyOperation::SUBTRACT },
		{ "ERCModifyOperation::MULTIPLY", (int64)ERCModifyOperation::MULTIPLY },
		{ "ERCModifyOperation::DIVIDE", (int64)ERCModifyOperation::DIVIDE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RemoteControl_ERCModifyOperation_Statics::Enum_MetaDataParams[] = {
		{ "ADD.Name", "ERCModifyOperation::ADD" },
		{ "Comment", "/**\n * Type of operation to perform when setting a remote property's value\n */" },
		{ "DIVIDE.Name", "ERCModifyOperation::DIVIDE" },
		{ "EQUAL.Name", "ERCModifyOperation::EQUAL" },
		{ "ModuleRelativePath", "Public/IRemoteControlModule.h" },
		{ "MULTIPLY.Name", "ERCModifyOperation::MULTIPLY" },
		{ "SUBTRACT.Name", "ERCModifyOperation::SUBTRACT" },
		{ "ToolTip", "Type of operation to perform when setting a remote property's value" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RemoteControl_ERCModifyOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		"ERCModifyOperation",
		"ERCModifyOperation",
		Z_Construct_UEnum_RemoteControl_ERCModifyOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteControl_ERCModifyOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RemoteControl_ERCModifyOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RemoteControl_ERCModifyOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RemoteControl_ERCModifyOperation()
	{
		if (!Z_Registration_Info_UEnum_ERCModifyOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERCModifyOperation.InnerSingleton, Z_Construct_UEnum_RemoteControl_ERCModifyOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERCModifyOperation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_IRemoteControlModule_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_IRemoteControlModule_h_Statics::EnumInfo[] = {
		{ ERCTransactionMode_StaticEnum, TEXT("ERCTransactionMode"), &Z_Registration_Info_UEnum_ERCTransactionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 863120045U) },
		{ ERCAccess_StaticEnum, TEXT("ERCAccess"), &Z_Registration_Info_UEnum_ERCAccess, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3547601977U) },
		{ ERCModifyOperation_StaticEnum, TEXT("ERCModifyOperation"), &Z_Registration_Info_UEnum_ERCModifyOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3937981195U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_IRemoteControlModule_h_1591606341(TEXT("/Script/RemoteControl"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_IRemoteControlModule_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_IRemoteControlModule_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
