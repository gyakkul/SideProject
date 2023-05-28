// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CryptoKeysSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCryptoKeysSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	CRYPTOKEYS_API UClass* Z_Construct_UClass_UCryptoKeysSettings();
	CRYPTOKEYS_API UClass* Z_Construct_UClass_UCryptoKeysSettings_NoRegister();
	CRYPTOKEYS_API UScriptStruct* Z_Construct_UScriptStruct_FCryptoEncryptionKey();
	UPackage* Z_Construct_UPackage__Script_CryptoKeys();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CryptoEncryptionKey;
class UScriptStruct* FCryptoEncryptionKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CryptoEncryptionKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CryptoEncryptionKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCryptoEncryptionKey, (UObject*)Z_Construct_UPackage__Script_CryptoKeys(), TEXT("CryptoEncryptionKey"));
	}
	return Z_Registration_Info_UScriptStruct_CryptoEncryptionKey.OuterSingleton;
}
template<> CRYPTOKEYS_API UScriptStruct* StaticStruct<FCryptoEncryptionKey>()
{
	return FCryptoEncryptionKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* UStruct representing a named encryption key\n*/" },
		{ "ModuleRelativePath", "Classes/CryptoKeysSettings.h" },
		{ "ToolTip", "UStruct representing a named encryption key" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCryptoEncryptionKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "Encryption" },
		{ "ModuleRelativePath", "Classes/CryptoKeysSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCryptoEncryptionKey, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Encryption" },
		{ "ModuleRelativePath", "Classes/CryptoKeysSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCryptoEncryptionKey, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Encryption" },
		{ "ModuleRelativePath", "Classes/CryptoKeysSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCryptoEncryptionKey, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics::NewProp_Key,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CryptoKeys,
		nullptr,
		&NewStructOps,
		"CryptoEncryptionKey",
		sizeof(FCryptoEncryptionKey),
		alignof(FCryptoEncryptionKey),
		Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCryptoEncryptionKey()
	{
		if (!Z_Registration_Info_UScriptStruct_CryptoEncryptionKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CryptoEncryptionKey.InnerSingleton, Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CryptoEncryptionKey.InnerSingleton;
	}
	void UCryptoKeysSettings::StaticRegisterNativesUCryptoKeysSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCryptoKeysSettings);
	UClass* Z_Construct_UClass_UCryptoKeysSettings_NoRegister()
	{
		return UCryptoKeysSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCryptoKeysSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EncryptionKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EncryptionKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryEncryptionKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryEncryptionKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SecondaryEncryptionKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEncryptPakIniFiles_MetaData[];
#endif
		static void NewProp_bEncryptPakIniFiles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEncryptPakIniFiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEncryptPakIndex_MetaData[];
#endif
		static void NewProp_bEncryptPakIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEncryptPakIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEncryptUAssetFiles_MetaData[];
#endif
		static void NewProp_bEncryptUAssetFiles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEncryptUAssetFiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEncryptAllAssetFiles_MetaData[];
#endif
		static void NewProp_bEncryptAllAssetFiles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEncryptAllAssetFiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SigningPublicExponent_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SigningPublicExponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SigningModulus_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SigningModulus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SigningPrivateExponent_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SigningPrivateExponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePakSigning_MetaData[];
#endif
		static void NewProp_bEnablePakSigning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePakSigning;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCryptoKeysSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CryptoKeys,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCryptoKeysSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements the settings for imported Paper2D assets, such as sprite sheet textures.\n*/" },
		{ "IncludePath", "CryptoKeysSettings.h" },
		{ "ModuleRelativePath", "Classes/CryptoKeysSettings.h" },
		{ "ToolTip", "Implements the settings for imported Paper2D assets, such as sprite sheet textures." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_EncryptionKey_MetaData[] = {
		{ "Category", "Encryption" },
		{ "Comment", "// The default encryption key used to protect pak files\n" },
		{ "ModuleRelativePath", "Classes/CryptoKeysSettings.h" },
		{ "ToolTip", "The default encryption key used to protect pak files" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_EncryptionKey = { "EncryptionKey", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCryptoKeysSettings, EncryptionKey), METADATA_PARAMS(Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_EncryptionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_EncryptionKey_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_SecondaryEncryptionKeys_Inner = { "SecondaryEncryptionKeys", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCryptoEncryptionKey, METADATA_PARAMS(nullptr, 0) }; // 3932090403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_SecondaryEncryptionKeys_MetaData[] = {
		{ "Category", "Encryption" },
		{ "Comment", "// Secondary encryption keys that can be selected for use on different assets. Games are required to make these keys available to the pak platform file at runtime in order to access the data they protect.\n" },
		{ "ModuleRelativePath", "Classes/CryptoKeysSettings.h" },
		{ "ToolTip", "Secondary encryption keys that can be selected for use on different assets. Games are required to make these keys available to the pak platform file at runtime in order to access the data they protect." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_SecondaryEncryptionKeys = { "SecondaryEncryptionKeys", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCryptoKeysSettings, SecondaryEncryptionKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_SecondaryEncryptionKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_SecondaryEncryptionKeys_MetaData)) }; // 3932090403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptPakIniFiles_MetaData[] = {
		{ "Category", "Encryption" },
		{ "Comment", "// Encrypts all ini files in the pak. Gives security to the most common sources of mineable information, with minimal runtime IO cost\n" },
		{ "ModuleRelativePath", "Classes/CryptoKeysSettings.h" },
		{ "ToolTip", "Encrypts all ini files in the pak. Gives security to the most common sources of mineable information, with minimal runtime IO cost" },
	};
#endif
	void Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptPakIniFiles_SetBit(void* Obj)
	{
		((UCryptoKeysSettings*)Obj)->bEncryptPakIniFiles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptPakIniFiles = { "bEncryptPakIniFiles", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCryptoKeysSettings), &Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptPakIniFiles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptPakIniFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptPakIniFiles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptPakIndex_MetaData[] = {
		{ "Category", "Encryption" },
		{ "Comment", "// Encrypt the pak index, making it impossible to use unrealpak to manipulate the pak file without the encryption key\n" },
		{ "ModuleRelativePath", "Classes/CryptoKeysSettings.h" },
		{ "ToolTip", "Encrypt the pak index, making it impossible to use unrealpak to manipulate the pak file without the encryption key" },
	};
#endif
	void Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptPakIndex_SetBit(void* Obj)
	{
		((UCryptoKeysSettings*)Obj)->bEncryptPakIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptPakIndex = { "bEncryptPakIndex", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCryptoKeysSettings), &Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptPakIndex_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptPakIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptPakIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptUAssetFiles_MetaData[] = {
		{ "Category", "Encryption" },
		{ "Comment", "// Encrypts the uasset file in cooked data. Less runtime IO cost, and protection to package header information, including most string data, but still leaves the bulk of the data unencrypted. \n" },
		{ "ModuleRelativePath", "Classes/CryptoKeysSettings.h" },
		{ "ToolTip", "Encrypts the uasset file in cooked data. Less runtime IO cost, and protection to package header information, including most string data, but still leaves the bulk of the data unencrypted." },
	};
#endif
	void Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptUAssetFiles_SetBit(void* Obj)
	{
		((UCryptoKeysSettings*)Obj)->bEncryptUAssetFiles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptUAssetFiles = { "bEncryptUAssetFiles", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCryptoKeysSettings), &Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptUAssetFiles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptUAssetFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptUAssetFiles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptAllAssetFiles_MetaData[] = {
		{ "Category", "Encryption" },
		{ "Comment", "// Encrypt all files in the pak file. Secure, but will cause some slowdown to runtime IO performance, and high entropy to packaged data which will be bad for patching\n" },
		{ "ModuleRelativePath", "Classes/CryptoKeysSettings.h" },
		{ "ToolTip", "Encrypt all files in the pak file. Secure, but will cause some slowdown to runtime IO performance, and high entropy to packaged data which will be bad for patching" },
	};
#endif
	void Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptAllAssetFiles_SetBit(void* Obj)
	{
		((UCryptoKeysSettings*)Obj)->bEncryptAllAssetFiles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptAllAssetFiles = { "bEncryptAllAssetFiles", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCryptoKeysSettings), &Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptAllAssetFiles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptAllAssetFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptAllAssetFiles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_SigningPublicExponent_MetaData[] = {
		{ "Category", "Signing" },
		{ "Comment", "// The RSA key public exponent used for signing a pak file\n" },
		{ "ModuleRelativePath", "Classes/CryptoKeysSettings.h" },
		{ "ToolTip", "The RSA key public exponent used for signing a pak file" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_SigningPublicExponent = { "SigningPublicExponent", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCryptoKeysSettings, SigningPublicExponent), METADATA_PARAMS(Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_SigningPublicExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_SigningPublicExponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_SigningModulus_MetaData[] = {
		{ "Category", "Signing" },
		{ "Comment", "// The RSA key modulus used for signing a pak file\n" },
		{ "ModuleRelativePath", "Classes/CryptoKeysSettings.h" },
		{ "ToolTip", "The RSA key modulus used for signing a pak file" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_SigningModulus = { "SigningModulus", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCryptoKeysSettings, SigningModulus), METADATA_PARAMS(Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_SigningModulus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_SigningModulus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_SigningPrivateExponent_MetaData[] = {
		{ "Category", "Signing" },
		{ "Comment", "// The RSA key private exponent used for signing a pak file\n" },
		{ "ModuleRelativePath", "Classes/CryptoKeysSettings.h" },
		{ "ToolTip", "The RSA key private exponent used for signing a pak file" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_SigningPrivateExponent = { "SigningPrivateExponent", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCryptoKeysSettings, SigningPrivateExponent), METADATA_PARAMS(Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_SigningPrivateExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_SigningPrivateExponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEnablePakSigning_MetaData[] = {
		{ "Category", "Signing" },
		{ "Comment", "// Enable signing of pak files, to prevent tampering of the data\n" },
		{ "ModuleRelativePath", "Classes/CryptoKeysSettings.h" },
		{ "ToolTip", "Enable signing of pak files, to prevent tampering of the data" },
	};
#endif
	void Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEnablePakSigning_SetBit(void* Obj)
	{
		((UCryptoKeysSettings*)Obj)->bEnablePakSigning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEnablePakSigning = { "bEnablePakSigning", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCryptoKeysSettings), &Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEnablePakSigning_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEnablePakSigning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEnablePakSigning_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCryptoKeysSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_EncryptionKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_SecondaryEncryptionKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_SecondaryEncryptionKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptPakIniFiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptPakIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptUAssetFiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEncryptAllAssetFiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_SigningPublicExponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_SigningModulus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_SigningPrivateExponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCryptoKeysSettings_Statics::NewProp_bEnablePakSigning,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCryptoKeysSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCryptoKeysSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCryptoKeysSettings_Statics::ClassParams = {
		&UCryptoKeysSettings::StaticClass,
		"Crypto",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCryptoKeysSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCryptoKeysSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UCryptoKeysSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCryptoKeysSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCryptoKeysSettings()
	{
		if (!Z_Registration_Info_UClass_UCryptoKeysSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCryptoKeysSettings.OuterSingleton, Z_Construct_UClass_UCryptoKeysSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCryptoKeysSettings.OuterSingleton;
	}
	template<> CRYPTOKEYS_API UClass* StaticClass<UCryptoKeysSettings>()
	{
		return UCryptoKeysSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCryptoKeysSettings);
	UCryptoKeysSettings::~UCryptoKeysSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CryptoKeys_Source_CryptoKeys_Classes_CryptoKeysSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CryptoKeys_Source_CryptoKeys_Classes_CryptoKeysSettings_h_Statics::ScriptStructInfo[] = {
		{ FCryptoEncryptionKey::StaticStruct, Z_Construct_UScriptStruct_FCryptoEncryptionKey_Statics::NewStructOps, TEXT("CryptoEncryptionKey"), &Z_Registration_Info_UScriptStruct_CryptoEncryptionKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCryptoEncryptionKey), 3932090403U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CryptoKeys_Source_CryptoKeys_Classes_CryptoKeysSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCryptoKeysSettings, UCryptoKeysSettings::StaticClass, TEXT("UCryptoKeysSettings"), &Z_Registration_Info_UClass_UCryptoKeysSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCryptoKeysSettings), 3426402680U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CryptoKeys_Source_CryptoKeys_Classes_CryptoKeysSettings_h_3953780642(TEXT("/Script/CryptoKeys"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CryptoKeys_Source_CryptoKeys_Classes_CryptoKeysSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CryptoKeys_Source_CryptoKeys_Classes_CryptoKeysSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CryptoKeys_Source_CryptoKeys_Classes_CryptoKeysSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CryptoKeys_Source_CryptoKeys_Classes_CryptoKeysSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
