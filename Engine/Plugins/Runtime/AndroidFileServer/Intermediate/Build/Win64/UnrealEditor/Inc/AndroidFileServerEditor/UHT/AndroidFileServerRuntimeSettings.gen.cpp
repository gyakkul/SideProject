// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidFileServerRuntimeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidFileServerRuntimeSettings() {}
// Cross Module References
	ANDROIDFILESERVEREDITOR_API UClass* Z_Construct_UClass_UAndroidFileServerRuntimeSettings();
	ANDROIDFILESERVEREDITOR_API UClass* Z_Construct_UClass_UAndroidFileServerRuntimeSettings_NoRegister();
	ANDROIDFILESERVEREDITOR_API UEnum* Z_Construct_UEnum_AndroidFileServerEditor_EAFSConnectionType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AndroidFileServerEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAFSConnectionType;
	static UEnum* EAFSConnectionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAFSConnectionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAFSConnectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidFileServerEditor_EAFSConnectionType, (UObject*)Z_Construct_UPackage__Script_AndroidFileServerEditor(), TEXT("EAFSConnectionType"));
		}
		return Z_Registration_Info_UEnum_EAFSConnectionType.OuterSingleton;
	}
	template<> ANDROIDFILESERVEREDITOR_API UEnum* StaticEnum<EAFSConnectionType::Type>()
	{
		return EAFSConnectionType_StaticEnum();
	}
	struct Z_Construct_UEnum_AndroidFileServerEditor_EAFSConnectionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AndroidFileServerEditor_EAFSConnectionType_Statics::Enumerators[] = {
		{ "EAFSConnectionType::USBOnly", (int64)EAFSConnectionType::USBOnly },
		{ "EAFSConnectionType::NetworkOnly", (int64)EAFSConnectionType::NetworkOnly },
		{ "EAFSConnectionType::Combined", (int64)EAFSConnectionType::Combined },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AndroidFileServerEditor_EAFSConnectionType_Statics::Enum_MetaDataParams[] = {
		{ "Combined.DisplayName", "USB and Network combined" },
		{ "Combined.Name", "EAFSConnectionType::Combined" },
		{ "Comment", "/**\n* Implements the settings for the AndroidFileServer plugin.\n*/" },
		{ "ModuleRelativePath", "Public/AndroidFileServerRuntimeSettings.h" },
		{ "NetworkOnly.DisplayName", "Network only" },
		{ "NetworkOnly.Name", "EAFSConnectionType::NetworkOnly" },
		{ "ToolTip", "Implements the settings for the AndroidFileServer plugin." },
		{ "USBOnly.DisplayName", "USB only" },
		{ "USBOnly.Name", "EAFSConnectionType::USBOnly" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidFileServerEditor_EAFSConnectionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AndroidFileServerEditor,
		nullptr,
		"EAFSConnectionType",
		"EAFSConnectionType::Type",
		Z_Construct_UEnum_AndroidFileServerEditor_EAFSConnectionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidFileServerEditor_EAFSConnectionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AndroidFileServerEditor_EAFSConnectionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidFileServerEditor_EAFSConnectionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AndroidFileServerEditor_EAFSConnectionType()
	{
		if (!Z_Registration_Info_UEnum_EAFSConnectionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAFSConnectionType.InnerSingleton, Z_Construct_UEnum_AndroidFileServerEditor_EAFSConnectionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAFSConnectionType.InnerSingleton;
	}
	void UAndroidFileServerRuntimeSettings::StaticRegisterNativesUAndroidFileServerRuntimeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAndroidFileServerRuntimeSettings);
	UClass* Z_Construct_UClass_UAndroidFileServerRuntimeSettings_NoRegister()
	{
		return UAndroidFileServerRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePlugin_MetaData[];
#endif
		static void NewProp_bEnablePlugin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePlugin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowNetworkConnection_MetaData[];
#endif
		static void NewProp_bAllowNetworkConnection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowNetworkConnection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecurityToken_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SecurityToken;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeInShipping_MetaData[];
#endif
		static void NewProp_bIncludeInShipping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeInShipping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowExternalStartInShipping_MetaData[];
#endif
		static void NewProp_bAllowExternalStartInShipping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowExternalStartInShipping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompileAFSProject_MetaData[];
#endif
		static void NewProp_bCompileAFSProject_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompileAFSProject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCompression_MetaData[];
#endif
		static void NewProp_bUseCompression_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCompression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLogFiles_MetaData[];
#endif
		static void NewProp_bLogFiles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogFiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReportStats_MetaData[];
#endif
		static void NewProp_bReportStats_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReportStats;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConnectionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseManualIPAddress_MetaData[];
#endif
		static void NewProp_bUseManualIPAddress_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseManualIPAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManualIPAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ManualIPAddress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidFileServerEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AndroidFileServerRuntimeSettings.h" },
		{ "ModuleRelativePath", "Public/AndroidFileServerRuntimeSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bEnablePlugin_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "// Enable Android FileServer for packaged builds and quick launch\n" },
		{ "DisplayName", "Use AndroidFileServer" },
		{ "ModuleRelativePath", "Public/AndroidFileServerRuntimeSettings.h" },
		{ "ToolTip", "Enable Android FileServer for packaged builds and quick launch" },
	};
#endif
	void Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bEnablePlugin_SetBit(void* Obj)
	{
		((UAndroidFileServerRuntimeSettings*)Obj)->bEnablePlugin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bEnablePlugin = { "bEnablePlugin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidFileServerRuntimeSettings), &Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bEnablePlugin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bEnablePlugin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bEnablePlugin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bAllowNetworkConnection_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "// Allow FileServer connection using network\n" },
		{ "EditCondition", "bEnablePlugin" },
		{ "ModuleRelativePath", "Public/AndroidFileServerRuntimeSettings.h" },
		{ "ToolTip", "Allow FileServer connection using network" },
	};
#endif
	void Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bAllowNetworkConnection_SetBit(void* Obj)
	{
		((UAndroidFileServerRuntimeSettings*)Obj)->bAllowNetworkConnection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bAllowNetworkConnection = { "bAllowNetworkConnection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidFileServerRuntimeSettings), &Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bAllowNetworkConnection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bAllowNetworkConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bAllowNetworkConnection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_SecurityToken_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "// Optional security token required to start FileServer (leave empty to disable)\n" },
		{ "EditCondition", "bEnablePlugin" },
		{ "ModuleRelativePath", "Public/AndroidFileServerRuntimeSettings.h" },
		{ "ToolTip", "Optional security token required to start FileServer (leave empty to disable)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_SecurityToken = { "SecurityToken", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidFileServerRuntimeSettings, SecurityToken), METADATA_PARAMS(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_SecurityToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_SecurityToken_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bIncludeInShipping_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "// Embed FileServer in Shipping builds\n" },
		{ "EditCondition", "bEnablePlugin" },
		{ "ModuleRelativePath", "Public/AndroidFileServerRuntimeSettings.h" },
		{ "ToolTip", "Embed FileServer in Shipping builds" },
	};
#endif
	void Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bIncludeInShipping_SetBit(void* Obj)
	{
		((UAndroidFileServerRuntimeSettings*)Obj)->bIncludeInShipping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bIncludeInShipping = { "bIncludeInShipping", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidFileServerRuntimeSettings), &Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bIncludeInShipping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bIncludeInShipping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bIncludeInShipping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bAllowExternalStartInShipping_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "// Allow FileServer to be started in Shipping builds with UnrealAndroidFileTool\n" },
		{ "EditCondition", "bEnablePlugin && bIncludeInShipping" },
		{ "ModuleRelativePath", "Public/AndroidFileServerRuntimeSettings.h" },
		{ "ToolTip", "Allow FileServer to be started in Shipping builds with UnrealAndroidFileTool" },
	};
#endif
	void Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bAllowExternalStartInShipping_SetBit(void* Obj)
	{
		((UAndroidFileServerRuntimeSettings*)Obj)->bAllowExternalStartInShipping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bAllowExternalStartInShipping = { "bAllowExternalStartInShipping", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidFileServerRuntimeSettings), &Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bAllowExternalStartInShipping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bAllowExternalStartInShipping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bAllowExternalStartInShipping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bCompileAFSProject_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "// Compile standalone AFS project\n" },
		{ "EditCondition", "bEnablePlugin" },
		{ "ModuleRelativePath", "Public/AndroidFileServerRuntimeSettings.h" },
		{ "ToolTip", "Compile standalone AFS project" },
	};
#endif
	void Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bCompileAFSProject_SetBit(void* Obj)
	{
		((UAndroidFileServerRuntimeSettings*)Obj)->bCompileAFSProject = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bCompileAFSProject = { "bCompileAFSProject", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidFileServerRuntimeSettings), &Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bCompileAFSProject_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bCompileAFSProject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bCompileAFSProject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bUseCompression_MetaData[] = {
		{ "Category", "Deployment" },
		{ "Comment", "// Enable compression during data transfer\n" },
		{ "EditCondition", "bEnablePlugin" },
		{ "ModuleRelativePath", "Public/AndroidFileServerRuntimeSettings.h" },
		{ "ToolTip", "Enable compression during data transfer" },
	};
#endif
	void Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bUseCompression_SetBit(void* Obj)
	{
		((UAndroidFileServerRuntimeSettings*)Obj)->bUseCompression = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bUseCompression = { "bUseCompression", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidFileServerRuntimeSettings), &Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bUseCompression_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bUseCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bUseCompression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bLogFiles_MetaData[] = {
		{ "Category", "Deployment" },
		{ "Comment", "// Log files transferred\n" },
		{ "EditCondition", "bEnablePlugin" },
		{ "ModuleRelativePath", "Public/AndroidFileServerRuntimeSettings.h" },
		{ "ToolTip", "Log files transferred" },
	};
#endif
	void Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bLogFiles_SetBit(void* Obj)
	{
		((UAndroidFileServerRuntimeSettings*)Obj)->bLogFiles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bLogFiles = { "bLogFiles", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidFileServerRuntimeSettings), &Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bLogFiles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bLogFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bLogFiles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bReportStats_MetaData[] = {
		{ "Category", "Deployment" },
		{ "Comment", "// Report transfer rate statistics\n" },
		{ "EditCondition", "bEnablePlugin" },
		{ "ModuleRelativePath", "Public/AndroidFileServerRuntimeSettings.h" },
		{ "ToolTip", "Report transfer rate statistics" },
	};
#endif
	void Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bReportStats_SetBit(void* Obj)
	{
		((UAndroidFileServerRuntimeSettings*)Obj)->bReportStats = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bReportStats = { "bReportStats", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidFileServerRuntimeSettings), &Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bReportStats_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bReportStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bReportStats_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_ConnectionType_MetaData[] = {
		{ "Category", "Connection" },
		{ "Comment", "// How to connect to file server (USB cable, Network, or combined)\n" },
		{ "EditCondition", "bEnablePlugin" },
		{ "ModuleRelativePath", "Public/AndroidFileServerRuntimeSettings.h" },
		{ "ToolTip", "How to connect to file server (USB cable, Network, or combined)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_ConnectionType = { "ConnectionType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidFileServerRuntimeSettings, ConnectionType), Z_Construct_UEnum_AndroidFileServerEditor_EAFSConnectionType, METADATA_PARAMS(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_ConnectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_ConnectionType_MetaData)) }; // 677790583
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bUseManualIPAddress_MetaData[] = {
		{ "Category", "Connection" },
		{ "Comment", "// Use manual IP address instead of automatic query from device (only for single device deploys!)\n" },
		{ "DisplayName", "Use Manual IP Address?" },
		{ "EditCondition", "ConnectionType == EAFSConnectionType::NetworkOnly || ConnectionType == EAFSConnectionType::Combined" },
		{ "ModuleRelativePath", "Public/AndroidFileServerRuntimeSettings.h" },
		{ "ToolTip", "Use manual IP address instead of automatic query from device (only for single device deploys!)" },
	};
#endif
	void Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bUseManualIPAddress_SetBit(void* Obj)
	{
		((UAndroidFileServerRuntimeSettings*)Obj)->bUseManualIPAddress = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bUseManualIPAddress = { "bUseManualIPAddress", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidFileServerRuntimeSettings), &Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bUseManualIPAddress_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bUseManualIPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bUseManualIPAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_ManualIPAddress_MetaData[] = {
		{ "Category", "Connection" },
		{ "Comment", "// IP address of device to use\n" },
		{ "DisplayName", "Manual IP Address" },
		{ "EditCondition", "bUseManualIPAddress" },
		{ "ModuleRelativePath", "Public/AndroidFileServerRuntimeSettings.h" },
		{ "ToolTip", "IP address of device to use" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_ManualIPAddress = { "ManualIPAddress", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidFileServerRuntimeSettings, ManualIPAddress), METADATA_PARAMS(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_ManualIPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_ManualIPAddress_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bEnablePlugin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bAllowNetworkConnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_SecurityToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bIncludeInShipping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bAllowExternalStartInShipping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bCompileAFSProject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bUseCompression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bLogFiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bReportStats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_ConnectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_bUseManualIPAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::NewProp_ManualIPAddress,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidFileServerRuntimeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::ClassParams = {
		&UAndroidFileServerRuntimeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAndroidFileServerRuntimeSettings()
	{
		if (!Z_Registration_Info_UClass_UAndroidFileServerRuntimeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidFileServerRuntimeSettings.OuterSingleton, Z_Construct_UClass_UAndroidFileServerRuntimeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAndroidFileServerRuntimeSettings.OuterSingleton;
	}
	template<> ANDROIDFILESERVEREDITOR_API UClass* StaticClass<UAndroidFileServerRuntimeSettings>()
	{
		return UAndroidFileServerRuntimeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidFileServerRuntimeSettings);
	UAndroidFileServerRuntimeSettings::~UAndroidFileServerRuntimeSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServerEditor_Public_AndroidFileServerRuntimeSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServerEditor_Public_AndroidFileServerRuntimeSettings_h_Statics::EnumInfo[] = {
		{ EAFSConnectionType_StaticEnum, TEXT("EAFSConnectionType"), &Z_Registration_Info_UEnum_EAFSConnectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 677790583U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServerEditor_Public_AndroidFileServerRuntimeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidFileServerRuntimeSettings, UAndroidFileServerRuntimeSettings::StaticClass, TEXT("UAndroidFileServerRuntimeSettings"), &Z_Registration_Info_UClass_UAndroidFileServerRuntimeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidFileServerRuntimeSettings), 2256146588U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServerEditor_Public_AndroidFileServerRuntimeSettings_h_745206594(TEXT("/Script/AndroidFileServerEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServerEditor_Public_AndroidFileServerRuntimeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServerEditor_Public_AndroidFileServerRuntimeSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServerEditor_Public_AndroidFileServerRuntimeSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServerEditor_Public_AndroidFileServerRuntimeSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
