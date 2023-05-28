// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeGen/WebAPICodeGeneratorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPICodeGeneratorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WebAPIEditor();
	WEBAPI_API UClass* Z_Construct_UClass_UWebAPIDeveloperSettings_NoRegister();
	WEBAPIEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings();
	WEBAPIEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WebAPIDefinitionTargetModule;
class UScriptStruct* FWebAPIDefinitionTargetModule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WebAPIDefinitionTargetModule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WebAPIDefinitionTargetModule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule, (UObject*)Z_Construct_UPackage__Script_WebAPIEditor(), TEXT("WebAPIDefinitionTargetModule"));
	}
	return Z_Registration_Info_UScriptStruct_WebAPIDefinitionTargetModule.OuterSingleton;
}
template<> WEBAPIEDITOR_API UScriptStruct* StaticStruct<FWebAPIDefinitionTargetModule>()
{
	return FWebAPIDefinitionTargetModule::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsolutePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AbsolutePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolvedPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResolvedPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Contains information about the target module for code generation files. */" },
		{ "ModuleRelativePath", "Public/CodeGen/WebAPICodeGeneratorSettings.h" },
		{ "ToolTip", "Contains information about the target module for code generation files." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWebAPIDefinitionTargetModule>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Module" },
		{ "Comment", "/** The name of the module. */" },
		{ "ModuleRelativePath", "Public/CodeGen/WebAPICodeGeneratorSettings.h" },
		{ "ToolTip", "The name of the module." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPIDefinitionTargetModule, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule_Statics::NewProp_AbsolutePath_MetaData[] = {
		{ "Category", "Module" },
		{ "Comment", "/** The absolute location of the directory for this module. Only use to set, otherwise use GetPath(). */" },
		{ "ModuleRelativePath", "Public/CodeGen/WebAPICodeGeneratorSettings.h" },
		{ "ToolTip", "The absolute location of the directory for this module. Only use to set, otherwise use GetPath()." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule_Statics::NewProp_AbsolutePath = { "AbsolutePath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPIDefinitionTargetModule, AbsolutePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule_Statics::NewProp_AbsolutePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule_Statics::NewProp_AbsolutePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule_Statics::NewProp_ResolvedPath_MetaData[] = {
		{ "Comment", "/** Caches the full path to the module. */" },
		{ "ModuleRelativePath", "Public/CodeGen/WebAPICodeGeneratorSettings.h" },
		{ "ToolTip", "Caches the full path to the module." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule_Statics::NewProp_ResolvedPath = { "ResolvedPath", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPIDefinitionTargetModule, ResolvedPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule_Statics::NewProp_ResolvedPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule_Statics::NewProp_ResolvedPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule_Statics::NewProp_AbsolutePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule_Statics::NewProp_ResolvedPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
		nullptr,
		&NewStructOps,
		"WebAPIDefinitionTargetModule",
		sizeof(FWebAPIDefinitionTargetModule),
		alignof(FWebAPIDefinitionTargetModule),
		Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule()
	{
		if (!Z_Registration_Info_UScriptStruct_WebAPIDefinitionTargetModule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WebAPIDefinitionTargetModule.InnerSingleton, Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WebAPIDefinitionTargetModule.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WebAPICodeGeneratorSettings;
class UScriptStruct* FWebAPICodeGeneratorSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WebAPICodeGeneratorSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WebAPICodeGeneratorSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings, (UObject*)Z_Construct_UPackage__Script_WebAPIEditor(), TEXT("WebAPICodeGeneratorSettings"));
	}
	return Z_Registration_Info_UScriptStruct_WebAPICodeGeneratorSettings.OuterSingleton;
}
template<> WEBAPIEDITOR_API UScriptStruct* StaticStruct<FWebAPICodeGeneratorSettings>()
{
	return FWebAPICodeGeneratorSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideGeneratorClass_MetaData[];
#endif
		static void NewProp_bOverrideGeneratorClass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideGeneratorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CodeGeneratorClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_CodeGeneratorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyrightNotice_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CopyrightNotice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetModule_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetModule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelOutputPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ModelOutputPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperationOutputPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OperationOutputPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedSettingsBaseClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_GeneratedSettingsBaseClass;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWriteResult_MetaData[];
#endif
		static void NewProp_bWriteResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteResult;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Namespace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Encapsulates settings for WebAPI code generation. */" },
		{ "ModuleRelativePath", "Public/CodeGen/WebAPICodeGeneratorSettings.h" },
		{ "ToolTip", "Encapsulates settings for WebAPI code generation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWebAPICodeGeneratorSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_bOverrideGeneratorClass_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** Whether to override the Code Generator class specified in project settings. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/CodeGen/WebAPICodeGeneratorSettings.h" },
		{ "ToolTip", "Whether to override the Code Generator class specified in project settings." },
	};
#endif
	void Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_bOverrideGeneratorClass_SetBit(void* Obj)
	{
		((FWebAPICodeGeneratorSettings*)Obj)->bOverrideGeneratorClass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_bOverrideGeneratorClass = { "bOverrideGeneratorClass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWebAPICodeGeneratorSettings), &Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_bOverrideGeneratorClass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_bOverrideGeneratorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_bOverrideGeneratorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_CodeGeneratorClass_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** The Code Generator to use. */" },
		{ "EditCondition", "bOverrideGeneratorClass" },
		{ "ModuleRelativePath", "Public/CodeGen/WebAPICodeGeneratorSettings.h" },
		{ "MustImplement", "/Script/WebAPIEditor.WebAPICodeGeneratorInterface" },
		{ "ToolTip", "The Code Generator to use." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_CodeGeneratorClass = { "CodeGeneratorClass", nullptr, (EPropertyFlags)0x0014000002000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPICodeGeneratorSettings, CodeGeneratorClass), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_CodeGeneratorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_CodeGeneratorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_CopyrightNotice_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** The copyright notice to apply to generated files. */" },
		{ "ModuleRelativePath", "Public/CodeGen/WebAPICodeGeneratorSettings.h" },
		{ "ToolTip", "The copyright notice to apply to generated files." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_CopyrightNotice = { "CopyrightNotice", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPICodeGeneratorSettings, CopyrightNotice), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_CopyrightNotice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_CopyrightNotice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_TargetModule_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** The C++ Unreal module determines the location of the generated files. */" },
		{ "ModuleRelativePath", "Public/CodeGen/WebAPICodeGeneratorSettings.h" },
		{ "ToolTip", "The C++ Unreal module determines the location of the generated files." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_TargetModule = { "TargetModule", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPICodeGeneratorSettings, TargetModule), Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule, METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_TargetModule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_TargetModule_MetaData)) }; // 1850242083
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_ModelOutputPath_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** The relative output path for generated models. This accepts the token \"{Model}\", where Model is the name of the generated object. */" },
		{ "ModuleRelativePath", "Public/CodeGen/WebAPICodeGeneratorSettings.h" },
		{ "ToolTip", "The relative output path for generated models. This accepts the token \"{Model}\", where Model is the name of the generated object." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_ModelOutputPath = { "ModelOutputPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPICodeGeneratorSettings, ModelOutputPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_ModelOutputPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_ModelOutputPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_OperationOutputPath_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** The relative output path for generated operations. This accepts the token \"{Service}\" and \"{Operation}\". */" },
		{ "ModuleRelativePath", "Public/CodeGen/WebAPICodeGeneratorSettings.h" },
		{ "ToolTip", "The relative output path for generated operations. This accepts the token \"{Service}\" and \"{Operation}\"." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_OperationOutputPath = { "OperationOutputPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPICodeGeneratorSettings, OperationOutputPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_OperationOutputPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_OperationOutputPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_GeneratedSettingsBaseClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "Generator" },
		{ "Comment", "/** The generated settings baseclass (optional). */" },
		{ "ModuleRelativePath", "Public/CodeGen/WebAPICodeGeneratorSettings.h" },
		{ "ToolTip", "The generated settings baseclass (optional)." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_GeneratedSettingsBaseClass = { "GeneratedSettingsBaseClass", nullptr, (EPropertyFlags)0x0014040002000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPICodeGeneratorSettings, GeneratedSettingsBaseClass), Z_Construct_UClass_UWebAPIDeveloperSettings_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_GeneratedSettingsBaseClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_GeneratedSettingsBaseClass_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_bWriteResult_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** Disable to prevent the generator writing files/assets. The generation process itself will still occur. */" },
		{ "ModuleRelativePath", "Public/CodeGen/WebAPICodeGeneratorSettings.h" },
		{ "ToolTip", "Disable to prevent the generator writing files/assets. The generation process itself will still occur." },
	};
#endif
	void Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_bWriteResult_SetBit(void* Obj)
	{
		((FWebAPICodeGeneratorSettings*)Obj)->bWriteResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_bWriteResult = { "bWriteResult", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWebAPICodeGeneratorSettings), &Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_bWriteResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_bWriteResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_bWriteResult_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_Namespace_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Generator" },
		{ "Comment", "/** A pseudo-namespace to prefix generated types with to avoid naming conflicts. Usually the API name. */" },
		{ "ModuleRelativePath", "Public/CodeGen/WebAPICodeGeneratorSettings.h" },
		{ "ToolTip", "A pseudo-namespace to prefix generated types with to avoid naming conflicts. Usually the API name." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPICodeGeneratorSettings, Namespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_Namespace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_bOverrideGeneratorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_CodeGeneratorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_CopyrightNotice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_TargetModule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_ModelOutputPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_OperationOutputPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_GeneratedSettingsBaseClass,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_bWriteResult,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewProp_Namespace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
		nullptr,
		&NewStructOps,
		"WebAPICodeGeneratorSettings",
		sizeof(FWebAPICodeGeneratorSettings),
		alignof(FWebAPICodeGeneratorSettings),
		Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_WebAPICodeGeneratorSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WebAPICodeGeneratorSettings.InnerSingleton, Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WebAPICodeGeneratorSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_CodeGen_WebAPICodeGeneratorSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_CodeGen_WebAPICodeGeneratorSettings_h_Statics::ScriptStructInfo[] = {
		{ FWebAPIDefinitionTargetModule::StaticStruct, Z_Construct_UScriptStruct_FWebAPIDefinitionTargetModule_Statics::NewStructOps, TEXT("WebAPIDefinitionTargetModule"), &Z_Registration_Info_UScriptStruct_WebAPIDefinitionTargetModule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWebAPIDefinitionTargetModule), 1850242083U) },
		{ FWebAPICodeGeneratorSettings::StaticStruct, Z_Construct_UScriptStruct_FWebAPICodeGeneratorSettings_Statics::NewStructOps, TEXT("WebAPICodeGeneratorSettings"), &Z_Registration_Info_UScriptStruct_WebAPICodeGeneratorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWebAPICodeGeneratorSettings), 3535293876U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_CodeGen_WebAPICodeGeneratorSettings_h_852899183(TEXT("/Script/WebAPIEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_CodeGen_WebAPICodeGeneratorSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_CodeGen_WebAPICodeGeneratorSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
