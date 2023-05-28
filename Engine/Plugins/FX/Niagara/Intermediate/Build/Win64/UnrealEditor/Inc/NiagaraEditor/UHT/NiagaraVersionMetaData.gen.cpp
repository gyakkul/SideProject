// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/NiagaraVersionMetaData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraVersionMetaData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraVersionMetaData();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraVersionMetaData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraVersionMetaData::StaticRegisterNativesUNiagaraVersionMetaData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraVersionMetaData);
	UClass* Z_Construct_UClass_UNiagaraVersionMetaData_NoRegister()
	{
		return UNiagaraVersionMetaData::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraVersionMetaData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsExposedVersion_MetaData[];
#endif
		static void NewProp_bIsExposedVersion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExposedVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangeDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ChangeDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisibleInVersionSelector_MetaData[];
#endif
		static void NewProp_bIsVisibleInVersionSelector_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisibleInVersionSelector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeprecated_MetaData[];
#endif
		static void NewProp_bDeprecated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeprecated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeprecationMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DeprecationMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VersionGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VersionGuid;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateScriptExecution_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateScriptExecution_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateScriptExecution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PythonUpdateScript_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PythonUpdateScript;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptAsset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraVersionMetaData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraVersionMetaData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraVersionMetaData.h" },
		{ "ModuleRelativePath", "Private/NiagaraVersionMetaData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_bIsExposedVersion_MetaData[] = {
		{ "Category", "Version Details" },
		{ "Comment", "/** If true then this version is exposed to the user and is used as the default version for new assets. */" },
		{ "EditCondition", "!bIsExposedVersion" },
		{ "ModuleRelativePath", "Private/NiagaraVersionMetaData.h" },
		{ "ToolTip", "If true then this version is exposed to the user and is used as the default version for new assets." },
	};
#endif
	void Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_bIsExposedVersion_SetBit(void* Obj)
	{
		((UNiagaraVersionMetaData*)Obj)->bIsExposedVersion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_bIsExposedVersion = { "bIsExposedVersion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraVersionMetaData), &Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_bIsExposedVersion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_bIsExposedVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_bIsExposedVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_ChangeDescription_MetaData[] = {
		{ "Category", "Version Details" },
		{ "Comment", "/** Changelist displayed to the user when upgrading to a new script version. */" },
		{ "ModuleRelativePath", "Private/NiagaraVersionMetaData.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Changelist displayed to the user when upgrading to a new script version." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_ChangeDescription = { "ChangeDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraVersionMetaData, ChangeDescription), METADATA_PARAMS(Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_ChangeDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_ChangeDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_bIsVisibleInVersionSelector_MetaData[] = {
		{ "Category", "Version Details" },
		{ "Comment", "/** If false then this version is not visible in the version selector dropdown menu of the stack. This is useful to hide work in progress versions without removing the module from the search menu.\n\x09 *  The exposed version is always visible to users. */" },
		{ "EditCondition", "!bIsExposedVersion" },
		{ "ModuleRelativePath", "Private/NiagaraVersionMetaData.h" },
		{ "ToolTip", "If false then this version is not visible in the version selector dropdown menu of the stack. This is useful to hide work in progress versions without removing the module from the search menu.\nThe exposed version is always visible to users." },
	};
#endif
	void Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_bIsVisibleInVersionSelector_SetBit(void* Obj)
	{
		((UNiagaraVersionMetaData*)Obj)->bIsVisibleInVersionSelector = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_bIsVisibleInVersionSelector = { "bIsVisibleInVersionSelector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraVersionMetaData), &Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_bIsVisibleInVersionSelector_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_bIsVisibleInVersionSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_bIsVisibleInVersionSelector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_bDeprecated_MetaData[] = {
		{ "Category", "Version Details" },
		{ "Comment", "/* True if this asset version is deprecated and should no longer be used.*/" },
		{ "ModuleRelativePath", "Private/NiagaraVersionMetaData.h" },
		{ "ToolTip", "True if this asset version is deprecated and should no longer be used." },
	};
#endif
	void Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_bDeprecated_SetBit(void* Obj)
	{
		((UNiagaraVersionMetaData*)Obj)->bDeprecated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_bDeprecated = { "bDeprecated", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraVersionMetaData), &Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_bDeprecated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_bDeprecated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_bDeprecated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_DeprecationMessage_MetaData[] = {
		{ "Category", "Version Details" },
		{ "Comment", "/* Message to display when the asset is used in an emitter. */" },
		{ "EditCondition", "bDeprecated" },
		{ "ModuleRelativePath", "Private/NiagaraVersionMetaData.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Message to display when the asset is used in an emitter." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_DeprecationMessage = { "DeprecationMessage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraVersionMetaData, DeprecationMessage), METADATA_PARAMS(Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_DeprecationMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_DeprecationMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_VersionGuid_MetaData[] = {
		{ "Category", "Version Details" },
		{ "Comment", "/** Internal version guid, mainly useful for debugging version conflicts. */" },
		{ "ModuleRelativePath", "Private/NiagaraVersionMetaData.h" },
		{ "ToolTip", "Internal version guid, mainly useful for debugging version conflicts." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_VersionGuid = { "VersionGuid", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraVersionMetaData, VersionGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_VersionGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_VersionGuid_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_UpdateScriptExecution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_UpdateScriptExecution_MetaData[] = {
		{ "Category", "Scripting" },
		{ "Comment", "/** Reference to a python script that is executed when the user updates from a previous version to this version. */" },
		{ "ModuleRelativePath", "Private/NiagaraVersionMetaData.h" },
		{ "ToolTip", "Reference to a python script that is executed when the user updates from a previous version to this version." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_UpdateScriptExecution = { "UpdateScriptExecution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraVersionMetaData, UpdateScriptExecution), Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference, METADATA_PARAMS(Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_UpdateScriptExecution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_UpdateScriptExecution_MetaData)) }; // 3851770141
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_PythonUpdateScript_MetaData[] = {
		{ "Category", "Scripting" },
		{ "Comment", "/** Python script to run when updating to this script version. */" },
		{ "EditCondition", "UpdateScriptExecution == ENiagaraPythonUpdateScriptReference::DirectTextEntry" },
		{ "ModuleRelativePath", "Private/NiagaraVersionMetaData.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Python script to run when updating to this script version." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_PythonUpdateScript = { "PythonUpdateScript", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraVersionMetaData, PythonUpdateScript), METADATA_PARAMS(Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_PythonUpdateScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_PythonUpdateScript_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_ScriptAsset_MetaData[] = {
		{ "Category", "Scripting" },
		{ "Comment", "/** Asset reference to a python script to run when updating to this script version. */" },
		{ "EditCondition", "UpdateScriptExecution == ENiagaraPythonUpdateScriptReference::ScriptAsset" },
		{ "ModuleRelativePath", "Private/NiagaraVersionMetaData.h" },
		{ "ToolTip", "Asset reference to a python script to run when updating to this script version." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_ScriptAsset = { "ScriptAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraVersionMetaData, ScriptAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_ScriptAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_ScriptAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraVersionMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_bIsExposedVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_ChangeDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_bIsVisibleInVersionSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_bDeprecated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_DeprecationMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_VersionGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_UpdateScriptExecution_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_UpdateScriptExecution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_PythonUpdateScript,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraVersionMetaData_Statics::NewProp_ScriptAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraVersionMetaData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraVersionMetaData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraVersionMetaData_Statics::ClassParams = {
		&UNiagaraVersionMetaData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraVersionMetaData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVersionMetaData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraVersionMetaData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVersionMetaData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraVersionMetaData()
	{
		if (!Z_Registration_Info_UClass_UNiagaraVersionMetaData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraVersionMetaData.OuterSingleton, Z_Construct_UClass_UNiagaraVersionMetaData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraVersionMetaData.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraVersionMetaData>()
	{
		return UNiagaraVersionMetaData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraVersionMetaData);
	UNiagaraVersionMetaData::~UNiagaraVersionMetaData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraVersionMetaData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraVersionMetaData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraVersionMetaData, UNiagaraVersionMetaData::StaticClass, TEXT("UNiagaraVersionMetaData"), &Z_Registration_Info_UClass_UNiagaraVersionMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraVersionMetaData), 2928630764U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraVersionMetaData_h_2858430554(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraVersionMetaData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraVersionMetaData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
