// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineHotfixManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineHotfixManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	HOTFIX_API UClass* Z_Construct_UClass_UOnlineHotfixManager();
	HOTFIX_API UClass* Z_Construct_UClass_UOnlineHotfixManager_NoRegister();
	HOTFIX_API UEnum* Z_Construct_UEnum_Hotfix_EHotfixResult();
	UPackage* Z_Construct_UPackage__Script_Hotfix();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHotfixResult;
	static UEnum* EHotfixResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHotfixResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHotfixResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Hotfix_EHotfixResult, (UObject*)Z_Construct_UPackage__Script_Hotfix(), TEXT("EHotfixResult"));
		}
		return Z_Registration_Info_UEnum_EHotfixResult.OuterSingleton;
	}
	template<> HOTFIX_API UEnum* StaticEnum<EHotfixResult>()
	{
		return EHotfixResult_StaticEnum();
	}
	struct Z_Construct_UEnum_Hotfix_EHotfixResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Hotfix_EHotfixResult_Statics::Enumerators[] = {
		{ "EHotfixResult::Failed", (int64)EHotfixResult::Failed },
		{ "EHotfixResult::Success", (int64)EHotfixResult::Success },
		{ "EHotfixResult::SuccessNoChange", (int64)EHotfixResult::SuccessNoChange },
		{ "EHotfixResult::SuccessNeedsReload", (int64)EHotfixResult::SuccessNeedsReload },
		{ "EHotfixResult::SuccessNeedsRelaunch", (int64)EHotfixResult::SuccessNeedsRelaunch },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Hotfix_EHotfixResult_Statics::Enum_MetaDataParams[] = {
		{ "Failed.Comment", "/** Failed to apply the hotfix */" },
		{ "Failed.Name", "EHotfixResult::Failed" },
		{ "Failed.ToolTip", "Failed to apply the hotfix" },
		{ "ModuleRelativePath", "Public/OnlineHotfixManager.h" },
		{ "Success.Comment", "/** Hotfix succeeded and is ready to go */" },
		{ "Success.Name", "EHotfixResult::Success" },
		{ "Success.ToolTip", "Hotfix succeeded and is ready to go" },
		{ "SuccessNeedsRelaunch.Comment", "/** Hotfix succeeded and requires the process restarted to take effect */" },
		{ "SuccessNeedsRelaunch.Name", "EHotfixResult::SuccessNeedsRelaunch" },
		{ "SuccessNeedsRelaunch.ToolTip", "Hotfix succeeded and requires the process restarted to take effect" },
		{ "SuccessNeedsReload.Comment", "/** Hotfix succeeded and requires the current level to be reloaded to take effect */" },
		{ "SuccessNeedsReload.Name", "EHotfixResult::SuccessNeedsReload" },
		{ "SuccessNeedsReload.ToolTip", "Hotfix succeeded and requires the current level to be reloaded to take effect" },
		{ "SuccessNoChange.Comment", "/** Hotfix process succeeded but there were no changes applied */" },
		{ "SuccessNoChange.Name", "EHotfixResult::SuccessNoChange" },
		{ "SuccessNoChange.ToolTip", "Hotfix process succeeded but there were no changes applied" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Hotfix_EHotfixResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Hotfix,
		nullptr,
		"EHotfixResult",
		"EHotfixResult",
		Z_Construct_UEnum_Hotfix_EHotfixResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Hotfix_EHotfixResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Hotfix_EHotfixResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Hotfix_EHotfixResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Hotfix_EHotfixResult()
	{
		if (!Z_Registration_Info_UEnum_EHotfixResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHotfixResult.InnerSingleton, Z_Construct_UEnum_Hotfix_EHotfixResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHotfixResult.InnerSingleton;
	}
	DEFINE_FUNCTION(UOnlineHotfixManager::execStartHotfixProcess)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartHotfixProcess();
		P_NATIVE_END;
	}
	void UOnlineHotfixManager::StaticRegisterNativesUOnlineHotfixManager()
	{
		UClass* Class = UOnlineHotfixManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartHotfixProcess", &UOnlineHotfixManager::execStartHotfixProcess },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineHotfixManager_StartHotfixProcess_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineHotfixManager_StartHotfixProcess_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hotfix" },
		{ "Comment", "/** Starts the fetching of hotfix data from the OnlineTitleFileInterface that is registered for this game */" },
		{ "ModuleRelativePath", "Public/OnlineHotfixManager.h" },
		{ "ToolTip", "Starts the fetching of hotfix data from the OnlineTitleFileInterface that is registered for this game" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineHotfixManager_StartHotfixProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineHotfixManager, nullptr, "StartHotfixProcess", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineHotfixManager_StartHotfixProcess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineHotfixManager_StartHotfixProcess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineHotfixManager_StartHotfixProcess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOnlineHotfixManager_StartHotfixProcess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnlineHotfixManager);
	UClass* Z_Construct_UClass_UOnlineHotfixManager_NoRegister()
	{
		return UOnlineHotfixManager::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineHotfixManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OSSName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSSName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HotfixManagerClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HotfixManagerClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugPrefix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DebugPrefix;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetsHotfixedFromIniFiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetsHotfixedFromIniFiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetsHotfixedFromIniFiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineHotfixManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Hotfix,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineHotfixManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineHotfixManager_StartHotfixProcess, "StartHotfixProcess" }, // 2075424792
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineHotfixManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This class manages the downloading and application of hotfix data\n * Hotfix data is a set of non-executable files downloaded and applied to the game.\n * The base implementation knows how to handle INI, PAK, and locres files.\n * NOTE: Each INI/PAK file must be prefixed by the platform name they are targeted at\n */" },
		{ "IncludePath", "OnlineHotfixManager.h" },
		{ "ModuleRelativePath", "Public/OnlineHotfixManager.h" },
		{ "ToolTip", "This class manages the downloading and application of hotfix data\nHotfix data is a set of non-executable files downloaded and applied to the game.\nThe base implementation knows how to handle INI, PAK, and locres files.\nNOTE: Each INI/PAK file must be prefixed by the platform name they are targeted at" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineHotfixManager_Statics::NewProp_OSSName_MetaData[] = {
		{ "Comment", "/** Tells the hotfix manager which OSS to use. Uses the default if empty */" },
		{ "ModuleRelativePath", "Public/OnlineHotfixManager.h" },
		{ "ToolTip", "Tells the hotfix manager which OSS to use. Uses the default if empty" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineHotfixManager_Statics::NewProp_OSSName = { "OSSName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineHotfixManager, OSSName), METADATA_PARAMS(Z_Construct_UClass_UOnlineHotfixManager_Statics::NewProp_OSSName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineHotfixManager_Statics::NewProp_OSSName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineHotfixManager_Statics::NewProp_HotfixManagerClassName_MetaData[] = {
		{ "Comment", "/** Tells the factory method which class to contruct */" },
		{ "ModuleRelativePath", "Public/OnlineHotfixManager.h" },
		{ "ToolTip", "Tells the factory method which class to contruct" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineHotfixManager_Statics::NewProp_HotfixManagerClassName = { "HotfixManagerClassName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineHotfixManager, HotfixManagerClassName), METADATA_PARAMS(Z_Construct_UClass_UOnlineHotfixManager_Statics::NewProp_HotfixManagerClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineHotfixManager_Statics::NewProp_HotfixManagerClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineHotfixManager_Statics::NewProp_DebugPrefix_MetaData[] = {
		{ "Comment", "/** Used to prevent development work from interfering with playtests, etc. */" },
		{ "ModuleRelativePath", "Public/OnlineHotfixManager.h" },
		{ "ToolTip", "Used to prevent development work from interfering with playtests, etc." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineHotfixManager_Statics::NewProp_DebugPrefix = { "DebugPrefix", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineHotfixManager, DebugPrefix), METADATA_PARAMS(Z_Construct_UClass_UOnlineHotfixManager_Statics::NewProp_DebugPrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineHotfixManager_Statics::NewProp_DebugPrefix_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOnlineHotfixManager_Statics::NewProp_AssetsHotfixedFromIniFiles_Inner = { "AssetsHotfixedFromIniFiles", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineHotfixManager_Statics::NewProp_AssetsHotfixedFromIniFiles_MetaData[] = {
		{ "Comment", "/** Array of objects that we're forcing to remain resident because we've applied live hotfixes and won't get an\n\x09    opportunity to reapply changes if the object is evicted from memory. */" },
		{ "ModuleRelativePath", "Public/OnlineHotfixManager.h" },
		{ "ToolTip", "Array of objects that we're forcing to remain resident because we've applied live hotfixes and won't get an\n          opportunity to reapply changes if the object is evicted from memory." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlineHotfixManager_Statics::NewProp_AssetsHotfixedFromIniFiles = { "AssetsHotfixedFromIniFiles", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOnlineHotfixManager, AssetsHotfixedFromIniFiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineHotfixManager_Statics::NewProp_AssetsHotfixedFromIniFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineHotfixManager_Statics::NewProp_AssetsHotfixedFromIniFiles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineHotfixManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineHotfixManager_Statics::NewProp_OSSName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineHotfixManager_Statics::NewProp_HotfixManagerClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineHotfixManager_Statics::NewProp_DebugPrefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineHotfixManager_Statics::NewProp_AssetsHotfixedFromIniFiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineHotfixManager_Statics::NewProp_AssetsHotfixedFromIniFiles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineHotfixManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineHotfixManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnlineHotfixManager_Statics::ClassParams = {
		&UOnlineHotfixManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineHotfixManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineHotfixManager_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineHotfixManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineHotfixManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineHotfixManager()
	{
		if (!Z_Registration_Info_UClass_UOnlineHotfixManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnlineHotfixManager.OuterSingleton, Z_Construct_UClass_UOnlineHotfixManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOnlineHotfixManager.OuterSingleton;
	}
	template<> HOTFIX_API UClass* StaticClass<UOnlineHotfixManager>()
	{
		return UOnlineHotfixManager::StaticClass();
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_OnlineHotfixManager_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_OnlineHotfixManager_h_Statics::EnumInfo[] = {
		{ EHotfixResult_StaticEnum, TEXT("EHotfixResult"), &Z_Registration_Info_UEnum_EHotfixResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 294628161U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_OnlineHotfixManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOnlineHotfixManager, UOnlineHotfixManager::StaticClass, TEXT("UOnlineHotfixManager"), &Z_Registration_Info_UClass_UOnlineHotfixManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnlineHotfixManager), 679710826U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_OnlineHotfixManager_h_1078438503(TEXT("/Script/Hotfix"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_OnlineHotfixManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_OnlineHotfixManager_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_OnlineHotfixManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_OnlineHotfixManager_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
