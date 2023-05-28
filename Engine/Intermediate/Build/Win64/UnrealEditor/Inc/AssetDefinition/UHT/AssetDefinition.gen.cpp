// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition() {}
// Cross Module References
	ASSETDEFINITION_API UClass* Z_Construct_UClass_UAssetDefinition();
	ASSETDEFINITION_API UClass* Z_Construct_UClass_UAssetDefinition_NoRegister();
	ASSETDEFINITION_API UEnum* Z_Construct_UEnum_AssetDefinition_EAssetActivationMethod();
	ASSETDEFINITION_API UEnum* Z_Construct_UEnum_AssetDefinition_EAssetCommandResult();
	ASSETDEFINITION_API UEnum* Z_Construct_UEnum_AssetDefinition_EAssetOpenMethod();
	ASSETDEFINITION_API UScriptStruct* Z_Construct_UScriptStruct_FRevisionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	UPackage* Z_Construct_UPackage__Script_AssetDefinition();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAssetActivationMethod;
	static UEnum* EAssetActivationMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAssetActivationMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAssetActivationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AssetDefinition_EAssetActivationMethod, (UObject*)Z_Construct_UPackage__Script_AssetDefinition(), TEXT("EAssetActivationMethod"));
		}
		return Z_Registration_Info_UEnum_EAssetActivationMethod.OuterSingleton;
	}
	template<> ASSETDEFINITION_API UEnum* StaticEnum<EAssetActivationMethod>()
	{
		return EAssetActivationMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_AssetDefinition_EAssetActivationMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AssetDefinition_EAssetActivationMethod_Statics::Enumerators[] = {
		{ "EAssetActivationMethod::DoubleClicked", (int64)EAssetActivationMethod::DoubleClicked },
		{ "EAssetActivationMethod::Opened", (int64)EAssetActivationMethod::Opened },
		{ "EAssetActivationMethod::Previewed", (int64)EAssetActivationMethod::Previewed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AssetDefinition_EAssetActivationMethod_Statics::Enum_MetaDataParams[] = {
		{ "DoubleClicked.Name", "EAssetActivationMethod::DoubleClicked" },
		{ "ModuleRelativePath", "Public/AssetDefinition.h" },
		{ "Opened.Name", "EAssetActivationMethod::Opened" },
		{ "Previewed.Name", "EAssetActivationMethod::Previewed" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AssetDefinition_EAssetActivationMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AssetDefinition,
		nullptr,
		"EAssetActivationMethod",
		"EAssetActivationMethod",
		Z_Construct_UEnum_AssetDefinition_EAssetActivationMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AssetDefinition_EAssetActivationMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AssetDefinition_EAssetActivationMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AssetDefinition_EAssetActivationMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AssetDefinition_EAssetActivationMethod()
	{
		if (!Z_Registration_Info_UEnum_EAssetActivationMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAssetActivationMethod.InnerSingleton, Z_Construct_UEnum_AssetDefinition_EAssetActivationMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAssetActivationMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAssetCommandResult;
	static UEnum* EAssetCommandResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAssetCommandResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAssetCommandResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AssetDefinition_EAssetCommandResult, (UObject*)Z_Construct_UPackage__Script_AssetDefinition(), TEXT("EAssetCommandResult"));
		}
		return Z_Registration_Info_UEnum_EAssetCommandResult.OuterSingleton;
	}
	template<> ASSETDEFINITION_API UEnum* StaticEnum<EAssetCommandResult>()
	{
		return EAssetCommandResult_StaticEnum();
	}
	struct Z_Construct_UEnum_AssetDefinition_EAssetCommandResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AssetDefinition_EAssetCommandResult_Statics::Enumerators[] = {
		{ "EAssetCommandResult::Handled", (int64)EAssetCommandResult::Handled },
		{ "EAssetCommandResult::Unhandled", (int64)EAssetCommandResult::Unhandled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AssetDefinition_EAssetCommandResult_Statics::Enum_MetaDataParams[] = {
		{ "Handled.Name", "EAssetCommandResult::Handled" },
		{ "ModuleRelativePath", "Public/AssetDefinition.h" },
		{ "Unhandled.Name", "EAssetCommandResult::Unhandled" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AssetDefinition_EAssetCommandResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AssetDefinition,
		nullptr,
		"EAssetCommandResult",
		"EAssetCommandResult",
		Z_Construct_UEnum_AssetDefinition_EAssetCommandResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AssetDefinition_EAssetCommandResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AssetDefinition_EAssetCommandResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AssetDefinition_EAssetCommandResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AssetDefinition_EAssetCommandResult()
	{
		if (!Z_Registration_Info_UEnum_EAssetCommandResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAssetCommandResult.InnerSingleton, Z_Construct_UEnum_AssetDefinition_EAssetCommandResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAssetCommandResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAssetOpenMethod;
	static UEnum* EAssetOpenMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAssetOpenMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAssetOpenMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AssetDefinition_EAssetOpenMethod, (UObject*)Z_Construct_UPackage__Script_AssetDefinition(), TEXT("EAssetOpenMethod"));
		}
		return Z_Registration_Info_UEnum_EAssetOpenMethod.OuterSingleton;
	}
	template<> ASSETDEFINITION_API UEnum* StaticEnum<EAssetOpenMethod>()
	{
		return EAssetOpenMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_AssetDefinition_EAssetOpenMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AssetDefinition_EAssetOpenMethod_Statics::Enumerators[] = {
		{ "EAssetOpenMethod::Edit", (int64)EAssetOpenMethod::Edit },
		{ "EAssetOpenMethod::View", (int64)EAssetOpenMethod::View },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AssetDefinition_EAssetOpenMethod_Statics::Enum_MetaDataParams[] = {
		{ "Edit.Name", "EAssetOpenMethod::Edit" },
		{ "ModuleRelativePath", "Public/AssetDefinition.h" },
		{ "View.Name", "EAssetOpenMethod::View" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AssetDefinition_EAssetOpenMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AssetDefinition,
		nullptr,
		"EAssetOpenMethod",
		"EAssetOpenMethod",
		Z_Construct_UEnum_AssetDefinition_EAssetOpenMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AssetDefinition_EAssetOpenMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AssetDefinition_EAssetOpenMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AssetDefinition_EAssetOpenMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AssetDefinition_EAssetOpenMethod()
	{
		if (!Z_Registration_Info_UEnum_EAssetOpenMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAssetOpenMethod.InnerSingleton, Z_Construct_UEnum_AssetDefinition_EAssetOpenMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAssetOpenMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RevisionInfo;
class UScriptStruct* FRevisionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RevisionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RevisionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRevisionInfo, (UObject*)Z_Construct_UPackage__Script_AssetDefinition(), TEXT("RevisionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RevisionInfo.OuterSingleton;
}
template<> ASSETDEFINITION_API UScriptStruct* StaticStruct<FRevisionInfo>()
{
	return FRevisionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRevisionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Revision_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Revision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Changelist_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Changelist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Date_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Date;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRevisionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Revision information for a single revision of a file in source control */" },
		{ "ModuleRelativePath", "Public/AssetDefinition.h" },
		{ "ToolTip", "Revision information for a single revision of a file in source control" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRevisionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRevisionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRevisionInfo_Statics::NewProp_Revision_MetaData[] = {
		{ "Category", "Asset Revision" },
		{ "ModuleRelativePath", "Public/AssetDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRevisionInfo_Statics::NewProp_Revision = { "Revision", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRevisionInfo, Revision), METADATA_PARAMS(Z_Construct_UScriptStruct_FRevisionInfo_Statics::NewProp_Revision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRevisionInfo_Statics::NewProp_Revision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRevisionInfo_Statics::NewProp_Changelist_MetaData[] = {
		{ "Category", "Asset Revision" },
		{ "ModuleRelativePath", "Public/AssetDefinition.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRevisionInfo_Statics::NewProp_Changelist = { "Changelist", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRevisionInfo, Changelist), METADATA_PARAMS(Z_Construct_UScriptStruct_FRevisionInfo_Statics::NewProp_Changelist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRevisionInfo_Statics::NewProp_Changelist_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRevisionInfo_Statics::NewProp_Date_MetaData[] = {
		{ "Category", "Asset Revision" },
		{ "ModuleRelativePath", "Public/AssetDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRevisionInfo_Statics::NewProp_Date = { "Date", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRevisionInfo, Date), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FRevisionInfo_Statics::NewProp_Date_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRevisionInfo_Statics::NewProp_Date_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRevisionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRevisionInfo_Statics::NewProp_Revision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRevisionInfo_Statics::NewProp_Changelist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRevisionInfo_Statics::NewProp_Date,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRevisionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetDefinition,
		nullptr,
		&NewStructOps,
		"RevisionInfo",
		sizeof(FRevisionInfo),
		alignof(FRevisionInfo),
		Z_Construct_UScriptStruct_FRevisionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRevisionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRevisionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRevisionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRevisionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_RevisionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RevisionInfo.InnerSingleton, Z_Construct_UScriptStruct_FRevisionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RevisionInfo.InnerSingleton;
	}
	void UAssetDefinition::StaticRegisterNativesUAssetDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition);
	UClass* Z_Construct_UClass_UAssetDefinition_NoRegister()
	{
		return UAssetDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetDefinition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Asset Definitions represent top level assets that are known to the editor.\n *\n * -- Conversion Guide --\n * Asset Definitions (UAssetDefinitionDefault) are a replacement to the Asset Actions (FAssetTypeActions_Base) system.\n * The reasons for the replacement are multitude, but the highlights are,\n * \n * Asset Definitions no longer do things like provide a GetActions function, the replacement for this is you using the\n * new UToolMenu extension system to register actions for the assets, an example is in this document.  A lot of the\n * APIs have been tweaked and cleaned up to make them easier to upgrade in the future, a lot of the original API for\n * Asset Actions were added one at a time, and several of them could be combined in simpler ways.  Another benefit is\n * soon we might be able to make the AssetTools module no longer a circular dependency.\n * \n * All of this is in service to what was previously impossible.  To be able to right click on assets in the Content\n * Browser and NOT have the asset and every asset it knew about load on right click, this previous impossible to escape\n * byproduct slowed down working in the editor constantly because things that didn\xe2\x80\x99t require opening the asset became\n * necessary, and some assets could load *A LOT* of other content.\n * \n * Unfortunately I can\xe2\x80\x99t prevent people from backsliding, at least for now.  Even after fixing the APIs to not require\n * loading, people need to be cleverer (Use Asset Tag Data) in how they provide right click options for assets.  But to\n * help, you can run the editor with -WarnIfAssetsLoaded on the command line.  I\xe2\x80\x99ve added a new utility class to the\n * engine called, FWarnIfAssetsLoadedInScope, it causes notifications with callstacks to be popped up telling you what\n * code is actually responsible for any asset loads within earmarked scopes that should NOT be loading assets.\n * \n * Backwards Compatibility\n * The new system is fully* backwards compatible.  Asset Definitions are registered with the old Asset Tools\n * (IAssetTools::RegisterAssetTypeActions) this is done through the   FAssetDefinitionProxy.  Similarly, Asset Actions\n * (FAssetTypeActions_Base) are registered with the Asset Definition Registry with an Asset Definition Proxy (UAssetDefinition_AssetTypeActionsProxy).\n * \n * When converting Asset Actions to AssetDefinitions and you\xe2\x80\x99re trying to understand how to map a specific function to\n * the new system it can be helpful to look at the equivalent function in FAssetDefinitionProxy.\n * \n * IMPORTANT - You are no longer allowed to register multiple Asset Definitions for the same Asset Class.  There were a\n * very small number of people doing this to do some tricky things with filters which are no longer required.  The new\n * system will yell at you if you do this.\n * \n * \n * Registration\n * Registering your Asset Definition is no longer required like it was for Asset Actions.  The UObjects are automatically\n * registered with the new Asset Definition Registry (UAssetDefinitionRegistry).\n * \n * You no longer need to register Categories for your Asset Definition, like you had to do with Asset Actions.  Your\n * Assets categories are just an array of FAssetCategoryPath.  They have accelerator constructors to just take an FText\n * for the main category, and the sub category (if there is one) which replaces the whole \xe2\x80\x9cGetSubMenus\xe2\x80\x9d function from\n * Asset Actions.  The new version can go further, with multiple sub menus and categories, but the UI isn\xe2\x80\x99t set up for it yet.\n * \n * GetActions\n * The function GetActions no longer exists, the replacement is to somewhere put a self registering callback to register\n * the UToolMenu extension, but you can just put it at the bottom of your .cpp for your AssetDefinition, that is where\n * the others are.  The template goes something like this,\n * \n * // Menu Extensions\n * //--------------------------------------------------------------------\n * \n * \n * namespace MenuExtension_YOUR_CLASS_TYPE\n * {\n *   static void ExecuteActionForYourType(const FToolMenuContext& InContext)\n *   {\n *      const UContentBrowserAssetContextMenuContext* Context = UContentBrowserAssetContextMenuContext::FindContextWithAssets(InContext);\n *     \n *      for (YOUR_CLASS_TYPE* LoadedInstance : Context->LoadSelectedObjects<YOUR_CLASS_TYPE>())\n *      {\n *      }\n *   }\n *  \n *   static FDelayedAutoRegisterHelper DelayedAutoRegister(EDelayedRegisterRunPhase::EndOfEngineInit, []{\n *      UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateLambda([]()\n *      {\n *         FToolMenuOwnerScoped OwnerScoped(UE_MODULE_NAME);\n *         UToolMenu* Menu = UE::ContentBrowser::ExtendToolMenu_AssetContextMenu(YOUR_CLASS_TYPE::StaticClass());\n *     \n *         FToolMenuSection& Section = Menu->FindOrAddSection(\"GetAssetActions\");\n *         Section.AddDynamicEntry(NAME_None, FNewToolMenuSectionDelegate::CreateLambda([](FToolMenuSection& InSection)\n *         {\n *            const TAttribute<FText> Label = LOCTEXT(\"YOUR_ASSET_TYPE_ExecuteActionForYourType\", \"Execute Action For Your Type\");\n *            const TAttribute<FText> ToolTip = LOCTEXT(\"YOUR_ASSET_TYPE_ExecuteActionForYourTypeTooltip\", \"This will execute the action for your type.\");\n *            const FSlateIcon Icon = FSlateIcon();\n * \n * \n *            FToolUIAction UIAction;\n *            UIAction.ExecuteAction = FToolMenuExecuteAction::CreateStatic(&ExecuteActionForYourType);\n *            InSection.AddMenuEntry(\"YOUR_ASSET_TYPE_ExecuteActionForYourType\", Label, ToolTip, Icon, UIAction);\n *         ));\n *      }));\n *   });\n * }\n * \n * It\xe2\x80\x99s very important that you do not load the asset in your CanExecuteAction callback or in this self callback, you should save that until you finally get Executed.\n * If you\xe2\x80\x99re looking for examples, there are tons you'll find by searching for \xe2\x80\x9cnamespace MenuExtension_\xe2\x80\x9d.\n * \n * GetFilterName & BuildBackendFilter\n * These functions have been replaced by BuildFilters. The new function is great, you can provide an array of filters that are available with this asset.  So for example,\n * Blueprints provide a filter for Blueprint Class, but they also provide the filters for Blueprint Interface, Blueprint Macro Library and Blueprint Function library,\n * which are all UBlueprint assets, but differ based on Asset Tag data.\n */" },
		{ "IncludePath", "AssetDefinition.h" },
		{ "ModuleRelativePath", "Public/AssetDefinition.h" },
		{ "ToolTip", "Asset Definitions represent top level assets that are known to the editor.\n\n-- Conversion Guide --\nAsset Definitions (UAssetDefinitionDefault) are a replacement to the Asset Actions (FAssetTypeActions_Base) system.\nThe reasons for the replacement are multitude, but the highlights are,\n\nAsset Definitions no longer do things like provide a GetActions function, the replacement for this is you using the\nnew UToolMenu extension system to register actions for the assets, an example is in this document.  A lot of the\nAPIs have been tweaked and cleaned up to make them easier to upgrade in the future, a lot of the original API for\nAsset Actions were added one at a time, and several of them could be combined in simpler ways.  Another benefit is\nsoon we might be able to make the AssetTools module no longer a circular dependency.\n\nAll of this is in service to what was previously impossible.  To be able to right click on assets in the Content\nBrowser and NOT have the asset and every asset it knew about load on right click, this previous impossible to escape\nbyproduct slowed down working in the editor constantly because things that didn\xe2\x80\x99t require opening the asset became\nnecessary, and some assets could load *A LOT* of other content.\n\nUnfortunately I can\xe2\x80\x99t prevent people from backsliding, at least for now.  Even after fixing the APIs to not require\nloading, people need to be cleverer (Use Asset Tag Data) in how they provide right click options for assets.  But to\nhelp, you can run the editor with -WarnIfAssetsLoaded on the command line.  I\xe2\x80\x99ve added a new utility class to the\nengine called, FWarnIfAssetsLoadedInScope, it causes notifications with callstacks to be popped up telling you what\ncode is actually responsible for any asset loads within earmarked scopes that should NOT be loading assets.\n\nBackwards Compatibility\nThe new system is fully* backwards compatible.  Asset Definitions are registered with the old Asset Tools\n(IAssetTools::RegisterAssetTypeActions) this is done through the   FAssetDefinitionProxy.  Similarly, Asset Actions\n(FAssetTypeActions_Base) are registered with the Asset Definition Registry with an Asset Definition Proxy (UAssetDefinition_AssetTypeActionsProxy).\n\nWhen converting Asset Actions to AssetDefinitions and you\xe2\x80\x99re trying to understand how to map a specific function to\nthe new system it can be helpful to look at the equivalent function in FAssetDefinitionProxy.\n\nIMPORTANT - You are no longer allowed to register multiple Asset Definitions for the same Asset Class.  There were a\nvery small number of people doing this to do some tricky things with filters which are no longer required.  The new\nsystem will yell at you if you do this.\n\n\nRegistration\nRegistering your Asset Definition is no longer required like it was for Asset Actions.  The UObjects are automatically\nregistered with the new Asset Definition Registry (UAssetDefinitionRegistry).\n\nYou no longer need to register Categories for your Asset Definition, like you had to do with Asset Actions.  Your\nAssets categories are just an array of FAssetCategoryPath.  They have accelerator constructors to just take an FText\nfor the main category, and the sub category (if there is one) which replaces the whole \xe2\x80\x9cGetSubMenus\xe2\x80\x9d function from\nAsset Actions.  The new version can go further, with multiple sub menus and categories, but the UI isn\xe2\x80\x99t set up for it yet.\n\nGetActions\nThe function GetActions no longer exists, the replacement is to somewhere put a self registering callback to register\nthe UToolMenu extension, but you can just put it at the bottom of your .cpp for your AssetDefinition, that is where\nthe others are.  The template goes something like this,\n\n// Menu Extensions\n//--------------------------------------------------------------------\n\n\nnamespace MenuExtension_YOUR_CLASS_TYPE\n{\n  static void ExecuteActionForYourType(const FToolMenuContext& InContext)\n  {\n     const UContentBrowserAssetContextMenuContext* Context = UContentBrowserAssetContextMenuContext::FindContextWithAssets(InContext);\n\n     for (YOUR_CLASS_TYPE* LoadedInstance : Context->LoadSelectedObjects<YOUR_CLASS_TYPE>())\n     {\n     }\n  }\n\n  static FDelayedAutoRegisterHelper DelayedAutoRegister(EDelayedRegisterRunPhase::EndOfEngineInit, []{\n     UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateLambda([]()\n     {\n        FToolMenuOwnerScoped OwnerScoped(UE_MODULE_NAME);\n        UToolMenu* Menu = UE::ContentBrowser::ExtendToolMenu_AssetContextMenu(YOUR_CLASS_TYPE::StaticClass());\n\n        FToolMenuSection& Section = Menu->FindOrAddSection(\"GetAssetActions\");\n        Section.AddDynamicEntry(NAME_None, FNewToolMenuSectionDelegate::CreateLambda([](FToolMenuSection& InSection)\n        {\n           const TAttribute<FText> Label = LOCTEXT(\"YOUR_ASSET_TYPE_ExecuteActionForYourType\", \"Execute Action For Your Type\");\n           const TAttribute<FText> ToolTip = LOCTEXT(\"YOUR_ASSET_TYPE_ExecuteActionForYourTypeTooltip\", \"This will execute the action for your type.\");\n           const FSlateIcon Icon = FSlateIcon();\n\n\n           FToolUIAction UIAction;\n           UIAction.ExecuteAction = FToolMenuExecuteAction::CreateStatic(&ExecuteActionForYourType);\n           InSection.AddMenuEntry(\"YOUR_ASSET_TYPE_ExecuteActionForYourType\", Label, ToolTip, Icon, UIAction);\n        ));\n     }));\n  });\n}\n\nIt\xe2\x80\x99s very important that you do not load the asset in your CanExecuteAction callback or in this self callback, you should save that until you finally get Executed.\nIf you\xe2\x80\x99re looking for examples, there are tons you'll find by searching for \xe2\x80\x9cnamespace MenuExtension_\xe2\x80\x9d.\n\nGetFilterName & BuildBackendFilter\nThese functions have been replaced by BuildFilters. The new function is great, you can provide an array of filters that are available with this asset.  So for example,\nBlueprints provide a filter for Blueprint Class, but they also provide the filters for Blueprint Interface, Blueprint Macro Library and Blueprint Function library,\nwhich are all UBlueprint assets, but differ based on Asset Tag data." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_Statics::ClassParams = {
		&UAssetDefinition::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition.OuterSingleton, Z_Construct_UClass_UAssetDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition.OuterSingleton;
	}
	template<> ASSETDEFINITION_API UClass* StaticClass<UAssetDefinition>()
	{
		return UAssetDefinition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition);
	UAssetDefinition::~UAssetDefinition() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_Statics::EnumInfo[] = {
		{ EAssetActivationMethod_StaticEnum, TEXT("EAssetActivationMethod"), &Z_Registration_Info_UEnum_EAssetActivationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3221662049U) },
		{ EAssetCommandResult_StaticEnum, TEXT("EAssetCommandResult"), &Z_Registration_Info_UEnum_EAssetCommandResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1114060220U) },
		{ EAssetOpenMethod_StaticEnum, TEXT("EAssetOpenMethod"), &Z_Registration_Info_UEnum_EAssetOpenMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1110059907U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_Statics::ScriptStructInfo[] = {
		{ FRevisionInfo::StaticStruct, Z_Construct_UScriptStruct_FRevisionInfo_Statics::NewStructOps, TEXT("RevisionInfo"), &Z_Registration_Info_UScriptStruct_RevisionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRevisionInfo), 2685632379U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition, UAssetDefinition::StaticClass, TEXT("UAssetDefinition"), &Z_Registration_Info_UClass_UAssetDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition), 2012265530U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_3854926943(TEXT("/Script/AssetDefinition"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
