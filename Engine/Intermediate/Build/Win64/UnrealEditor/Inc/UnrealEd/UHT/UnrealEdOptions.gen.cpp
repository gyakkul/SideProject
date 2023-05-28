// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Preferences/UnrealEdOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealEdOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEdKeyBindings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEdOptions();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEdOptions_NoRegister();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FClassPickerDefaults();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorCommand();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorCommandCategory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorCommandCategory;
class UScriptStruct* FEditorCommandCategory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorCommandCategory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorCommandCategory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorCommandCategory, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditorCommandCategory"));
	}
	return Z_Registration_Info_UScriptStruct_EditorCommandCategory.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FEditorCommandCategory>()
{
	return FEditorCommandCategory::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorCommandCategory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A category to store a list of commands. */" },
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
		{ "ToolTip", "A category to store a list of commands." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorCommandCategory>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorCommandCategory, Parent), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorCommandCategory, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"EditorCommandCategory",
		sizeof(FEditorCommandCategory),
		alignof(FEditorCommandCategory),
		Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorCommandCategory()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorCommandCategory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorCommandCategory.InnerSingleton, Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorCommandCategory.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorCommand;
class UScriptStruct* FEditorCommand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorCommand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorCommand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorCommand, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditorCommand"));
	}
	return Z_Registration_Info_UScriptStruct_EditorCommand.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FEditorCommand>()
{
	return FEditorCommand::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorCommand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CommandName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecCommand_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExecCommand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A parameterless exec command that can be bound to hotkeys and menu items in the editor. */" },
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
		{ "ToolTip", "A parameterless exec command that can be bound to hotkeys and menu items in the editor." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorCommand>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorCommand, Parent), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_CommandName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_CommandName = { "CommandName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorCommand, CommandName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_CommandName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_CommandName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_ExecCommand_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_ExecCommand = { "ExecCommand", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorCommand, ExecCommand), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_ExecCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_ExecCommand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_Description_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorCommand, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_Description_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_CommandName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_ExecCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorCommand_Statics::NewProp_Description,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"EditorCommand",
		sizeof(FEditorCommand),
		alignof(FEditorCommand),
		Z_Construct_UScriptStruct_FEditorCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorCommand()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorCommand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorCommand.InnerSingleton, Z_Construct_UScriptStruct_FEditorCommand_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorCommand.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClassPickerDefaults;
class UScriptStruct* FClassPickerDefaults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClassPickerDefaults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClassPickerDefaults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassPickerDefaults, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ClassPickerDefaults"));
	}
	return Z_Registration_Info_UScriptStruct_ClassPickerDefaults.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FClassPickerDefaults>()
{
	return FClassPickerDefaults::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClassPickerDefaults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetClass_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Default Classes for the Class Picker Dialog*/" },
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
		{ "ToolTip", "Default Classes for the Class Picker Dialog" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassPickerDefaults>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::NewProp_ClassName_MetaData[] = {
		{ "Comment", "/** The name of the class to select */" },
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
		{ "ToolTip", "The name of the class to select" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClassPickerDefaults, ClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::NewProp_ClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::NewProp_AssetClass_MetaData[] = {
		{ "Comment", "/** The name of the asset type being created */" },
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
		{ "ToolTip", "The name of the asset type being created" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::NewProp_AssetClass = { "AssetClass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClassPickerDefaults, AssetClass), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::NewProp_AssetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::NewProp_AssetClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::NewProp_ClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::NewProp_AssetClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"ClassPickerDefaults",
		sizeof(FClassPickerDefaults),
		alignof(FClassPickerDefaults),
		Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClassPickerDefaults()
	{
		if (!Z_Registration_Info_UScriptStruct_ClassPickerDefaults.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClassPickerDefaults.InnerSingleton, Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClassPickerDefaults.InnerSingleton;
	}
	void UUnrealEdOptions::StaticRegisterNativesUUnrealEdOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnrealEdOptions);
	UClass* Z_Construct_UClass_UUnrealEdOptions_NoRegister()
	{
		return UUnrealEdOptions::StaticClass();
	}
	struct Z_Construct_UClass_UUnrealEdOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorCategories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorCategories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EditorCategories;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorCommands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorCommands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EditorCommands;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorKeyBindings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorKeyBindings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExpandClassPickerClassList_MetaData[];
#endif
		static void NewProp_bExpandClassPickerClassList_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpandClassPickerClassList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewAssetDefaultClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAssetDefaultClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewAssetDefaultClasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnrealEdOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdOptions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Preferences/UnrealEdOptions.h" },
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCategories_Inner = { "EditorCategories", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEditorCommandCategory, METADATA_PARAMS(nullptr, 0) }; // 2422990529
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCategories_MetaData[] = {
		{ "Comment", "/** Categories of commands. */" },
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
		{ "ToolTip", "Categories of commands." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCategories = { "EditorCategories", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnrealEdOptions, EditorCategories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCategories_MetaData)) }; // 2422990529
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCommands_Inner = { "EditorCommands", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEditorCommand, METADATA_PARAMS(nullptr, 0) }; // 463552569
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCommands_MetaData[] = {
		{ "Comment", "/** Commands that can be bound to in the editor. */" },
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
		{ "ToolTip", "Commands that can be bound to in the editor." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCommands = { "EditorCommands", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnrealEdOptions, EditorCommands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCommands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCommands_MetaData)) }; // 463552569
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorKeyBindings_MetaData[] = {
		{ "Comment", "/** Pointer to the key bindings object that actually stores key bindings for the editor. */" },
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
		{ "ToolTip", "Pointer to the key bindings object that actually stores key bindings for the editor." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorKeyBindings = { "EditorKeyBindings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnrealEdOptions, EditorKeyBindings), Z_Construct_UClass_UUnrealEdKeyBindings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorKeyBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorKeyBindings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_bExpandClassPickerClassList_MetaData[] = {
		{ "Comment", "/** If true, the list of classes in the class picker dialog will be expanded */" },
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
		{ "ToolTip", "If true, the list of classes in the class picker dialog will be expanded" },
	};
#endif
	void Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_bExpandClassPickerClassList_SetBit(void* Obj)
	{
		((UUnrealEdOptions*)Obj)->bExpandClassPickerClassList = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_bExpandClassPickerClassList = { "bExpandClassPickerClassList", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUnrealEdOptions), &Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_bExpandClassPickerClassList_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_bExpandClassPickerClassList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_bExpandClassPickerClassList_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_NewAssetDefaultClasses_Inner = { "NewAssetDefaultClasses", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FClassPickerDefaults, METADATA_PARAMS(nullptr, 0) }; // 2952596285
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_NewAssetDefaultClasses_MetaData[] = {
		{ "Comment", "/** The array of default objects in the blueprint class dialog **/" },
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdOptions.h" },
		{ "ToolTip", "The array of default objects in the blueprint class dialog *" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_NewAssetDefaultClasses = { "NewAssetDefaultClasses", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnrealEdOptions, NewAssetDefaultClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_NewAssetDefaultClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_NewAssetDefaultClasses_MetaData)) }; // 2952596285
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnrealEdOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCategories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCategories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCommands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorCommands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_EditorKeyBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_bExpandClassPickerClassList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_NewAssetDefaultClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdOptions_Statics::NewProp_NewAssetDefaultClasses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnrealEdOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealEdOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnrealEdOptions_Statics::ClassParams = {
		&UUnrealEdOptions::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUnrealEdOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEdOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUnrealEdOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEdOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnrealEdOptions()
	{
		if (!Z_Registration_Info_UClass_UUnrealEdOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnrealEdOptions.OuterSingleton, Z_Construct_UClass_UUnrealEdOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnrealEdOptions.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UUnrealEdOptions>()
	{
		return UUnrealEdOptions::StaticClass();
	}
	UUnrealEdOptions::UUnrealEdOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealEdOptions);
	UUnrealEdOptions::~UUnrealEdOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_Statics::ScriptStructInfo[] = {
		{ FEditorCommandCategory::StaticStruct, Z_Construct_UScriptStruct_FEditorCommandCategory_Statics::NewStructOps, TEXT("EditorCommandCategory"), &Z_Registration_Info_UScriptStruct_EditorCommandCategory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorCommandCategory), 2422990529U) },
		{ FEditorCommand::StaticStruct, Z_Construct_UScriptStruct_FEditorCommand_Statics::NewStructOps, TEXT("EditorCommand"), &Z_Registration_Info_UScriptStruct_EditorCommand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorCommand), 463552569U) },
		{ FClassPickerDefaults::StaticStruct, Z_Construct_UScriptStruct_FClassPickerDefaults_Statics::NewStructOps, TEXT("ClassPickerDefaults"), &Z_Registration_Info_UScriptStruct_ClassPickerDefaults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClassPickerDefaults), 2952596285U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUnrealEdOptions, UUnrealEdOptions::StaticClass, TEXT("UUnrealEdOptions"), &Z_Registration_Info_UClass_UUnrealEdOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnrealEdOptions), 729513362U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_4263965137(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdOptions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
