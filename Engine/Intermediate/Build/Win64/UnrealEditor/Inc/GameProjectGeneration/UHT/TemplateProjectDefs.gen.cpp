// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TemplateProjectDefs.h"
#include "FeaturePackContentSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateProjectDefs() {}
// Cross Module References
	ADDCONTENTDIALOG_API UEnum* Z_Construct_UEnum_AddContentDialog_EFeaturePackDetailLevel();
	ADDCONTENTDIALOG_API UScriptStruct* Z_Construct_UScriptStruct_FFeaturePackLevelSet();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPROJECTGENERATION_API UClass* Z_Construct_UClass_UTemplateCategories();
	GAMEPROJECTGENERATION_API UClass* Z_Construct_UClass_UTemplateCategories_NoRegister();
	GAMEPROJECTGENERATION_API UClass* Z_Construct_UClass_UTemplateProjectDefs();
	GAMEPROJECTGENERATION_API UClass* Z_Construct_UClass_UTemplateProjectDefs_NoRegister();
	GAMEPROJECTGENERATION_API UEnum* Z_Construct_UEnum_GameProjectGeneration_ETemplateSetting();
	GAMEPROJECTGENERATION_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizedTemplateString();
	GAMEPROJECTGENERATION_API UScriptStruct* Z_Construct_UScriptStruct_FTemplateCategoryDef();
	GAMEPROJECTGENERATION_API UScriptStruct* Z_Construct_UScriptStruct_FTemplateFolderRename();
	GAMEPROJECTGENERATION_API UScriptStruct* Z_Construct_UScriptStruct_FTemplateReplacement();
	UPackage* Z_Construct_UPackage__Script_GameProjectGeneration();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TemplateReplacement;
class UScriptStruct* FTemplateReplacement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TemplateReplacement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TemplateReplacement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTemplateReplacement, (UObject*)Z_Construct_UPackage__Script_GameProjectGeneration(), TEXT("TemplateReplacement"));
	}
	return Z_Registration_Info_UScriptStruct_TemplateReplacement.OuterSingleton;
}
template<> GAMEPROJECTGENERATION_API UScriptStruct* StaticStruct<FTemplateReplacement>()
{
	return FTemplateReplacement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTemplateReplacement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Extensions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extensions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Extensions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_From;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_To;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCaseSensitive_MetaData[];
#endif
		static void NewProp_bCaseSensitive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaseSensitive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateReplacement_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTemplateReplacement>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_Extensions_Inner = { "Extensions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_Extensions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_Extensions = { "Extensions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTemplateReplacement, Extensions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_Extensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_Extensions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_From_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTemplateReplacement, From), METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_From_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_From_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_To_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTemplateReplacement, To), METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_To_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_To_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_bCaseSensitive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_bCaseSensitive_SetBit(void* Obj)
	{
		((FTemplateReplacement*)Obj)->bCaseSensitive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_bCaseSensitive = { "bCaseSensitive", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTemplateReplacement), &Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_bCaseSensitive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_bCaseSensitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_bCaseSensitive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTemplateReplacement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_Extensions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_Extensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_From,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_To,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewProp_bCaseSensitive,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTemplateReplacement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameProjectGeneration,
		nullptr,
		&NewStructOps,
		"TemplateReplacement",
		sizeof(FTemplateReplacement),
		alignof(FTemplateReplacement),
		Z_Construct_UScriptStruct_FTemplateReplacement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateReplacement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateReplacement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateReplacement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTemplateReplacement()
	{
		if (!Z_Registration_Info_UScriptStruct_TemplateReplacement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TemplateReplacement.InnerSingleton, Z_Construct_UScriptStruct_FTemplateReplacement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TemplateReplacement.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TemplateFolderRename;
class UScriptStruct* FTemplateFolderRename::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TemplateFolderRename.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TemplateFolderRename.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTemplateFolderRename, (UObject*)Z_Construct_UPackage__Script_GameProjectGeneration(), TEXT("TemplateFolderRename"));
	}
	return Z_Registration_Info_UScriptStruct_TemplateFolderRename.OuterSingleton;
}
template<> GAMEPROJECTGENERATION_API UScriptStruct* StaticStruct<FTemplateFolderRename>()
{
	return FTemplateFolderRename::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTemplateFolderRename_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_From;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_To;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTemplateFolderRename>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::NewProp_From_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTemplateFolderRename, From), METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::NewProp_From_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::NewProp_From_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::NewProp_To_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTemplateFolderRename, To), METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::NewProp_To_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::NewProp_To_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::NewProp_From,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::NewProp_To,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameProjectGeneration,
		nullptr,
		&NewStructOps,
		"TemplateFolderRename",
		sizeof(FTemplateFolderRename),
		alignof(FTemplateFolderRename),
		Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTemplateFolderRename()
	{
		if (!Z_Registration_Info_UScriptStruct_TemplateFolderRename.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TemplateFolderRename.InnerSingleton, Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TemplateFolderRename.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocalizedTemplateString;
class UScriptStruct* FLocalizedTemplateString::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocalizedTemplateString.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocalizedTemplateString.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizedTemplateString, (UObject*)Z_Construct_UPackage__Script_GameProjectGeneration(), TEXT("LocalizedTemplateString"));
	}
	return Z_Registration_Info_UScriptStruct_LocalizedTemplateString.OuterSingleton;
}
template<> GAMEPROJECTGENERATION_API UScriptStruct* StaticStruct<FLocalizedTemplateString>()
{
	return FLocalizedTemplateString::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizedTemplateString>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::NewProp_Language_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLocalizedTemplateString, Language), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::NewProp_Language_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::NewProp_Text_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLocalizedTemplateString, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::NewProp_Language,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::NewProp_Text,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameProjectGeneration,
		nullptr,
		&NewStructOps,
		"LocalizedTemplateString",
		sizeof(FLocalizedTemplateString),
		alignof(FLocalizedTemplateString),
		Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocalizedTemplateString()
	{
		if (!Z_Registration_Info_UScriptStruct_LocalizedTemplateString.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocalizedTemplateString.InnerSingleton, Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LocalizedTemplateString.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETemplateSetting;
	static UEnum* ETemplateSetting_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETemplateSetting.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETemplateSetting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameProjectGeneration_ETemplateSetting, (UObject*)Z_Construct_UPackage__Script_GameProjectGeneration(), TEXT("ETemplateSetting"));
		}
		return Z_Registration_Info_UEnum_ETemplateSetting.OuterSingleton;
	}
	template<> GAMEPROJECTGENERATION_API UEnum* StaticEnum<ETemplateSetting>()
	{
		return ETemplateSetting_StaticEnum();
	}
	struct Z_Construct_UEnum_GameProjectGeneration_ETemplateSetting_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameProjectGeneration_ETemplateSetting_Statics::Enumerators[] = {
		{ "ETemplateSetting::Languages", (int64)ETemplateSetting::Languages },
		{ "ETemplateSetting::HardwareTarget", (int64)ETemplateSetting::HardwareTarget },
		{ "ETemplateSetting::GraphicsPreset", (int64)ETemplateSetting::GraphicsPreset },
		{ "ETemplateSetting::StarterContent", (int64)ETemplateSetting::StarterContent },
		{ "ETemplateSetting::XR", (int64)ETemplateSetting::XR },
		{ "ETemplateSetting::Raytracing", (int64)ETemplateSetting::Raytracing },
		{ "ETemplateSetting::All", (int64)ETemplateSetting::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameProjectGeneration_ETemplateSetting_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "ETemplateSetting::All" },
		{ "GraphicsPreset.Name", "ETemplateSetting::GraphicsPreset" },
		{ "HardwareTarget.Name", "ETemplateSetting::HardwareTarget" },
		{ "Languages.Name", "ETemplateSetting::Languages" },
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
		{ "Raytracing.Name", "ETemplateSetting::Raytracing" },
		{ "StarterContent.Name", "ETemplateSetting::StarterContent" },
		{ "XR.Name", "ETemplateSetting::XR" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameProjectGeneration_ETemplateSetting_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameProjectGeneration,
		nullptr,
		"ETemplateSetting",
		"ETemplateSetting",
		Z_Construct_UEnum_GameProjectGeneration_ETemplateSetting_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameProjectGeneration_ETemplateSetting_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameProjectGeneration_ETemplateSetting_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameProjectGeneration_ETemplateSetting_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameProjectGeneration_ETemplateSetting()
	{
		if (!Z_Registration_Info_UEnum_ETemplateSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETemplateSetting.InnerSingleton, Z_Construct_UEnum_GameProjectGeneration_ETemplateSetting_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETemplateSetting.InnerSingleton;
	}
	void UTemplateProjectDefs::StaticRegisterNativesUTemplateProjectDefs()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTemplateProjectDefs);
	UClass* Z_Construct_UClass_UTemplateProjectDefs_NoRegister()
	{
		return UTemplateProjectDefs::StaticClass();
	}
	struct Z_Construct_UClass_UTemplateProjectDefs_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalizedDisplayNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalizedDisplayNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalizedDisplayNames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalizedDescriptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalizedDescriptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalizedDescriptions;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FoldersToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoldersToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FoldersToIgnore;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilesToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilesToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FilesToIgnore;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FolderRenames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FolderRenames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FolderRenames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilenameReplacements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilenameReplacements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FilenameReplacements;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplacementsInFiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplacementsInFiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReplacementsInFiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SortKey;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Categories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Categories;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassTypes_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClassTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetTypes_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowProjectCreation_MetaData[];
#endif
		static void NewProp_bAllowProjectCreation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowProjectCreation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnterprise_MetaData[];
#endif
		static void NewProp_bIsEnterprise_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnterprise;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBlank_MetaData[];
#endif
		static void NewProp_bIsBlank_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBlank;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bThumbnailAsIcon_MetaData[];
#endif
		static void NewProp_bThumbnailAsIcon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bThumbnailAsIcon;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_HiddenSettings_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HiddenSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HiddenSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HiddenSettings;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PacksToInclude_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PacksToInclude_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PacksToInclude;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EditDetailLevelPreference_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditDetailLevelPreference_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EditDetailLevelPreference;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SharedContentPacks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharedContentPacks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SharedContentPacks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarterContent_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StarterContent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTemplateProjectDefs_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameProjectGeneration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TemplateProjectDefs.h" },
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDisplayNames_Inner = { "LocalizedDisplayNames", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLocalizedTemplateString, METADATA_PARAMS(nullptr, 0) }; // 1107323913
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDisplayNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDisplayNames = { "LocalizedDisplayNames", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTemplateProjectDefs, LocalizedDisplayNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDisplayNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDisplayNames_MetaData)) }; // 1107323913
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDescriptions_Inner = { "LocalizedDescriptions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLocalizedTemplateString, METADATA_PARAMS(nullptr, 0) }; // 1107323913
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDescriptions = { "LocalizedDescriptions", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTemplateProjectDefs, LocalizedDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDescriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDescriptions_MetaData)) }; // 1107323913
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FoldersToIgnore_Inner = { "FoldersToIgnore", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FoldersToIgnore_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FoldersToIgnore = { "FoldersToIgnore", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTemplateProjectDefs, FoldersToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FoldersToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FoldersToIgnore_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilesToIgnore_Inner = { "FilesToIgnore", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilesToIgnore_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilesToIgnore = { "FilesToIgnore", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTemplateProjectDefs, FilesToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilesToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilesToIgnore_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FolderRenames_Inner = { "FolderRenames", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTemplateFolderRename, METADATA_PARAMS(nullptr, 0) }; // 3591209203
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FolderRenames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FolderRenames = { "FolderRenames", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTemplateProjectDefs, FolderRenames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FolderRenames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FolderRenames_MetaData)) }; // 3591209203
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilenameReplacements_Inner = { "FilenameReplacements", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTemplateReplacement, METADATA_PARAMS(nullptr, 0) }; // 1371485108
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilenameReplacements_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilenameReplacements = { "FilenameReplacements", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTemplateProjectDefs, FilenameReplacements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilenameReplacements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilenameReplacements_MetaData)) }; // 1371485108
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_ReplacementsInFiles_Inner = { "ReplacementsInFiles", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTemplateReplacement, METADATA_PARAMS(nullptr, 0) }; // 1371485108
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_ReplacementsInFiles_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_ReplacementsInFiles = { "ReplacementsInFiles", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTemplateProjectDefs, ReplacementsInFiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_ReplacementsInFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_ReplacementsInFiles_MetaData)) }; // 1371485108
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_SortKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_SortKey = { "SortKey", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTemplateProjectDefs, SortKey), METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_SortKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_SortKey_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_Categories_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTemplateProjectDefs, Categories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_Categories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_Categories_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_ClassTypes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_ClassTypes = { "ClassTypes", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTemplateProjectDefs, ClassTypes), METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_ClassTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_ClassTypes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_AssetTypes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_AssetTypes = { "AssetTypes", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTemplateProjectDefs, AssetTypes), METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_AssetTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_AssetTypes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bAllowProjectCreation_MetaData[] = {
		{ "Comment", "/* Should we allow creation of a project from this template. If this is false, the template is treated as a feature pack. */" },
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
		{ "ToolTip", "Should we allow creation of a project from this template. If this is false, the template is treated as a feature pack." },
	};
#endif
	void Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bAllowProjectCreation_SetBit(void* Obj)
	{
		((UTemplateProjectDefs*)Obj)->bAllowProjectCreation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bAllowProjectCreation = { "bAllowProjectCreation", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTemplateProjectDefs), &Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bAllowProjectCreation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bAllowProjectCreation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bAllowProjectCreation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bIsEnterprise_MetaData[] = {
		{ "Comment", "/** Is this an enterprise template? */" },
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
		{ "ToolTip", "Is this an enterprise template?" },
	};
#endif
	void Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bIsEnterprise_SetBit(void* Obj)
	{
		((UTemplateProjectDefs*)Obj)->bIsEnterprise = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bIsEnterprise = { "bIsEnterprise", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTemplateProjectDefs), &Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bIsEnterprise_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bIsEnterprise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bIsEnterprise_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bIsBlank_MetaData[] = {
		{ "Comment", "/** Is this a blank template? Determines whether we can override the default map when creating the project. */" },
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
		{ "ToolTip", "Is this a blank template? Determines whether we can override the default map when creating the project." },
	};
#endif
	void Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bIsBlank_SetBit(void* Obj)
	{
		((UTemplateProjectDefs*)Obj)->bIsBlank = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bIsBlank = { "bIsBlank", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTemplateProjectDefs), &Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bIsBlank_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bIsBlank_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bIsBlank_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bThumbnailAsIcon_MetaData[] = {
		{ "Comment", "/** Is there a rendered thumbnail that should be treated as the project template icon. If this is true the thumbnail takes up the full tile size rather than a 64x64 icon */" },
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
		{ "ToolTip", "Is there a rendered thumbnail that should be treated as the project template icon. If this is true the thumbnail takes up the full tile size rather than a 64x64 icon" },
	};
#endif
	void Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bThumbnailAsIcon_SetBit(void* Obj)
	{
		((UTemplateProjectDefs*)Obj)->bThumbnailAsIcon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bThumbnailAsIcon = { "bThumbnailAsIcon", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTemplateProjectDefs), &Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bThumbnailAsIcon_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bThumbnailAsIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bThumbnailAsIcon_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_HiddenSettings_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_HiddenSettings_Inner = { "HiddenSettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_GameProjectGeneration_ETemplateSetting, METADATA_PARAMS(nullptr, 0) }; // 1496784435
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_HiddenSettings_MetaData[] = {
		{ "Comment", "/* Optional list of settings to hide. If none are specified, then all settings are shown. */" },
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
		{ "ToolTip", "Optional list of settings to hide. If none are specified, then all settings are shown." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_HiddenSettings = { "HiddenSettings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTemplateProjectDefs, HiddenSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_HiddenSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_HiddenSettings_MetaData)) }; // 1496784435
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_PacksToInclude_Inner = { "PacksToInclude", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_PacksToInclude_MetaData[] = {
		{ "Comment", "/* Optional list of feature packs to include */" },
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
		{ "ToolTip", "Optional list of feature packs to include" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_PacksToInclude = { "PacksToInclude", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTemplateProjectDefs, PacksToInclude), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_PacksToInclude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_PacksToInclude_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_EditDetailLevelPreference_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_EditDetailLevelPreference_MetaData[] = {
		{ "Comment", "/** What detail level to edit when editing shared template resources  */" },
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
		{ "ToolTip", "What detail level to edit when editing shared template resources" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_EditDetailLevelPreference = { "EditDetailLevelPreference", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTemplateProjectDefs, EditDetailLevelPreference), Z_Construct_UEnum_AddContentDialog_EFeaturePackDetailLevel, METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_EditDetailLevelPreference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_EditDetailLevelPreference_MetaData)) }; // 3243622207
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_SharedContentPacks_Inner = { "SharedContentPacks", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFeaturePackLevelSet, METADATA_PARAMS(nullptr, 0) }; // 81034129
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_SharedContentPacks_MetaData[] = {
		{ "Comment", "/* Shared feature packs. The files in these packs listed in these structures marked as 'additionalfiles' will be copied on project generation*/" },
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
		{ "ToolTip", "Shared feature packs. The files in these packs listed in these structures marked as 'additionalfiles' will be copied on project generation" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_SharedContentPacks = { "SharedContentPacks", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTemplateProjectDefs, SharedContentPacks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_SharedContentPacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_SharedContentPacks_MetaData)) }; // 81034129
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_StarterContent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_StarterContent = { "StarterContent", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTemplateProjectDefs, StarterContent), METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_StarterContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_StarterContent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTemplateProjectDefs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDisplayNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDisplayNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDescriptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_LocalizedDescriptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FoldersToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FoldersToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilesToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilesToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FolderRenames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FolderRenames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilenameReplacements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_FilenameReplacements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_ReplacementsInFiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_ReplacementsInFiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_SortKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_Categories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_Categories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_ClassTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_AssetTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bAllowProjectCreation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bIsEnterprise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bIsBlank,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_bThumbnailAsIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_HiddenSettings_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_HiddenSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_HiddenSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_PacksToInclude_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_PacksToInclude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_EditDetailLevelPreference_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_EditDetailLevelPreference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_SharedContentPacks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_SharedContentPacks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateProjectDefs_Statics::NewProp_StarterContent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTemplateProjectDefs_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplateProjectDefs>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTemplateProjectDefs_Statics::ClassParams = {
		&UTemplateProjectDefs::StaticClass,
		"TemplateDefs",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTemplateProjectDefs_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::PropPointers),
		0,
		0x000800A5u,
		METADATA_PARAMS(Z_Construct_UClass_UTemplateProjectDefs_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateProjectDefs_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTemplateProjectDefs()
	{
		if (!Z_Registration_Info_UClass_UTemplateProjectDefs.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTemplateProjectDefs.OuterSingleton, Z_Construct_UClass_UTemplateProjectDefs_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTemplateProjectDefs.OuterSingleton;
	}
	template<> GAMEPROJECTGENERATION_API UClass* StaticClass<UTemplateProjectDefs>()
	{
		return UTemplateProjectDefs::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateProjectDefs);
	UTemplateProjectDefs::~UTemplateProjectDefs() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TemplateCategoryDef;
class UScriptStruct* FTemplateCategoryDef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TemplateCategoryDef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TemplateCategoryDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTemplateCategoryDef, (UObject*)Z_Construct_UPackage__Script_GameProjectGeneration(), TEXT("TemplateCategoryDef"));
	}
	return Z_Registration_Info_UScriptStruct_TemplateCategoryDef.OuterSingleton;
}
template<> GAMEPROJECTGENERATION_API UScriptStruct* StaticStruct<FTemplateCategoryDef>()
{
	return FTemplateCategoryDef::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalizedDisplayNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalizedDisplayNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalizedDisplayNames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalizedDescriptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalizedDescriptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalizedDescriptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsMajorCategory_MetaData[];
#endif
		static void NewProp_IsMajorCategory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMajorCategory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTemplateCategoryDef>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_Key_MetaData[] = {
		{ "Comment", "/** Key to use for identifying what category a template is in. */" },
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
		{ "ToolTip", "Key to use for identifying what category a template is in." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTemplateCategoryDef, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_LocalizedDisplayNames_Inner = { "LocalizedDisplayNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLocalizedTemplateString, METADATA_PARAMS(nullptr, 0) }; // 1107323913
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_LocalizedDisplayNames_MetaData[] = {
		{ "Comment", "/** Localized name for this template category. */" },
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
		{ "ToolTip", "Localized name for this template category." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_LocalizedDisplayNames = { "LocalizedDisplayNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTemplateCategoryDef, LocalizedDisplayNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_LocalizedDisplayNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_LocalizedDisplayNames_MetaData)) }; // 1107323913
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_LocalizedDescriptions_Inner = { "LocalizedDescriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLocalizedTemplateString, METADATA_PARAMS(nullptr, 0) }; // 1107323913
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_LocalizedDescriptions_MetaData[] = {
		{ "Comment", "/** Localized description for this template category. */" },
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
		{ "ToolTip", "Localized description for this template category." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_LocalizedDescriptions = { "LocalizedDescriptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTemplateCategoryDef, LocalizedDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_LocalizedDescriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_LocalizedDescriptions_MetaData)) }; // 1107323913
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_Icon_MetaData[] = {
		{ "Comment", "/** Reference to an icon to display for this category. Should be around 300x100. */" },
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
		{ "ToolTip", "Reference to an icon to display for this category. Should be around 300x100." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTemplateCategoryDef, Icon), METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_IsMajorCategory_MetaData[] = {
		{ "Comment", "/** Is this a major top-level category? Major categories are displayed as full rows, eg. the Game category.*/" },
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
		{ "ToolTip", "Is this a major top-level category? Major categories are displayed as full rows, eg. the Game category." },
	};
#endif
	void Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_IsMajorCategory_SetBit(void* Obj)
	{
		((FTemplateCategoryDef*)Obj)->IsMajorCategory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_IsMajorCategory = { "IsMajorCategory", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTemplateCategoryDef), &Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_IsMajorCategory_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_IsMajorCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_IsMajorCategory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_LocalizedDisplayNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_LocalizedDisplayNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_LocalizedDescriptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_LocalizedDescriptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewProp_IsMajorCategory,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameProjectGeneration,
		nullptr,
		&NewStructOps,
		"TemplateCategoryDef",
		sizeof(FTemplateCategoryDef),
		alignof(FTemplateCategoryDef),
		Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTemplateCategoryDef()
	{
		if (!Z_Registration_Info_UScriptStruct_TemplateCategoryDef.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TemplateCategoryDef.InnerSingleton, Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TemplateCategoryDef.InnerSingleton;
	}
	void UTemplateCategories::StaticRegisterNativesUTemplateCategories()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTemplateCategories);
	UClass* Z_Construct_UClass_UTemplateCategories_NoRegister()
	{
		return UTemplateCategories::StaticClass();
	}
	struct Z_Construct_UClass_UTemplateCategories_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Categories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Categories;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTemplateCategories_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameProjectGeneration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateCategories_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TemplateProjectDefs.h" },
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTemplateCategories_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTemplateCategoryDef, METADATA_PARAMS(nullptr, 0) }; // 513636309
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateCategories_Statics::NewProp_Categories_MetaData[] = {
		{ "Comment", "/** Array of all categories specified in this location. */" },
		{ "ModuleRelativePath", "Classes/TemplateProjectDefs.h" },
		{ "ToolTip", "Array of all categories specified in this location." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTemplateCategories_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTemplateCategories, Categories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTemplateCategories_Statics::NewProp_Categories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateCategories_Statics::NewProp_Categories_MetaData)) }; // 513636309
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTemplateCategories_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateCategories_Statics::NewProp_Categories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateCategories_Statics::NewProp_Categories,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTemplateCategories_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplateCategories>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTemplateCategories_Statics::ClassParams = {
		&UTemplateCategories::StaticClass,
		"TemplateCategories",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTemplateCategories_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateCategories_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTemplateCategories_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateCategories_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTemplateCategories()
	{
		if (!Z_Registration_Info_UClass_UTemplateCategories.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTemplateCategories.OuterSingleton, Z_Construct_UClass_UTemplateCategories_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTemplateCategories.OuterSingleton;
	}
	template<> GAMEPROJECTGENERATION_API UClass* StaticClass<UTemplateCategories>()
	{
		return UTemplateCategories::StaticClass();
	}
	UTemplateCategories::UTemplateCategories(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateCategories);
	UTemplateCategories::~UTemplateCategories() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_Statics::EnumInfo[] = {
		{ ETemplateSetting_StaticEnum, TEXT("ETemplateSetting"), &Z_Registration_Info_UEnum_ETemplateSetting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1496784435U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_Statics::ScriptStructInfo[] = {
		{ FTemplateReplacement::StaticStruct, Z_Construct_UScriptStruct_FTemplateReplacement_Statics::NewStructOps, TEXT("TemplateReplacement"), &Z_Registration_Info_UScriptStruct_TemplateReplacement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTemplateReplacement), 1371485108U) },
		{ FTemplateFolderRename::StaticStruct, Z_Construct_UScriptStruct_FTemplateFolderRename_Statics::NewStructOps, TEXT("TemplateFolderRename"), &Z_Registration_Info_UScriptStruct_TemplateFolderRename, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTemplateFolderRename), 3591209203U) },
		{ FLocalizedTemplateString::StaticStruct, Z_Construct_UScriptStruct_FLocalizedTemplateString_Statics::NewStructOps, TEXT("LocalizedTemplateString"), &Z_Registration_Info_UScriptStruct_LocalizedTemplateString, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocalizedTemplateString), 1107323913U) },
		{ FTemplateCategoryDef::StaticStruct, Z_Construct_UScriptStruct_FTemplateCategoryDef_Statics::NewStructOps, TEXT("TemplateCategoryDef"), &Z_Registration_Info_UScriptStruct_TemplateCategoryDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTemplateCategoryDef), 513636309U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTemplateProjectDefs, UTemplateProjectDefs::StaticClass, TEXT("UTemplateProjectDefs"), &Z_Registration_Info_UClass_UTemplateProjectDefs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTemplateProjectDefs), 2196252859U) },
		{ Z_Construct_UClass_UTemplateCategories, UTemplateCategories::StaticClass, TEXT("UTemplateCategories"), &Z_Registration_Info_UClass_UTemplateCategories, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTemplateCategories), 3155581908U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_3161539464(TEXT("/Script/GameProjectGeneration"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_GameProjectGeneration_Classes_TemplateProjectDefs_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
