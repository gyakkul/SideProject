// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContentBrowserDataSubsystem.h"
#include "ContentBrowserDataFilter.h"
#include "ContentBrowserItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBrowserDataSubsystem() {}
// Cross Module References
	CONTENTBROWSERDATA_API UClass* Z_Construct_UClass_UContentBrowserDataSubsystem();
	CONTENTBROWSERDATA_API UClass* Z_Construct_UClass_UContentBrowserDataSubsystem_NoRegister();
	CONTENTBROWSERDATA_API UEnum* Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemTypeFilter();
	CONTENTBROWSERDATA_API UEnum* Z_Construct_UEnum_ContentBrowserData_EContentBrowserPathType();
	CONTENTBROWSERDATA_API UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserCompiledSubsystemFilter();
	CONTENTBROWSERDATA_API UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserCompiledVirtualFolderFilter();
	CONTENTBROWSERDATA_API UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserDataFilter();
	CONTENTBROWSERDATA_API UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserItem();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	UPackage* Z_Construct_UPackage__Script_ContentBrowserData();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EContentBrowserPathType;
	static UEnum* EContentBrowserPathType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EContentBrowserPathType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EContentBrowserPathType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ContentBrowserData_EContentBrowserPathType, (UObject*)Z_Construct_UPackage__Script_ContentBrowserData(), TEXT("EContentBrowserPathType"));
		}
		return Z_Registration_Info_UEnum_EContentBrowserPathType.OuterSingleton;
	}
	template<> CONTENTBROWSERDATA_API UEnum* StaticEnum<EContentBrowserPathType>()
	{
		return EContentBrowserPathType_StaticEnum();
	}
	struct Z_Construct_UEnum_ContentBrowserData_EContentBrowserPathType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ContentBrowserData_EContentBrowserPathType_Statics::Enumerators[] = {
		{ "EContentBrowserPathType::None", (int64)EContentBrowserPathType::None },
		{ "EContentBrowserPathType::Internal", (int64)EContentBrowserPathType::Internal },
		{ "EContentBrowserPathType::Virtual", (int64)EContentBrowserPathType::Virtual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ContentBrowserData_EContentBrowserPathType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Internal.Comment", "/** Internal path compatible with asset registry and engine calls (eg,. \"/PluginA/MyFile\") */" },
		{ "Internal.Name", "EContentBrowserPathType::Internal" },
		{ "Internal.ToolTip", "Internal path compatible with asset registry and engine calls (eg,. \"/PluginA/MyFile\")" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataSubsystem.h" },
		{ "None.Comment", "/** No path type set */" },
		{ "None.Name", "EContentBrowserPathType::None" },
		{ "None.ToolTip", "No path type set" },
		{ "Virtual.Comment", "/** Virtual path for enumerating Content Browser data (eg, \"/All/Plugins/PluginA/MyFile\") */" },
		{ "Virtual.Name", "EContentBrowserPathType::Virtual" },
		{ "Virtual.ToolTip", "Virtual path for enumerating Content Browser data (eg, \"/All/Plugins/PluginA/MyFile\")" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ContentBrowserData_EContentBrowserPathType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ContentBrowserData,
		nullptr,
		"EContentBrowserPathType",
		"EContentBrowserPathType",
		Z_Construct_UEnum_ContentBrowserData_EContentBrowserPathType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ContentBrowserData_EContentBrowserPathType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ContentBrowserData_EContentBrowserPathType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ContentBrowserData_EContentBrowserPathType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ContentBrowserData_EContentBrowserPathType()
	{
		if (!Z_Registration_Info_UEnum_EContentBrowserPathType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EContentBrowserPathType.InnerSingleton, Z_Construct_UEnum_ContentBrowserData_EContentBrowserPathType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EContentBrowserPathType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContentBrowserCompiledSubsystemFilter;
class UScriptStruct* FContentBrowserCompiledSubsystemFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContentBrowserCompiledSubsystemFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContentBrowserCompiledSubsystemFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContentBrowserCompiledSubsystemFilter, (UObject*)Z_Construct_UPackage__Script_ContentBrowserData(), TEXT("ContentBrowserCompiledSubsystemFilter"));
	}
	return Z_Registration_Info_UScriptStruct_ContentBrowserCompiledSubsystemFilter.OuterSingleton;
}
template<> CONTENTBROWSERDATA_API UScriptStruct* StaticStruct<FContentBrowserCompiledSubsystemFilter>()
{
	return FContentBrowserCompiledSubsystemFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContentBrowserCompiledSubsystemFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserCompiledSubsystemFilter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Internal - Filter data used to inject dummy items for the path down to the mount root of each data source */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataSubsystem.h" },
		{ "ToolTip", "Internal - Filter data used to inject dummy items for the path down to the mount root of each data source" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContentBrowserCompiledSubsystemFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContentBrowserCompiledSubsystemFilter>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContentBrowserCompiledSubsystemFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowserData,
		nullptr,
		&NewStructOps,
		"ContentBrowserCompiledSubsystemFilter",
		sizeof(FContentBrowserCompiledSubsystemFilter),
		alignof(FContentBrowserCompiledSubsystemFilter),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserCompiledSubsystemFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserCompiledSubsystemFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserCompiledSubsystemFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_ContentBrowserCompiledSubsystemFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContentBrowserCompiledSubsystemFilter.InnerSingleton, Z_Construct_UScriptStruct_FContentBrowserCompiledSubsystemFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContentBrowserCompiledSubsystemFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContentBrowserCompiledVirtualFolderFilter;
class UScriptStruct* FContentBrowserCompiledVirtualFolderFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContentBrowserCompiledVirtualFolderFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContentBrowserCompiledVirtualFolderFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContentBrowserCompiledVirtualFolderFilter, (UObject*)Z_Construct_UPackage__Script_ContentBrowserData(), TEXT("ContentBrowserCompiledVirtualFolderFilter"));
	}
	return Z_Registration_Info_UScriptStruct_ContentBrowserCompiledVirtualFolderFilter.OuterSingleton;
}
template<> CONTENTBROWSERDATA_API UScriptStruct* StaticStruct<FContentBrowserCompiledVirtualFolderFilter>()
{
	return FContentBrowserCompiledVirtualFolderFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContentBrowserCompiledVirtualFolderFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserCompiledVirtualFolderFilter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Internal - Filter data used to inject dummy items */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataSubsystem.h" },
		{ "ToolTip", "Internal - Filter data used to inject dummy items" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContentBrowserCompiledVirtualFolderFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContentBrowserCompiledVirtualFolderFilter>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContentBrowserCompiledVirtualFolderFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowserData,
		nullptr,
		&NewStructOps,
		"ContentBrowserCompiledVirtualFolderFilter",
		sizeof(FContentBrowserCompiledVirtualFolderFilter),
		alignof(FContentBrowserCompiledVirtualFolderFilter),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserCompiledVirtualFolderFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserCompiledVirtualFolderFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserCompiledVirtualFolderFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_ContentBrowserCompiledVirtualFolderFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContentBrowserCompiledVirtualFolderFilter.InnerSingleton, Z_Construct_UScriptStruct_FContentBrowserCompiledVirtualFolderFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContentBrowserCompiledVirtualFolderFilter.InnerSingleton;
	}
	DEFINE_FUNCTION(UContentBrowserDataSubsystem::execGetItemAtPath)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InPath);
		P_GET_ENUM(EContentBrowserItemTypeFilter,Z_Param_InItemTypeFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FContentBrowserItem*)Z_Param__Result=P_THIS->GetItemAtPath(Z_Param_InPath,EContentBrowserItemTypeFilter(Z_Param_InItemTypeFilter));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContentBrowserDataSubsystem::execGetItemsAtPath)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InPath);
		P_GET_ENUM(EContentBrowserItemTypeFilter,Z_Param_InItemTypeFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FContentBrowserItem>*)Z_Param__Result=P_THIS->GetItemsAtPath(Z_Param_InPath,EContentBrowserItemTypeFilter(Z_Param_InItemTypeFilter));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContentBrowserDataSubsystem::execGetItemsUnderPath)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InPath);
		P_GET_STRUCT_REF(FContentBrowserDataFilter,Z_Param_Out_InFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FContentBrowserItem>*)Z_Param__Result=P_THIS->GetItemsUnderPath(Z_Param_InPath,Z_Param_Out_InFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContentBrowserDataSubsystem::execGetActiveDataSources)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetActiveDataSources();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContentBrowserDataSubsystem::execGetAvailableDataSources)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetAvailableDataSources();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContentBrowserDataSubsystem::execDeactivateAllDataSources)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateAllDataSources();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContentBrowserDataSubsystem::execActivateAllDataSources)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateAllDataSources();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContentBrowserDataSubsystem::execDeactivateDataSource)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeactivateDataSource(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContentBrowserDataSubsystem::execActivateDataSource)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ActivateDataSource(Z_Param_Name);
		P_NATIVE_END;
	}
	void UContentBrowserDataSubsystem::StaticRegisterNativesUContentBrowserDataSubsystem()
	{
		UClass* Class = UContentBrowserDataSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateAllDataSources", &UContentBrowserDataSubsystem::execActivateAllDataSources },
			{ "ActivateDataSource", &UContentBrowserDataSubsystem::execActivateDataSource },
			{ "DeactivateAllDataSources", &UContentBrowserDataSubsystem::execDeactivateAllDataSources },
			{ "DeactivateDataSource", &UContentBrowserDataSubsystem::execDeactivateDataSource },
			{ "GetActiveDataSources", &UContentBrowserDataSubsystem::execGetActiveDataSources },
			{ "GetAvailableDataSources", &UContentBrowserDataSubsystem::execGetAvailableDataSources },
			{ "GetItemAtPath", &UContentBrowserDataSubsystem::execGetItemAtPath },
			{ "GetItemsAtPath", &UContentBrowserDataSubsystem::execGetItemsAtPath },
			{ "GetItemsUnderPath", &UContentBrowserDataSubsystem::execGetItemsUnderPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateAllDataSources_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateAllDataSources_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/**\n\x09 * Activate all available data sources.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataSubsystem.h" },
		{ "ToolTip", "Activate all available data sources." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateAllDataSources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowserDataSubsystem, nullptr, "ActivateAllDataSources", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateAllDataSources_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateAllDataSources_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateAllDataSources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateAllDataSources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateDataSource_Statics
	{
		struct ContentBrowserDataSubsystem_eventActivateDataSource_Parms
		{
			FName Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateDataSource_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateDataSource_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserDataSubsystem_eventActivateDataSource_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateDataSource_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateDataSource_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateDataSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ContentBrowserDataSubsystem_eventActivateDataSource_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateDataSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContentBrowserDataSubsystem_eventActivateDataSource_Parms), &Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateDataSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateDataSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateDataSource_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateDataSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateDataSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/**\n\x09 * Attempt to activate the named data source.\n\x09 * @return True if the data source was available and not already active, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataSubsystem.h" },
		{ "ToolTip", "Attempt to activate the named data source.\n@return True if the data source was available and not already active, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateDataSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowserDataSubsystem, nullptr, "ActivateDataSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateDataSource_Statics::ContentBrowserDataSubsystem_eventActivateDataSource_Parms), Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateDataSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateDataSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateDataSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateDataSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateDataSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateDataSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateAllDataSources_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateAllDataSources_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/**\n\x09 * Deactivate all active data sources.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataSubsystem.h" },
		{ "ToolTip", "Deactivate all active data sources." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateAllDataSources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowserDataSubsystem, nullptr, "DeactivateAllDataSources", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateAllDataSources_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateAllDataSources_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateAllDataSources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateAllDataSources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateDataSource_Statics
	{
		struct ContentBrowserDataSubsystem_eventDeactivateDataSource_Parms
		{
			FName Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateDataSource_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateDataSource_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserDataSubsystem_eventDeactivateDataSource_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateDataSource_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateDataSource_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateDataSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ContentBrowserDataSubsystem_eventDeactivateDataSource_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateDataSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContentBrowserDataSubsystem_eventDeactivateDataSource_Parms), &Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateDataSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateDataSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateDataSource_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateDataSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateDataSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/**\n\x09 * Attempt to deactivate the named data source.\n\x09 * @return True if the data source was available and active, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataSubsystem.h" },
		{ "ToolTip", "Attempt to deactivate the named data source.\n@return True if the data source was available and active, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateDataSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowserDataSubsystem, nullptr, "DeactivateDataSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateDataSource_Statics::ContentBrowserDataSubsystem_eventDeactivateDataSource_Parms), Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateDataSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateDataSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateDataSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateDataSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateDataSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateDataSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContentBrowserDataSubsystem_GetActiveDataSources_Statics
	{
		struct ContentBrowserDataSubsystem_eventGetActiveDataSources_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContentBrowserDataSubsystem_GetActiveDataSources_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContentBrowserDataSubsystem_GetActiveDataSources_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserDataSubsystem_eventGetActiveDataSources_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentBrowserDataSubsystem_GetActiveDataSources_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserDataSubsystem_GetActiveDataSources_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserDataSubsystem_GetActiveDataSources_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserDataSubsystem_GetActiveDataSources_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/**\n\x09 * Get the list of current active data sources.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataSubsystem.h" },
		{ "ToolTip", "Get the list of current active data sources." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowserDataSubsystem_GetActiveDataSources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowserDataSubsystem, nullptr, "GetActiveDataSources", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetActiveDataSources_Statics::ContentBrowserDataSubsystem_eventGetActiveDataSources_Parms), Z_Construct_UFunction_UContentBrowserDataSubsystem_GetActiveDataSources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetActiveDataSources_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetActiveDataSources_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetActiveDataSources_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowserDataSubsystem_GetActiveDataSources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContentBrowserDataSubsystem_GetActiveDataSources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContentBrowserDataSubsystem_GetAvailableDataSources_Statics
	{
		struct ContentBrowserDataSubsystem_eventGetAvailableDataSources_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContentBrowserDataSubsystem_GetAvailableDataSources_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContentBrowserDataSubsystem_GetAvailableDataSources_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserDataSubsystem_eventGetAvailableDataSources_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentBrowserDataSubsystem_GetAvailableDataSources_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserDataSubsystem_GetAvailableDataSources_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserDataSubsystem_GetAvailableDataSources_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserDataSubsystem_GetAvailableDataSources_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/**\n\x09 * Get the list of current available data sources.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataSubsystem.h" },
		{ "ToolTip", "Get the list of current available data sources." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowserDataSubsystem_GetAvailableDataSources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowserDataSubsystem, nullptr, "GetAvailableDataSources", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetAvailableDataSources_Statics::ContentBrowserDataSubsystem_eventGetAvailableDataSources_Parms), Z_Construct_UFunction_UContentBrowserDataSubsystem_GetAvailableDataSources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetAvailableDataSources_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetAvailableDataSources_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetAvailableDataSources_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowserDataSubsystem_GetAvailableDataSources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContentBrowserDataSubsystem_GetAvailableDataSources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemAtPath_Statics
	{
		struct ContentBrowserDataSubsystem_eventGetItemAtPath_Parms
		{
			FName InPath;
			EContentBrowserItemTypeFilter InItemTypeFilter;
			FContentBrowserItem ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InPath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InItemTypeFilter_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InItemTypeFilter_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InItemTypeFilter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemAtPath_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemAtPath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserDataSubsystem_eventGetItemAtPath_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemAtPath_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemAtPath_Statics::NewProp_InPath_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemAtPath_Statics::NewProp_InItemTypeFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemAtPath_Statics::NewProp_InItemTypeFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemAtPath_Statics::NewProp_InItemTypeFilter = { "InItemTypeFilter", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserDataSubsystem_eventGetItemAtPath_Parms, InItemTypeFilter), Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemTypeFilter, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemAtPath_Statics::NewProp_InItemTypeFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemAtPath_Statics::NewProp_InItemTypeFilter_MetaData)) }; // 377853413
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemAtPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserDataSubsystem_eventGetItemAtPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FContentBrowserItem, METADATA_PARAMS(nullptr, 0) }; // 804007509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemAtPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemAtPath_Statics::NewProp_InPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemAtPath_Statics::NewProp_InItemTypeFilter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemAtPath_Statics::NewProp_InItemTypeFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemAtPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemAtPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/**\n\x09 * Get the first item (folder and/or file) that exists at the given virtual path.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataSubsystem.h" },
		{ "ToolTip", "Get the first item (folder and/or file) that exists at the given virtual path." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemAtPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowserDataSubsystem, nullptr, "GetItemAtPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemAtPath_Statics::ContentBrowserDataSubsystem_eventGetItemAtPath_Parms), Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemAtPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemAtPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemAtPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemAtPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemAtPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemAtPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath_Statics
	{
		struct ContentBrowserDataSubsystem_eventGetItemsAtPath_Parms
		{
			FName InPath;
			EContentBrowserItemTypeFilter InItemTypeFilter;
			TArray<FContentBrowserItem> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InPath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InItemTypeFilter_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InItemTypeFilter_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InItemTypeFilter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserDataSubsystem_eventGetItemsAtPath_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath_Statics::NewProp_InPath_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath_Statics::NewProp_InItemTypeFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath_Statics::NewProp_InItemTypeFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath_Statics::NewProp_InItemTypeFilter = { "InItemTypeFilter", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserDataSubsystem_eventGetItemsAtPath_Parms, InItemTypeFilter), Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemTypeFilter, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath_Statics::NewProp_InItemTypeFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath_Statics::NewProp_InItemTypeFilter_MetaData)) }; // 377853413
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FContentBrowserItem, METADATA_PARAMS(nullptr, 0) }; // 804007509
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserDataSubsystem_eventGetItemsAtPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 804007509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath_Statics::NewProp_InPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath_Statics::NewProp_InItemTypeFilter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath_Statics::NewProp_InItemTypeFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/**\n\x09 * Get the items (folders and/or files) that exist at the given virtual path.\n\x09 * @note Multiple items may have the same virtual path if they are different types, or come from different data sources.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataSubsystem.h" },
		{ "ToolTip", "Get the items (folders and/or files) that exist at the given virtual path.\n@note Multiple items may have the same virtual path if they are different types, or come from different data sources." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowserDataSubsystem, nullptr, "GetItemsAtPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath_Statics::ContentBrowserDataSubsystem_eventGetItemsAtPath_Parms), Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsUnderPath_Statics
	{
		struct ContentBrowserDataSubsystem_eventGetItemsUnderPath_Parms
		{
			FName InPath;
			FContentBrowserDataFilter InFilter;
			TArray<FContentBrowserItem> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InFilter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsUnderPath_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsUnderPath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserDataSubsystem_eventGetItemsUnderPath_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsUnderPath_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsUnderPath_Statics::NewProp_InPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsUnderPath_Statics::NewProp_InFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsUnderPath_Statics::NewProp_InFilter = { "InFilter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserDataSubsystem_eventGetItemsUnderPath_Parms, InFilter), Z_Construct_UScriptStruct_FContentBrowserDataFilter, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsUnderPath_Statics::NewProp_InFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsUnderPath_Statics::NewProp_InFilter_MetaData)) }; // 3676905636
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsUnderPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FContentBrowserItem, METADATA_PARAMS(nullptr, 0) }; // 804007509
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsUnderPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserDataSubsystem_eventGetItemsUnderPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 804007509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsUnderPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsUnderPath_Statics::NewProp_InPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsUnderPath_Statics::NewProp_InFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsUnderPath_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsUnderPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsUnderPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/**\n\x09 * Get the items (folders and/or files) that exist under the given virtual path.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataSubsystem.h" },
		{ "ToolTip", "Get the items (folders and/or files) that exist under the given virtual path." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsUnderPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowserDataSubsystem, nullptr, "GetItemsUnderPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsUnderPath_Statics::ContentBrowserDataSubsystem_eventGetItemsUnderPath_Parms), Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsUnderPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsUnderPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsUnderPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsUnderPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsUnderPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsUnderPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBrowserDataSubsystem);
	UClass* Z_Construct_UClass_UContentBrowserDataSubsystem_NoRegister()
	{
		return UContentBrowserDataSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UContentBrowserDataSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EnabledDataSources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnabledDataSources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EnabledDataSources;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBrowserDataSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowserData,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UContentBrowserDataSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateAllDataSources, "ActivateAllDataSources" }, // 64536652
		{ &Z_Construct_UFunction_UContentBrowserDataSubsystem_ActivateDataSource, "ActivateDataSource" }, // 1753805517
		{ &Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateAllDataSources, "DeactivateAllDataSources" }, // 681535905
		{ &Z_Construct_UFunction_UContentBrowserDataSubsystem_DeactivateDataSource, "DeactivateDataSource" }, // 2769871533
		{ &Z_Construct_UFunction_UContentBrowserDataSubsystem_GetActiveDataSources, "GetActiveDataSources" }, // 673719634
		{ &Z_Construct_UFunction_UContentBrowserDataSubsystem_GetAvailableDataSources, "GetAvailableDataSources" }, // 3016167004
		{ &Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemAtPath, "GetItemAtPath" }, // 3069885971
		{ &Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsAtPath, "GetItemsAtPath" }, // 1013223962
		{ &Z_Construct_UFunction_UContentBrowserDataSubsystem_GetItemsUnderPath, "GetItemsUnderPath" }, // 2781225038
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserDataSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Subsystem that provides access to Content Browser data.\n * This type deals with the composition of multiple data sources, which provide information about the folders and files available in the Content Browser.\n */" },
		{ "IncludePath", "ContentBrowserDataSubsystem.h" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataSubsystem.h" },
		{ "ToolTip", "Subsystem that provides access to Content Browser data.\nThis type deals with the composition of multiple data sources, which provide information about the folders and files available in the Content Browser." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UContentBrowserDataSubsystem_Statics::NewProp_EnabledDataSources_Inner = { "EnabledDataSources", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserDataSubsystem_Statics::NewProp_EnabledDataSources_MetaData[] = {
		{ "Comment", "/**\n\x09 * Array of data source names that should be activated when available.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataSubsystem.h" },
		{ "ToolTip", "Array of data source names that should be activated when available." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UContentBrowserDataSubsystem_Statics::NewProp_EnabledDataSources = { "EnabledDataSources", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContentBrowserDataSubsystem, EnabledDataSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UContentBrowserDataSubsystem_Statics::NewProp_EnabledDataSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserDataSubsystem_Statics::NewProp_EnabledDataSources_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContentBrowserDataSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserDataSubsystem_Statics::NewProp_EnabledDataSources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserDataSubsystem_Statics::NewProp_EnabledDataSources,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBrowserDataSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBrowserDataSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBrowserDataSubsystem_Statics::ClassParams = {
		&UContentBrowserDataSubsystem::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UContentBrowserDataSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserDataSubsystem_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UContentBrowserDataSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserDataSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBrowserDataSubsystem()
	{
		if (!Z_Registration_Info_UClass_UContentBrowserDataSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBrowserDataSubsystem.OuterSingleton, Z_Construct_UClass_UContentBrowserDataSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBrowserDataSubsystem.OuterSingleton;
	}
	template<> CONTENTBROWSERDATA_API UClass* StaticClass<UContentBrowserDataSubsystem>()
	{
		return UContentBrowserDataSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBrowserDataSubsystem);
	UContentBrowserDataSubsystem::~UContentBrowserDataSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_Statics::EnumInfo[] = {
		{ EContentBrowserPathType_StaticEnum, TEXT("EContentBrowserPathType"), &Z_Registration_Info_UEnum_EContentBrowserPathType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3002901942U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FContentBrowserCompiledSubsystemFilter::StaticStruct, Z_Construct_UScriptStruct_FContentBrowserCompiledSubsystemFilter_Statics::NewStructOps, TEXT("ContentBrowserCompiledSubsystemFilter"), &Z_Registration_Info_UScriptStruct_ContentBrowserCompiledSubsystemFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContentBrowserCompiledSubsystemFilter), 887116818U) },
		{ FContentBrowserCompiledVirtualFolderFilter::StaticStruct, Z_Construct_UScriptStruct_FContentBrowserCompiledVirtualFolderFilter_Statics::NewStructOps, TEXT("ContentBrowserCompiledVirtualFolderFilter"), &Z_Registration_Info_UScriptStruct_ContentBrowserCompiledVirtualFolderFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContentBrowserCompiledVirtualFolderFilter), 122705445U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContentBrowserDataSubsystem, UContentBrowserDataSubsystem::StaticClass, TEXT("UContentBrowserDataSubsystem"), &Z_Registration_Info_UClass_UContentBrowserDataSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBrowserDataSubsystem), 1765749030U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_3519196587(TEXT("/Script/ContentBrowserData"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataSubsystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
