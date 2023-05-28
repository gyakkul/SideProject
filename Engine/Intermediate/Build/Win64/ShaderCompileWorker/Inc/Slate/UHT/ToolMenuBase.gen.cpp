// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Framework/MultiBox/ToolMenuBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolMenuBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SLATE_API UClass* Z_Construct_UClass_UToolMenuBase();
	SLATE_API UClass* Z_Construct_UClass_UToolMenuBase_NoRegister();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizedToolMenu();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizedToolMenuEntry();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizedToolMenuSection();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomizedToolMenuVisibility;
	static UEnum* ECustomizedToolMenuVisibility_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECustomizedToolMenuVisibility.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECustomizedToolMenuVisibility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("ECustomizedToolMenuVisibility"));
		}
		return Z_Registration_Info_UEnum_ECustomizedToolMenuVisibility.OuterSingleton;
	}
	template<> SLATE_API UEnum* StaticEnum<ECustomizedToolMenuVisibility>()
	{
		return ECustomizedToolMenuVisibility_StaticEnum();
	}
	struct Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility_Statics::Enumerators[] = {
		{ "ECustomizedToolMenuVisibility::None", (int64)ECustomizedToolMenuVisibility::None },
		{ "ECustomizedToolMenuVisibility::Visible", (int64)ECustomizedToolMenuVisibility::Visible },
		{ "ECustomizedToolMenuVisibility::Hidden", (int64)ECustomizedToolMenuVisibility::Hidden },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility_Statics::Enum_MetaDataParams[] = {
		{ "Hidden.Name", "ECustomizedToolMenuVisibility::Hidden" },
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
		{ "None.Name", "ECustomizedToolMenuVisibility::None" },
		{ "Visible.Name", "ECustomizedToolMenuVisibility::Visible" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Slate,
		nullptr,
		"ECustomizedToolMenuVisibility",
		"ECustomizedToolMenuVisibility",
		Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility()
	{
		if (!Z_Registration_Info_UEnum_ECustomizedToolMenuVisibility.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomizedToolMenuVisibility.InnerSingleton, Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECustomizedToolMenuVisibility.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizedToolMenuEntry;
class UScriptStruct* FCustomizedToolMenuEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizedToolMenuEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizedToolMenuEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizedToolMenuEntry, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("CustomizedToolMenuEntry"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizedToolMenuEntry.OuterSingleton;
}
template<> SLATE_API UScriptStruct* StaticStruct<FCustomizedToolMenuEntry>()
{
	return FCustomizedToolMenuEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Visibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Visibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizedToolMenuEntry>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::NewProp_Visibility_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizedToolMenuEntry, Visibility), Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::NewProp_Visibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::NewProp_Visibility_MetaData)) }; // 113334925
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::NewProp_Visibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::NewProp_Visibility,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
		nullptr,
		&NewStructOps,
		"CustomizedToolMenuEntry",
		sizeof(FCustomizedToolMenuEntry),
		alignof(FCustomizedToolMenuEntry),
		Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizedToolMenuEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizedToolMenuEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizedToolMenuEntry.InnerSingleton, Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizedToolMenuEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizedToolMenuSection;
class UScriptStruct* FCustomizedToolMenuSection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizedToolMenuSection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizedToolMenuSection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizedToolMenuSection, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("CustomizedToolMenuSection"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizedToolMenuSection.OuterSingleton;
}
template<> SLATE_API UScriptStruct* StaticStruct<FCustomizedToolMenuSection>()
{
	return FCustomizedToolMenuSection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Visibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Visibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizedToolMenuSection>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::NewProp_Visibility_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizedToolMenuSection, Visibility), Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::NewProp_Visibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::NewProp_Visibility_MetaData)) }; // 113334925
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::NewProp_Visibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::NewProp_Visibility,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
		nullptr,
		&NewStructOps,
		"CustomizedToolMenuSection",
		sizeof(FCustomizedToolMenuSection),
		alignof(FCustomizedToolMenuSection),
		Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizedToolMenuSection()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizedToolMenuSection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizedToolMenuSection.InnerSingleton, Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizedToolMenuSection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizedToolMenuNameArray;
class UScriptStruct* FCustomizedToolMenuNameArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizedToolMenuNameArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizedToolMenuNameArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("CustomizedToolMenuNameArray"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizedToolMenuNameArray.OuterSingleton;
}
template<> SLATE_API UScriptStruct* StaticStruct<FCustomizedToolMenuNameArray>()
{
	return FCustomizedToolMenuNameArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizedToolMenuNameArray>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::NewProp_Names_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizedToolMenuNameArray, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::NewProp_Names_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::NewProp_Names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::NewProp_Names,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
		nullptr,
		&NewStructOps,
		"CustomizedToolMenuNameArray",
		sizeof(FCustomizedToolMenuNameArray),
		alignof(FCustomizedToolMenuNameArray),
		Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizedToolMenuNameArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizedToolMenuNameArray.InnerSingleton, Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizedToolMenuNameArray.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizedToolMenu;
class UScriptStruct* FCustomizedToolMenu::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizedToolMenu.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizedToolMenu.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizedToolMenu, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("CustomizedToolMenu"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizedToolMenu.OuterSingleton;
}
template<> SLATE_API UScriptStruct* StaticStruct<FCustomizedToolMenu>()
{
	return FCustomizedToolMenu::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Entries_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Entries;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sections_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Sections_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Sections;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EntryOrder_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EntryOrder_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryOrder_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EntryOrder;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionOrder_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionOrder_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SectionOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizedToolMenu>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizedToolMenu, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Entries_ValueProp = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FCustomizedToolMenuEntry, METADATA_PARAMS(nullptr, 0) }; // 4159231162
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Entries_Key_KeyProp = { "Entries_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Entries_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizedToolMenu, Entries), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Entries_MetaData)) }; // 4159231162
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Sections_ValueProp = { "Sections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FCustomizedToolMenuSection, METADATA_PARAMS(nullptr, 0) }; // 1652998399
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Sections_Key_KeyProp = { "Sections_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Sections_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizedToolMenu, Sections), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Sections_MetaData)) }; // 1652998399
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_EntryOrder_ValueProp = { "EntryOrder", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray, METADATA_PARAMS(nullptr, 0) }; // 2726774500
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_EntryOrder_Key_KeyProp = { "EntryOrder_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_EntryOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_EntryOrder = { "EntryOrder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizedToolMenu, EntryOrder), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_EntryOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_EntryOrder_MetaData)) }; // 2726774500
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_SectionOrder_Inner = { "SectionOrder", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_SectionOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_SectionOrder = { "SectionOrder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizedToolMenu, SectionOrder), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_SectionOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_SectionOrder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Entries_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Entries_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Entries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Sections_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Sections_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_Sections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_EntryOrder_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_EntryOrder_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_EntryOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_SectionOrder_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewProp_SectionOrder,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
		nullptr,
		&NewStructOps,
		"CustomizedToolMenu",
		sizeof(FCustomizedToolMenu),
		alignof(FCustomizedToolMenu),
		Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizedToolMenu()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizedToolMenu.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizedToolMenu.InnerSingleton, Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizedToolMenu.InnerSingleton;
	}
	void UToolMenuBase::StaticRegisterNativesUToolMenuBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolMenuBase);
	UClass* Z_Construct_UClass_UToolMenuBase_NoRegister()
	{
		return UToolMenuBase::StaticClass();
	}
	struct Z_Construct_UClass_UToolMenuBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolMenuBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenuBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Framework/MultiBox/ToolMenuBase.h" },
		{ "ModuleRelativePath", "Public/Framework/MultiBox/ToolMenuBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolMenuBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolMenuBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolMenuBase_Statics::ClassParams = {
		&UToolMenuBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UToolMenuBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToolMenuBase()
	{
		if (!Z_Registration_Info_UClass_UToolMenuBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolMenuBase.OuterSingleton, Z_Construct_UClass_UToolMenuBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UToolMenuBase.OuterSingleton;
	}
	template<> SLATE_API UClass* StaticClass<UToolMenuBase>()
	{
		return UToolMenuBase::StaticClass();
	}
	UToolMenuBase::UToolMenuBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolMenuBase);
	UToolMenuBase::~UToolMenuBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_Statics::EnumInfo[] = {
		{ ECustomizedToolMenuVisibility_StaticEnum, TEXT("ECustomizedToolMenuVisibility"), &Z_Registration_Info_UEnum_ECustomizedToolMenuVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 113334925U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_Statics::ScriptStructInfo[] = {
		{ FCustomizedToolMenuEntry::StaticStruct, Z_Construct_UScriptStruct_FCustomizedToolMenuEntry_Statics::NewStructOps, TEXT("CustomizedToolMenuEntry"), &Z_Registration_Info_UScriptStruct_CustomizedToolMenuEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizedToolMenuEntry), 4159231162U) },
		{ FCustomizedToolMenuSection::StaticStruct, Z_Construct_UScriptStruct_FCustomizedToolMenuSection_Statics::NewStructOps, TEXT("CustomizedToolMenuSection"), &Z_Registration_Info_UScriptStruct_CustomizedToolMenuSection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizedToolMenuSection), 1652998399U) },
		{ FCustomizedToolMenuNameArray::StaticStruct, Z_Construct_UScriptStruct_FCustomizedToolMenuNameArray_Statics::NewStructOps, TEXT("CustomizedToolMenuNameArray"), &Z_Registration_Info_UScriptStruct_CustomizedToolMenuNameArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizedToolMenuNameArray), 2726774500U) },
		{ FCustomizedToolMenu::StaticStruct, Z_Construct_UScriptStruct_FCustomizedToolMenu_Statics::NewStructOps, TEXT("CustomizedToolMenu"), &Z_Registration_Info_UScriptStruct_CustomizedToolMenu, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizedToolMenu), 99546435U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UToolMenuBase, UToolMenuBase::StaticClass, TEXT("UToolMenuBase"), &Z_Registration_Info_UClass_UToolMenuBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolMenuBase), 2119217643U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_2874989764(TEXT("/Script/Slate"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_MultiBox_ToolMenuBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
