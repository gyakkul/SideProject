// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SwitchboardTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwitchboardTypes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SWITCHBOARDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterRootActorReference();
	SWITCHBOARDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions();
	SWITCHBOARDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSwitchboardScriptArguments();
	UPackage* Z_Construct_UPackage__Script_SwitchboardEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SwitchboardScriptArguments;
class UScriptStruct* FSwitchboardScriptArguments::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SwitchboardScriptArguments.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SwitchboardScriptArguments.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwitchboardScriptArguments, (UObject*)Z_Construct_UPackage__Script_SwitchboardEditor(), TEXT("SwitchboardScriptArguments"));
	}
	return Z_Registration_Info_UScriptStruct_SwitchboardScriptArguments.OuterSingleton;
}
template<> SWITCHBOARDEDITOR_API UScriptStruct* StaticStruct<FSwitchboardScriptArguments>()
{
	return FSwitchboardScriptArguments::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConfigName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineDir_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EngineDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Map;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayClusterConfigPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayClusterConfigPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumEditorDevices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumEditorDevices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocalhost_MetaData[];
#endif
		static void NewProp_bUseLocalhost_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocalhost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoConnect_MetaData[];
#endif
		static void NewProp_bAutoConnect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoConnect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDeleteScriptArgsFile_MetaData[];
#endif
		static void NewProp_bAutoDeleteScriptArgsFile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDeleteScriptArgsFile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure that holds the parameters to the sb_script_new_config.py script that will be passed to Switchboard when auto-creating a new config.\n * This structure is saved as a temporary json file and its path is passed to SB in the command line.\n */" },
		{ "ModuleRelativePath", "Private/SwitchboardTypes.h" },
		{ "ToolTip", "Structure that holds the parameters to the sb_script_new_config.py script that will be passed to Switchboard when auto-creating a new config.\nThis structure is saved as a temporary json file and its path is passed to SB in the command line." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwitchboardScriptArguments>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_ConfigName_MetaData[] = {
		{ "Comment", "/* Optional name of the new config. If left empty, a name will be autogenerated. */" },
		{ "ModuleRelativePath", "Private/SwitchboardTypes.h" },
		{ "ToolTip", "Optional name of the new config. If left empty, a name will be autogenerated." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_ConfigName = { "ConfigName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwitchboardScriptArguments, ConfigName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_ConfigName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_ConfigName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_EngineDir_MetaData[] = {
		{ "Comment", "/* Path to the Engine directory so that Switchboard knows which engine to launch */" },
		{ "ModuleRelativePath", "Private/SwitchboardTypes.h" },
		{ "ToolTip", "Path to the Engine directory so that Switchboard knows which engine to launch" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_EngineDir = { "EngineDir", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwitchboardScriptArguments, EngineDir), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_EngineDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_EngineDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_ProjectPath_MetaData[] = {
		{ "Comment", "/* Path to the Project directory so that Switchboard knows which project to launch */" },
		{ "ModuleRelativePath", "Private/SwitchboardTypes.h" },
		{ "ToolTip", "Path to the Project directory so that Switchboard knows which project to launch" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_ProjectPath = { "ProjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwitchboardScriptArguments, ProjectPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_ProjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_ProjectPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_Map_MetaData[] = {
		{ "Comment", "/* Gamepath to map that Switchboard should launch */" },
		{ "ModuleRelativePath", "Private/SwitchboardTypes.h" },
		{ "ToolTip", "Gamepath to map that Switchboard should launch" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwitchboardScriptArguments, Map), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_Map_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_DisplayClusterConfigPath_MetaData[] = {
		{ "Comment", "/* Path to nDisplay config that Switchboard should create the nDisplay cluster from */" },
		{ "ModuleRelativePath", "Private/SwitchboardTypes.h" },
		{ "ToolTip", "Path to nDisplay config that Switchboard should create the nDisplay cluster from" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_DisplayClusterConfigPath = { "DisplayClusterConfigPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwitchboardScriptArguments, DisplayClusterConfigPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_DisplayClusterConfigPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_DisplayClusterConfigPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_NumEditorDevices_MetaData[] = {
		{ "Comment", "/* Number of Editor devices that it should create */" },
		{ "ModuleRelativePath", "Private/SwitchboardTypes.h" },
		{ "ToolTip", "Number of Editor devices that it should create" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_NumEditorDevices = { "NumEditorDevices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwitchboardScriptArguments, NumEditorDevices), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_NumEditorDevices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_NumEditorDevices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_bUseLocalhost_MetaData[] = {
		{ "Comment", "/* Indicates that Switchboard should override IP addresses with localhost */" },
		{ "ModuleRelativePath", "Private/SwitchboardTypes.h" },
		{ "ToolTip", "Indicates that Switchboard should override IP addresses with localhost" },
	};
#endif
	void Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_bUseLocalhost_SetBit(void* Obj)
	{
		((FSwitchboardScriptArguments*)Obj)->bUseLocalhost = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_bUseLocalhost = { "bUseLocalhost", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSwitchboardScriptArguments), &Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_bUseLocalhost_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_bUseLocalhost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_bUseLocalhost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_bAutoConnect_MetaData[] = {
		{ "Comment", "/* Indicates that Switchboard should auto-connect to the listeners of each created device */" },
		{ "ModuleRelativePath", "Private/SwitchboardTypes.h" },
		{ "ToolTip", "Indicates that Switchboard should auto-connect to the listeners of each created device" },
	};
#endif
	void Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_bAutoConnect_SetBit(void* Obj)
	{
		((FSwitchboardScriptArguments*)Obj)->bAutoConnect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_bAutoConnect = { "bAutoConnect", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSwitchboardScriptArguments), &Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_bAutoConnect_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_bAutoConnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_bAutoConnect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_bAutoDeleteScriptArgsFile_MetaData[] = {
		{ "Comment", "/* Indicates that Switchboard should delete the script arguments file */" },
		{ "ModuleRelativePath", "Private/SwitchboardTypes.h" },
		{ "ToolTip", "Indicates that Switchboard should delete the script arguments file" },
	};
#endif
	void Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_bAutoDeleteScriptArgsFile_SetBit(void* Obj)
	{
		((FSwitchboardScriptArguments*)Obj)->bAutoDeleteScriptArgsFile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_bAutoDeleteScriptArgsFile = { "bAutoDeleteScriptArgsFile", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSwitchboardScriptArguments), &Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_bAutoDeleteScriptArgsFile_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_bAutoDeleteScriptArgsFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_bAutoDeleteScriptArgsFile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_ConfigName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_EngineDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_ProjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_Map,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_DisplayClusterConfigPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_NumEditorDevices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_bUseLocalhost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_bAutoConnect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewProp_bAutoDeleteScriptArgsFile,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwitchboardEditor,
		nullptr,
		&NewStructOps,
		"SwitchboardScriptArguments",
		sizeof(FSwitchboardScriptArguments),
		alignof(FSwitchboardScriptArguments),
		Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwitchboardScriptArguments()
	{
		if (!Z_Registration_Info_UScriptStruct_SwitchboardScriptArguments.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SwitchboardScriptArguments.InnerSingleton, Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SwitchboardScriptArguments.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterRootActorReference;
class UScriptStruct* FDisplayClusterRootActorReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterRootActorReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterRootActorReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterRootActorReference, (UObject*)Z_Construct_UPackage__Script_SwitchboardEditor(), TEXT("DisplayClusterRootActorReference"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterRootActorReference.OuterSingleton;
}
template<> SWITCHBOARDEDITOR_API UScriptStruct* StaticStruct<FDisplayClusterRootActorReference>()
{
	return FDisplayClusterRootActorReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterRootActorReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DCRA_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DCRA;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterRootActorReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure used to hold a reference of an nDisplay actor for detail customization purposes\n * Note: The reason for not simply using <ADisplayClusterRootActor> is to avoid depending on the nDisplay plugin\n */" },
		{ "ModuleRelativePath", "Private/SwitchboardTypes.h" },
		{ "ToolTip", "Structure used to hold a reference of an nDisplay actor for detail customization purposes\nNote: The reason for not simply using <ADisplayClusterRootActor> is to avoid depending on the nDisplay plugin" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterRootActorReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterRootActorReference>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterRootActorReference_Statics::NewProp_DCRA_MetaData[] = {
		{ "Comment", "/** Points to the nDisplay actor */" },
		{ "ModuleRelativePath", "Private/SwitchboardTypes.h" },
		{ "ToolTip", "Points to the nDisplay actor" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDisplayClusterRootActorReference_Statics::NewProp_DCRA = { "DCRA", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterRootActorReference, DCRA), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterRootActorReference_Statics::NewProp_DCRA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterRootActorReference_Statics::NewProp_DCRA_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterRootActorReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterRootActorReference_Statics::NewProp_DCRA,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterRootActorReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwitchboardEditor,
		nullptr,
		&NewStructOps,
		"DisplayClusterRootActorReference",
		sizeof(FDisplayClusterRootActorReference),
		alignof(FDisplayClusterRootActorReference),
		Z_Construct_UScriptStruct_FDisplayClusterRootActorReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterRootActorReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterRootActorReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterRootActorReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterRootActorReference()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterRootActorReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterRootActorReference.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterRootActorReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterRootActorReference.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SwitchboardNewConfigUserOptions;
class UScriptStruct* FSwitchboardNewConfigUserOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SwitchboardNewConfigUserOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SwitchboardNewConfigUserOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions, (UObject*)Z_Construct_UPackage__Script_SwitchboardEditor(), TEXT("SwitchboardNewConfigUserOptions"));
	}
	return Z_Registration_Info_UScriptStruct_SwitchboardNewConfigUserOptions.OuterSingleton;
}
template<> SWITCHBOARDEDITOR_API UScriptStruct* StaticStruct<FSwitchboardNewConfigUserOptions>()
{
	return FSwitchboardNewConfigUserOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConfigName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DCRA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DCRA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumEditorDevices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumEditorDevices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLocalhost_MetaData[];
#endif
		static void NewProp_bUseLocalhost_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocalhost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoConnect_MetaData[];
#endif
		static void NewProp_bAutoConnect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoConnect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure used to collect New Config options from the user\n */" },
		{ "ModuleRelativePath", "Private/SwitchboardTypes.h" },
		{ "ToolTip", "Structure used to collect New Config options from the user" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwitchboardNewConfigUserOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_ConfigName_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/* Optional name of the new config. If left empty, a name will be autogenerated. */" },
		{ "ModuleRelativePath", "Private/SwitchboardTypes.h" },
		{ "ToolTip", "Optional name of the new config. If left empty, a name will be autogenerated." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_ConfigName = { "ConfigName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwitchboardNewConfigUserOptions, ConfigName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_ConfigName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_ConfigName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_DCRA_MetaData[] = {
		{ "Category", "Devices" },
		{ "Comment", "/* Indicates which nDisplay actor to use */" },
		{ "DisplayName", "nDisplay Actor" },
		{ "ModuleRelativePath", "Private/SwitchboardTypes.h" },
		{ "ToolTip", "Indicates which nDisplay actor to use" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_DCRA = { "DCRA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwitchboardNewConfigUserOptions, DCRA), Z_Construct_UScriptStruct_FDisplayClusterRootActorReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_DCRA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_DCRA_MetaData)) }; // 2146605694
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_NumEditorDevices_MetaData[] = {
		{ "Category", "Devices" },
		{ "Comment", "/* Number of Editor devices that it should create */" },
		{ "DisplayName", "Editors" },
		{ "ModuleRelativePath", "Private/SwitchboardTypes.h" },
		{ "ToolTip", "Number of Editor devices that it should create" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_NumEditorDevices = { "NumEditorDevices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwitchboardNewConfigUserOptions, NumEditorDevices), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_NumEditorDevices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_NumEditorDevices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_bUseLocalhost_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "/* Indicates that Switchboard should override IP addresses with localhost */" },
		{ "ModuleRelativePath", "Private/SwitchboardTypes.h" },
		{ "ToolTip", "Indicates that Switchboard should override IP addresses with localhost" },
	};
#endif
	void Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_bUseLocalhost_SetBit(void* Obj)
	{
		((FSwitchboardNewConfigUserOptions*)Obj)->bUseLocalhost = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_bUseLocalhost = { "bUseLocalhost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSwitchboardNewConfigUserOptions), &Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_bUseLocalhost_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_bUseLocalhost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_bUseLocalhost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_bAutoConnect_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "/* Indicates that Switchboard should auto-connect to the listeners of each created device */" },
		{ "ModuleRelativePath", "Private/SwitchboardTypes.h" },
		{ "ToolTip", "Indicates that Switchboard should auto-connect to the listeners of each created device" },
	};
#endif
	void Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_bAutoConnect_SetBit(void* Obj)
	{
		((FSwitchboardNewConfigUserOptions*)Obj)->bAutoConnect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_bAutoConnect = { "bAutoConnect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSwitchboardNewConfigUserOptions), &Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_bAutoConnect_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_bAutoConnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_bAutoConnect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_ConfigName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_DCRA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_NumEditorDevices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_bUseLocalhost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewProp_bAutoConnect,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwitchboardEditor,
		nullptr,
		&NewStructOps,
		"SwitchboardNewConfigUserOptions",
		sizeof(FSwitchboardNewConfigUserOptions),
		alignof(FSwitchboardNewConfigUserOptions),
		Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_SwitchboardNewConfigUserOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SwitchboardNewConfigUserOptions.InnerSingleton, Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SwitchboardNewConfigUserOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Switchboard_Source_SwitchboardEditor_Private_SwitchboardTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Switchboard_Source_SwitchboardEditor_Private_SwitchboardTypes_h_Statics::ScriptStructInfo[] = {
		{ FSwitchboardScriptArguments::StaticStruct, Z_Construct_UScriptStruct_FSwitchboardScriptArguments_Statics::NewStructOps, TEXT("SwitchboardScriptArguments"), &Z_Registration_Info_UScriptStruct_SwitchboardScriptArguments, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSwitchboardScriptArguments), 734167757U) },
		{ FDisplayClusterRootActorReference::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterRootActorReference_Statics::NewStructOps, TEXT("DisplayClusterRootActorReference"), &Z_Registration_Info_UScriptStruct_DisplayClusterRootActorReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterRootActorReference), 2146605694U) },
		{ FSwitchboardNewConfigUserOptions::StaticStruct, Z_Construct_UScriptStruct_FSwitchboardNewConfigUserOptions_Statics::NewStructOps, TEXT("SwitchboardNewConfigUserOptions"), &Z_Registration_Info_UScriptStruct_SwitchboardNewConfigUserOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSwitchboardNewConfigUserOptions), 4177827147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Switchboard_Source_SwitchboardEditor_Private_SwitchboardTypes_h_693764285(TEXT("/Script/SwitchboardEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Switchboard_Source_SwitchboardEditor_Private_SwitchboardTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Switchboard_Source_SwitchboardEditor_Private_SwitchboardTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
