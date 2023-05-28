// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PluginMetadataObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePluginMetadataObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PLUGINBROWSER_API UClass* Z_Construct_UClass_UPluginMetadataObject();
	PLUGINBROWSER_API UClass* Z_Construct_UClass_UPluginMetadataObject_NoRegister();
	PLUGINBROWSER_API UScriptStruct* Z_Construct_UScriptStruct_FPluginReferenceMetadata();
	UPackage* Z_Construct_UPackage__Script_PluginBrowser();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PluginReferenceMetadata;
class UScriptStruct* FPluginReferenceMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PluginReferenceMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PluginReferenceMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPluginReferenceMetadata, (UObject*)Z_Construct_UPackage__Script_PluginBrowser(), TEXT("PluginReferenceMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_PluginReferenceMetadata.OuterSingleton;
}
template<> PLUGINBROWSER_API UScriptStruct* StaticStruct<FPluginReferenceMetadata>()
{
	return FPluginReferenceMetadata::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOptional_MetaData[];
#endif
		static void NewProp_bOptional_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptional;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * We use this object to display plugin reference properties using details view.\n */" },
		{ "ModuleRelativePath", "Private/PluginMetadataObject.h" },
		{ "ToolTip", "We use this object to display plugin reference properties using details view." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPluginReferenceMetadata>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Plugin Reference" },
		{ "Comment", "/** Name of the dependency plugin */" },
		{ "GetOptions", "GetAvailablePluginDependencies" },
		{ "ModuleRelativePath", "Private/PluginMetadataObject.h" },
		{ "ToolTip", "Name of the dependency plugin" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPluginReferenceMetadata, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::NewProp_bOptional_MetaData[] = {
		{ "Category", "Plugin Reference" },
		{ "Comment", "/** Whether the dependency plugin is optional meaning it will be silently ignored if not present */" },
		{ "ModuleRelativePath", "Private/PluginMetadataObject.h" },
		{ "ToolTip", "Whether the dependency plugin is optional meaning it will be silently ignored if not present" },
	};
#endif
	void Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::NewProp_bOptional_SetBit(void* Obj)
	{
		((FPluginReferenceMetadata*)Obj)->bOptional = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::NewProp_bOptional = { "bOptional", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPluginReferenceMetadata), &Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::NewProp_bOptional_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::NewProp_bOptional_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::NewProp_bOptional_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Plugin Reference" },
		{ "Comment", "/** Whether the dependency plugin should be enabled by default */" },
		{ "ModuleRelativePath", "Private/PluginMetadataObject.h" },
		{ "ToolTip", "Whether the dependency plugin should be enabled by default" },
	};
#endif
	void Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FPluginReferenceMetadata*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPluginReferenceMetadata), &Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::NewProp_bOptional,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PluginBrowser,
		nullptr,
		&NewStructOps,
		"PluginReferenceMetadata",
		sizeof(FPluginReferenceMetadata),
		alignof(FPluginReferenceMetadata),
		Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPluginReferenceMetadata()
	{
		if (!Z_Registration_Info_UScriptStruct_PluginReferenceMetadata.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PluginReferenceMetadata.InnerSingleton, Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PluginReferenceMetadata.InnerSingleton;
	}
	DEFINE_FUNCTION(UPluginMetadataObject::execGetAvailablePluginDependencies)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetAvailablePluginDependencies();
		P_NATIVE_END;
	}
	void UPluginMetadataObject::StaticRegisterNativesUPluginMetadataObject()
	{
		UClass* Class = UPluginMetadataObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAvailablePluginDependencies", &UPluginMetadataObject::execGetAvailablePluginDependencies },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPluginMetadataObject_GetAvailablePluginDependencies_Statics
	{
		struct PluginMetadataObject_eventGetAvailablePluginDependencies_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPluginMetadataObject_GetAvailablePluginDependencies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPluginMetadataObject_GetAvailablePluginDependencies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PluginMetadataObject_eventGetAvailablePluginDependencies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPluginMetadataObject_GetAvailablePluginDependencies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginMetadataObject_GetAvailablePluginDependencies_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPluginMetadataObject_GetAvailablePluginDependencies_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPluginMetadataObject_GetAvailablePluginDependencies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PluginMetadataObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPluginMetadataObject_GetAvailablePluginDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPluginMetadataObject, nullptr, "GetAvailablePluginDependencies", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPluginMetadataObject_GetAvailablePluginDependencies_Statics::PluginMetadataObject_eventGetAvailablePluginDependencies_Parms), Z_Construct_UFunction_UPluginMetadataObject_GetAvailablePluginDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginMetadataObject_GetAvailablePluginDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPluginMetadataObject_GetAvailablePluginDependencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPluginMetadataObject_GetAvailablePluginDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPluginMetadataObject_GetAvailablePluginDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPluginMetadataObject_GetAvailablePluginDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPluginMetadataObject);
	UClass* Z_Construct_UClass_UPluginMetadataObject_NoRegister()
	{
		return UPluginMetadataObject::StaticClass();
	}
	struct Z_Construct_UClass_UPluginMetadataObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VersionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VersionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedBy_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CreatedBy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedByURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CreatedByURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DocsURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DocsURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarketplaceURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MarketplaceURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SupportURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanContainContent_MetaData[];
#endif
		static void NewProp_bCanContainContent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanContainContent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBetaVersion_MetaData[];
#endif
		static void NewProp_bIsBetaVersion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBetaVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabledByDefault_MetaData[];
#endif
		static void NewProp_bIsEnabledByDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabledByDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExplicitlyLoaded_MetaData[];
#endif
		static void NewProp_bExplicitlyLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExplicitlyLoaded;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Plugins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Plugins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Plugins;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPluginMetadataObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PluginBrowser,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPluginMetadataObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPluginMetadataObject_GetAvailablePluginDependencies, "GetAvailablePluginDependencies" }, // 1476067014
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPluginMetadataObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * We use this object to display plugin properties using details view.\n */" },
		{ "IncludePath", "PluginMetadataObject.h" },
		{ "ModuleRelativePath", "Private/PluginMetadataObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "We use this object to display plugin properties using details view." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/** Version number for the plugin.  The version number must increase with every version of the plugin, so that the system\n\x09""can determine whether one version of a plugin is newer than another, or to enforce other requirements.  This version\n\x09number is not displayed in front-facing UI.  Use the VersionName for that. */" },
		{ "ModuleRelativePath", "Private/PluginMetadataObject.h" },
		{ "ToolTip", "Version number for the plugin.  The version number must increase with every version of the plugin, so that the system\n      can determine whether one version of a plugin is newer than another, or to enforce other requirements.  This version\n      number is not displayed in front-facing UI.  Use the VersionName for that." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPluginMetadataObject, Version), METADATA_PARAMS(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_VersionName_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/** Name of the version for this plugin.  This is the front-facing part of the version number.  It doesn't need to match\n\x09the version number numerically, but should be updated when the version number is increased accordingly. */" },
		{ "ModuleRelativePath", "Private/PluginMetadataObject.h" },
		{ "ToolTip", "Name of the version for this plugin.  This is the front-facing part of the version number.  It doesn't need to match\n      the version number numerically, but should be updated when the version number is increased accordingly." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_VersionName = { "VersionName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPluginMetadataObject, VersionName), METADATA_PARAMS(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_VersionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_VersionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_FriendlyName_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/** Friendly name of the plugin */" },
		{ "ModuleRelativePath", "Private/PluginMetadataObject.h" },
		{ "ToolTip", "Friendly name of the plugin" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPluginMetadataObject, FriendlyName), METADATA_PARAMS(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_FriendlyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_FriendlyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/** Description of the plugin */" },
		{ "ModuleRelativePath", "Private/PluginMetadataObject.h" },
		{ "ToolTip", "Description of the plugin" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPluginMetadataObject, Description), METADATA_PARAMS(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/** The category that this plugin belongs to */" },
		{ "ModuleRelativePath", "Private/PluginMetadataObject.h" },
		{ "ToolTip", "The category that this plugin belongs to" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPluginMetadataObject, Category), METADATA_PARAMS(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_CreatedBy_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/** The company or individual who created this plugin.  This is an optional field that may be displayed in the user interface. */" },
		{ "ModuleRelativePath", "Private/PluginMetadataObject.h" },
		{ "ToolTip", "The company or individual who created this plugin.  This is an optional field that may be displayed in the user interface." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_CreatedBy = { "CreatedBy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPluginMetadataObject, CreatedBy), METADATA_PARAMS(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_CreatedBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_CreatedBy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_CreatedByURL_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/** Hyperlink URL string for the company or individual who created this plugin.  This is optional. */" },
		{ "ModuleRelativePath", "Private/PluginMetadataObject.h" },
		{ "ToolTip", "Hyperlink URL string for the company or individual who created this plugin.  This is optional." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_CreatedByURL = { "CreatedByURL", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPluginMetadataObject, CreatedByURL), METADATA_PARAMS(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_CreatedByURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_CreatedByURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_DocsURL_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/** Documentation URL string. */" },
		{ "ModuleRelativePath", "Private/PluginMetadataObject.h" },
		{ "ToolTip", "Documentation URL string." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_DocsURL = { "DocsURL", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPluginMetadataObject, DocsURL), METADATA_PARAMS(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_DocsURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_DocsURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_MarketplaceURL_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/** Marketplace URL string. */" },
		{ "ModuleRelativePath", "Private/PluginMetadataObject.h" },
		{ "ToolTip", "Marketplace URL string." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_MarketplaceURL = { "MarketplaceURL", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPluginMetadataObject, MarketplaceURL), METADATA_PARAMS(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_MarketplaceURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_MarketplaceURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_SupportURL_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/** Support URL/email for this plugin. Email addresses must be prefixed with 'mailto:' */" },
		{ "ModuleRelativePath", "Private/PluginMetadataObject.h" },
		{ "ToolTip", "Support URL/email for this plugin. Email addresses must be prefixed with 'mailto:'" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_SupportURL = { "SupportURL", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPluginMetadataObject, SupportURL), METADATA_PARAMS(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_SupportURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_SupportURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bCanContainContent_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/** Can this plugin contain content? */" },
		{ "ModuleRelativePath", "Private/PluginMetadataObject.h" },
		{ "ToolTip", "Can this plugin contain content?" },
	};
#endif
	void Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bCanContainContent_SetBit(void* Obj)
	{
		((UPluginMetadataObject*)Obj)->bCanContainContent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bCanContainContent = { "bCanContainContent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPluginMetadataObject), &Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bCanContainContent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bCanContainContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bCanContainContent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bIsBetaVersion_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/** Marks the plugin as beta in the UI */" },
		{ "ModuleRelativePath", "Private/PluginMetadataObject.h" },
		{ "ToolTip", "Marks the plugin as beta in the UI" },
	};
#endif
	void Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bIsBetaVersion_SetBit(void* Obj)
	{
		((UPluginMetadataObject*)Obj)->bIsBetaVersion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bIsBetaVersion = { "bIsBetaVersion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPluginMetadataObject), &Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bIsBetaVersion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bIsBetaVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bIsBetaVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bIsEnabledByDefault_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/** If true, the plugin will be enabled by default without needing to modify the project file. This cannot be changed while the editor is running */" },
		{ "ModuleRelativePath", "Private/PluginMetadataObject.h" },
		{ "ToolTip", "If true, the plugin will be enabled by default without needing to modify the project file. This cannot be changed while the editor is running" },
	};
#endif
	void Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bIsEnabledByDefault_SetBit(void* Obj)
	{
		((UPluginMetadataObject*)Obj)->bIsEnabledByDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bIsEnabledByDefault = { "bIsEnabledByDefault", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPluginMetadataObject), &Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bIsEnabledByDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bIsEnabledByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bIsEnabledByDefault_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bExplicitlyLoaded_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/** If true, the plugin will not load at startup and must be explicitly loaded. This cannot be changed while the editor is running */" },
		{ "ModuleRelativePath", "Private/PluginMetadataObject.h" },
		{ "ToolTip", "If true, the plugin will not load at startup and must be explicitly loaded. This cannot be changed while the editor is running" },
	};
#endif
	void Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bExplicitlyLoaded_SetBit(void* Obj)
	{
		((UPluginMetadataObject*)Obj)->bExplicitlyLoaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bExplicitlyLoaded = { "bExplicitlyLoaded", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPluginMetadataObject), &Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bExplicitlyLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bExplicitlyLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bExplicitlyLoaded_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_Plugins_Inner = { "Plugins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPluginReferenceMetadata, METADATA_PARAMS(nullptr, 0) }; // 1616939559
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_Plugins_MetaData[] = {
		{ "Category", "Dependencies" },
		{ "Comment", "/** Plugins used by this plugin */" },
		{ "ModuleRelativePath", "Private/PluginMetadataObject.h" },
		{ "TitleProperty", "Name" },
		{ "ToolTip", "Plugins used by this plugin" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_Plugins = { "Plugins", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPluginMetadataObject, Plugins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_Plugins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_Plugins_MetaData)) }; // 1616939559
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPluginMetadataObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_Version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_VersionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_FriendlyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_CreatedBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_CreatedByURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_DocsURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_MarketplaceURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_SupportURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bCanContainContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bIsBetaVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bIsEnabledByDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_bExplicitlyLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_Plugins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPluginMetadataObject_Statics::NewProp_Plugins,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPluginMetadataObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPluginMetadataObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPluginMetadataObject_Statics::ClassParams = {
		&UPluginMetadataObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPluginMetadataObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPluginMetadataObject_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPluginMetadataObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPluginMetadataObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPluginMetadataObject()
	{
		if (!Z_Registration_Info_UClass_UPluginMetadataObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPluginMetadataObject.OuterSingleton, Z_Construct_UClass_UPluginMetadataObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPluginMetadataObject.OuterSingleton;
	}
	template<> PLUGINBROWSER_API UClass* StaticClass<UPluginMetadataObject>()
	{
		return UPluginMetadataObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPluginMetadataObject);
	UPluginMetadataObject::~UPluginMetadataObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_Statics::ScriptStructInfo[] = {
		{ FPluginReferenceMetadata::StaticStruct, Z_Construct_UScriptStruct_FPluginReferenceMetadata_Statics::NewStructOps, TEXT("PluginReferenceMetadata"), &Z_Registration_Info_UScriptStruct_PluginReferenceMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPluginReferenceMetadata), 1616939559U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPluginMetadataObject, UPluginMetadataObject::StaticClass, TEXT("UPluginMetadataObject"), &Z_Registration_Info_UClass_UPluginMetadataObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPluginMetadataObject), 2495337846U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_1694371572(TEXT("/Script/PluginBrowser"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_PluginBrowser_Source_PluginBrowser_Private_PluginMetadataObject_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
