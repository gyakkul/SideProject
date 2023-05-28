// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOP/CustomizableObjectPopulationClass.h"
#include "../Private/MuCOP/CustomizableObjectPopulationCharacteristic.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectPopulationClass() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObject_NoRegister();
	CUSTOMIZABLEOBJECTPOPULATION_API UClass* Z_Construct_UClass_UCustomizableObjectPopulationClass();
	CUSTOMIZABLEOBJECTPOPULATION_API UClass* Z_Construct_UClass_UCustomizableObjectPopulationClass_NoRegister();
	CUSTOMIZABLEOBJECTPOPULATION_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic();
	CUSTOMIZABLEOBJECTPOPULATION_API UScriptStruct* Z_Construct_UScriptStruct_FPopulationClassParameter();
	CUSTOMIZABLEOBJECTPOPULATION_API UScriptStruct* Z_Construct_UScriptStruct_FPopulationClassParameterOptions();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectPopulation();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PopulationClassParameterOptions;
class UScriptStruct* FPopulationClassParameterOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PopulationClassParameterOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PopulationClassParameterOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPopulationClassParameterOptions, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectPopulation(), TEXT("PopulationClassParameterOptions"));
	}
	return Z_Registration_Info_UScriptStruct_PopulationClassParameterOptions.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTPOPULATION_API UScriptStruct* StaticStruct<FPopulationClassParameterOptions>()
{
	return FPopulationClassParameterOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPopulationClassParameterOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPopulationClassParameterOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCOP/CustomizableObjectPopulationClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPopulationClassParameterOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPopulationClassParameterOptions>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPopulationClassParameterOptions_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPopulationClassParameterOptions_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "CustomizablePopulation" },
		{ "Comment", "/** List of tags of a Parameter Option */" },
		{ "ModuleRelativePath", "Classes/MuCOP/CustomizableObjectPopulationClass.h" },
		{ "ToolTip", "List of tags of a Parameter Option" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPopulationClassParameterOptions_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPopulationClassParameterOptions, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPopulationClassParameterOptions_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPopulationClassParameterOptions_Statics::NewProp_Tags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPopulationClassParameterOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPopulationClassParameterOptions_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPopulationClassParameterOptions_Statics::NewProp_Tags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPopulationClassParameterOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectPopulation,
		nullptr,
		&NewStructOps,
		"PopulationClassParameterOptions",
		sizeof(FPopulationClassParameterOptions),
		alignof(FPopulationClassParameterOptions),
		Z_Construct_UScriptStruct_FPopulationClassParameterOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPopulationClassParameterOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPopulationClassParameterOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPopulationClassParameterOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPopulationClassParameterOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_PopulationClassParameterOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PopulationClassParameterOptions.InnerSingleton, Z_Construct_UScriptStruct_FPopulationClassParameterOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PopulationClassParameterOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PopulationClassParameter;
class UScriptStruct* FPopulationClassParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PopulationClassParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PopulationClassParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPopulationClassParameter, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectPopulation(), TEXT("PopulationClassParameter"));
	}
	return Z_Registration_Info_UScriptStruct_PopulationClassParameter.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTPOPULATION_API UScriptStruct* StaticStruct<FPopulationClassParameter>()
{
	return FPopulationClassParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPopulationClassParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterOptions_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterOptions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterOptions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ParameterOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCOP/CustomizableObjectPopulationClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPopulationClassParameter>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "CustomizablePopulation" },
		{ "Comment", "/** List of tags of a parameter */" },
		{ "ModuleRelativePath", "Classes/MuCOP/CustomizableObjectPopulationClass.h" },
		{ "ToolTip", "List of tags of a parameter" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPopulationClassParameter, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::NewProp_Tags_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::NewProp_ParameterOptions_ValueProp = { "ParameterOptions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FPopulationClassParameterOptions, METADATA_PARAMS(nullptr, 0) }; // 1593504200
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::NewProp_ParameterOptions_Key_KeyProp = { "ParameterOptions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::NewProp_ParameterOptions_MetaData[] = {
		{ "Category", "CustomizablePopulation" },
		{ "Comment", "/** Map of options available for a parameter can have and their tags */" },
		{ "ModuleRelativePath", "Classes/MuCOP/CustomizableObjectPopulationClass.h" },
		{ "ToolTip", "Map of options available for a parameter can have and their tags" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::NewProp_ParameterOptions = { "ParameterOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPopulationClassParameter, ParameterOptions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::NewProp_ParameterOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::NewProp_ParameterOptions_MetaData)) }; // 1593504200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::NewProp_ParameterOptions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::NewProp_ParameterOptions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::NewProp_ParameterOptions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectPopulation,
		nullptr,
		&NewStructOps,
		"PopulationClassParameter",
		sizeof(FPopulationClassParameter),
		alignof(FPopulationClassParameter),
		Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPopulationClassParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_PopulationClassParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PopulationClassParameter.InnerSingleton, Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PopulationClassParameter.InnerSingleton;
	}
	void UCustomizableObjectPopulationClass::StaticRegisterNativesUCustomizableObjectPopulationClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectPopulationClass);
	UClass* Z_Construct_UClass_UCustomizableObjectPopulationClass_NoRegister()
	{
		return UCustomizableObjectPopulationClass::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomizableObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomizableObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Allowlist_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Allowlist_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Allowlist;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Blocklist_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blocklist_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Blocklist;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Characteristics_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Characteristics_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Characteristics;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectPopulation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOP/CustomizableObjectPopulationClass.h" },
		{ "ModuleRelativePath", "Classes/MuCOP/CustomizableObjectPopulationClass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "CustomizablePopulationClass" },
		{ "Comment", "/** Name of the Customizable Object Population Class */" },
		{ "ModuleRelativePath", "Classes/MuCOP/CustomizableObjectPopulationClass.h" },
		{ "ToolTip", "Name of the Customizable Object Population Class" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectPopulationClass, Name), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_CustomizableObject_MetaData[] = {
		{ "Category", "CustomizablePopulationClass" },
		{ "Comment", "/** Customizable Object that defines this class */" },
		{ "ModuleRelativePath", "Classes/MuCOP/CustomizableObjectPopulationClass.h" },
		{ "ToolTip", "Customizable Object that defines this class" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_CustomizableObject = { "CustomizableObject", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectPopulationClass, CustomizableObject), Z_Construct_UClass_UCustomizableObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_CustomizableObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_CustomizableObject_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Allowlist_Inner = { "Allowlist", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Allowlist_MetaData[] = {
		{ "Category", "CustomizablePopulationClass" },
		{ "Comment", "/** List of parameter tags available for this class */" },
		{ "ModuleRelativePath", "Classes/MuCOP/CustomizableObjectPopulationClass.h" },
		{ "ToolTip", "List of parameter tags available for this class" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Allowlist = { "Allowlist", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectPopulationClass, Allowlist), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Allowlist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Allowlist_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Blocklist_Inner = { "Blocklist", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Blocklist_MetaData[] = {
		{ "Category", "CustomizablePopulationClass" },
		{ "Comment", "/** List of parameter tags forbidden for this class */" },
		{ "ModuleRelativePath", "Classes/MuCOP/CustomizableObjectPopulationClass.h" },
		{ "ToolTip", "List of parameter tags forbidden for this class" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Blocklist = { "Blocklist", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectPopulationClass, Blocklist), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Blocklist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Blocklist_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Characteristics_Inner = { "Characteristics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectPopulationCharacteristic, METADATA_PARAMS(nullptr, 0) }; // 107391346
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Characteristics_MetaData[] = {
		{ "Category", "CustomizablePopulationClass" },
		{ "Comment", "/** Additional options to take into account for some parameters */" },
		{ "ModuleRelativePath", "Classes/MuCOP/CustomizableObjectPopulationClass.h" },
		{ "ToolTip", "Additional options to take into account for some parameters" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Characteristics = { "Characteristics", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectPopulationClass, Characteristics), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Characteristics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Characteristics_MetaData)) }; // 107391346
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Tags_MetaData[] = {
		{ "Comment", "/** Array with all the tags deffined for this population class */" },
		{ "ModuleRelativePath", "Classes/MuCOP/CustomizableObjectPopulationClass.h" },
		{ "ToolTip", "Array with all the tags deffined for this population class" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectPopulationClass, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Tags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_CustomizableObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Allowlist_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Allowlist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Blocklist_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Blocklist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Characteristics_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Characteristics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::NewProp_Tags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectPopulationClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::ClassParams = {
		&UCustomizableObjectPopulationClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectPopulationClass()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectPopulationClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectPopulationClass.OuterSingleton, Z_Construct_UClass_UCustomizableObjectPopulationClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectPopulationClass.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTPOPULATION_API UClass* StaticClass<UCustomizableObjectPopulationClass>()
	{
		return UCustomizableObjectPopulationClass::StaticClass();
	}
	UCustomizableObjectPopulationClass::UCustomizableObjectPopulationClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectPopulationClass);
	UCustomizableObjectPopulationClass::~UCustomizableObjectPopulationClass() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectPopulationClass)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Classes_MuCOP_CustomizableObjectPopulationClass_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Classes_MuCOP_CustomizableObjectPopulationClass_h_Statics::ScriptStructInfo[] = {
		{ FPopulationClassParameterOptions::StaticStruct, Z_Construct_UScriptStruct_FPopulationClassParameterOptions_Statics::NewStructOps, TEXT("PopulationClassParameterOptions"), &Z_Registration_Info_UScriptStruct_PopulationClassParameterOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPopulationClassParameterOptions), 1593504200U) },
		{ FPopulationClassParameter::StaticStruct, Z_Construct_UScriptStruct_FPopulationClassParameter_Statics::NewStructOps, TEXT("PopulationClassParameter"), &Z_Registration_Info_UScriptStruct_PopulationClassParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPopulationClassParameter), 1337005482U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Classes_MuCOP_CustomizableObjectPopulationClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectPopulationClass, UCustomizableObjectPopulationClass::StaticClass, TEXT("UCustomizableObjectPopulationClass"), &Z_Registration_Info_UClass_UCustomizableObjectPopulationClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectPopulationClass), 2384708115U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Classes_MuCOP_CustomizableObjectPopulationClass_h_842941945(TEXT("/Script/CustomizableObjectPopulation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Classes_MuCOP_CustomizableObjectPopulationClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Classes_MuCOP_CustomizableObjectPopulationClass_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Classes_MuCOP_CustomizableObjectPopulationClass_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Classes_MuCOP_CustomizableObjectPopulationClass_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
