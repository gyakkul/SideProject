// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/OnlinePIESettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlinePIESettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlinePIESettings();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlinePIESettings_NoRegister();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FPIELoginSettingsInternal();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PIELoginSettingsInternal;
class UScriptStruct* FPIELoginSettingsInternal::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PIELoginSettingsInternal.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PIELoginSettingsInternal.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPIELoginSettingsInternal, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("PIELoginSettingsInternal"));
	}
	return Z_Registration_Info_UScriptStruct_PIELoginSettingsInternal.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FPIELoginSettingsInternal>()
{
	return FPIELoginSettingsInternal::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TokenBytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TokenBytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TokenBytes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Stores PIE login credentials\n */" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "ToolTip", "Stores PIE login credentials" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPIELoginSettingsInternal>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Logins" },
		{ "DisplayName", "User Id" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "Tooltip", "Id of the user logging in (email, display name, facebook id, etc)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIELoginSettingsInternal, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Token_MetaData[] = {
		{ "Category", "Logins" },
		{ "DisplayName", "Password" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "PasswordField", "TRUE" },
		{ "Tooltip", "Credentials of the user logging in (password or auth token)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIELoginSettingsInternal, Token), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Token_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Logins" },
		{ "DisplayName", "Type" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "Tooltip", "Type of account. Needed to identity the auth method to use (epic, internal, facebook, etc)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIELoginSettingsInternal, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Type_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_TokenBytes_Inner = { "TokenBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_TokenBytes_MetaData[] = {
		{ "Comment", "/** Token stored as an array of bytes, encrypted */" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "ToolTip", "Token stored as an array of bytes, encrypted" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_TokenBytes = { "TokenBytes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIELoginSettingsInternal, TokenBytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_TokenBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_TokenBytes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Token,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_TokenBytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_TokenBytes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
		nullptr,
		&NewStructOps,
		"PIELoginSettingsInternal",
		sizeof(FPIELoginSettingsInternal),
		alignof(FPIELoginSettingsInternal),
		Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPIELoginSettingsInternal()
	{
		if (!Z_Registration_Info_UScriptStruct_PIELoginSettingsInternal.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PIELoginSettingsInternal.InnerSingleton, Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PIELoginSettingsInternal.InnerSingleton;
	}
	void UOnlinePIESettings::StaticRegisterNativesUOnlinePIESettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlinePIESettings);
	UClass* Z_Construct_UClass_UOnlinePIESettings_NoRegister()
	{
		return UOnlinePIESettings::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePIESettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlinePIEEnabled_MetaData[];
#endif
		static void NewProp_bOnlinePIEEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlinePIEEnabled;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Logins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Logins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Logins;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlinePIESettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePIESettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Setup login credentials for the Play In Editor (PIE) feature\n */" },
		{ "DisplayName", "Play Credentials" },
		{ "IncludePath", "OnlinePIESettings.h" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Setup login credentials for the Play In Editor (PIE) feature" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_bOnlinePIEEnabled_MetaData[] = {
		{ "Category", "Logins" },
		{ "DisplayName", "Enable Logins" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "Tooltip", "Attempt to login with user credentials on a backend service before launching the PIE instance." },
	};
#endif
	void Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_bOnlinePIEEnabled_SetBit(void* Obj)
	{
		((UOnlinePIESettings*)Obj)->bOnlinePIEEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_bOnlinePIEEnabled = { "bOnlinePIEEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOnlinePIESettings), &Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_bOnlinePIEEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_bOnlinePIEEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_bOnlinePIEEnabled_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_Logins_Inner = { "Logins", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPIELoginSettingsInternal, METADATA_PARAMS(nullptr, 0) }; // 3975851638
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_Logins_MetaData[] = {
		{ "Category", "Logins" },
		{ "DisplayName", "Credentials" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "Tooltip", "Login credentials, at least one for each instance of PIE that is intended to be run" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_Logins = { "Logins", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlinePIESettings, Logins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_Logins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_Logins_MetaData)) }; // 3975851638
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlinePIESettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_bOnlinePIEEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_Logins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_Logins,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePIESettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePIESettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePIESettings_Statics::ClassParams = {
		&UOnlinePIESettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOnlinePIESettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePIESettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePIESettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePIESettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePIESettings()
	{
		if (!Z_Registration_Info_UClass_UOnlinePIESettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlinePIESettings.OuterSingleton, Z_Construct_UClass_UOnlinePIESettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlinePIESettings.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UOnlinePIESettings>()
	{
		return UOnlinePIESettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePIESettings);
	UOnlinePIESettings::~UOnlinePIESettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h_Statics::ScriptStructInfo[] = {
		{ FPIELoginSettingsInternal::StaticStruct, Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewStructOps, TEXT("PIELoginSettingsInternal"), &Z_Registration_Info_UScriptStruct_PIELoginSettingsInternal, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPIELoginSettingsInternal), 3975851638U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlinePIESettings, UOnlinePIESettings::StaticClass, TEXT("UOnlinePIESettings"), &Z_Registration_Info_UClass_UOnlinePIESettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlinePIESettings), 3770583415U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h_2794802558(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Private_OnlinePIESettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
