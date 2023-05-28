// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MuCO/CustomizableObjectUIData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectUIData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	CUSTOMIZABLEOBJECT_API UEnum* Z_Construct_UEnum_CustomizableObject_ECustomizableObjectGroupType();
	CUSTOMIZABLEOBJECT_API UEnum* Z_Construct_UEnum_CustomizableObject_EMutableParameterType();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntegerParameterUIData();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMutableParamUIMetadata();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FParameterUIData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MutableParamUIMetadata;
class UScriptStruct* FMutableParamUIMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MutableParamUIMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MutableParamUIMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMutableParamUIMetadata, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("MutableParamUIMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_MutableParamUIMetadata.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FMutableParamUIMetadata>()
{
	return FMutableParamUIMetadata::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectFriendlyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectFriendlyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UISectionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UISectionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UIOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIThumbnail_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_UIThumbnail;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraInformation_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraInformation_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraInformation_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ExtraInformation;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ExtraAssets_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraAssets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraAssets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ExtraAssets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMutableParamUIMetadata>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_ObjectFriendlyName_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "/** This is the name to be shown in UI */" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectUIData.h" },
		{ "ToolTip", "This is the name to be shown in UI" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_ObjectFriendlyName = { "ObjectFriendlyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMutableParamUIMetadata, ObjectFriendlyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_ObjectFriendlyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_ObjectFriendlyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_UISectionName_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "/** This is the name of the section where the parameter will be placed in UI */" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectUIData.h" },
		{ "ToolTip", "This is the name of the section where the parameter will be placed in UI" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_UISectionName = { "UISectionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMutableParamUIMetadata, UISectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_UISectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_UISectionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_UIOrder_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "/** This is the order of the parameter inside its section */" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectUIData.h" },
		{ "ToolTip", "This is the order of the parameter inside its section" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_UIOrder = { "UIOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMutableParamUIMetadata, UIOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_UIOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_UIOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_UIThumbnail_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "/** Thumnbail for UI */" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectUIData.h" },
		{ "ToolTip", "Thumnbail for UI" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_UIThumbnail = { "UIThumbnail", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMutableParamUIMetadata, UIThumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_UIThumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_UIThumbnail_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_ExtraInformation_ValueProp = { "ExtraInformation", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_ExtraInformation_Key_KeyProp = { "ExtraInformation_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_ExtraInformation_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "/** Extra information to be used in UI building, with semantics completely defined by the game/UI programmer, with a key to identify the semantic of its related value */" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectUIData.h" },
		{ "ToolTip", "Extra information to be used in UI building, with semantics completely defined by the game/UI programmer, with a key to identify the semantic of its related value" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_ExtraInformation = { "ExtraInformation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMutableParamUIMetadata, ExtraInformation), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_ExtraInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_ExtraInformation_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_ExtraAssets_ValueProp = { "ExtraAssets", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_ExtraAssets_Key_KeyProp = { "ExtraAssets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_ExtraAssets_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "/** Extra assets to be used in UI building */" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectUIData.h" },
		{ "ToolTip", "Extra assets to be used in UI building" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_ExtraAssets = { "ExtraAssets", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMutableParamUIMetadata, ExtraAssets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_ExtraAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_ExtraAssets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_MinimumValue_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectUIData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_MinimumValue = { "MinimumValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMutableParamUIMetadata, MinimumValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_MinimumValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_MinimumValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_MaximumValue_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectUIData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_MaximumValue = { "MaximumValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMutableParamUIMetadata, MaximumValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_MaximumValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_MaximumValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_ObjectFriendlyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_UISectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_UIOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_UIThumbnail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_ExtraInformation_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_ExtraInformation_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_ExtraInformation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_ExtraAssets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_ExtraAssets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_ExtraAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_MinimumValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewProp_MaximumValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"MutableParamUIMetadata",
		sizeof(FMutableParamUIMetadata),
		alignof(FMutableParamUIMetadata),
		Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMutableParamUIMetadata()
	{
		if (!Z_Registration_Info_UScriptStruct_MutableParamUIMetadata.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MutableParamUIMetadata.InnerSingleton, Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MutableParamUIMetadata.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IntegerParameterUIData;
class UScriptStruct* FIntegerParameterUIData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IntegerParameterUIData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IntegerParameterUIData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntegerParameterUIData, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("IntegerParameterUIData"));
	}
	return Z_Registration_Info_UScriptStruct_IntegerParameterUIData.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FIntegerParameterUIData>()
{
	return FIntegerParameterUIData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIntegerParameterUIData_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamUIMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParamUIMetadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntegerParameterUIData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIntegerParameterUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntegerParameterUIData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntegerParameterUIData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "/** Integer parameter option name */" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectUIData.h" },
		{ "ToolTip", "Integer parameter option name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIntegerParameterUIData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIntegerParameterUIData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FIntegerParameterUIData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegerParameterUIData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntegerParameterUIData_Statics::NewProp_ParamUIMetadata_MetaData[] = {
		{ "Category", "UI" },
		{ "DisplayName", "Parameter UI Metadata" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectUIData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIntegerParameterUIData_Statics::NewProp_ParamUIMetadata = { "ParamUIMetadata", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIntegerParameterUIData, ParamUIMetadata), Z_Construct_UScriptStruct_FMutableParamUIMetadata, METADATA_PARAMS(Z_Construct_UScriptStruct_FIntegerParameterUIData_Statics::NewProp_ParamUIMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegerParameterUIData_Statics::NewProp_ParamUIMetadata_MetaData)) }; // 1713445463
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIntegerParameterUIData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegerParameterUIData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegerParameterUIData_Statics::NewProp_ParamUIMetadata,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIntegerParameterUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"IntegerParameterUIData",
		sizeof(FIntegerParameterUIData),
		alignof(FIntegerParameterUIData),
		Z_Construct_UScriptStruct_FIntegerParameterUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegerParameterUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIntegerParameterUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegerParameterUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIntegerParameterUIData()
	{
		if (!Z_Registration_Info_UScriptStruct_IntegerParameterUIData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IntegerParameterUIData.InnerSingleton, Z_Construct_UScriptStruct_FIntegerParameterUIData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IntegerParameterUIData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParameterUIData;
class UScriptStruct* FParameterUIData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParameterUIData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParameterUIData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParameterUIData, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("ParameterUIData"));
	}
	return Z_Registration_Info_UScriptStruct_ParameterUIData.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FParameterUIData>()
{
	return FParameterUIData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FParameterUIData_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamUIMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParamUIMetadata;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayIntegerParameterOption_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayIntegerParameterOption_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayIntegerParameterOption;
		static const UECodeGen_Private::FBytePropertyParams NewProp_IntegerParameterGroupType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntegerParameterGroupType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IntegerParameterGroupType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDontCompressRuntimeTextures_MetaData[];
#endif
		static void NewProp_bDontCompressRuntimeTextures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDontCompressRuntimeTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLiveUpdateMode_MetaData[];
#endif
		static void NewProp_bLiveUpdateMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLiveUpdateMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReuseInstanceTextures_MetaData[];
#endif
		static void NewProp_bReuseInstanceTextures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReuseInstanceTextures;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ForcedParameterValues_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ForcedParameterValues_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForcedParameterValues_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ForcedParameterValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterUIData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParameterUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParameterUIData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "/** Parameter name */" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectUIData.h" },
		{ "ToolTip", "Parameter name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParameterUIData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_ParamUIMetadata_MetaData[] = {
		{ "Category", "UI" },
		{ "DisplayName", "Parameter UI Metadata" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectUIData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_ParamUIMetadata = { "ParamUIMetadata", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParameterUIData, ParamUIMetadata), Z_Construct_UScriptStruct_FMutableParamUIMetadata, METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_ParamUIMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_ParamUIMetadata_MetaData)) }; // 1713445463
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "/** Parameter type, using uint8 since the enum in declared in the class it is used */" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectUIData.h" },
		{ "ToolTip", "Parameter type, using uint8 since the enum in declared in the class it is used" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParameterUIData, Type), Z_Construct_UEnum_CustomizableObject_EMutableParameterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_Type_MetaData)) }; // 3035811612
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_ArrayIntegerParameterOption_Inner = { "ArrayIntegerParameterOption", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FIntegerParameterUIData, METADATA_PARAMS(nullptr, 0) }; // 3768859194
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_ArrayIntegerParameterOption_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "/** In the case of an integer parameter, store here all options */" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectUIData.h" },
		{ "ToolTip", "In the case of an integer parameter, store here all options" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_ArrayIntegerParameterOption = { "ArrayIntegerParameterOption", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParameterUIData, ArrayIntegerParameterOption), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_ArrayIntegerParameterOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_ArrayIntegerParameterOption_MetaData)) }; // 3768859194
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_IntegerParameterGroupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_IntegerParameterGroupType_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "/** In the case of an integer parameter, how are the different options selected (one, one or none, etc...) */" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectUIData.h" },
		{ "ToolTip", "In the case of an integer parameter, how are the different options selected (one, one or none, etc...)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_IntegerParameterGroupType = { "IntegerParameterGroupType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParameterUIData, IntegerParameterGroupType), Z_Construct_UEnum_CustomizableObject_ECustomizableObjectGroupType, METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_IntegerParameterGroupType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_IntegerParameterGroupType_MetaData)) }; // 2934808786
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_bDontCompressRuntimeTextures_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectUIData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_bDontCompressRuntimeTextures_SetBit(void* Obj)
	{
		((FParameterUIData*)Obj)->bDontCompressRuntimeTextures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_bDontCompressRuntimeTextures = { "bDontCompressRuntimeTextures", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FParameterUIData), &Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_bDontCompressRuntimeTextures_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_bDontCompressRuntimeTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_bDontCompressRuntimeTextures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_bLiveUpdateMode_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** In this mode instances and their temp data will be reused between updates. It will be much faster but spend as much as ten times the memory.\n\x09    Useful for customization lockers with few characters that are going to have their parameters changed many times, not for in-game */" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectUIData.h" },
		{ "ToolTip", "In this mode instances and their temp data will be reused between updates. It will be much faster but spend as much as ten times the memory.\n          Useful for customization lockers with few characters that are going to have their parameters changed many times, not for in-game" },
	};
#endif
	void Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_bLiveUpdateMode_SetBit(void* Obj)
	{
		((FParameterUIData*)Obj)->bLiveUpdateMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_bLiveUpdateMode = { "bLiveUpdateMode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FParameterUIData), &Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_bLiveUpdateMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_bLiveUpdateMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_bLiveUpdateMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_bReuseInstanceTextures_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectUIData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_bReuseInstanceTextures_SetBit(void* Obj)
	{
		((FParameterUIData*)Obj)->bReuseInstanceTextures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_bReuseInstanceTextures = { "bReuseInstanceTextures", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FParameterUIData), &Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_bReuseInstanceTextures_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_bReuseInstanceTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_bReuseInstanceTextures_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_ForcedParameterValues_ValueProp = { "ForcedParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_ForcedParameterValues_Key_KeyProp = { "ForcedParameterValues_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_ForcedParameterValues_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectUIData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_ForcedParameterValues = { "ForcedParameterValues", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParameterUIData, ForcedParameterValues), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_ForcedParameterValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_ForcedParameterValues_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParameterUIData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_ParamUIMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_ArrayIntegerParameterOption_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_ArrayIntegerParameterOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_IntegerParameterGroupType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_IntegerParameterGroupType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_bDontCompressRuntimeTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_bLiveUpdateMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_bReuseInstanceTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_ForcedParameterValues_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_ForcedParameterValues_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterUIData_Statics::NewProp_ForcedParameterValues,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParameterUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"ParameterUIData",
		sizeof(FParameterUIData),
		alignof(FParameterUIData),
		Z_Construct_UScriptStruct_FParameterUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParameterUIData()
	{
		if (!Z_Registration_Info_UScriptStruct_ParameterUIData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParameterUIData.InnerSingleton, Z_Construct_UScriptStruct_FParameterUIData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ParameterUIData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectUIData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectUIData_h_Statics::ScriptStructInfo[] = {
		{ FMutableParamUIMetadata::StaticStruct, Z_Construct_UScriptStruct_FMutableParamUIMetadata_Statics::NewStructOps, TEXT("MutableParamUIMetadata"), &Z_Registration_Info_UScriptStruct_MutableParamUIMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMutableParamUIMetadata), 1713445463U) },
		{ FIntegerParameterUIData::StaticStruct, Z_Construct_UScriptStruct_FIntegerParameterUIData_Statics::NewStructOps, TEXT("IntegerParameterUIData"), &Z_Registration_Info_UScriptStruct_IntegerParameterUIData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIntegerParameterUIData), 3768859194U) },
		{ FParameterUIData::StaticStruct, Z_Construct_UScriptStruct_FParameterUIData_Statics::NewStructOps, TEXT("ParameterUIData"), &Z_Registration_Info_UScriptStruct_ParameterUIData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParameterUIData), 513872167U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectUIData_h_2757722182(TEXT("/Script/CustomizableObject"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectUIData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectUIData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
