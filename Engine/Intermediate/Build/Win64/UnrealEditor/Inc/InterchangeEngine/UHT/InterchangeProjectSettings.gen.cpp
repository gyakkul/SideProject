// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeProjectSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase_NoRegister();
	INTERCHANGECORE_API UEnum* Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType();
	INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeFilePickerBase_NoRegister();
	INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangePipelineConfigurationBase_NoRegister();
	INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeProjectSettings();
	INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangeProjectSettings_NoRegister();
	INTERCHANGEENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeContentImportSettings();
	INTERCHANGEENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeImportSettings();
	INTERCHANGEENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangePipelineStack();
	UPackage* Z_Construct_UPackage__Script_InterchangeEngine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangePipelineStack;
class UScriptStruct* FInterchangePipelineStack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangePipelineStack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangePipelineStack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangePipelineStack, (UObject*)Z_Construct_UPackage__Script_InterchangeEngine(), TEXT("InterchangePipelineStack"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangePipelineStack.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UScriptStruct* StaticStruct<FInterchangePipelineStack>()
{
	return FInterchangePipelineStack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pipelines_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pipelines_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Pipelines;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangePipelineStack>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::NewProp_Pipelines_Inner = { "Pipelines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::NewProp_Pipelines_MetaData[] = {
		{ "AllowedClasses", "/Script/InterchangeCore.InterchangePipelineBase, /Script/InterchangeEngine.InterchangeBlueprintPipelineBase, /Script/InterchangeEngine.InterchangePythonPipelineAsset" },
		{ "Category", "Pipelines" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::NewProp_Pipelines = { "Pipelines", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangePipelineStack, Pipelines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::NewProp_Pipelines_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::NewProp_Pipelines_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::NewProp_Pipelines_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::NewProp_Pipelines,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
		nullptr,
		&NewStructOps,
		"InterchangePipelineStack",
		sizeof(FInterchangePipelineStack),
		alignof(FInterchangePipelineStack),
		Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInterchangePipelineStack()
	{
		if (!Z_Registration_Info_UScriptStruct_InterchangePipelineStack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangePipelineStack.InnerSingleton, Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InterchangePipelineStack.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangeImportSettings;
class UScriptStruct* FInterchangeImportSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeImportSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangeImportSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeImportSettings, (UObject*)Z_Construct_UPackage__Script_InterchangeEngine(), TEXT("InterchangeImportSettings"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangeImportSettings.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UScriptStruct* StaticStruct<FInterchangeImportSettings>()
{
	return FInterchangeImportSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_PipelineStacks_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PipelineStacks_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PipelineStacks_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PipelineStacks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPipelineStack_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultPipelineStack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PipelineConfigurationDialogClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PipelineConfigurationDialogClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowPipelineStacksConfigurationDialog_MetaData[];
#endif
		static void NewProp_bShowPipelineStacksConfigurationDialog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPipelineStacksConfigurationDialog;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangeImportSettings>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_PipelineStacks_ValueProp = { "PipelineStacks", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FInterchangePipelineStack, METADATA_PARAMS(nullptr, 0) }; // 471002876
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_PipelineStacks_Key_KeyProp = { "PipelineStacks_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_PipelineStacks_MetaData[] = {
		{ "Category", "Pipeline" },
		{ "Comment", "/** All the available pipeline stacks you want to use to import with interchange. The chosen pipeline stack execute all the pipelines from top to bottom order. You can order them by using the grip on the left of any pipelines.*/" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
		{ "ToolTip", "All the available pipeline stacks you want to use to import with interchange. The chosen pipeline stack execute all the pipelines from top to bottom order. You can order them by using the grip on the left of any pipelines." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_PipelineStacks = { "PipelineStacks", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangeImportSettings, PipelineStacks), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_PipelineStacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_PipelineStacks_MetaData)) }; // 471002876
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_DefaultPipelineStack_MetaData[] = {
		{ "Category", "Pipeline" },
		{ "Comment", "/** This tell interchange which pipeline stack to select when importing.*/" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
		{ "ToolTip", "This tell interchange which pipeline stack to select when importing." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_DefaultPipelineStack = { "DefaultPipelineStack", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangeImportSettings, DefaultPipelineStack), METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_DefaultPipelineStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_DefaultPipelineStack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_PipelineConfigurationDialogClass_MetaData[] = {
		{ "Category", "Pipeline" },
		{ "Comment", "/** This tell interchange which pipeline configuration dialog to popup when we need to configure the pipelines.*/" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
		{ "ToolTip", "This tell interchange which pipeline configuration dialog to popup when we need to configure the pipelines." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_PipelineConfigurationDialogClass = { "PipelineConfigurationDialogClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangeImportSettings, PipelineConfigurationDialogClass), Z_Construct_UClass_UInterchangePipelineConfigurationBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_PipelineConfigurationDialogClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_PipelineConfigurationDialogClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_bShowPipelineStacksConfigurationDialog_MetaData[] = {
		{ "Category", "Pipeline" },
		{ "Comment", "/** If enabled, the pipeline stacks configuration dialog will show when interchange must choose a pipeline to import or re-import. If disabled interchange will use the DefaultPipelineStack.*/" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
		{ "ToolTip", "If enabled, the pipeline stacks configuration dialog will show when interchange must choose a pipeline to import or re-import. If disabled interchange will use the DefaultPipelineStack." },
	};
#endif
	void Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_bShowPipelineStacksConfigurationDialog_SetBit(void* Obj)
	{
		((FInterchangeImportSettings*)Obj)->bShowPipelineStacksConfigurationDialog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_bShowPipelineStacksConfigurationDialog = { "bShowPipelineStacksConfigurationDialog", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInterchangeImportSettings), &Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_bShowPipelineStacksConfigurationDialog_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_bShowPipelineStacksConfigurationDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_bShowPipelineStacksConfigurationDialog_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_PipelineStacks_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_PipelineStacks_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_PipelineStacks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_DefaultPipelineStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_PipelineConfigurationDialogClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewProp_bShowPipelineStacksConfigurationDialog,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
		nullptr,
		&NewStructOps,
		"InterchangeImportSettings",
		sizeof(FInterchangeImportSettings),
		alignof(FInterchangeImportSettings),
		Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInterchangeImportSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_InterchangeImportSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangeImportSettings.InnerSingleton, Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InterchangeImportSettings.InnerSingleton;
	}

static_assert(std::is_polymorphic<FInterchangeContentImportSettings>() == std::is_polymorphic<FInterchangeImportSettings>(), "USTRUCT FInterchangeContentImportSettings cannot be polymorphic unless super FInterchangeImportSettings is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangeContentImportSettings;
class UScriptStruct* FInterchangeContentImportSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeContentImportSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangeContentImportSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeContentImportSettings, (UObject*)Z_Construct_UPackage__Script_InterchangeEngine(), TEXT("InterchangeContentImportSettings"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangeContentImportSettings.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UScriptStruct* StaticStruct<FInterchangeContentImportSettings>()
{
	return FInterchangeContentImportSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultPipelineStackOverride_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultPipelineStackOverride_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultPipelineStackOverride_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPipelineStackOverride_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DefaultPipelineStackOverride;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowPipelineStacksConfigurationDialogOverride_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShowPipelineStacksConfigurationDialogOverride_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShowPipelineStacksConfigurationDialogOverride_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowPipelineStacksConfigurationDialogOverride_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ShowPipelineStacksConfigurationDialogOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangeContentImportSettings>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_DefaultPipelineStackOverride_ValueProp = { "DefaultPipelineStackOverride", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_DefaultPipelineStackOverride_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_DefaultPipelineStackOverride_Key_KeyProp = { "DefaultPipelineStackOverride_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType, METADATA_PARAMS(nullptr, 0) }; // 3009238161
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_DefaultPipelineStackOverride_MetaData[] = {
		{ "Category", "Pipeline" },
		{ "Comment", "/** This tell interchange which pipeline stack to select when importing.*/" },
		{ "DisplayAfter", "DefaultPipelineStack" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
		{ "ToolTip", "This tell interchange which pipeline stack to select when importing." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_DefaultPipelineStackOverride = { "DefaultPipelineStackOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangeContentImportSettings, DefaultPipelineStackOverride), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_DefaultPipelineStackOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_DefaultPipelineStackOverride_MetaData)) }; // 3009238161
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_ShowPipelineStacksConfigurationDialogOverride_ValueProp = { "ShowPipelineStacksConfigurationDialogOverride", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_ShowPipelineStacksConfigurationDialogOverride_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_ShowPipelineStacksConfigurationDialogOverride_Key_KeyProp = { "ShowPipelineStacksConfigurationDialogOverride_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_InterchangeCore_EInterchangeTranslatorAssetType, METADATA_PARAMS(nullptr, 0) }; // 3009238161
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_ShowPipelineStacksConfigurationDialogOverride_MetaData[] = {
		{ "Category", "Pipeline" },
		{ "Comment", "/** This tell interchange which pipeline stack to select when importing.*/" },
		{ "DisplayAfter", "bShowPipelineStacksConfigurationDialog" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
		{ "ToolTip", "This tell interchange which pipeline stack to select when importing." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_ShowPipelineStacksConfigurationDialogOverride = { "ShowPipelineStacksConfigurationDialogOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangeContentImportSettings, ShowPipelineStacksConfigurationDialogOverride), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_ShowPipelineStacksConfigurationDialogOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_ShowPipelineStacksConfigurationDialogOverride_MetaData)) }; // 3009238161
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_DefaultPipelineStackOverride_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_DefaultPipelineStackOverride_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_DefaultPipelineStackOverride_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_DefaultPipelineStackOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_ShowPipelineStacksConfigurationDialogOverride_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_ShowPipelineStacksConfigurationDialogOverride_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_ShowPipelineStacksConfigurationDialogOverride_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewProp_ShowPipelineStacksConfigurationDialogOverride,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
		Z_Construct_UScriptStruct_FInterchangeImportSettings,
		&NewStructOps,
		"InterchangeContentImportSettings",
		sizeof(FInterchangeContentImportSettings),
		alignof(FInterchangeContentImportSettings),
		Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInterchangeContentImportSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_InterchangeContentImportSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangeContentImportSettings.InnerSingleton, Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InterchangeContentImportSettings.InnerSingleton;
	}
	void UInterchangeProjectSettings::StaticRegisterNativesUInterchangeProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeProjectSettings);
	UClass* Z_Construct_UClass_UInterchangeProjectSettings_NoRegister()
	{
		return UInterchangeProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentImportSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContentImportSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneImportSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SceneImportSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePickerClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_FilePickerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing_MetaData[];
#endif
		static void NewProp_bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenericPipelineClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_GenericPipelineClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Interchange" },
		{ "IncludePath", "InterchangeProjectSettings.h" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_ContentImportSettings_MetaData[] = {
		{ "Category", "ImportContent" },
		{ "Comment", "/**\n\x09 * Settings used when importing into the content browser.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
		{ "ToolTip", "Settings used when importing into the content browser." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_ContentImportSettings = { "ContentImportSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeProjectSettings, ContentImportSettings), Z_Construct_UScriptStruct_FInterchangeContentImportSettings, METADATA_PARAMS(Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_ContentImportSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_ContentImportSettings_MetaData)) }; // 2670436326
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_SceneImportSettings_MetaData[] = {
		{ "Category", "ImportIntoLevel" },
		{ "Comment", "/**\n\x09 * Settings used when importing into a level.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
		{ "ToolTip", "Settings used when importing into a level." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_SceneImportSettings = { "SceneImportSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeProjectSettings, SceneImportSettings), Z_Construct_UScriptStruct_FInterchangeImportSettings, METADATA_PARAMS(Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_SceneImportSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_SceneImportSettings_MetaData)) }; // 1031970109
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_FilePickerClass_MetaData[] = {
		{ "Category", "EditorInterface" },
		{ "Comment", "/** This tells interchange which file picker class to construct when we need to choose a file for a source.*/" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
		{ "ToolTip", "This tells interchange which file picker class to construct when we need to choose a file for a source." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_FilePickerClass = { "FilePickerClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeProjectSettings, FilePickerClass), Z_Construct_UClass_UInterchangeFilePickerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_FilePickerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_FilePickerClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing_MetaData[] = {
		{ "Category", "Generic|ImportSettings" },
		{ "Comment", "/**\n\x09 * If checked, interchange translators and legacy importer will default static mesh geometry to smooth edge when the smoothing information is missing.\n\x09 * This option exist to allows old project to import the same way as before if their workflows need static mesh edges to be hard when the smoothing\n\x09 * info is missing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
		{ "ToolTip", "If checked, interchange translators and legacy importer will default static mesh geometry to smooth edge when the smoothing information is missing.\nThis option exist to allows old project to import the same way as before if their workflows need static mesh edges to be hard when the smoothing\ninfo is missing." },
	};
#endif
	void Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing_SetBit(void* Obj)
	{
		((UInterchangeProjectSettings*)Obj)->bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing = { "bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeProjectSettings), &Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_GenericPipelineClass_MetaData[] = {
		{ "Category", "Editor Generic Pipeline Class" },
		{ "Comment", "/**\n\x09 * This tells interchange which is the pipeline class to use when editor tools want to import or reimport tools with bake settings.\n\x09 * UnrealEd code depend on this class to be set and this property is only editable in the ini file directly.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeProjectSettings.h" },
		{ "ToolTip", "This tells interchange which is the pipeline class to use when editor tools want to import or reimport tools with bake settings.\nUnrealEd code depend on this class to be set and this property is only editable in the ini file directly." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_GenericPipelineClass = { "GenericPipelineClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeProjectSettings, GenericPipelineClass), Z_Construct_UClass_UInterchangePipelineBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_GenericPipelineClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_GenericPipelineClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_ContentImportSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_SceneImportSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_FilePickerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeProjectSettings_Statics::NewProp_GenericPipelineClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeProjectSettings_Statics::ClassParams = {
		&UInterchangeProjectSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterchangeProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeProjectSettings_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeProjectSettings()
	{
		if (!Z_Registration_Info_UClass_UInterchangeProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeProjectSettings.OuterSingleton, Z_Construct_UClass_UInterchangeProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeProjectSettings.OuterSingleton;
	}
	template<> INTERCHANGEENGINE_API UClass* StaticClass<UInterchangeProjectSettings>()
	{
		return UInterchangeProjectSettings::StaticClass();
	}
	UInterchangeProjectSettings::UInterchangeProjectSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeProjectSettings);
	UInterchangeProjectSettings::~UInterchangeProjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_Statics::ScriptStructInfo[] = {
		{ FInterchangePipelineStack::StaticStruct, Z_Construct_UScriptStruct_FInterchangePipelineStack_Statics::NewStructOps, TEXT("InterchangePipelineStack"), &Z_Registration_Info_UScriptStruct_InterchangePipelineStack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangePipelineStack), 471002876U) },
		{ FInterchangeImportSettings::StaticStruct, Z_Construct_UScriptStruct_FInterchangeImportSettings_Statics::NewStructOps, TEXT("InterchangeImportSettings"), &Z_Registration_Info_UScriptStruct_InterchangeImportSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangeImportSettings), 1031970109U) },
		{ FInterchangeContentImportSettings::StaticStruct, Z_Construct_UScriptStruct_FInterchangeContentImportSettings_Statics::NewStructOps, TEXT("InterchangeContentImportSettings"), &Z_Registration_Info_UScriptStruct_InterchangeContentImportSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangeContentImportSettings), 2670436326U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeProjectSettings, UInterchangeProjectSettings::StaticClass, TEXT("UInterchangeProjectSettings"), &Z_Registration_Info_UClass_UInterchangeProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeProjectSettings), 702553227U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_2055183447(TEXT("/Script/InterchangeEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeProjectSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
