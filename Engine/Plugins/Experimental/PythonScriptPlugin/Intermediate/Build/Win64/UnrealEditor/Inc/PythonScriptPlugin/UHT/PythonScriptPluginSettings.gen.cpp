// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PythonScriptPluginSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePythonScriptPluginSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonScriptPluginSettings();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonScriptPluginSettings_NoRegister();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonScriptPluginUserSettings();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPythonScriptPluginUserSettings_NoRegister();
	PYTHONSCRIPTPLUGIN_API UEnum* Z_Construct_UEnum_PythonScriptPlugin_ETypeHintingMode();
	UPackage* Z_Construct_UPackage__Script_PythonScriptPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETypeHintingMode;
	static UEnum* ETypeHintingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETypeHintingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETypeHintingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PythonScriptPlugin_ETypeHintingMode, (UObject*)Z_Construct_UPackage__Script_PythonScriptPlugin(), TEXT("ETypeHintingMode"));
		}
		return Z_Registration_Info_UEnum_ETypeHintingMode.OuterSingleton;
	}
	template<> PYTHONSCRIPTPLUGIN_API UEnum* StaticEnum<ETypeHintingMode>()
	{
		return ETypeHintingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PythonScriptPlugin_ETypeHintingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PythonScriptPlugin_ETypeHintingMode_Statics::Enumerators[] = {
		{ "ETypeHintingMode::Off", (int64)ETypeHintingMode::Off },
		{ "ETypeHintingMode::AutoCompletion", (int64)ETypeHintingMode::AutoCompletion },
		{ "ETypeHintingMode::TypeChecker", (int64)ETypeHintingMode::TypeChecker },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PythonScriptPlugin_ETypeHintingMode_Statics::Enum_MetaDataParams[] = {
		{ "AutoCompletion.Comment", "/**\n\x09 * When generating the Python stub and to some extend the Docstrings, enables type hinting (PEP 484) to get the best experience\n\x09 * with a Python IDE auto-completion. The hinting will list the exact input types, omit type coercions and will assume all reflected\n\x09 * unreal.Object cannot be None which is not true, but will let the function signature easy to read.\n\x09 */" },
		{ "AutoCompletion.Name", "ETypeHintingMode::AutoCompletion" },
		{ "AutoCompletion.ToolTip", "When generating the Python stub and to some extend the Docstrings, enables type hinting (PEP 484) to get the best experience\nwith a Python IDE auto-completion. The hinting will list the exact input types, omit type coercions and will assume all reflected\nunreal.Object cannot be None which is not true, but will let the function signature easy to read." },
		{ "ModuleRelativePath", "Private/PythonScriptPluginSettings.h" },
		{ "Off.Comment", "/** Turn off type hinting. */" },
		{ "Off.Name", "ETypeHintingMode::Off" },
		{ "Off.ToolTip", "Turn off type hinting." },
		{ "TypeChecker.Comment", "/**\n\x09 * Enables type hinting for static type checking. Hint as close as possible the real supported types including\n\x09 * possible type coercions. Because the UE reflection API doesn't provide all the required information, some tradeoffs\n\x09 * are required that do not always reflect the reality. For example, reflected UObject will always be marked as\n\x09 * 'possibly None'. While this is true in some contexts, it is not true all the time.\n\x09 */" },
		{ "TypeChecker.Name", "ETypeHintingMode::TypeChecker" },
		{ "TypeChecker.ToolTip", "Enables type hinting for static type checking. Hint as close as possible the real supported types including\npossible type coercions. Because the UE reflection API doesn't provide all the required information, some tradeoffs\nare required that do not always reflect the reality. For example, reflected UObject will always be marked as\n'possibly None'. While this is true in some contexts, it is not true all the time." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PythonScriptPlugin_ETypeHintingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
		nullptr,
		"ETypeHintingMode",
		"ETypeHintingMode",
		Z_Construct_UEnum_PythonScriptPlugin_ETypeHintingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PythonScriptPlugin_ETypeHintingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PythonScriptPlugin_ETypeHintingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PythonScriptPlugin_ETypeHintingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PythonScriptPlugin_ETypeHintingMode()
	{
		if (!Z_Registration_Info_UEnum_ETypeHintingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETypeHintingMode.InnerSingleton, Z_Construct_UEnum_PythonScriptPlugin_ETypeHintingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETypeHintingMode.InnerSingleton;
	}
	void UPythonScriptPluginSettings::StaticRegisterNativesUPythonScriptPluginSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPythonScriptPluginSettings);
	UClass* Z_Construct_UClass_UPythonScriptPluginSettings_NoRegister()
	{
		return UPythonScriptPluginSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPythonScriptPluginSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StartupScripts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartupScripts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StartupScripts;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalPaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsolateInterpreterEnvironment_MetaData[];
#endif
		static void NewProp_bIsolateInterpreterEnvironment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsolateInterpreterEnvironment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeveloperMode_MetaData[];
#endif
		static void NewProp_bDeveloperMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeveloperMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoteExecution_MetaData[];
#endif
		static void NewProp_bRemoteExecution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoteExecution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteExecutionMulticastGroupEndpoint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RemoteExecutionMulticastGroupEndpoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteExecutionMulticastBindAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RemoteExecutionMulticastBindAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteExecutionSendBufferSizeBytes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemoteExecutionSendBufferSizeBytes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteExecutionReceiveBufferSizeBytes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemoteExecutionReceiveBufferSizeBytes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteExecutionMulticastTtl_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RemoteExecutionMulticastTtl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPythonScriptPluginSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonScriptPluginSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Configure the Python plug-in.\n */" },
		{ "IncludePath", "PythonScriptPluginSettings.h" },
		{ "ModuleRelativePath", "Private/PythonScriptPluginSettings.h" },
		{ "ToolTip", "Configure the Python plug-in." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_StartupScripts_Inner = { "StartupScripts", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_StartupScripts_MetaData[] = {
		{ "Category", "Python" },
		{ "Comment", "/** Array of Python scripts to run at start-up (run before the first Tick after the Engine has initialized). */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Private/PythonScriptPluginSettings.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Array of Python scripts to run at start-up (run before the first Tick after the Engine has initialized)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_StartupScripts = { "StartupScripts", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPythonScriptPluginSettings, StartupScripts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_StartupScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_StartupScripts_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_AdditionalPaths_Inner = { "AdditionalPaths", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_AdditionalPaths_MetaData[] = {
		{ "Category", "Python" },
		{ "Comment", "/** Array of additional paths to add to the Python system paths. */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Private/PythonScriptPluginSettings.h" },
		{ "RelativePath", "" },
		{ "ToolTip", "Array of additional paths to add to the Python system paths." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_AdditionalPaths = { "AdditionalPaths", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPythonScriptPluginSettings, AdditionalPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_AdditionalPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_AdditionalPaths_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_bIsolateInterpreterEnvironment_MetaData[] = {
		{ "Category", "Python" },
		{ "Comment", "/**\n\x09 * Should the embedded interpreter be run in isolation mode. In isolation, the standard PYTHON* environment variables (PYTHONPATH,\n\x09 * PYTHONHOME, etc), the script's directory and the user's site-packages directory are ignored by the interpreter. This\n\x09 * prevents incompabible software to crash the engine. Consider turning this option off if you tightly control your Python\n\x09 * environment and you are sure everything is compatible. Note that the UE_PYTHONPATH environment variable is added to 'sys.path'\n\x09 * whether the interpreter runs in insolation mode or not.\n\x09 */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Private/PythonScriptPluginSettings.h" },
		{ "ToolTip", "Should the embedded interpreter be run in isolation mode. In isolation, the standard PYTHON* environment variables (PYTHONPATH,\nPYTHONHOME, etc), the script's directory and the user's site-packages directory are ignored by the interpreter. This\nprevents incompabible software to crash the engine. Consider turning this option off if you tightly control your Python\nenvironment and you are sure everything is compatible. Note that the UE_PYTHONPATH environment variable is added to 'sys.path'\nwhether the interpreter runs in insolation mode or not." },
	};
#endif
	void Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_bIsolateInterpreterEnvironment_SetBit(void* Obj)
	{
		((UPythonScriptPluginSettings*)Obj)->bIsolateInterpreterEnvironment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_bIsolateInterpreterEnvironment = { "bIsolateInterpreterEnvironment", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPythonScriptPluginSettings), &Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_bIsolateInterpreterEnvironment_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_bIsolateInterpreterEnvironment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_bIsolateInterpreterEnvironment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_bDeveloperMode_MetaData[] = {
		{ "Category", "Python" },
		{ "Comment", "/**\n\x09 * Should Developer Mode be enabled on the Python interpreter *for all users of the project*\n\x09 * Note: Most of the time you want to enable bDeveloperMode in the Editor Preferences instead!\n\x09 *\n\x09 * (will also enable extra warnings (e.g., for deprecated code), and enable stub code generation for\n\x09 * use with external IDEs).\n\x09 */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Developer Mode (all users)" },
		{ "ModuleRelativePath", "Private/PythonScriptPluginSettings.h" },
		{ "ToolTip", "Should Developer Mode be enabled on the Python interpreter *for all users of the project*\nNote: Most of the time you want to enable bDeveloperMode in the Editor Preferences instead!\n\n(will also enable extra warnings (e.g., for deprecated code), and enable stub code generation for\nuse with external IDEs)." },
	};
#endif
	void Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_bDeveloperMode_SetBit(void* Obj)
	{
		((UPythonScriptPluginSettings*)Obj)->bDeveloperMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_bDeveloperMode = { "bDeveloperMode", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPythonScriptPluginSettings), &Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_bDeveloperMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_bDeveloperMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_bDeveloperMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_bRemoteExecution_MetaData[] = {
		{ "Category", "PythonRemoteExecution" },
		{ "Comment", "/** Should remote Python execution be enabled? */" },
		{ "DisplayName", "Enable Remote Execution?" },
		{ "ModuleRelativePath", "Private/PythonScriptPluginSettings.h" },
		{ "ToolTip", "Should remote Python execution be enabled?" },
	};
#endif
	void Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_bRemoteExecution_SetBit(void* Obj)
	{
		((UPythonScriptPluginSettings*)Obj)->bRemoteExecution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_bRemoteExecution = { "bRemoteExecution", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPythonScriptPluginSettings), &Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_bRemoteExecution_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_bRemoteExecution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_bRemoteExecution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_RemoteExecutionMulticastGroupEndpoint_MetaData[] = {
		{ "Category", "PythonRemoteExecution" },
		{ "Comment", "/** The multicast group endpoint (in the form of IP_ADDRESS:PORT_NUMBER) that the UDP multicast socket should join */" },
		{ "DisplayName", "Multicast Group Endpoint" },
		{ "ModuleRelativePath", "Private/PythonScriptPluginSettings.h" },
		{ "ToolTip", "The multicast group endpoint (in the form of IP_ADDRESS:PORT_NUMBER) that the UDP multicast socket should join" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_RemoteExecutionMulticastGroupEndpoint = { "RemoteExecutionMulticastGroupEndpoint", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPythonScriptPluginSettings, RemoteExecutionMulticastGroupEndpoint), METADATA_PARAMS(Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_RemoteExecutionMulticastGroupEndpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_RemoteExecutionMulticastGroupEndpoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_RemoteExecutionMulticastBindAddress_MetaData[] = {
		{ "Category", "PythonRemoteExecution" },
		{ "Comment", "/** The adapter address that the UDP multicast socket should bind to, or 0.0.0.0 to bind to all adapters */" },
		{ "DisplayName", "Multicast Bind Address" },
		{ "ModuleRelativePath", "Private/PythonScriptPluginSettings.h" },
		{ "ToolTip", "The adapter address that the UDP multicast socket should bind to, or 0.0.0.0 to bind to all adapters" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_RemoteExecutionMulticastBindAddress = { "RemoteExecutionMulticastBindAddress", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPythonScriptPluginSettings, RemoteExecutionMulticastBindAddress), METADATA_PARAMS(Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_RemoteExecutionMulticastBindAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_RemoteExecutionMulticastBindAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_RemoteExecutionSendBufferSizeBytes_MetaData[] = {
		{ "Category", "PythonRemoteExecution" },
		{ "Comment", "/** Size of the send buffer for the remote endpoint connection */" },
		{ "DisplayName", "Send Buffer Size" },
		{ "ModuleRelativePath", "Private/PythonScriptPluginSettings.h" },
		{ "ToolTip", "Size of the send buffer for the remote endpoint connection" },
		{ "Units", "Bytes" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_RemoteExecutionSendBufferSizeBytes = { "RemoteExecutionSendBufferSizeBytes", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPythonScriptPluginSettings, RemoteExecutionSendBufferSizeBytes), METADATA_PARAMS(Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_RemoteExecutionSendBufferSizeBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_RemoteExecutionSendBufferSizeBytes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_RemoteExecutionReceiveBufferSizeBytes_MetaData[] = {
		{ "Category", "PythonRemoteExecution" },
		{ "Comment", "/** Size of the receive buffer for the remote endpoint connection */" },
		{ "DisplayName", "Receive Buffer Size" },
		{ "ModuleRelativePath", "Private/PythonScriptPluginSettings.h" },
		{ "ToolTip", "Size of the receive buffer for the remote endpoint connection" },
		{ "Units", "Bytes" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_RemoteExecutionReceiveBufferSizeBytes = { "RemoteExecutionReceiveBufferSizeBytes", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPythonScriptPluginSettings, RemoteExecutionReceiveBufferSizeBytes), METADATA_PARAMS(Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_RemoteExecutionReceiveBufferSizeBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_RemoteExecutionReceiveBufferSizeBytes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_RemoteExecutionMulticastTtl_MetaData[] = {
		{ "Category", "PythonRemoteExecution" },
		{ "Comment", "/** The TTL that the UDP multicast socket should use (0 is limited to the local host, 1 is limited to the local subnet) */" },
		{ "DisplayName", "Multicast Time-To-Live" },
		{ "ModuleRelativePath", "Private/PythonScriptPluginSettings.h" },
		{ "ToolTip", "The TTL that the UDP multicast socket should use (0 is limited to the local host, 1 is limited to the local subnet)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_RemoteExecutionMulticastTtl = { "RemoteExecutionMulticastTtl", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPythonScriptPluginSettings, RemoteExecutionMulticastTtl), nullptr, METADATA_PARAMS(Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_RemoteExecutionMulticastTtl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_RemoteExecutionMulticastTtl_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPythonScriptPluginSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_StartupScripts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_StartupScripts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_AdditionalPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_AdditionalPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_bIsolateInterpreterEnvironment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_bDeveloperMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_bRemoteExecution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_RemoteExecutionMulticastGroupEndpoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_RemoteExecutionMulticastBindAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_RemoteExecutionSendBufferSizeBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_RemoteExecutionReceiveBufferSizeBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonScriptPluginSettings_Statics::NewProp_RemoteExecutionMulticastTtl,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPythonScriptPluginSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPythonScriptPluginSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPythonScriptPluginSettings_Statics::ClassParams = {
		&UPythonScriptPluginSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPythonScriptPluginSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPythonScriptPluginSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UPythonScriptPluginSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPythonScriptPluginSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPythonScriptPluginSettings()
	{
		if (!Z_Registration_Info_UClass_UPythonScriptPluginSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPythonScriptPluginSettings.OuterSingleton, Z_Construct_UClass_UPythonScriptPluginSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPythonScriptPluginSettings.OuterSingleton;
	}
	template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<UPythonScriptPluginSettings>()
	{
		return UPythonScriptPluginSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPythonScriptPluginSettings);
	UPythonScriptPluginSettings::~UPythonScriptPluginSettings() {}
	void UPythonScriptPluginUserSettings::StaticRegisterNativesUPythonScriptPluginUserSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPythonScriptPluginUserSettings);
	UClass* Z_Construct_UClass_UPythonScriptPluginUserSettings_NoRegister()
	{
		return UPythonScriptPluginUserSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeveloperMode_MetaData[];
#endif
		static void NewProp_bDeveloperMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeveloperMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TypeHintingMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeHintingMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeHintingMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableContentBrowserIntegration_MetaData[];
#endif
		static void NewProp_bEnableContentBrowserIntegration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableContentBrowserIntegration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PythonScriptPluginSettings.h" },
		{ "ModuleRelativePath", "Private/PythonScriptPluginSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::NewProp_bDeveloperMode_MetaData[] = {
		{ "Category", "Python" },
		{ "Comment", "/**\n\x09 * Should Developer Mode be enabled on the Python interpreter?\n\x09 *\n\x09 * (will also enable extra warnings (e.g., for deprecated code), and enable stub code generation for\n\x09 * use with external IDEs).\n\x09 */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Private/PythonScriptPluginSettings.h" },
		{ "ToolTip", "Should Developer Mode be enabled on the Python interpreter?\n\n(will also enable extra warnings (e.g., for deprecated code), and enable stub code generation for\nuse with external IDEs)." },
	};
#endif
	void Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::NewProp_bDeveloperMode_SetBit(void* Obj)
	{
		((UPythonScriptPluginUserSettings*)Obj)->bDeveloperMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::NewProp_bDeveloperMode = { "bDeveloperMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPythonScriptPluginUserSettings), &Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::NewProp_bDeveloperMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::NewProp_bDeveloperMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::NewProp_bDeveloperMode_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::NewProp_TypeHintingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::NewProp_TypeHintingMode_MetaData[] = {
		{ "Category", "Python" },
		{ "Comment", "/**\n\x09 * Should the generated Python stub and API documentation have type hints. This enables standard Python type hinting (PEP 484) for the classes,\n\x09 * structs, methods, properties, constants, etc. exposed by the engine. If the developer mode is enabled and the Python IDE configured to use\n\x09 * the generated Python stub, types will be displayed in auto-completion popup and used by the IDE static type checkers. This has no effects on\n\x09 * the execution of the code. (Requires Python >= 3.7)\n\x09 */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Private/PythonScriptPluginSettings.h" },
		{ "ToolTip", "Should the generated Python stub and API documentation have type hints. This enables standard Python type hinting (PEP 484) for the classes,\nstructs, methods, properties, constants, etc. exposed by the engine. If the developer mode is enabled and the Python IDE configured to use\nthe generated Python stub, types will be displayed in auto-completion popup and used by the IDE static type checkers. This has no effects on\nthe execution of the code. (Requires Python >= 3.7)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::NewProp_TypeHintingMode = { "TypeHintingMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPythonScriptPluginUserSettings, TypeHintingMode), Z_Construct_UEnum_PythonScriptPlugin_ETypeHintingMode, METADATA_PARAMS(Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::NewProp_TypeHintingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::NewProp_TypeHintingMode_MetaData)) }; // 1125067556
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::NewProp_bEnableContentBrowserIntegration_MetaData[] = {
		{ "Category", "Python" },
		{ "Comment", "/** Should Python scripts be available in the Content Browser? */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Private/PythonScriptPluginSettings.h" },
		{ "ToolTip", "Should Python scripts be available in the Content Browser?" },
	};
#endif
	void Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::NewProp_bEnableContentBrowserIntegration_SetBit(void* Obj)
	{
		((UPythonScriptPluginUserSettings*)Obj)->bEnableContentBrowserIntegration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::NewProp_bEnableContentBrowserIntegration = { "bEnableContentBrowserIntegration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPythonScriptPluginUserSettings), &Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::NewProp_bEnableContentBrowserIntegration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::NewProp_bEnableContentBrowserIntegration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::NewProp_bEnableContentBrowserIntegration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::NewProp_bDeveloperMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::NewProp_TypeHintingMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::NewProp_TypeHintingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::NewProp_bEnableContentBrowserIntegration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPythonScriptPluginUserSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::ClassParams = {
		&UPythonScriptPluginUserSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPythonScriptPluginUserSettings()
	{
		if (!Z_Registration_Info_UClass_UPythonScriptPluginUserSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPythonScriptPluginUserSettings.OuterSingleton, Z_Construct_UClass_UPythonScriptPluginUserSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPythonScriptPluginUserSettings.OuterSingleton;
	}
	template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<UPythonScriptPluginUserSettings>()
	{
		return UPythonScriptPluginUserSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPythonScriptPluginUserSettings);
	UPythonScriptPluginUserSettings::~UPythonScriptPluginUserSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptPluginSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptPluginSettings_h_Statics::EnumInfo[] = {
		{ ETypeHintingMode_StaticEnum, TEXT("ETypeHintingMode"), &Z_Registration_Info_UEnum_ETypeHintingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1125067556U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptPluginSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPythonScriptPluginSettings, UPythonScriptPluginSettings::StaticClass, TEXT("UPythonScriptPluginSettings"), &Z_Registration_Info_UClass_UPythonScriptPluginSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPythonScriptPluginSettings), 2972827261U) },
		{ Z_Construct_UClass_UPythonScriptPluginUserSettings, UPythonScriptPluginUserSettings::StaticClass, TEXT("UPythonScriptPluginUserSettings"), &Z_Registration_Info_UClass_UPythonScriptPluginUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPythonScriptPluginUserSettings), 2255246604U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptPluginSettings_h_1282364885(TEXT("/Script/PythonScriptPlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptPluginSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptPluginSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptPluginSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptPluginSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
