// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/RemoteControlModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlModels() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WebRemoteControl();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCActorDescription();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCAssetDescription();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCAssetFilter();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCControllerDescription();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCControllerModifiedDescription();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCExposedActorDescription();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCExposedFunctionDescription();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCExposedPropertyDescription();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCFunctionDescription();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCObjectDescription();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCPresetDescription();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCPresetFieldRenamed();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCPropertyDescription();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCShortPresetDescription();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCObjectDescription;
class UScriptStruct* FRCObjectDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCObjectDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCObjectDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCObjectDescription, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCObjectDescription"));
	}
	return Z_Registration_Info_UScriptStruct_RCObjectDescription.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCObjectDescription>()
{
	return FRCObjectDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCObjectDescription_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCObjectDescription_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Short description of an unreal object.\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Short description of an unreal object." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCObjectDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCObjectDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCObjectDescription_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name of the object. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Name of the object." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCObjectDescription_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCObjectDescription, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCObjectDescription_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCObjectDescription_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCObjectDescription_Statics::NewProp_Class_MetaData[] = {
		{ "Comment", "/** Class of the object. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Class of the object." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCObjectDescription_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCObjectDescription, Class), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCObjectDescription_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCObjectDescription_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCObjectDescription_Statics::NewProp_Path_MetaData[] = {
		{ "Comment", "/** Path of the object. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Path of the object." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCObjectDescription_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCObjectDescription, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCObjectDescription_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCObjectDescription_Statics::NewProp_Path_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCObjectDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCObjectDescription_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCObjectDescription_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCObjectDescription_Statics::NewProp_Path,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCObjectDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCObjectDescription",
		sizeof(FRCObjectDescription),
		alignof(FRCObjectDescription),
		Z_Construct_UScriptStruct_FRCObjectDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCObjectDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCObjectDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCObjectDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCObjectDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_RCObjectDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCObjectDescription.InnerSingleton, Z_Construct_UScriptStruct_FRCObjectDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCObjectDescription.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCPropertyDescription;
class UScriptStruct* FRCPropertyDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCPropertyDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCPropertyDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCPropertyDescription, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCPropertyDescription"));
	}
	return Z_Registration_Info_UScriptStruct_RCPropertyDescription.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCPropertyDescription>()
{
	return FRCPropertyDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCPropertyDescription_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypePath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TypePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContainerType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeyType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Metadata_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCPropertyDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name of the exposed property */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Name of the exposed property" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPropertyDescription, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Comment", "/** Display name of the exposed property */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Display name of the exposed property" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPropertyDescription, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_Description_MetaData[] = {
		{ "Comment", "/** Description of the exposed property */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Description of the exposed property" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPropertyDescription, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/** Type of the property value (If an array, this will be the content of the array) */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Type of the property value (If an array, this will be the content of the array)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPropertyDescription, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_TypePath_MetaData[] = {
		{ "Comment", "/** Type of the property value (If an array, this will be the content of the array) */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Type of the property value (If an array, this will be the content of the array)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_TypePath = { "TypePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPropertyDescription, TypePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_TypePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_TypePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_ContainerType_MetaData[] = {
		{ "Comment", "/** Type of the container (TMap, TArray, CArray, TSet) or empty if none */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Type of the container (TMap, TArray, CArray, TSet) or empty if none" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_ContainerType = { "ContainerType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPropertyDescription, ContainerType), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_ContainerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_ContainerType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_KeyType_MetaData[] = {
		{ "Comment", "/** Key type if container is a map */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Key type if container is a map" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_KeyType = { "KeyType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPropertyDescription, KeyType), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_KeyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_KeyType_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_Metadata_ValueProp = { "Metadata", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_Metadata_Key_KeyProp = { "Metadata_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_Metadata_MetaData[] = {
		{ "Comment", "/** Metadata for this exposed property */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Metadata for this exposed property" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPropertyDescription, Metadata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_TypePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_ContainerType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_KeyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_Metadata_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_Metadata_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewProp_Metadata,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCPropertyDescription",
		sizeof(FRCPropertyDescription),
		alignof(FRCPropertyDescription),
		Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCPropertyDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_RCPropertyDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCPropertyDescription.InnerSingleton, Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCPropertyDescription.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCFunctionDescription;
class UScriptStruct* FRCFunctionDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCFunctionDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCFunctionDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCFunctionDescription, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCFunctionDescription"));
	}
	return Z_Registration_Info_UScriptStruct_RCFunctionDescription.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCFunctionDescription>()
{
	return FRCFunctionDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCFunctionDescription_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Arguments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arguments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Arguments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCFunctionDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name of the function. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Name of the function." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCFunctionDescription, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::NewProp_Description_MetaData[] = {
		{ "Comment", "/** Description for the function. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Description for the function." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCFunctionDescription, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::NewProp_Description_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::NewProp_Arguments_Inner = { "Arguments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCPropertyDescription, METADATA_PARAMS(nullptr, 0) }; // 4101904298
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::NewProp_Arguments_MetaData[] = {
		{ "Comment", "/** The function's arguments. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "The function's arguments." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::NewProp_Arguments = { "Arguments", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCFunctionDescription, Arguments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::NewProp_Arguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::NewProp_Arguments_MetaData)) }; // 4101904298
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::NewProp_Arguments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::NewProp_Arguments,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCFunctionDescription",
		sizeof(FRCFunctionDescription),
		alignof(FRCFunctionDescription),
		Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCFunctionDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_RCFunctionDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCFunctionDescription.InnerSingleton, Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCFunctionDescription.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCExposedPropertyDescription;
class UScriptStruct* FRCExposedPropertyDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCExposedPropertyDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCExposedPropertyDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCExposedPropertyDescription, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCExposedPropertyDescription"));
	}
	return Z_Registration_Info_UScriptStruct_RCExposedPropertyDescription.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCExposedPropertyDescription>()
{
	return FRCExposedPropertyDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnderlyingProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UnderlyingProperty;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Metadata_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OwnerObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCExposedPropertyDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Comment", "/** The label displayed in the remote control panel for this exposed property. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "The label displayed in the remote control panel for this exposed property." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCExposedPropertyDescription, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_ID_MetaData[] = {
		{ "Comment", "/** Unique identifier for the exposed property. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Unique identifier for the exposed property." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCExposedPropertyDescription, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_UnderlyingProperty_MetaData[] = {
		{ "Comment", "/** The underlying exposed property. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "The underlying exposed property." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_UnderlyingProperty = { "UnderlyingProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCExposedPropertyDescription, UnderlyingProperty), Z_Construct_UScriptStruct_FRCPropertyDescription, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_UnderlyingProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_UnderlyingProperty_MetaData)) }; // 4101904298
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_Metadata_ValueProp = { "Metadata", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_Metadata_Key_KeyProp = { "Metadata_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_Metadata_MetaData[] = {
		{ "Comment", "/** Metadata specific to this exposed property. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Metadata specific to this exposed property." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCExposedPropertyDescription, Metadata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_OwnerObjects_Inner = { "OwnerObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCObjectDescription, METADATA_PARAMS(nullptr, 0) }; // 2218922714
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_OwnerObjects_MetaData[] = {
		{ "Comment", "/** The objects that own the underlying property. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "The objects that own the underlying property." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_OwnerObjects = { "OwnerObjects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCExposedPropertyDescription, OwnerObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_OwnerObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_OwnerObjects_MetaData)) }; // 2218922714
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_UnderlyingProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_Metadata_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_Metadata_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_OwnerObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewProp_OwnerObjects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCExposedPropertyDescription",
		sizeof(FRCExposedPropertyDescription),
		alignof(FRCExposedPropertyDescription),
		Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCExposedPropertyDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_RCExposedPropertyDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCExposedPropertyDescription.InnerSingleton, Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCExposedPropertyDescription.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCExposedFunctionDescription;
class UScriptStruct* FRCExposedFunctionDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCExposedFunctionDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCExposedFunctionDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCExposedFunctionDescription, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCExposedFunctionDescription"));
	}
	return Z_Registration_Info_UScriptStruct_RCExposedFunctionDescription.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCExposedFunctionDescription>()
{
	return FRCExposedFunctionDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnderlyingFunction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UnderlyingFunction;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OwnerObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCExposedFunctionDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Comment", "/** The label displayed in the remote control panel for this exposed property. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "The label displayed in the remote control panel for this exposed property." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCExposedFunctionDescription, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::NewProp_ID_MetaData[] = {
		{ "Comment", "/** Unique identifier for the exposed function. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Unique identifier for the exposed function." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCExposedFunctionDescription, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::NewProp_UnderlyingFunction_MetaData[] = {
		{ "Comment", "/** The underlying exposed function. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "The underlying exposed function." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::NewProp_UnderlyingFunction = { "UnderlyingFunction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCExposedFunctionDescription, UnderlyingFunction), Z_Construct_UScriptStruct_FRCFunctionDescription, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::NewProp_UnderlyingFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::NewProp_UnderlyingFunction_MetaData)) }; // 2894009906
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::NewProp_OwnerObjects_Inner = { "OwnerObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCObjectDescription, METADATA_PARAMS(nullptr, 0) }; // 2218922714
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::NewProp_OwnerObjects_MetaData[] = {
		{ "Comment", "/** The objects that own the underlying function. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "The objects that own the underlying function." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::NewProp_OwnerObjects = { "OwnerObjects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCExposedFunctionDescription, OwnerObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::NewProp_OwnerObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::NewProp_OwnerObjects_MetaData)) }; // 2218922714
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::NewProp_UnderlyingFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::NewProp_OwnerObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::NewProp_OwnerObjects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCExposedFunctionDescription",
		sizeof(FRCExposedFunctionDescription),
		alignof(FRCExposedFunctionDescription),
		Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCExposedFunctionDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_RCExposedFunctionDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCExposedFunctionDescription.InnerSingleton, Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCExposedFunctionDescription.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCExposedActorDescription;
class UScriptStruct* FRCExposedActorDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCExposedActorDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCExposedActorDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCExposedActorDescription, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCExposedActorDescription"));
	}
	return Z_Registration_Info_UScriptStruct_RCExposedActorDescription.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCExposedActorDescription>()
{
	return FRCExposedActorDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCExposedActorDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnderlyingActor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UnderlyingActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCExposedActorDescription_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCExposedActorDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCExposedActorDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCExposedActorDescription_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Comment", "/** The label displayed in the remote control panel for this exposed actor. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "The label displayed in the remote control panel for this exposed actor." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCExposedActorDescription_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCExposedActorDescription, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCExposedActorDescription_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCExposedActorDescription_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCExposedActorDescription_Statics::NewProp_ID_MetaData[] = {
		{ "Comment", "/** Unique identifier for the exposed actor. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Unique identifier for the exposed actor." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCExposedActorDescription_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCExposedActorDescription, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCExposedActorDescription_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCExposedActorDescription_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCExposedActorDescription_Statics::NewProp_UnderlyingActor_MetaData[] = {
		{ "Comment", "/** The underlying exposed actor. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "The underlying exposed actor." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCExposedActorDescription_Statics::NewProp_UnderlyingActor = { "UnderlyingActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCExposedActorDescription, UnderlyingActor), Z_Construct_UScriptStruct_FRCObjectDescription, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCExposedActorDescription_Statics::NewProp_UnderlyingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCExposedActorDescription_Statics::NewProp_UnderlyingActor_MetaData)) }; // 2218922714
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCExposedActorDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCExposedActorDescription_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCExposedActorDescription_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCExposedActorDescription_Statics::NewProp_UnderlyingActor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCExposedActorDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCExposedActorDescription",
		sizeof(FRCExposedActorDescription),
		alignof(FRCExposedActorDescription),
		Z_Construct_UScriptStruct_FRCExposedActorDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCExposedActorDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCExposedActorDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCExposedActorDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCExposedActorDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_RCExposedActorDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCExposedActorDescription.InnerSingleton, Z_Construct_UScriptStruct_FRCExposedActorDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCExposedActorDescription.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCControllerDescription;
class UScriptStruct* FRCControllerDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCControllerDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCControllerDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCControllerDescription, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCControllerDescription"));
	}
	return Z_Registration_Info_UScriptStruct_RCControllerDescription.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCControllerDescription>()
{
	return FRCControllerDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCControllerDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Metadata_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCControllerDescription_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCControllerDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Comment", "/** The label displayed in the remote control panel for this controller. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "The label displayed in the remote control panel for this controller." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCControllerDescription, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_ID_MetaData[] = {
		{ "Comment", "/** Unique identifier for the controller. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Unique identifier for the controller." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCControllerDescription, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/** Type of the Controller */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Type of the Controller" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCControllerDescription, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_Path_MetaData[] = {
		{ "Comment", "/** Path of the Controller */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Path of the Controller" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCControllerDescription, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_Path_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_Metadata_ValueProp = { "Metadata", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_Metadata_Key_KeyProp = { "Metadata_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_Metadata_MetaData[] = {
		{ "Comment", "/** Metadata of the Controller. Initially Empty. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Metadata of the Controller. Initially Empty." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCControllerDescription, Metadata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCControllerDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_Metadata_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_Metadata_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewProp_Metadata,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCControllerDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCControllerDescription",
		sizeof(FRCControllerDescription),
		alignof(FRCControllerDescription),
		Z_Construct_UScriptStruct_FRCControllerDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCControllerDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCControllerDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCControllerDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCControllerDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_RCControllerDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCControllerDescription.InnerSingleton, Z_Construct_UScriptStruct_FRCControllerDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCControllerDescription.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCControllerModifiedDescription;
class UScriptStruct* FRCControllerModifiedDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCControllerModifiedDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCControllerModifiedDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCControllerModifiedDescription, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCControllerModifiedDescription"));
	}
	return Z_Registration_Info_UScriptStruct_RCControllerModifiedDescription.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCControllerModifiedDescription>()
{
	return FRCControllerModifiedDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCControllerModifiedDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Controllers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controllers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Controllers;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ChangedValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangedValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChangedValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCControllerModifiedDescription_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCControllerModifiedDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCControllerModifiedDescription>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCControllerModifiedDescription_Statics::NewProp_Controllers_Inner = { "Controllers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCControllerDescription, METADATA_PARAMS(nullptr, 0) }; // 3184040257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCControllerModifiedDescription_Statics::NewProp_Controllers_MetaData[] = {
		{ "Comment", "/** The list of modified RC controllers. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "The list of modified RC controllers." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCControllerModifiedDescription_Statics::NewProp_Controllers = { "Controllers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCControllerModifiedDescription, Controllers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCControllerModifiedDescription_Statics::NewProp_Controllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCControllerModifiedDescription_Statics::NewProp_Controllers_MetaData)) }; // 3184040257
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCControllerModifiedDescription_Statics::NewProp_ChangedValues_Inner = { "ChangedValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCControllerModifiedDescription_Statics::NewProp_ChangedValues_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCControllerModifiedDescription_Statics::NewProp_ChangedValues = { "ChangedValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCControllerModifiedDescription, ChangedValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCControllerModifiedDescription_Statics::NewProp_ChangedValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCControllerModifiedDescription_Statics::NewProp_ChangedValues_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCControllerModifiedDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCControllerModifiedDescription_Statics::NewProp_Controllers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCControllerModifiedDescription_Statics::NewProp_Controllers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCControllerModifiedDescription_Statics::NewProp_ChangedValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCControllerModifiedDescription_Statics::NewProp_ChangedValues,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCControllerModifiedDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCControllerModifiedDescription",
		sizeof(FRCControllerModifiedDescription),
		alignof(FRCControllerModifiedDescription),
		Z_Construct_UScriptStruct_FRCControllerModifiedDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCControllerModifiedDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCControllerModifiedDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCControllerModifiedDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCControllerModifiedDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_RCControllerModifiedDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCControllerModifiedDescription.InnerSingleton, Z_Construct_UScriptStruct_FRCControllerModifiedDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCControllerModifiedDescription.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCPresetLayoutGroupDescription;
class UScriptStruct* FRCPresetLayoutGroupDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCPresetLayoutGroupDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCPresetLayoutGroupDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCPresetLayoutGroupDescription"));
	}
	return Z_Registration_Info_UScriptStruct_RCPresetLayoutGroupDescription.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCPresetLayoutGroupDescription>()
{
	return FRCPresetLayoutGroupDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExposedProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExposedProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExposedProperties;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExposedFunctions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExposedFunctions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExposedFunctions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExposedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExposedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExposedActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCPresetLayoutGroupDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetLayoutGroupDescription, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewProp_ExposedProperties_Inner = { "ExposedProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCExposedPropertyDescription, METADATA_PARAMS(nullptr, 0) }; // 3101879555
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewProp_ExposedProperties_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewProp_ExposedProperties = { "ExposedProperties", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetLayoutGroupDescription, ExposedProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewProp_ExposedProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewProp_ExposedProperties_MetaData)) }; // 3101879555
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewProp_ExposedFunctions_Inner = { "ExposedFunctions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCExposedFunctionDescription, METADATA_PARAMS(nullptr, 0) }; // 3201797419
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewProp_ExposedFunctions_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewProp_ExposedFunctions = { "ExposedFunctions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetLayoutGroupDescription, ExposedFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewProp_ExposedFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewProp_ExposedFunctions_MetaData)) }; // 3201797419
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewProp_ExposedActors_Inner = { "ExposedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCExposedActorDescription, METADATA_PARAMS(nullptr, 0) }; // 3984628562
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewProp_ExposedActors_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewProp_ExposedActors = { "ExposedActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetLayoutGroupDescription, ExposedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewProp_ExposedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewProp_ExposedActors_MetaData)) }; // 3984628562
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewProp_ExposedProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewProp_ExposedProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewProp_ExposedFunctions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewProp_ExposedFunctions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewProp_ExposedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewProp_ExposedActors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCPresetLayoutGroupDescription",
		sizeof(FRCPresetLayoutGroupDescription),
		alignof(FRCPresetLayoutGroupDescription),
		Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_RCPresetLayoutGroupDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCPresetLayoutGroupDescription.InnerSingleton, Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCPresetLayoutGroupDescription.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCPresetModifiedEntitiesDescription;
class UScriptStruct* FRCPresetModifiedEntitiesDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCPresetModifiedEntitiesDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCPresetModifiedEntitiesDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCPresetModifiedEntitiesDescription"));
	}
	return Z_Registration_Info_UScriptStruct_RCPresetModifiedEntitiesDescription.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCPresetModifiedEntitiesDescription>()
{
	return FRCPresetModifiedEntitiesDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedRCProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedRCProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedRCProperties;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedRCFunctions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedRCFunctions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedRCFunctions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedRCActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedRCActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedRCActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds lists of modified RC entities.\n * @Note that this does not mean the underlying property/function/actor was modified,\n * but rather that the entity structure itself was modified in some way.\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Holds lists of modified RC entities.\n@Note that this does not mean the underlying property/function/actor was modified,\nbut rather that the entity structure itself was modified in some way." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCPresetModifiedEntitiesDescription>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::NewProp_ModifiedRCProperties_Inner = { "ModifiedRCProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCExposedPropertyDescription, METADATA_PARAMS(nullptr, 0) }; // 3101879555
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::NewProp_ModifiedRCProperties_MetaData[] = {
		{ "Comment", "/** The list of modified RC properties. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "The list of modified RC properties." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::NewProp_ModifiedRCProperties = { "ModifiedRCProperties", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetModifiedEntitiesDescription, ModifiedRCProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::NewProp_ModifiedRCProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::NewProp_ModifiedRCProperties_MetaData)) }; // 3101879555
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::NewProp_ModifiedRCFunctions_Inner = { "ModifiedRCFunctions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCExposedFunctionDescription, METADATA_PARAMS(nullptr, 0) }; // 3201797419
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::NewProp_ModifiedRCFunctions_MetaData[] = {
		{ "Comment", "/** The list of modified RC functions. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "The list of modified RC functions." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::NewProp_ModifiedRCFunctions = { "ModifiedRCFunctions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetModifiedEntitiesDescription, ModifiedRCFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::NewProp_ModifiedRCFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::NewProp_ModifiedRCFunctions_MetaData)) }; // 3201797419
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::NewProp_ModifiedRCActors_Inner = { "ModifiedRCActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCExposedActorDescription, METADATA_PARAMS(nullptr, 0) }; // 3984628562
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::NewProp_ModifiedRCActors_MetaData[] = {
		{ "Comment", "/** The list of modified RC actors. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "The list of modified RC actors." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::NewProp_ModifiedRCActors = { "ModifiedRCActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetModifiedEntitiesDescription, ModifiedRCActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::NewProp_ModifiedRCActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::NewProp_ModifiedRCActors_MetaData)) }; // 3984628562
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::NewProp_ModifiedRCProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::NewProp_ModifiedRCProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::NewProp_ModifiedRCFunctions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::NewProp_ModifiedRCFunctions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::NewProp_ModifiedRCActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::NewProp_ModifiedRCActors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCPresetModifiedEntitiesDescription",
		sizeof(FRCPresetModifiedEntitiesDescription),
		alignof(FRCPresetModifiedEntitiesDescription),
		Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_RCPresetModifiedEntitiesDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCPresetModifiedEntitiesDescription.InnerSingleton, Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCPresetModifiedEntitiesDescription.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCPresetDescription;
class UScriptStruct* FRCPresetDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCPresetDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCPresetDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCPresetDescription, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCPresetDescription"));
	}
	return Z_Registration_Info_UScriptStruct_RCPresetDescription.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCPresetDescription>()
{
	return FRCPresetDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCPresetDescription_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Groups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Groups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Groups;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Controllers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controllers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Controllers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetDescription_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCPresetDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/**\n\x09 * Name of the preset.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Name of the preset." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetDescription, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_Path_MetaData[] = {
		{ "Comment", "/**\n\x09 * Name of the preset.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Name of the preset." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetDescription, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_ID_MetaData[] = {
		{ "Comment", "/**\n\x09 * Unique identifier for the preset, can be used to make requests to the API.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Unique identifier for the preset, can be used to make requests to the API." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetDescription, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_ID_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription, METADATA_PARAMS(nullptr, 0) }; // 2398376517
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_Groups_MetaData[] = {
		{ "Comment", "/**\n\x09 * The groups containing exposed entities.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "The groups containing exposed entities." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetDescription, Groups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_Groups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_Groups_MetaData)) }; // 2398376517
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_Controllers_Inner = { "Controllers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCControllerDescription, METADATA_PARAMS(nullptr, 0) }; // 3184040257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_Controllers_MetaData[] = {
		{ "Comment", "/**\n\x09 * The controllers held by the Preset (no groups)\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "The controllers held by the Preset (no groups)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_Controllers = { "Controllers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetDescription, Controllers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_Controllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_Controllers_MetaData)) }; // 3184040257
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCPresetDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_Groups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_Groups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_Controllers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewProp_Controllers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCPresetDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCPresetDescription",
		sizeof(FRCPresetDescription),
		alignof(FRCPresetDescription),
		Z_Construct_UScriptStruct_FRCPresetDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCPresetDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_RCPresetDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCPresetDescription.InnerSingleton, Z_Construct_UScriptStruct_FRCPresetDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCPresetDescription.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCShortPresetDescription;
class UScriptStruct* FRCShortPresetDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCShortPresetDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCShortPresetDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCShortPresetDescription, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCShortPresetDescription"));
	}
	return Z_Registration_Info_UScriptStruct_RCShortPresetDescription.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCShortPresetDescription>()
{
	return FRCShortPresetDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCShortPresetDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCShortPresetDescription_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCShortPresetDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCShortPresetDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCShortPresetDescription_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/**\n\x09 * Name of the preset.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Name of the preset." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCShortPresetDescription_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCShortPresetDescription, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCShortPresetDescription_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCShortPresetDescription_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCShortPresetDescription_Statics::NewProp_ID_MetaData[] = {
		{ "Comment", "/**\n\x09 * Unique identifier for the preset, can be used to make requests to the API.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Unique identifier for the preset, can be used to make requests to the API." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCShortPresetDescription_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCShortPresetDescription, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCShortPresetDescription_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCShortPresetDescription_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCShortPresetDescription_Statics::NewProp_Path_MetaData[] = {
		{ "Comment", "/**\n\x09 * Object path of the preset.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Object path of the preset." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCShortPresetDescription_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCShortPresetDescription, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCShortPresetDescription_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCShortPresetDescription_Statics::NewProp_Path_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCShortPresetDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCShortPresetDescription_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCShortPresetDescription_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCShortPresetDescription_Statics::NewProp_Path,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCShortPresetDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCShortPresetDescription",
		sizeof(FRCShortPresetDescription),
		alignof(FRCShortPresetDescription),
		Z_Construct_UScriptStruct_FRCShortPresetDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCShortPresetDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCShortPresetDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCShortPresetDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCShortPresetDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_RCShortPresetDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCShortPresetDescription.InnerSingleton, Z_Construct_UScriptStruct_FRCShortPresetDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCShortPresetDescription.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCAssetDescription;
class UScriptStruct* FRCAssetDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCAssetDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCAssetDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCAssetDescription, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCAssetDescription"));
	}
	return Z_Registration_Info_UScriptStruct_RCAssetDescription.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCAssetDescription>()
{
	return FRCAssetDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCAssetDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Path;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Metadata_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCAssetDescription_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCAssetDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCAssetDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCAssetDescription_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCAssetDescription_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCAssetDescription, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCAssetDescription_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCAssetDescription_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCAssetDescription_Statics::NewProp_Class_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCAssetDescription_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCAssetDescription, Class), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCAssetDescription_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCAssetDescription_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCAssetDescription_Statics::NewProp_Path_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCAssetDescription_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCAssetDescription, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCAssetDescription_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCAssetDescription_Statics::NewProp_Path_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCAssetDescription_Statics::NewProp_Metadata_ValueProp = { "Metadata", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCAssetDescription_Statics::NewProp_Metadata_Key_KeyProp = { "Metadata_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCAssetDescription_Statics::NewProp_Metadata_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRCAssetDescription_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCAssetDescription, Metadata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCAssetDescription_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCAssetDescription_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCAssetDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCAssetDescription_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCAssetDescription_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCAssetDescription_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCAssetDescription_Statics::NewProp_Metadata_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCAssetDescription_Statics::NewProp_Metadata_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCAssetDescription_Statics::NewProp_Metadata,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCAssetDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCAssetDescription",
		sizeof(FRCAssetDescription),
		alignof(FRCAssetDescription),
		Z_Construct_UScriptStruct_FRCAssetDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCAssetDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCAssetDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCAssetDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCAssetDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_RCAssetDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCAssetDescription.InnerSingleton, Z_Construct_UScriptStruct_FRCAssetDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCAssetDescription.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCPresetFieldRenamed;
class UScriptStruct* FRCPresetFieldRenamed::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCPresetFieldRenamed.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCPresetFieldRenamed.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCPresetFieldRenamed, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCPresetFieldRenamed"));
	}
	return Z_Registration_Info_UScriptStruct_RCPresetFieldRenamed.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCPresetFieldRenamed>()
{
	return FRCPresetFieldRenamed::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCPresetFieldRenamed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldFieldLabel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OldFieldLabel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewFieldLabel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewFieldLabel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetFieldRenamed_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCPresetFieldRenamed_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCPresetFieldRenamed>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetFieldRenamed_Statics::NewProp_OldFieldLabel_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCPresetFieldRenamed_Statics::NewProp_OldFieldLabel = { "OldFieldLabel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetFieldRenamed, OldFieldLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetFieldRenamed_Statics::NewProp_OldFieldLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetFieldRenamed_Statics::NewProp_OldFieldLabel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetFieldRenamed_Statics::NewProp_NewFieldLabel_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCPresetFieldRenamed_Statics::NewProp_NewFieldLabel = { "NewFieldLabel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetFieldRenamed, NewFieldLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetFieldRenamed_Statics::NewProp_NewFieldLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetFieldRenamed_Statics::NewProp_NewFieldLabel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCPresetFieldRenamed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetFieldRenamed_Statics::NewProp_OldFieldLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetFieldRenamed_Statics::NewProp_NewFieldLabel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCPresetFieldRenamed_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCPresetFieldRenamed",
		sizeof(FRCPresetFieldRenamed),
		alignof(FRCPresetFieldRenamed),
		Z_Construct_UScriptStruct_FRCPresetFieldRenamed_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetFieldRenamed_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetFieldRenamed_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetFieldRenamed_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCPresetFieldRenamed()
	{
		if (!Z_Registration_Info_UScriptStruct_RCPresetFieldRenamed.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCPresetFieldRenamed.InnerSingleton, Z_Construct_UScriptStruct_FRCPresetFieldRenamed_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCPresetFieldRenamed.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCAssetFilter;
class UScriptStruct* FRCAssetFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCAssetFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCAssetFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCAssetFilter, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCAssetFilter"));
	}
	return Z_Registration_Info_UScriptStruct_RCAssetFilter.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCAssetFilter>()
{
	return FRCAssetFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCAssetFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_PackageNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PackageNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PackagePaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackagePaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PackagePaths;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClassNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RecursiveClassesExclusionSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecursiveClassesExclusionSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_RecursiveClassesExclusionSet;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NativeParentClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NativeParentClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NativeParentClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecursiveClasses_MetaData[];
#endif
		static void NewProp_RecursiveClasses_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RecursiveClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecursivePaths_MetaData[];
#endif
		static void NewProp_RecursivePaths_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RecursivePaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableBlueprintNativeClassFiltering_MetaData[];
#endif
		static void NewProp_EnableBlueprintNativeClassFiltering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableBlueprintNativeClassFiltering;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCAssetFilter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCAssetFilter>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_PackageNames_Inner = { "PackageNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_PackageNames_MetaData[] = {
		{ "Comment", "/** The filter component for package names */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "The filter component for package names" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_PackageNames = { "PackageNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCAssetFilter, PackageNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_PackageNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_PackageNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_PackagePaths_Inner = { "PackagePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_PackagePaths_MetaData[] = {
		{ "Comment", "/** The filter component for package paths */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "The filter component for package paths" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_PackagePaths = { "PackagePaths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCAssetFilter, PackagePaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_PackagePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_PackagePaths_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_ClassNames_Inner = { "ClassNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_ClassNames_MetaData[] = {
		{ "Comment", "/** The filter component for class names. Instances of the specified classes, but not subclasses (by default), will be included. Derived classes will be included only if bRecursiveClasses is true. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "The filter component for class names. Instances of the specified classes, but not subclasses (by default), will be included. Derived classes will be included only if bRecursiveClasses is true." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_ClassNames = { "ClassNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCAssetFilter, ClassNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_ClassNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_ClassNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_RecursiveClassesExclusionSet_ElementProp = { "RecursiveClassesExclusionSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_RecursiveClassesExclusionSet_MetaData[] = {
		{ "Comment", "/** Only if bRecursiveClasses is true, the results will exclude classes (and subclasses) in this list */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Only if bRecursiveClasses is true, the results will exclude classes (and subclasses) in this list" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_RecursiveClassesExclusionSet = { "RecursiveClassesExclusionSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCAssetFilter, RecursiveClassesExclusionSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_RecursiveClassesExclusionSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_RecursiveClassesExclusionSet_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_NativeParentClasses_Inner = { "NativeParentClasses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_NativeParentClasses_MetaData[] = {
		{ "Comment", "/** Only if EnableBlueprintNativeClassFiltering is true, resulting asset will be filtered for dependants of classes in this list. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "Only if EnableBlueprintNativeClassFiltering is true, resulting asset will be filtered for dependants of classes in this list." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_NativeParentClasses = { "NativeParentClasses", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCAssetFilter, NativeParentClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_NativeParentClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_NativeParentClasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_RecursiveClasses_MetaData[] = {
		{ "Comment", "/** If true, subclasses of ClassNames will also be included and RecursiveClassesExclusionSet will be excluded. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "If true, subclasses of ClassNames will also be included and RecursiveClassesExclusionSet will be excluded." },
	};
#endif
	void Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_RecursiveClasses_SetBit(void* Obj)
	{
		((FRCAssetFilter*)Obj)->RecursiveClasses = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_RecursiveClasses = { "RecursiveClasses", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRCAssetFilter), &Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_RecursiveClasses_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_RecursiveClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_RecursiveClasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_RecursivePaths_MetaData[] = {
		{ "Comment", "/** If true, PackagePath components will be recursive */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "If true, PackagePath components will be recursive" },
	};
#endif
	void Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_RecursivePaths_SetBit(void* Obj)
	{
		((FRCAssetFilter*)Obj)->RecursivePaths = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_RecursivePaths = { "RecursivePaths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRCAssetFilter), &Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_RecursivePaths_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_RecursivePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_RecursivePaths_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_EnableBlueprintNativeClassFiltering_MetaData[] = {
		{ "Comment", "/** When dealing with blueprint classes, you might want to filter for a base class which can't be picked by asset registry if you derive from a blueprint class */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "When dealing with blueprint classes, you might want to filter for a base class which can't be picked by asset registry if you derive from a blueprint class" },
	};
#endif
	void Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_EnableBlueprintNativeClassFiltering_SetBit(void* Obj)
	{
		((FRCAssetFilter*)Obj)->EnableBlueprintNativeClassFiltering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_EnableBlueprintNativeClassFiltering = { "EnableBlueprintNativeClassFiltering", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRCAssetFilter), &Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_EnableBlueprintNativeClassFiltering_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_EnableBlueprintNativeClassFiltering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_EnableBlueprintNativeClassFiltering_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCAssetFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_PackageNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_PackageNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_PackagePaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_PackagePaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_ClassNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_ClassNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_RecursiveClassesExclusionSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_RecursiveClassesExclusionSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_NativeParentClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_NativeParentClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_RecursiveClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_RecursivePaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewProp_EnableBlueprintNativeClassFiltering,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCAssetFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCAssetFilter",
		sizeof(FRCAssetFilter),
		alignof(FRCAssetFilter),
		Z_Construct_UScriptStruct_FRCAssetFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCAssetFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCAssetFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCAssetFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCAssetFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_RCAssetFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCAssetFilter.InnerSingleton, Z_Construct_UScriptStruct_FRCAssetFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCAssetFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCActorDescription;
class UScriptStruct* FRCActorDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCActorDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCActorDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCActorDescription, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCActorDescription"));
	}
	return Z_Registration_Info_UScriptStruct_RCActorDescription.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCActorDescription>()
{
	return FRCActorDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCActorDescription_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCActorDescription_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A description of an actor that can both uniquely identify it and provide a user-friendly name.\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "A description of an actor that can both uniquely identify it and provide a user-friendly name." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCActorDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCActorDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCActorDescription_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** A user-friendly name for the actor. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "A user-friendly name for the actor." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCActorDescription_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCActorDescription, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCActorDescription_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCActorDescription_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCActorDescription_Statics::NewProp_Path_MetaData[] = {
		{ "Comment", "/** The path to the actor. */" },
		{ "ModuleRelativePath", "Private/RemoteControlModels.h" },
		{ "ToolTip", "The path to the actor." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCActorDescription_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCActorDescription, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCActorDescription_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCActorDescription_Statics::NewProp_Path_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCActorDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCActorDescription_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCActorDescription_Statics::NewProp_Path,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCActorDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		&NewStructOps,
		"RCActorDescription",
		sizeof(FRCActorDescription),
		alignof(FRCActorDescription),
		Z_Construct_UScriptStruct_FRCActorDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCActorDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCActorDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCActorDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCActorDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_RCActorDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCActorDescription.InnerSingleton, Z_Construct_UScriptStruct_FRCActorDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCActorDescription.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlModels_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlModels_h_Statics::ScriptStructInfo[] = {
		{ FRCObjectDescription::StaticStruct, Z_Construct_UScriptStruct_FRCObjectDescription_Statics::NewStructOps, TEXT("RCObjectDescription"), &Z_Registration_Info_UScriptStruct_RCObjectDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCObjectDescription), 2218922714U) },
		{ FRCPropertyDescription::StaticStruct, Z_Construct_UScriptStruct_FRCPropertyDescription_Statics::NewStructOps, TEXT("RCPropertyDescription"), &Z_Registration_Info_UScriptStruct_RCPropertyDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCPropertyDescription), 4101904298U) },
		{ FRCFunctionDescription::StaticStruct, Z_Construct_UScriptStruct_FRCFunctionDescription_Statics::NewStructOps, TEXT("RCFunctionDescription"), &Z_Registration_Info_UScriptStruct_RCFunctionDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCFunctionDescription), 2894009906U) },
		{ FRCExposedPropertyDescription::StaticStruct, Z_Construct_UScriptStruct_FRCExposedPropertyDescription_Statics::NewStructOps, TEXT("RCExposedPropertyDescription"), &Z_Registration_Info_UScriptStruct_RCExposedPropertyDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCExposedPropertyDescription), 3101879555U) },
		{ FRCExposedFunctionDescription::StaticStruct, Z_Construct_UScriptStruct_FRCExposedFunctionDescription_Statics::NewStructOps, TEXT("RCExposedFunctionDescription"), &Z_Registration_Info_UScriptStruct_RCExposedFunctionDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCExposedFunctionDescription), 3201797419U) },
		{ FRCExposedActorDescription::StaticStruct, Z_Construct_UScriptStruct_FRCExposedActorDescription_Statics::NewStructOps, TEXT("RCExposedActorDescription"), &Z_Registration_Info_UScriptStruct_RCExposedActorDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCExposedActorDescription), 3984628562U) },
		{ FRCControllerDescription::StaticStruct, Z_Construct_UScriptStruct_FRCControllerDescription_Statics::NewStructOps, TEXT("RCControllerDescription"), &Z_Registration_Info_UScriptStruct_RCControllerDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCControllerDescription), 3184040257U) },
		{ FRCControllerModifiedDescription::StaticStruct, Z_Construct_UScriptStruct_FRCControllerModifiedDescription_Statics::NewStructOps, TEXT("RCControllerModifiedDescription"), &Z_Registration_Info_UScriptStruct_RCControllerModifiedDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCControllerModifiedDescription), 2095707988U) },
		{ FRCPresetLayoutGroupDescription::StaticStruct, Z_Construct_UScriptStruct_FRCPresetLayoutGroupDescription_Statics::NewStructOps, TEXT("RCPresetLayoutGroupDescription"), &Z_Registration_Info_UScriptStruct_RCPresetLayoutGroupDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCPresetLayoutGroupDescription), 2398376517U) },
		{ FRCPresetModifiedEntitiesDescription::StaticStruct, Z_Construct_UScriptStruct_FRCPresetModifiedEntitiesDescription_Statics::NewStructOps, TEXT("RCPresetModifiedEntitiesDescription"), &Z_Registration_Info_UScriptStruct_RCPresetModifiedEntitiesDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCPresetModifiedEntitiesDescription), 3991747579U) },
		{ FRCPresetDescription::StaticStruct, Z_Construct_UScriptStruct_FRCPresetDescription_Statics::NewStructOps, TEXT("RCPresetDescription"), &Z_Registration_Info_UScriptStruct_RCPresetDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCPresetDescription), 3496416879U) },
		{ FRCShortPresetDescription::StaticStruct, Z_Construct_UScriptStruct_FRCShortPresetDescription_Statics::NewStructOps, TEXT("RCShortPresetDescription"), &Z_Registration_Info_UScriptStruct_RCShortPresetDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCShortPresetDescription), 2744328907U) },
		{ FRCAssetDescription::StaticStruct, Z_Construct_UScriptStruct_FRCAssetDescription_Statics::NewStructOps, TEXT("RCAssetDescription"), &Z_Registration_Info_UScriptStruct_RCAssetDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCAssetDescription), 3060493055U) },
		{ FRCPresetFieldRenamed::StaticStruct, Z_Construct_UScriptStruct_FRCPresetFieldRenamed_Statics::NewStructOps, TEXT("RCPresetFieldRenamed"), &Z_Registration_Info_UScriptStruct_RCPresetFieldRenamed, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCPresetFieldRenamed), 2805028843U) },
		{ FRCAssetFilter::StaticStruct, Z_Construct_UScriptStruct_FRCAssetFilter_Statics::NewStructOps, TEXT("RCAssetFilter"), &Z_Registration_Info_UScriptStruct_RCAssetFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCAssetFilter), 3547860302U) },
		{ FRCActorDescription::StaticStruct, Z_Construct_UScriptStruct_FRCActorDescription_Statics::NewStructOps, TEXT("RCActorDescription"), &Z_Registration_Info_UScriptStruct_RCActorDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCActorDescription), 180742370U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlModels_h_218348849(TEXT("/Script/WebRemoteControl"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlModels_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlModels_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
