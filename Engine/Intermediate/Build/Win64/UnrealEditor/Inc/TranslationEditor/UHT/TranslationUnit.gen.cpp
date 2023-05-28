// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TranslationUnit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTranslationUnit() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	TRANSLATIONEDITOR_API UClass* Z_Construct_UClass_UTranslationUnit();
	TRANSLATIONEDITOR_API UClass* Z_Construct_UClass_UTranslationUnit_NoRegister();
	TRANSLATIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTranslationChange();
	TRANSLATIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTranslationContextInfo();
	UPackage* Z_Construct_UPackage__Script_TranslationEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TranslationChange;
class UScriptStruct* FTranslationChange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TranslationChange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TranslationChange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTranslationChange, (UObject*)Z_Construct_UPackage__Script_TranslationEditor(), TEXT("TranslationChange"));
	}
	return Z_Registration_Info_UScriptStruct_TranslationChange.OuterSingleton;
}
template<> TRANSLATIONEDITOR_API UScriptStruct* StaticStruct<FTranslationChange>()
{
	return FTranslationChange::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTranslationChange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DateAndTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DateAndTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Translation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationChange_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTranslationChange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTranslationChange>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** The changelist of this change */" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "ToolTip", "The changelist of this change" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTranslationChange, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_DateAndTime_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** Date of this change *///, meta=(DisplayName = \"Date & Time\"))\n" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "ToolTip", "Date of this change //, meta=(DisplayName = \"Date & Time\"))" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_DateAndTime = { "DateAndTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTranslationChange, DateAndTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_DateAndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_DateAndTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** Source at time of this change */" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Source at time of this change" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTranslationChange, Source), METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Translation_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** Translation at time of this change */" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Translation at time of this change" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTranslationChange, Translation), METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Translation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTranslationChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_DateAndTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationChange_Statics::NewProp_Translation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTranslationChange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TranslationEditor,
		nullptr,
		&NewStructOps,
		"TranslationChange",
		sizeof(FTranslationChange),
		alignof(FTranslationChange),
		Z_Construct_UScriptStruct_FTranslationChange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationChange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationChange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationChange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTranslationChange()
	{
		if (!Z_Registration_Info_UScriptStruct_TranslationChange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TranslationChange.InnerSingleton, Z_Construct_UScriptStruct_FTranslationChange_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TranslationChange.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TranslationContextInfo;
class UScriptStruct* FTranslationContextInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TranslationContextInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TranslationContextInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTranslationContextInfo, (UObject*)Z_Construct_UPackage__Script_TranslationEditor(), TEXT("TranslationContextInfo"));
	}
	return Z_Registration_Info_UScriptStruct_TranslationContextInfo.OuterSingleton;
}
template<> TRANSLATIONEDITOR_API UScriptStruct* StaticStruct<FTranslationContextInfo>()
{
	return FTranslationContextInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTranslationContextInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Context;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Changes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Changes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Changes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTranslationContextInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** The key specified in LOCTEXT */" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "ToolTip", "The key specified in LOCTEXT" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTranslationContextInfo, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Context_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** What file and line this translation is from */" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "ToolTip", "What file and line this translation is from" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTranslationContextInfo, Context), METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Context_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Changes_Inner = { "Changes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTranslationChange, METADATA_PARAMS(nullptr, 0) }; // 575688155
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Changes_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** List of previous versions of the source text for this context */" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "ToolTip", "List of previous versions of the source text for this context" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Changes = { "Changes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTranslationContextInfo, Changes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Changes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Changes_MetaData)) }; // 575688155
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Changes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewProp_Changes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TranslationEditor,
		nullptr,
		&NewStructOps,
		"TranslationContextInfo",
		sizeof(FTranslationContextInfo),
		alignof(FTranslationContextInfo),
		Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTranslationContextInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_TranslationContextInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TranslationContextInfo.InnerSingleton, Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TranslationContextInfo.InnerSingleton;
	}
	void UTranslationUnit::StaticRegisterNativesUTranslationUnit()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTranslationUnit);
	UClass* Z_Construct_UClass_UTranslationUnit_NoRegister()
	{
		return UTranslationUnit::StaticClass();
	}
	struct Z_Construct_UClass_UTranslationUnit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Translation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Contexts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Contexts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Contexts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasBeenReviewed_MetaData[];
#endif
		static void NewProp_HasBeenReviewed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasBeenReviewed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationBeforeImport_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TranslationBeforeImport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocresPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocresPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTranslationUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TranslationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranslationUnit_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "TranslationUnit.h" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Namespace_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** The localization namespace for this translation */" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "ToolTip", "The localization namespace for this translation" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTranslationUnit, Namespace), METADATA_PARAMS(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** The localization key for this translation */" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "ToolTip", "The localization key for this translation" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTranslationUnit, Key), METADATA_PARAMS(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** Original text from the source language */" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Original text from the source language" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTranslationUnit, Source), METADATA_PARAMS(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Translation_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** Translations */" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Translations" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTranslationUnit, Translation), METADATA_PARAMS(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Translation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Contexts_Inner = { "Contexts", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTranslationContextInfo, METADATA_PARAMS(nullptr, 0) }; // 2104218914
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Contexts_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** Contexts the source was found in */" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "ToolTip", "Contexts the source was found in" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Contexts = { "Contexts", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTranslationUnit, Contexts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Contexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Contexts_MetaData)) }; // 2104218914
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranslationUnit_Statics::NewProp_HasBeenReviewed_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** Whether the changes have been reviewed */" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "ToolTip", "Whether the changes have been reviewed" },
	};
#endif
	void Z_Construct_UClass_UTranslationUnit_Statics::NewProp_HasBeenReviewed_SetBit(void* Obj)
	{
		((UTranslationUnit*)Obj)->HasBeenReviewed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTranslationUnit_Statics::NewProp_HasBeenReviewed = { "HasBeenReviewed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTranslationUnit), &Z_Construct_UClass_UTranslationUnit_Statics::NewProp_HasBeenReviewed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_HasBeenReviewed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_HasBeenReviewed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranslationUnit_Statics::NewProp_TranslationBeforeImport_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** If this Translation Unit had a different translation before import, it will be stored here */" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "If this Translation Unit had a different translation before import, it will be stored here" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTranslationUnit_Statics::NewProp_TranslationBeforeImport = { "TranslationBeforeImport", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTranslationUnit, TranslationBeforeImport), METADATA_PARAMS(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_TranslationBeforeImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_TranslationBeforeImport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranslationUnit_Statics::NewProp_LocresPath_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** Optional: Which Locres File this translation is in */" },
		{ "ModuleRelativePath", "Private/TranslationUnit.h" },
		{ "ToolTip", "Optional: Which Locres File this translation is in" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTranslationUnit_Statics::NewProp_LocresPath = { "LocresPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTranslationUnit, LocresPath), METADATA_PARAMS(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_LocresPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTranslationUnit_Statics::NewProp_LocresPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTranslationUnit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Namespace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Translation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Contexts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTranslationUnit_Statics::NewProp_Contexts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTranslationUnit_Statics::NewProp_HasBeenReviewed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTranslationUnit_Statics::NewProp_TranslationBeforeImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTranslationUnit_Statics::NewProp_LocresPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTranslationUnit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTranslationUnit>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTranslationUnit_Statics::ClassParams = {
		&UTranslationUnit::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTranslationUnit_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTranslationUnit_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTranslationUnit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTranslationUnit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTranslationUnit()
	{
		if (!Z_Registration_Info_UClass_UTranslationUnit.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTranslationUnit.OuterSingleton, Z_Construct_UClass_UTranslationUnit_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTranslationUnit.OuterSingleton;
	}
	template<> TRANSLATIONEDITOR_API UClass* StaticClass<UTranslationUnit>()
	{
		return UTranslationUnit::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTranslationUnit);
	UTranslationUnit::~UTranslationUnit() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_Statics::ScriptStructInfo[] = {
		{ FTranslationChange::StaticStruct, Z_Construct_UScriptStruct_FTranslationChange_Statics::NewStructOps, TEXT("TranslationChange"), &Z_Registration_Info_UScriptStruct_TranslationChange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTranslationChange), 575688155U) },
		{ FTranslationContextInfo::StaticStruct, Z_Construct_UScriptStruct_FTranslationContextInfo_Statics::NewStructOps, TEXT("TranslationContextInfo"), &Z_Registration_Info_UScriptStruct_TranslationContextInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTranslationContextInfo), 2104218914U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTranslationUnit, UTranslationUnit::StaticClass, TEXT("UTranslationUnit"), &Z_Registration_Info_UClass_UTranslationUnit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTranslationUnit), 1083079615U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_2612324485(TEXT("/Script/TranslationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_TranslationEditor_Private_TranslationUnit_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
