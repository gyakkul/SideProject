// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAssetTools.h"
#include "AssetDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAssetTools() {}
// Cross Module References
	ASSETDEFINITION_API UScriptStruct* Z_Construct_UScriptStruct_FRevisionInfo();
	ASSETTOOLS_API UClass* Z_Construct_UClass_UAssetTools();
	ASSETTOOLS_API UClass* Z_Construct_UClass_UAssetTools_NoRegister();
	ASSETTOOLS_API UClass* Z_Construct_UClass_UAssetToolsHelpers();
	ASSETTOOLS_API UClass* Z_Construct_UClass_UAssetToolsHelpers_NoRegister();
	ASSETTOOLS_API UEnum* Z_Construct_UEnum_AssetTools_EAssetClassAction();
	ASSETTOOLS_API UEnum* Z_Construct_UEnum_AssetTools_EAssetMigrationConflict();
	ASSETTOOLS_API UEnum* Z_Construct_UEnum_AssetTools_EAssetRenameResult();
	ASSETTOOLS_API UEnum* Z_Construct_UEnum_AssetTools_ERedirectFixupMode();
	ASSETTOOLS_API UFunction* Z_Construct_UDelegateFunction_AssetTools_AdvancedCopyCompletedEvent__DelegateSignature();
	ASSETTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FAdvancedCopyParams();
	ASSETTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FAssetRenameData();
	ASSETTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FMigrationOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackage();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	UNREALED_API UClass* Z_Construct_UClass_UAssetImportTask_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAutomatedAssetImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AssetTools();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAssetClassAction;
	static UEnum* EAssetClassAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAssetClassAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAssetClassAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AssetTools_EAssetClassAction, (UObject*)Z_Construct_UPackage__Script_AssetTools(), TEXT("EAssetClassAction"));
		}
		return Z_Registration_Info_UEnum_EAssetClassAction.OuterSingleton;
	}
	template<> ASSETTOOLS_API UEnum* StaticEnum<EAssetClassAction>()
	{
		return EAssetClassAction_StaticEnum();
	}
	struct Z_Construct_UEnum_AssetTools_EAssetClassAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AssetTools_EAssetClassAction_Statics::Enumerators[] = {
		{ "EAssetClassAction::CreateAsset", (int64)EAssetClassAction::CreateAsset },
		{ "EAssetClassAction::ViewAsset", (int64)EAssetClassAction::ViewAsset },
		{ "EAssetClassAction::AllAssetActions", (int64)EAssetClassAction::AllAssetActions },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AssetTools_EAssetClassAction_Statics::Enum_MetaDataParams[] = {
		{ "AllAssetActions.Name", "EAssetClassAction::AllAssetActions" },
		{ "CreateAsset.Comment", "/** Whether an action can be created by an AssetTypeAction */" },
		{ "CreateAsset.Name", "EAssetClassAction::CreateAsset" },
		{ "CreateAsset.ToolTip", "Whether an action can be created by an AssetTypeAction" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ViewAsset.Comment", "/** Whether an asset can be viewed in the content browser */" },
		{ "ViewAsset.Name", "EAssetClassAction::ViewAsset" },
		{ "ViewAsset.ToolTip", "Whether an asset can be viewed in the content browser" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AssetTools_EAssetClassAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AssetTools,
		nullptr,
		"EAssetClassAction",
		"EAssetClassAction",
		Z_Construct_UEnum_AssetTools_EAssetClassAction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AssetTools_EAssetClassAction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AssetTools_EAssetClassAction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AssetTools_EAssetClassAction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AssetTools_EAssetClassAction()
	{
		if (!Z_Registration_Info_UEnum_EAssetClassAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAssetClassAction.InnerSingleton, Z_Construct_UEnum_AssetTools_EAssetClassAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAssetClassAction.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAssetRenameResult;
	static UEnum* EAssetRenameResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAssetRenameResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAssetRenameResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AssetTools_EAssetRenameResult, (UObject*)Z_Construct_UPackage__Script_AssetTools(), TEXT("EAssetRenameResult"));
		}
		return Z_Registration_Info_UEnum_EAssetRenameResult.OuterSingleton;
	}
	template<> ASSETTOOLS_API UEnum* StaticEnum<EAssetRenameResult>()
	{
		return EAssetRenameResult_StaticEnum();
	}
	struct Z_Construct_UEnum_AssetTools_EAssetRenameResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AssetTools_EAssetRenameResult_Statics::Enumerators[] = {
		{ "EAssetRenameResult::Failure", (int64)EAssetRenameResult::Failure },
		{ "EAssetRenameResult::Success", (int64)EAssetRenameResult::Success },
		{ "EAssetRenameResult::Pending", (int64)EAssetRenameResult::Pending },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AssetTools_EAssetRenameResult_Statics::Enum_MetaDataParams[] = {
		{ "Failure.Comment", "/** The asset rename failed */" },
		{ "Failure.Name", "EAssetRenameResult::Failure" },
		{ "Failure.ToolTip", "The asset rename failed" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "Pending.Comment", "/** The asset rename is still pending, likely due to outstanding asset discovery */" },
		{ "Pending.Name", "EAssetRenameResult::Pending" },
		{ "Pending.ToolTip", "The asset rename is still pending, likely due to outstanding asset discovery" },
		{ "Success.Comment", "/** The asset rename succeeded */" },
		{ "Success.Name", "EAssetRenameResult::Success" },
		{ "Success.ToolTip", "The asset rename succeeded" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AssetTools_EAssetRenameResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AssetTools,
		nullptr,
		"EAssetRenameResult",
		"EAssetRenameResult",
		Z_Construct_UEnum_AssetTools_EAssetRenameResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AssetTools_EAssetRenameResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AssetTools_EAssetRenameResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AssetTools_EAssetRenameResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AssetTools_EAssetRenameResult()
	{
		if (!Z_Registration_Info_UEnum_EAssetRenameResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAssetRenameResult.InnerSingleton, Z_Construct_UEnum_AssetTools_EAssetRenameResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAssetRenameResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERedirectFixupMode;
	static UEnum* ERedirectFixupMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERedirectFixupMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERedirectFixupMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AssetTools_ERedirectFixupMode, (UObject*)Z_Construct_UPackage__Script_AssetTools(), TEXT("ERedirectFixupMode"));
		}
		return Z_Registration_Info_UEnum_ERedirectFixupMode.OuterSingleton;
	}
	template<> ASSETTOOLS_API UEnum* StaticEnum<ERedirectFixupMode>()
	{
		return ERedirectFixupMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AssetTools_ERedirectFixupMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AssetTools_ERedirectFixupMode_Statics::Enumerators[] = {
		{ "ERedirectFixupMode::DeleteFixedUpRedirectors", (int64)ERedirectFixupMode::DeleteFixedUpRedirectors },
		{ "ERedirectFixupMode::LeaveFixedUpRedirectors", (int64)ERedirectFixupMode::LeaveFixedUpRedirectors },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AssetTools_ERedirectFixupMode_Statics::Enum_MetaDataParams[] = {
		{ "DeleteFixedUpRedirectors.Comment", "// Remove fully fixed up redirectors after the fixup process is done\n" },
		{ "DeleteFixedUpRedirectors.Name", "ERedirectFixupMode::DeleteFixedUpRedirectors" },
		{ "DeleteFixedUpRedirectors.ToolTip", "Remove fully fixed up redirectors after the fixup process is done" },
		{ "LeaveFixedUpRedirectors.Comment", "// Leave the redirectors around even if no longer locally referenced\n" },
		{ "LeaveFixedUpRedirectors.Name", "ERedirectFixupMode::LeaveFixedUpRedirectors" },
		{ "LeaveFixedUpRedirectors.ToolTip", "Leave the redirectors around even if no longer locally referenced" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AssetTools_ERedirectFixupMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AssetTools,
		nullptr,
		"ERedirectFixupMode",
		"ERedirectFixupMode",
		Z_Construct_UEnum_AssetTools_ERedirectFixupMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AssetTools_ERedirectFixupMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AssetTools_ERedirectFixupMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AssetTools_ERedirectFixupMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AssetTools_ERedirectFixupMode()
	{
		if (!Z_Registration_Info_UEnum_ERedirectFixupMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERedirectFixupMode.InnerSingleton, Z_Construct_UEnum_AssetTools_ERedirectFixupMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERedirectFixupMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetRenameData;
class UScriptStruct* FAssetRenameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetRenameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetRenameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetRenameData, (UObject*)Z_Construct_UPackage__Script_AssetTools(), TEXT("AssetRenameData"));
	}
	return Z_Registration_Info_UScriptStruct_AssetRenameData.OuterSingleton;
}
template<> ASSETTOOLS_API UScriptStruct* StaticStruct<FAssetRenameData>()
{
	return FAssetRenameData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAssetRenameData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Asset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPackagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewPackagePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldObjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewObjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyFixSoftReferences_MetaData[];
#endif
		static void NewProp_bOnlyFixSoftReferences_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyFixSoftReferences;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetRenameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetRenameData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_Asset_MetaData[] = {
		{ "Category", "AssetRenameData" },
		{ "Comment", "/** Object being renamed */" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Object being renamed" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetRenameData, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_Asset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewPackagePath_MetaData[] = {
		{ "Category", "AssetRenameData" },
		{ "Comment", "/** New path to package without package name, ie /Game/SubDirectory */" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "New path to package without package name, ie /Game/SubDirectory" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewPackagePath = { "NewPackagePath", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetRenameData, NewPackagePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewPackagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewPackagePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewName_MetaData[] = {
		{ "Category", "AssetRenameData" },
		{ "Comment", "/** New package and asset name, new object path will be PackagePath/NewName.NewName */" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "New package and asset name, new object path will be PackagePath/NewName.NewName" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetRenameData, NewName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_OldObjectPath_MetaData[] = {
		{ "Comment", "/** Full path to old name, in form /Game/SubDirectory/OldName.OldName:SubPath*/" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Full path to old name, in form /Game/SubDirectory/OldName.OldName:SubPath" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_OldObjectPath = { "OldObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetRenameData, OldObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_OldObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_OldObjectPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewObjectPath_MetaData[] = {
		{ "Comment", "/** New full path, may be a SubObject */" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "New full path, may be a SubObject" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewObjectPath = { "NewObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetRenameData, NewObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewObjectPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_bOnlyFixSoftReferences_MetaData[] = {
		{ "Comment", "/** If true, only fix soft references. This will work even if Asset is null because it has already been renamed */" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "If true, only fix soft references. This will work even if Asset is null because it has already been renamed" },
	};
#endif
	void Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_bOnlyFixSoftReferences_SetBit(void* Obj)
	{
		((FAssetRenameData*)Obj)->bOnlyFixSoftReferences = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_bOnlyFixSoftReferences = { "bOnlyFixSoftReferences", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAssetRenameData), &Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_bOnlyFixSoftReferences_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_bOnlyFixSoftReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_bOnlyFixSoftReferences_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetRenameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewPackagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_OldObjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_NewObjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewProp_bOnlyFixSoftReferences,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetRenameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetTools,
		nullptr,
		&NewStructOps,
		"AssetRenameData",
		sizeof(FAssetRenameData),
		alignof(FAssetRenameData),
		Z_Construct_UScriptStruct_FAssetRenameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRenameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetRenameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetRenameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetRenameData()
	{
		if (!Z_Registration_Info_UScriptStruct_AssetRenameData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetRenameData.InnerSingleton, Z_Construct_UScriptStruct_FAssetRenameData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AssetRenameData.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_AssetTools_AdvancedCopyCompletedEvent__DelegateSignature_Statics
	{
		struct _Script_AssetTools_eventAdvancedCopyCompletedEvent_Parms
		{
			bool bSuccess;
			TArray<FAssetRenameData> AllCopiedAssets;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllCopiedAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllCopiedAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllCopiedAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_AssetTools_AdvancedCopyCompletedEvent__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_AssetTools_eventAdvancedCopyCompletedEvent_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AssetTools_AdvancedCopyCompletedEvent__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_AssetTools_eventAdvancedCopyCompletedEvent_Parms), &Z_Construct_UDelegateFunction_AssetTools_AdvancedCopyCompletedEvent__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AssetTools_AdvancedCopyCompletedEvent__DelegateSignature_Statics::NewProp_AllCopiedAssets_Inner = { "AllCopiedAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAssetRenameData, METADATA_PARAMS(nullptr, 0) }; // 3469347416
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AssetTools_AdvancedCopyCompletedEvent__DelegateSignature_Statics::NewProp_AllCopiedAssets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AssetTools_AdvancedCopyCompletedEvent__DelegateSignature_Statics::NewProp_AllCopiedAssets = { "AllCopiedAssets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AssetTools_eventAdvancedCopyCompletedEvent_Parms, AllCopiedAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_AssetTools_AdvancedCopyCompletedEvent__DelegateSignature_Statics::NewProp_AllCopiedAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AssetTools_AdvancedCopyCompletedEvent__DelegateSignature_Statics::NewProp_AllCopiedAssets_MetaData)) }; // 3469347416
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AssetTools_AdvancedCopyCompletedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AssetTools_AdvancedCopyCompletedEvent__DelegateSignature_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AssetTools_AdvancedCopyCompletedEvent__DelegateSignature_Statics::NewProp_AllCopiedAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AssetTools_AdvancedCopyCompletedEvent__DelegateSignature_Statics::NewProp_AllCopiedAssets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AssetTools_AdvancedCopyCompletedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AssetTools_AdvancedCopyCompletedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AssetTools, nullptr, "AdvancedCopyCompletedEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AssetTools_AdvancedCopyCompletedEvent__DelegateSignature_Statics::_Script_AssetTools_eventAdvancedCopyCompletedEvent_Parms), Z_Construct_UDelegateFunction_AssetTools_AdvancedCopyCompletedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AssetTools_AdvancedCopyCompletedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AssetTools_AdvancedCopyCompletedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AssetTools_AdvancedCopyCompletedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AssetTools_AdvancedCopyCompletedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AssetTools_AdvancedCopyCompletedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAdvancedCopyCompletedEvent_DelegateWrapper(const FScriptDelegate& AdvancedCopyCompletedEvent, bool bSuccess, TArray<FAssetRenameData> const& AllCopiedAssets)
{
	struct _Script_AssetTools_eventAdvancedCopyCompletedEvent_Parms
	{
		bool bSuccess;
		TArray<FAssetRenameData> AllCopiedAssets;
	};
	_Script_AssetTools_eventAdvancedCopyCompletedEvent_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.AllCopiedAssets=AllCopiedAssets;
	AdvancedCopyCompletedEvent.ProcessDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AdvancedCopyParams;
class UScriptStruct* FAdvancedCopyParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AdvancedCopyParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AdvancedCopyParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdvancedCopyParams, (UObject*)Z_Construct_UPackage__Script_AssetTools(), TEXT("AdvancedCopyParams"));
	}
	return Z_Registration_Info_UScriptStruct_AdvancedCopyParams.OuterSingleton;
}
template<> ASSETTOOLS_API UScriptStruct* StaticStruct<FAdvancedCopyParams>()
{
	return FAdvancedCopyParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAdvancedCopyParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdvancedCopyParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdvancedCopyParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdvancedCopyParams>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdvancedCopyParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetTools,
		nullptr,
		&NewStructOps,
		"AdvancedCopyParams",
		sizeof(FAdvancedCopyParams),
		alignof(FAdvancedCopyParams),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdvancedCopyParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdvancedCopyParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdvancedCopyParams()
	{
		if (!Z_Registration_Info_UScriptStruct_AdvancedCopyParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AdvancedCopyParams.InnerSingleton, Z_Construct_UScriptStruct_FAdvancedCopyParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AdvancedCopyParams.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAssetMigrationConflict;
	static UEnum* EAssetMigrationConflict_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAssetMigrationConflict.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAssetMigrationConflict.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AssetTools_EAssetMigrationConflict, (UObject*)Z_Construct_UPackage__Script_AssetTools(), TEXT("EAssetMigrationConflict"));
		}
		return Z_Registration_Info_UEnum_EAssetMigrationConflict.OuterSingleton;
	}
	template<> ASSETTOOLS_API UEnum* StaticEnum<EAssetMigrationConflict>()
	{
		return EAssetMigrationConflict_StaticEnum();
	}
	struct Z_Construct_UEnum_AssetTools_EAssetMigrationConflict_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AssetTools_EAssetMigrationConflict_Statics::Enumerators[] = {
		{ "EAssetMigrationConflict::Skip", (int64)EAssetMigrationConflict::Skip },
		{ "EAssetMigrationConflict::Overwrite", (int64)EAssetMigrationConflict::Overwrite },
		{ "EAssetMigrationConflict::Cancel", (int64)EAssetMigrationConflict::Cancel },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AssetTools_EAssetMigrationConflict_Statics::Enum_MetaDataParams[] = {
		{ "Cancel.Comment", "// Cancel the whole Migration\n" },
		{ "Cancel.Name", "EAssetMigrationConflict::Cancel" },
		{ "Cancel.ToolTip", "Cancel the whole Migration" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "Overwrite.Comment", "// Overwrite Assets\n" },
		{ "Overwrite.Name", "EAssetMigrationConflict::Overwrite" },
		{ "Overwrite.ToolTip", "Overwrite Assets" },
		{ "Skip.Comment", "// Skip Assets\n" },
		{ "Skip.Name", "EAssetMigrationConflict::Skip" },
		{ "Skip.ToolTip", "Skip Assets" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AssetTools_EAssetMigrationConflict_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AssetTools,
		nullptr,
		"EAssetMigrationConflict",
		"EAssetMigrationConflict",
		Z_Construct_UEnum_AssetTools_EAssetMigrationConflict_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AssetTools_EAssetMigrationConflict_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AssetTools_EAssetMigrationConflict_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AssetTools_EAssetMigrationConflict_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AssetTools_EAssetMigrationConflict()
	{
		if (!Z_Registration_Info_UEnum_EAssetMigrationConflict.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAssetMigrationConflict.InnerSingleton, Z_Construct_UEnum_AssetTools_EAssetMigrationConflict_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAssetMigrationConflict.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MigrationOptions;
class UScriptStruct* FMigrationOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MigrationOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MigrationOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMigrationOptions, (UObject*)Z_Construct_UPackage__Script_AssetTools(), TEXT("MigrationOptions"));
	}
	return Z_Registration_Info_UScriptStruct_MigrationOptions.OuterSingleton;
}
template<> ASSETTOOLS_API UScriptStruct* StaticStruct<FMigrationOptions>()
{
	return FMigrationOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMigrationOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_AssetConflict_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetConflict_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetConflict;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrphanFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OrphanFolder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMigrationOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMigrationOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMigrationOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMigrationOptions_Statics::NewProp_AssetConflict_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMigrationOptions_Statics::NewProp_AssetConflict_MetaData[] = {
		{ "Category", "MigrationOptions" },
		{ "Comment", "/** What to do when Assets are conflicting on the destination */" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "What to do when Assets are conflicting on the destination" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMigrationOptions_Statics::NewProp_AssetConflict = { "AssetConflict", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMigrationOptions, AssetConflict), Z_Construct_UEnum_AssetTools_EAssetMigrationConflict, METADATA_PARAMS(Z_Construct_UScriptStruct_FMigrationOptions_Statics::NewProp_AssetConflict_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMigrationOptions_Statics::NewProp_AssetConflict_MetaData)) }; // 1706615460
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMigrationOptions_Statics::NewProp_OrphanFolder_MetaData[] = {
		{ "Category", "MigrationOptions" },
		{ "Comment", "/** Destination for assets that don't have a corresponding content folder. If left empty those assets are not migrated. (Not used by the new migration)*/" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Destination for assets that don't have a corresponding content folder. If left empty those assets are not migrated. (Not used by the new migration)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMigrationOptions_Statics::NewProp_OrphanFolder = { "OrphanFolder", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMigrationOptions, OrphanFolder), METADATA_PARAMS(Z_Construct_UScriptStruct_FMigrationOptions_Statics::NewProp_OrphanFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMigrationOptions_Statics::NewProp_OrphanFolder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMigrationOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMigrationOptions_Statics::NewProp_AssetConflict_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMigrationOptions_Statics::NewProp_AssetConflict,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMigrationOptions_Statics::NewProp_OrphanFolder,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMigrationOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetTools,
		nullptr,
		&NewStructOps,
		"MigrationOptions",
		sizeof(FMigrationOptions),
		alignof(FMigrationOptions),
		Z_Construct_UScriptStruct_FMigrationOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMigrationOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMigrationOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMigrationOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMigrationOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_MigrationOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MigrationOptions.InnerSingleton, Z_Construct_UScriptStruct_FMigrationOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MigrationOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(IAssetTools::execOpenEditorForAssets)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Assets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenEditorForAssets(Z_Param_Out_Assets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetTools::execBeginAdvancedCopyPackages)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_InputNamesToCopy);
		P_GET_PROPERTY(FStrProperty,Z_Param_TargetPath);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnCopyComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginAdvancedCopyPackages(Z_Param_Out_InputNamesToCopy,Z_Param_TargetPath,FAdvancedCopyCompletedEvent(Z_Param_Out_OnCopyComplete));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetTools::execMigratePackages)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_PackageNamesToMigrate);
		P_GET_PROPERTY(FStrProperty,Z_Param_DestinationPath);
		P_GET_STRUCT_REF(FMigrationOptions,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MigratePackages(Z_Param_Out_PackageNamesToMigrate,Z_Param_DestinationPath,Z_Param_Out_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetTools::execDiffAssets)
	{
		P_GET_OBJECT(UObject,Z_Param_OldAsset);
		P_GET_OBJECT(UObject,Z_Param_NewAsset);
		P_GET_STRUCT_REF(FRevisionInfo,Z_Param_Out_OldRevision);
		P_GET_STRUCT_REF(FRevisionInfo,Z_Param_Out_NewRevision);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DiffAssets(Z_Param_OldAsset,Z_Param_NewAsset,Z_Param_Out_OldRevision,Z_Param_Out_NewRevision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetTools::execDiffAgainstDepot)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_InPackagePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_InPackageName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DiffAgainstDepot(Z_Param_InObject,Z_Param_InPackagePath,Z_Param_InPackageName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetTools::execCreateUniqueAssetName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InBasePackageName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InSuffix);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPackageName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutAssetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateUniqueAssetName(Z_Param_InBasePackageName,Z_Param_InSuffix,Z_Param_Out_OutPackageName,Z_Param_Out_OutAssetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetTools::execExportAssetsWithDialog)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_AssetsToExport);
		P_GET_UBOOL(Z_Param_bPromptForIndividualFilenames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExportAssetsWithDialog(Z_Param_Out_AssetsToExport,Z_Param_bPromptForIndividualFilenames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetTools::execExportAssets)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_AssetsToExport);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExportPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExportAssets(Z_Param_Out_AssetsToExport,Z_Param_ExportPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetTools::execImportAssetTasks)
	{
		P_GET_TARRAY_REF(UAssetImportTask*,Z_Param_Out_ImportTasks);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ImportAssetTasks(Z_Param_Out_ImportTasks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetTools::execImportAssetsAutomated)
	{
		P_GET_OBJECT(UAutomatedAssetImportData,Z_Param_ImportData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->ImportAssetsAutomated(Z_Param_ImportData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetTools::execImportAssetsWithDialog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DestinationPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->ImportAssetsWithDialog(Z_Param_DestinationPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetTools::execRenameReferencingSoftObjectPaths)
	{
		P_GET_TARRAY(UPackage*,Z_Param_PackagesToCheck);
		P_GET_TMAP_REF(FSoftObjectPath,FSoftObjectPath,Z_Param_Out_AssetRedirectorMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RenameReferencingSoftObjectPaths(Z_Param_PackagesToCheck,Z_Param_Out_AssetRedirectorMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetTools::execFindSoftReferencesToObject)
	{
		P_GET_STRUCT(FSoftObjectPath,Z_Param_TargetObject);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_ReferencingObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindSoftReferencesToObject(Z_Param_TargetObject,Z_Param_Out_ReferencingObjects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetTools::execRenameAssetsWithDialog)
	{
		P_GET_TARRAY_REF(FAssetRenameData,Z_Param_Out_AssetsAndNames);
		P_GET_UBOOL(Z_Param_bAutoCheckout);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAssetRenameResult*)Z_Param__Result=P_THIS->RenameAssetsWithDialog(Z_Param_Out_AssetsAndNames,Z_Param_bAutoCheckout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetTools::execRenameAssets)
	{
		P_GET_TARRAY_REF(FAssetRenameData,Z_Param_Out_AssetsAndNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RenameAssets(Z_Param_Out_AssetsAndNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetTools::execDuplicateAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetName);
		P_GET_PROPERTY(FStrProperty,Z_Param_PackagePath);
		P_GET_OBJECT(UObject,Z_Param_OriginalObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->DuplicateAsset(Z_Param_AssetName,Z_Param_PackagePath,Z_Param_OriginalObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetTools::execDuplicateAssetWithDialogAndTitle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetName);
		P_GET_PROPERTY(FStrProperty,Z_Param_PackagePath);
		P_GET_OBJECT(UObject,Z_Param_OriginalObject);
		P_GET_PROPERTY(FTextProperty,Z_Param_DialogTitle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->DuplicateAssetWithDialogAndTitle(Z_Param_AssetName,Z_Param_PackagePath,Z_Param_OriginalObject,Z_Param_DialogTitle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetTools::execDuplicateAssetWithDialog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetName);
		P_GET_PROPERTY(FStrProperty,Z_Param_PackagePath);
		P_GET_OBJECT(UObject,Z_Param_OriginalObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->DuplicateAssetWithDialog(Z_Param_AssetName,Z_Param_PackagePath,Z_Param_OriginalObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetTools::execCreateAssetWithDialog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetName);
		P_GET_PROPERTY(FStrProperty,Z_Param_PackagePath);
		P_GET_OBJECT(UClass,Z_Param_AssetClass);
		P_GET_OBJECT(UFactory,Z_Param_Factory);
		P_GET_PROPERTY(FNameProperty,Z_Param_CallingContext);
		P_GET_UBOOL(Z_Param_bCallConfigureProperties);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->CreateAssetWithDialog(Z_Param_AssetName,Z_Param_PackagePath,Z_Param_AssetClass,Z_Param_Factory,Z_Param_CallingContext,Z_Param_bCallConfigureProperties);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAssetTools::execCreateAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetName);
		P_GET_PROPERTY(FStrProperty,Z_Param_PackagePath);
		P_GET_OBJECT(UClass,Z_Param_AssetClass);
		P_GET_OBJECT(UFactory,Z_Param_Factory);
		P_GET_PROPERTY(FNameProperty,Z_Param_CallingContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->CreateAsset(Z_Param_AssetName,Z_Param_PackagePath,Z_Param_AssetClass,Z_Param_Factory,Z_Param_CallingContext);
		P_NATIVE_END;
	}
	void UAssetTools::StaticRegisterNativesUAssetTools()
	{
		UClass* Class = UAssetTools::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginAdvancedCopyPackages", &IAssetTools::execBeginAdvancedCopyPackages },
			{ "CreateAsset", &IAssetTools::execCreateAsset },
			{ "CreateAssetWithDialog", &IAssetTools::execCreateAssetWithDialog },
			{ "CreateUniqueAssetName", &IAssetTools::execCreateUniqueAssetName },
			{ "DiffAgainstDepot", &IAssetTools::execDiffAgainstDepot },
			{ "DiffAssets", &IAssetTools::execDiffAssets },
			{ "DuplicateAsset", &IAssetTools::execDuplicateAsset },
			{ "DuplicateAssetWithDialog", &IAssetTools::execDuplicateAssetWithDialog },
			{ "DuplicateAssetWithDialogAndTitle", &IAssetTools::execDuplicateAssetWithDialogAndTitle },
			{ "ExportAssets", &IAssetTools::execExportAssets },
			{ "ExportAssetsWithDialog", &IAssetTools::execExportAssetsWithDialog },
			{ "FindSoftReferencesToObject", &IAssetTools::execFindSoftReferencesToObject },
			{ "ImportAssetsAutomated", &IAssetTools::execImportAssetsAutomated },
			{ "ImportAssetsWithDialog", &IAssetTools::execImportAssetsWithDialog },
			{ "ImportAssetTasks", &IAssetTools::execImportAssetTasks },
			{ "MigratePackages", &IAssetTools::execMigratePackages },
			{ "OpenEditorForAssets", &IAssetTools::execOpenEditorForAssets },
			{ "RenameAssets", &IAssetTools::execRenameAssets },
			{ "RenameAssetsWithDialog", &IAssetTools::execRenameAssetsWithDialog },
			{ "RenameReferencingSoftObjectPaths", &IAssetTools::execRenameReferencingSoftObjectPaths },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics
	{
		struct AssetTools_eventBeginAdvancedCopyPackages_Parms
		{
			TArray<FName> InputNamesToCopy;
			FString TargetPath;
			FScriptDelegate OnCopyComplete;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputNamesToCopy_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputNamesToCopy_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputNamesToCopy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCopyComplete_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnCopyComplete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics::NewProp_InputNamesToCopy_Inner = { "InputNamesToCopy", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics::NewProp_InputNamesToCopy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics::NewProp_InputNamesToCopy = { "InputNamesToCopy", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventBeginAdvancedCopyPackages_Parms, InputNamesToCopy), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics::NewProp_InputNamesToCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics::NewProp_InputNamesToCopy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics::NewProp_TargetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics::NewProp_TargetPath = { "TargetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventBeginAdvancedCopyPackages_Parms, TargetPath), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics::NewProp_TargetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics::NewProp_TargetPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics::NewProp_OnCopyComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics::NewProp_OnCopyComplete = { "OnCopyComplete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventBeginAdvancedCopyPackages_Parms, OnCopyComplete), Z_Construct_UDelegateFunction_AssetTools_AdvancedCopyCompletedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics::NewProp_OnCopyComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics::NewProp_OnCopyComplete_MetaData)) }; // 1135179280
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics::NewProp_InputNamesToCopy_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics::NewProp_InputNamesToCopy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics::NewProp_TargetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics::NewProp_OnCopyComplete,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "OnCopyComplete" },
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "BeginAdvancedCopyPackages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics::AssetTools_eventBeginAdvancedCopyPackages_Parms), Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_CreateAsset_Statics
	{
		struct AssetTools_eventCreateAsset_Parms
		{
			FString AssetName;
			FString PackagePath;
			UClass* AssetClass;
			UFactory* Factory;
			FName CallingContext;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackagePath;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AssetClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Factory;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CallingContext;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventCreateAsset_Parms, AssetName), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_AssetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_PackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventCreateAsset_Parms, PackagePath), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_PackagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_PackagePath_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_AssetClass = { "AssetClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventCreateAsset_Parms, AssetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_Factory = { "Factory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventCreateAsset_Parms, Factory), Z_Construct_UClass_UFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_CallingContext = { "CallingContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventCreateAsset_Parms, CallingContext), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventCreateAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_AssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_PackagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_AssetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_Factory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_CallingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "Comment", "/**\n\x09 * Creates an asset with the specified name, path, and factory\n\x09 *\n\x09 * @param AssetName the name of the new asset\n\x09 * @param PackagePath the package that will contain the new asset\n\x09 * @param AssetClass the class of the new asset\n\x09 * @param Factory the factory that will build the new asset\n\x09 * @param CallingContext optional name of the module or method calling CreateAsset() - this is passed to the factory\n\x09 * @return the new asset or NULL if it fails\n\x09 */" },
		{ "CPP_Default_CallingContext", "None" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Creates an asset with the specified name, path, and factory\n\n@param AssetName the name of the new asset\n@param PackagePath the package that will contain the new asset\n@param AssetClass the class of the new asset\n@param Factory the factory that will build the new asset\n@param CallingContext optional name of the module or method calling CreateAsset() - this is passed to the factory\n@return the new asset or NULL if it fails" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "CreateAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::AssetTools_eventCreateAsset_Parms), Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_CreateAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTools_CreateAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics
	{
		struct AssetTools_eventCreateAssetWithDialog_Parms
		{
			FString AssetName;
			FString PackagePath;
			UClass* AssetClass;
			UFactory* Factory;
			FName CallingContext;
			bool bCallConfigureProperties;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackagePath;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AssetClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Factory;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CallingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCallConfigureProperties_MetaData[];
#endif
		static void NewProp_bCallConfigureProperties_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCallConfigureProperties;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventCreateAssetWithDialog_Parms, AssetName), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_AssetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_PackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventCreateAssetWithDialog_Parms, PackagePath), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_PackagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_PackagePath_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_AssetClass = { "AssetClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventCreateAssetWithDialog_Parms, AssetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_Factory = { "Factory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventCreateAssetWithDialog_Parms, Factory), Z_Construct_UClass_UFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_CallingContext = { "CallingContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventCreateAssetWithDialog_Parms, CallingContext), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_bCallConfigureProperties_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_bCallConfigureProperties_SetBit(void* Obj)
	{
		((AssetTools_eventCreateAssetWithDialog_Parms*)Obj)->bCallConfigureProperties = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_bCallConfigureProperties = { "bCallConfigureProperties", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetTools_eventCreateAssetWithDialog_Parms), &Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_bCallConfigureProperties_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_bCallConfigureProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_bCallConfigureProperties_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventCreateAssetWithDialog_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_AssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_PackagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_AssetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_Factory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_CallingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_bCallConfigureProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "Comment", "/** Opens an asset picker dialog and creates an asset with the specified name and path */" },
		{ "CPP_Default_bCallConfigureProperties", "true" },
		{ "CPP_Default_CallingContext", "None" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Opens an asset picker dialog and creates an asset with the specified name and path" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "CreateAssetWithDialog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::AssetTools_eventCreateAssetWithDialog_Parms), Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics
	{
		struct AssetTools_eventCreateUniqueAssetName_Parms
		{
			FString InBasePackageName;
			FString InSuffix;
			FString OutPackageName;
			FString OutAssetName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBasePackageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBasePackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSuffix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InSuffix;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutPackageName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutAssetName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_InBasePackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_InBasePackageName = { "InBasePackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventCreateUniqueAssetName_Parms, InBasePackageName), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_InBasePackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_InBasePackageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_InSuffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_InSuffix = { "InSuffix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventCreateUniqueAssetName_Parms, InSuffix), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_InSuffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_InSuffix_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_OutPackageName = { "OutPackageName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventCreateUniqueAssetName_Parms, OutPackageName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_OutAssetName = { "OutAssetName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventCreateUniqueAssetName_Parms, OutAssetName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_InBasePackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_InSuffix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_OutPackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::NewProp_OutAssetName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "Comment", "/** Creates a unique package and asset name taking the form InBasePackageName+InSuffix */" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Creates a unique package and asset name taking the form InBasePackageName+InSuffix" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "CreateUniqueAssetName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::AssetTools_eventCreateUniqueAssetName_Parms), Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_DiffAgainstDepot_Statics
	{
		struct AssetTools_eventDiffAgainstDepot_Parms
		{
			UObject* InObject;
			FString InPackagePath;
			FString InPackageName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPackagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InPackagePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPackageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InPackageName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_DiffAgainstDepot_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventDiffAgainstDepot_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_DiffAgainstDepot_Statics::NewProp_InPackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_DiffAgainstDepot_Statics::NewProp_InPackagePath = { "InPackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventDiffAgainstDepot_Parms, InPackagePath), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_DiffAgainstDepot_Statics::NewProp_InPackagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DiffAgainstDepot_Statics::NewProp_InPackagePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_DiffAgainstDepot_Statics::NewProp_InPackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_DiffAgainstDepot_Statics::NewProp_InPackageName = { "InPackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventDiffAgainstDepot_Parms, InPackageName), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_DiffAgainstDepot_Statics::NewProp_InPackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DiffAgainstDepot_Statics::NewProp_InPackageName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_DiffAgainstDepot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DiffAgainstDepot_Statics::NewProp_InObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DiffAgainstDepot_Statics::NewProp_InPackagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DiffAgainstDepot_Statics::NewProp_InPackageName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_DiffAgainstDepot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "Comment", "/**\n\x09 * Try to diff the local version of an asset against the latest one from the depot\n\x09 *\n\x09 * @param InObject - The object we want to compare against the depot\n\x09 * @param InPackagePath - The fullpath to the package\n\x09 * @param InPackageName - The name of the package\n\x09 */" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Try to diff the local version of an asset against the latest one from the depot\n\n@param InObject - The object we want to compare against the depot\n@param InPackagePath - The fullpath to the package\n@param InPackageName - The name of the package" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_DiffAgainstDepot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "DiffAgainstDepot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTools_DiffAgainstDepot_Statics::AssetTools_eventDiffAgainstDepot_Parms), Z_Construct_UFunction_UAssetTools_DiffAgainstDepot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DiffAgainstDepot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_DiffAgainstDepot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DiffAgainstDepot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_DiffAgainstDepot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTools_DiffAgainstDepot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_DiffAssets_Statics
	{
		struct AssetTools_eventDiffAssets_Parms
		{
			UObject* OldAsset;
			UObject* NewAsset;
			FRevisionInfo OldRevision;
			FRevisionInfo NewRevision;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldRevision_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldRevision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewRevision_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewRevision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_DiffAssets_Statics::NewProp_OldAsset = { "OldAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventDiffAssets_Parms, OldAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_DiffAssets_Statics::NewProp_NewAsset = { "NewAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventDiffAssets_Parms, NewAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_DiffAssets_Statics::NewProp_OldRevision_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTools_DiffAssets_Statics::NewProp_OldRevision = { "OldRevision", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventDiffAssets_Parms, OldRevision), Z_Construct_UScriptStruct_FRevisionInfo, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_DiffAssets_Statics::NewProp_OldRevision_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DiffAssets_Statics::NewProp_OldRevision_MetaData)) }; // 2685632379
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_DiffAssets_Statics::NewProp_NewRevision_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTools_DiffAssets_Statics::NewProp_NewRevision = { "NewRevision", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventDiffAssets_Parms, NewRevision), Z_Construct_UScriptStruct_FRevisionInfo, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_DiffAssets_Statics::NewProp_NewRevision_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DiffAssets_Statics::NewProp_NewRevision_MetaData)) }; // 2685632379
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_DiffAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DiffAssets_Statics::NewProp_OldAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DiffAssets_Statics::NewProp_NewAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DiffAssets_Statics::NewProp_OldRevision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DiffAssets_Statics::NewProp_NewRevision,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_DiffAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "Comment", "/** Try and diff two assets using class-specific tool. Will do nothing if either asset is NULL, or they are not the same class. */" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Try and diff two assets using class-specific tool. Will do nothing if either asset is NULL, or they are not the same class." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_DiffAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "DiffAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTools_DiffAssets_Statics::AssetTools_eventDiffAssets_Parms), Z_Construct_UFunction_UAssetTools_DiffAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DiffAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_DiffAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DiffAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_DiffAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTools_DiffAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics
	{
		struct AssetTools_eventDuplicateAsset_Parms
		{
			FString AssetName;
			FString PackagePath;
			UObject* OriginalObject;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackagePath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventDuplicateAsset_Parms, AssetName), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_AssetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_PackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventDuplicateAsset_Parms, PackagePath), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_PackagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_PackagePath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_OriginalObject = { "OriginalObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventDuplicateAsset_Parms, OriginalObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventDuplicateAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_AssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_PackagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_OriginalObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "Comment", "/** Creates an asset with the specified name and path. Uses OriginalObject as the duplication source. */" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Creates an asset with the specified name and path. Uses OriginalObject as the duplication source." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "DuplicateAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::AssetTools_eventDuplicateAsset_Parms), Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_DuplicateAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTools_DuplicateAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics
	{
		struct AssetTools_eventDuplicateAssetWithDialog_Parms
		{
			FString AssetName;
			FString PackagePath;
			UObject* OriginalObject;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackagePath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventDuplicateAssetWithDialog_Parms, AssetName), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_AssetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_PackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventDuplicateAssetWithDialog_Parms, PackagePath), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_PackagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_PackagePath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_OriginalObject = { "OriginalObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventDuplicateAssetWithDialog_Parms, OriginalObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventDuplicateAssetWithDialog_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_AssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_PackagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_OriginalObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "Comment", "/** Opens an asset picker dialog and creates an asset with the specified name and path. Uses OriginalObject as the duplication source. */" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Opens an asset picker dialog and creates an asset with the specified name and path. Uses OriginalObject as the duplication source." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "DuplicateAssetWithDialog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::AssetTools_eventDuplicateAssetWithDialog_Parms), Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle_Statics
	{
		struct AssetTools_eventDuplicateAssetWithDialogAndTitle_Parms
		{
			FString AssetName;
			FString PackagePath;
			UObject* OriginalObject;
			FText DialogTitle;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackagePath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalObject;
		static const UECodeGen_Private::FTextPropertyParams NewProp_DialogTitle;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle_Statics::NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventDuplicateAssetWithDialogAndTitle_Parms, AssetName), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle_Statics::NewProp_AssetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle_Statics::NewProp_PackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventDuplicateAssetWithDialogAndTitle_Parms, PackagePath), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle_Statics::NewProp_PackagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle_Statics::NewProp_PackagePath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle_Statics::NewProp_OriginalObject = { "OriginalObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventDuplicateAssetWithDialogAndTitle_Parms, OriginalObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle_Statics::NewProp_DialogTitle = { "DialogTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventDuplicateAssetWithDialogAndTitle_Parms, DialogTitle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventDuplicateAssetWithDialogAndTitle_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle_Statics::NewProp_AssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle_Statics::NewProp_PackagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle_Statics::NewProp_OriginalObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle_Statics::NewProp_DialogTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "Comment", "/** Opens an asset picker dialog and creates an asset with the specified name and path. \n\x09 * Uses OriginalObject as the duplication source.\n\x09 * Uses DialogTitle as the dialog's title.\n\x09 */" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Opens an asset picker dialog and creates an asset with the specified name and path.\nUses OriginalObject as the duplication source.\nUses DialogTitle as the dialog's title." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "DuplicateAssetWithDialogAndTitle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle_Statics::AssetTools_eventDuplicateAssetWithDialogAndTitle_Parms), Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_ExportAssets_Statics
	{
		struct AssetTools_eventExportAssets_Parms
		{
			TArray<FString> AssetsToExport;
			FString ExportPath;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetsToExport_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetsToExport_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetsToExport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExportPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::NewProp_AssetsToExport_Inner = { "AssetsToExport", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::NewProp_AssetsToExport_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::NewProp_AssetsToExport = { "AssetsToExport", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventExportAssets_Parms, AssetsToExport), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::NewProp_AssetsToExport_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::NewProp_AssetsToExport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::NewProp_ExportPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::NewProp_ExportPath = { "ExportPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventExportAssets_Parms, ExportPath), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::NewProp_ExportPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::NewProp_ExportPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::NewProp_AssetsToExport_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::NewProp_AssetsToExport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::NewProp_ExportPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "Comment", "/**\n\x09 * Exports the specified objects to file.\n\x09 *\n\x09 * @param\x09""AssetsToExport\x09\x09\x09\x09\x09List of full asset names (e.g /Game/Path/Asset) to export\n\x09 * @param\x09""ExportPath\x09\x09\x09\x09\x09\x09The directory path to export to.\n\x09 */" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Exports the specified objects to file.\n\n@param       AssetsToExport                                  List of full asset names (e.g /Game/Path/Asset) to export\n@param       ExportPath                                              The directory path to export to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "ExportAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::AssetTools_eventExportAssets_Parms), Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_ExportAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTools_ExportAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics
	{
		struct AssetTools_eventExportAssetsWithDialog_Parms
		{
			TArray<FString> AssetsToExport;
			bool bPromptForIndividualFilenames;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetsToExport_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetsToExport_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetsToExport;
		static void NewProp_bPromptForIndividualFilenames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPromptForIndividualFilenames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::NewProp_AssetsToExport_Inner = { "AssetsToExport", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::NewProp_AssetsToExport_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::NewProp_AssetsToExport = { "AssetsToExport", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventExportAssetsWithDialog_Parms, AssetsToExport), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::NewProp_AssetsToExport_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::NewProp_AssetsToExport_MetaData)) };
	void Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::NewProp_bPromptForIndividualFilenames_SetBit(void* Obj)
	{
		((AssetTools_eventExportAssetsWithDialog_Parms*)Obj)->bPromptForIndividualFilenames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::NewProp_bPromptForIndividualFilenames = { "bPromptForIndividualFilenames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetTools_eventExportAssetsWithDialog_Parms), &Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::NewProp_bPromptForIndividualFilenames_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::NewProp_AssetsToExport_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::NewProp_AssetsToExport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::NewProp_bPromptForIndividualFilenames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "Comment", "/**\n\x09 * Exports the specified objects to file. First prompting the user to pick an export directory and optionally prompting the user to pick a unique directory per file\n\x09 *\n\x09 * @param\x09""AssetsToExport\x09\x09\x09\x09\x09List of assets to export\n\x09 * @param\x09""ExportPath\x09\x09\x09\x09\x09\x09The directory path to export to.\n\x09 */" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Exports the specified objects to file. First prompting the user to pick an export directory and optionally prompting the user to pick a unique directory per file\n\n@param       AssetsToExport                                  List of assets to export\n@param       ExportPath                                              The directory path to export to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "ExportAssetsWithDialog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::AssetTools_eventExportAssetsWithDialog_Parms), Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct AssetTools_eventFindSoftReferencesToObject_Parms
		{
			FSoftObjectPath TargetObject;
			TArray<UObject*> ReferencingObjects;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReferencingObjects_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencingObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::NewProp_TargetObject = { "TargetObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventFindSoftReferencesToObject_Parms, TargetObject), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::NewProp_ReferencingObjects_Inner = { "ReferencingObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::NewProp_ReferencingObjects = { "ReferencingObjects", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventFindSoftReferencesToObject_Parms, ReferencingObjects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::NewProp_TargetObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::NewProp_ReferencingObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::NewProp_ReferencingObjects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "Comment", "/** Returns list of objects that soft reference the given soft object path. This will load assets into memory to verify */" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Returns list of objects that soft reference the given soft object path. This will load assets into memory to verify" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "FindSoftReferencesToObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::AssetTools_eventFindSoftReferencesToObject_Parms), Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics
	{
		struct AssetTools_eventImportAssetsAutomated_Parms
		{
			const UAutomatedAssetImportData* ImportData;
			TArray<UObject*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImportData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::NewProp_ImportData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::NewProp_ImportData = { "ImportData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventImportAssetsAutomated_Parms, ImportData), Z_Construct_UClass_UAutomatedAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::NewProp_ImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::NewProp_ImportData_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventImportAssetsAutomated_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::NewProp_ImportData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "Comment", "/**\n\x09 * Imports assets using data specified completely up front.  Does not ever ask any questions of the user or show any modal error messages\n\x09 *\n\x09 * @param AutomatedImportData\x09""Data that specifies how to import each file\n\x09 * @return list of successfully imported assets\n\x09 */" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Imports assets using data specified completely up front.  Does not ever ask any questions of the user or show any modal error messages\n\n@param AutomatedImportData   Data that specifies how to import each file\n@return list of successfully imported assets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "ImportAssetsAutomated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::AssetTools_eventImportAssetsAutomated_Parms), Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics
	{
		struct AssetTools_eventImportAssetsWithDialog_Parms
		{
			FString DestinationPath;
			TArray<UObject*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationPath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::NewProp_DestinationPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::NewProp_DestinationPath = { "DestinationPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventImportAssetsWithDialog_Parms, DestinationPath), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::NewProp_DestinationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::NewProp_DestinationPath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventImportAssetsWithDialog_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::NewProp_DestinationPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "Comment", "/**\n\x09 * Opens a file open dialog to choose files to import to the destination path.\n\x09 *\n\x09 * @param DestinationPath\x09Path to import files to\n\x09 * @return list of successfully imported assets\n\x09 */" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Opens a file open dialog to choose files to import to the destination path.\n\n@param DestinationPath       Path to import files to\n@return list of successfully imported assets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "ImportAssetsWithDialog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::AssetTools_eventImportAssetsWithDialog_Parms), Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics
	{
		struct AssetTools_eventImportAssetTasks_Parms
		{
			TArray<UAssetImportTask*> ImportTasks;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImportTasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportTasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImportTasks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::NewProp_ImportTasks_Inner = { "ImportTasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAssetImportTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::NewProp_ImportTasks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::NewProp_ImportTasks = { "ImportTasks", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventImportAssetTasks_Parms, ImportTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::NewProp_ImportTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::NewProp_ImportTasks_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::NewProp_ImportTasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::NewProp_ImportTasks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "Comment", "/**\n\x09* Imports assets using tasks specified.\n\x09*\n\x09* @param ImportTasks\x09Tasks that specify how to import each file\n\x09*/" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Imports assets using tasks specified.\n\n@param ImportTasks    Tasks that specify how to import each file" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "ImportAssetTasks", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::AssetTools_eventImportAssetTasks_Parms), Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_ImportAssetTasks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTools_ImportAssetTasks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_MigratePackages_Statics
	{
		struct AssetTools_eventMigratePackages_Parms
		{
			TArray<FName> PackageNamesToMigrate;
			FString DestinationPath;
			FMigrationOptions Options;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_PackageNamesToMigrate_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageNamesToMigrate_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PackageNamesToMigrate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetTools_MigratePackages_Statics::NewProp_PackageNamesToMigrate_Inner = { "PackageNamesToMigrate", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_MigratePackages_Statics::NewProp_PackageNamesToMigrate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTools_MigratePackages_Statics::NewProp_PackageNamesToMigrate = { "PackageNamesToMigrate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventMigratePackages_Parms, PackageNamesToMigrate), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_MigratePackages_Statics::NewProp_PackageNamesToMigrate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_MigratePackages_Statics::NewProp_PackageNamesToMigrate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_MigratePackages_Statics::NewProp_DestinationPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetTools_MigratePackages_Statics::NewProp_DestinationPath = { "DestinationPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventMigratePackages_Parms, DestinationPath), METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_MigratePackages_Statics::NewProp_DestinationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_MigratePackages_Statics::NewProp_DestinationPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_MigratePackages_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTools_MigratePackages_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventMigratePackages_Parms, Options), Z_Construct_UScriptStruct_FMigrationOptions, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_MigratePackages_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_MigratePackages_Statics::NewProp_Options_MetaData)) }; // 3098587726
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_MigratePackages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_MigratePackages_Statics::NewProp_PackageNamesToMigrate_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_MigratePackages_Statics::NewProp_PackageNamesToMigrate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_MigratePackages_Statics::NewProp_DestinationPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_MigratePackages_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_MigratePackages_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "Comment", "/* Migrate packages and dependencies to another folder */" },
		{ "CPP_Default_Options", "()" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Migrate packages and dependencies to another folder" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_MigratePackages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "MigratePackages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTools_MigratePackages_Statics::AssetTools_eventMigratePackages_Parms), Z_Construct_UFunction_UAssetTools_MigratePackages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_MigratePackages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_MigratePackages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_MigratePackages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_MigratePackages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTools_MigratePackages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics
	{
		struct AssetTools_eventOpenEditorForAssets_Parms
		{
			TArray<UObject*> Assets;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Assets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Assets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::NewProp_Assets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventOpenEditorForAssets_Parms, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::NewProp_Assets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::NewProp_Assets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::NewProp_Assets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::NewProp_Assets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "Comment", "/** Opens editor for assets */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use UAssetEditorSubsystem::OpenEditorForAssets instead." },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Opens editor for assets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "OpenEditorForAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::AssetTools_eventOpenEditorForAssets_Parms), Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_OpenEditorForAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTools_OpenEditorForAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_RenameAssets_Statics
	{
		struct AssetTools_eventRenameAssets_Parms
		{
			TArray<FAssetRenameData> AssetsAndNames;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetsAndNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetsAndNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetsAndNames;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::NewProp_AssetsAndNames_Inner = { "AssetsAndNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAssetRenameData, METADATA_PARAMS(nullptr, 0) }; // 3469347416
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::NewProp_AssetsAndNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::NewProp_AssetsAndNames = { "AssetsAndNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventRenameAssets_Parms, AssetsAndNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::NewProp_AssetsAndNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::NewProp_AssetsAndNames_MetaData)) }; // 3469347416
	void Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetTools_eventRenameAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetTools_eventRenameAssets_Parms), &Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::NewProp_AssetsAndNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::NewProp_AssetsAndNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "Comment", "/** Renames assets using the specified names. */" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Renames assets using the specified names." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "RenameAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::AssetTools_eventRenameAssets_Parms), Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_RenameAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTools_RenameAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics
	{
		struct AssetTools_eventRenameAssetsWithDialog_Parms
		{
			TArray<FAssetRenameData> AssetsAndNames;
			bool bAutoCheckout;
			EAssetRenameResult ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetsAndNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetsAndNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetsAndNames;
		static void NewProp_bAutoCheckout_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCheckout;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::NewProp_AssetsAndNames_Inner = { "AssetsAndNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAssetRenameData, METADATA_PARAMS(nullptr, 0) }; // 3469347416
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::NewProp_AssetsAndNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::NewProp_AssetsAndNames = { "AssetsAndNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventRenameAssetsWithDialog_Parms, AssetsAndNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::NewProp_AssetsAndNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::NewProp_AssetsAndNames_MetaData)) }; // 3469347416
	void Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::NewProp_bAutoCheckout_SetBit(void* Obj)
	{
		((AssetTools_eventRenameAssetsWithDialog_Parms*)Obj)->bAutoCheckout = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::NewProp_bAutoCheckout = { "bAutoCheckout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetTools_eventRenameAssetsWithDialog_Parms), &Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::NewProp_bAutoCheckout_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventRenameAssetsWithDialog_Parms, ReturnValue), Z_Construct_UEnum_AssetTools_EAssetRenameResult, METADATA_PARAMS(nullptr, 0) }; // 3225031986
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::NewProp_AssetsAndNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::NewProp_AssetsAndNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::NewProp_bAutoCheckout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "Comment", "/** Renames assets using the specified names. */" },
		{ "CPP_Default_bAutoCheckout", "false" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Renames assets using the specified names." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "RenameAssetsWithDialog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::AssetTools_eventRenameAssetsWithDialog_Parms), Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct AssetTools_eventRenameReferencingSoftObjectPaths_Parms
		{
			TArray<UPackage*> PackagesToCheck;
			TMap<FSoftObjectPath,FSoftObjectPath> AssetRedirectorMap;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PackagesToCheck_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackagesToCheck_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PackagesToCheck;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetRedirectorMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetRedirectorMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetRedirectorMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AssetRedirectorMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths_Statics::NewProp_PackagesToCheck_Inner = { "PackagesToCheck", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPackage, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths_Statics::NewProp_PackagesToCheck_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths_Statics::NewProp_PackagesToCheck = { "PackagesToCheck", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventRenameReferencingSoftObjectPaths_Parms, PackagesToCheck), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths_Statics::NewProp_PackagesToCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths_Statics::NewProp_PackagesToCheck_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths_Statics::NewProp_AssetRedirectorMap_ValueProp = { "AssetRedirectorMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths_Statics::NewProp_AssetRedirectorMap_Key_KeyProp = { "AssetRedirectorMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths_Statics::NewProp_AssetRedirectorMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths_Statics::NewProp_AssetRedirectorMap = { "AssetRedirectorMap", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetTools_eventRenameReferencingSoftObjectPaths_Parms, AssetRedirectorMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths_Statics::NewProp_AssetRedirectorMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths_Statics::NewProp_AssetRedirectorMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths_Statics::NewProp_PackagesToCheck_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths_Statics::NewProp_PackagesToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths_Statics::NewProp_AssetRedirectorMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths_Statics::NewProp_AssetRedirectorMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths_Statics::NewProp_AssetRedirectorMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "Comment", "/**\n\x09 * Function that renames all FSoftObjectPath object with the old asset path to the new one.\n\x09 *\n\x09 * @param PackagesToCheck Packages to check for referencing FSoftObjectPath.\n\x09 * @param AssetRedirectorMap Map from old asset path to new asset path\n\x09 */" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
		{ "ToolTip", "Function that renames all FSoftObjectPath object with the old asset path to the new one.\n\n@param PackagesToCheck Packages to check for referencing FSoftObjectPath.\n@param AssetRedirectorMap Map from old asset path to new asset path" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetTools, nullptr, "RenameReferencingSoftObjectPaths", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths_Statics::AssetTools_eventRenameReferencingSoftObjectPaths_Parms), Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetTools);
	UClass* Z_Construct_UClass_UAssetTools_NoRegister()
	{
		return UAssetTools::StaticClass();
	}
	struct Z_Construct_UClass_UAssetTools_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetTools_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAssetTools_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetTools_BeginAdvancedCopyPackages, "BeginAdvancedCopyPackages" }, // 1356171630
		{ &Z_Construct_UFunction_UAssetTools_CreateAsset, "CreateAsset" }, // 4063080538
		{ &Z_Construct_UFunction_UAssetTools_CreateAssetWithDialog, "CreateAssetWithDialog" }, // 886617503
		{ &Z_Construct_UFunction_UAssetTools_CreateUniqueAssetName, "CreateUniqueAssetName" }, // 1768784324
		{ &Z_Construct_UFunction_UAssetTools_DiffAgainstDepot, "DiffAgainstDepot" }, // 953501595
		{ &Z_Construct_UFunction_UAssetTools_DiffAssets, "DiffAssets" }, // 1485004164
		{ &Z_Construct_UFunction_UAssetTools_DuplicateAsset, "DuplicateAsset" }, // 3182789582
		{ &Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialog, "DuplicateAssetWithDialog" }, // 1295336296
		{ &Z_Construct_UFunction_UAssetTools_DuplicateAssetWithDialogAndTitle, "DuplicateAssetWithDialogAndTitle" }, // 3275114584
		{ &Z_Construct_UFunction_UAssetTools_ExportAssets, "ExportAssets" }, // 1743558468
		{ &Z_Construct_UFunction_UAssetTools_ExportAssetsWithDialog, "ExportAssetsWithDialog" }, // 706758977
		{ &Z_Construct_UFunction_UAssetTools_FindSoftReferencesToObject, "FindSoftReferencesToObject" }, // 1420003121
		{ &Z_Construct_UFunction_UAssetTools_ImportAssetsAutomated, "ImportAssetsAutomated" }, // 3185336668
		{ &Z_Construct_UFunction_UAssetTools_ImportAssetsWithDialog, "ImportAssetsWithDialog" }, // 3154811052
		{ &Z_Construct_UFunction_UAssetTools_ImportAssetTasks, "ImportAssetTasks" }, // 1467852486
		{ &Z_Construct_UFunction_UAssetTools_MigratePackages, "MigratePackages" }, // 525546828
		{ &Z_Construct_UFunction_UAssetTools_OpenEditorForAssets, "OpenEditorForAssets" }, // 929922311
		{ &Z_Construct_UFunction_UAssetTools_RenameAssets, "RenameAssets" }, // 3111977384
		{ &Z_Construct_UFunction_UAssetTools_RenameAssetsWithDialog, "RenameAssetsWithDialog" }, // 270529154
		{ &Z_Construct_UFunction_UAssetTools_RenameReferencingSoftObjectPaths, "RenameReferencingSoftObjectPaths" }, // 1835393750
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetTools_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetTools_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAssetTools>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetTools_Statics::ClassParams = {
		&UAssetTools::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetTools_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetTools_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetTools()
	{
		if (!Z_Registration_Info_UClass_UAssetTools.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetTools.OuterSingleton, Z_Construct_UClass_UAssetTools_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetTools.OuterSingleton;
	}
	template<> ASSETTOOLS_API UClass* StaticClass<UAssetTools>()
	{
		return UAssetTools::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetTools);
	UAssetTools::~UAssetTools() {}
	DEFINE_FUNCTION(UAssetToolsHelpers::execGetAssetTools)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IAssetTools>*)Z_Param__Result=UAssetToolsHelpers::GetAssetTools();
		P_NATIVE_END;
	}
	void UAssetToolsHelpers::StaticRegisterNativesUAssetToolsHelpers()
	{
		UClass* Class = UAssetToolsHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAssetTools", &UAssetToolsHelpers::execGetAssetTools },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools_Statics
	{
		struct AssetToolsHelpers_eventGetAssetTools_Parms
		{
			TScriptInterface<IAssetTools> ReturnValue;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetToolsHelpers_eventGetAssetTools_Parms, ReturnValue), Z_Construct_UClass_UAssetTools_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetToolsHelpers, nullptr, "GetAssetTools", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools_Statics::AssetToolsHelpers_eventGetAssetTools_Parms), Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetToolsHelpers);
	UClass* Z_Construct_UClass_UAssetToolsHelpers_NoRegister()
	{
		return UAssetToolsHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UAssetToolsHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetToolsHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAssetToolsHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetToolsHelpers_GetAssetTools, "GetAssetTools" }, // 2428027342
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetToolsHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IAssetTools.h" },
		{ "ModuleRelativePath", "Public/IAssetTools.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetToolsHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetToolsHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetToolsHelpers_Statics::ClassParams = {
		&UAssetToolsHelpers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetToolsHelpers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetToolsHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetToolsHelpers()
	{
		if (!Z_Registration_Info_UClass_UAssetToolsHelpers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetToolsHelpers.OuterSingleton, Z_Construct_UClass_UAssetToolsHelpers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetToolsHelpers.OuterSingleton;
	}
	template<> ASSETTOOLS_API UClass* StaticClass<UAssetToolsHelpers>()
	{
		return UAssetToolsHelpers::StaticClass();
	}
	UAssetToolsHelpers::UAssetToolsHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetToolsHelpers);
	UAssetToolsHelpers::~UAssetToolsHelpers() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_Statics::EnumInfo[] = {
		{ EAssetClassAction_StaticEnum, TEXT("EAssetClassAction"), &Z_Registration_Info_UEnum_EAssetClassAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1128947710U) },
		{ EAssetRenameResult_StaticEnum, TEXT("EAssetRenameResult"), &Z_Registration_Info_UEnum_EAssetRenameResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3225031986U) },
		{ ERedirectFixupMode_StaticEnum, TEXT("ERedirectFixupMode"), &Z_Registration_Info_UEnum_ERedirectFixupMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 204411475U) },
		{ EAssetMigrationConflict_StaticEnum, TEXT("EAssetMigrationConflict"), &Z_Registration_Info_UEnum_EAssetMigrationConflict, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1706615460U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_Statics::ScriptStructInfo[] = {
		{ FAssetRenameData::StaticStruct, Z_Construct_UScriptStruct_FAssetRenameData_Statics::NewStructOps, TEXT("AssetRenameData"), &Z_Registration_Info_UScriptStruct_AssetRenameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetRenameData), 3469347416U) },
		{ FAdvancedCopyParams::StaticStruct, Z_Construct_UScriptStruct_FAdvancedCopyParams_Statics::NewStructOps, TEXT("AdvancedCopyParams"), &Z_Registration_Info_UScriptStruct_AdvancedCopyParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAdvancedCopyParams), 3227815390U) },
		{ FMigrationOptions::StaticStruct, Z_Construct_UScriptStruct_FMigrationOptions_Statics::NewStructOps, TEXT("MigrationOptions"), &Z_Registration_Info_UScriptStruct_MigrationOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMigrationOptions), 3098587726U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetTools, UAssetTools::StaticClass, TEXT("UAssetTools"), &Z_Registration_Info_UClass_UAssetTools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetTools), 609168387U) },
		{ Z_Construct_UClass_UAssetToolsHelpers, UAssetToolsHelpers::StaticClass, TEXT("UAssetToolsHelpers"), &Z_Registration_Info_UClass_UAssetToolsHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetToolsHelpers), 941787199U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_2749274334(TEXT("/Script/AssetTools"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
