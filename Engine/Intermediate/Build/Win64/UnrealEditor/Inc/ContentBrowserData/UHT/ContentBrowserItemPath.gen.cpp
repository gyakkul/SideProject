// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContentBrowserItemPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBrowserItemPath() {}
// Cross Module References
	CONTENTBROWSERDATA_API UClass* Z_Construct_UClass_UContentBrowserItemPathExtensions();
	CONTENTBROWSERDATA_API UClass* Z_Construct_UClass_UContentBrowserItemPathExtensions_NoRegister();
	CONTENTBROWSERDATA_API UEnum* Z_Construct_UEnum_ContentBrowserData_EContentBrowserPathType();
	CONTENTBROWSERDATA_API UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserItemPath();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ContentBrowserData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContentBrowserItemPath;
class UScriptStruct* FContentBrowserItemPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContentBrowserItemPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContentBrowserItemPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContentBrowserItemPath, (UObject*)Z_Construct_UPackage__Script_ContentBrowserData(), TEXT("ContentBrowserItemPath"));
	}
	return Z_Registration_Info_UScriptStruct_ContentBrowserItemPath.OuterSingleton;
}
template<> CONTENTBROWSERDATA_API UScriptStruct* StaticStruct<FContentBrowserItemPath>()
{
	return FContentBrowserItemPath::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContentBrowserItemPath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserItemPath_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Hold multiple versions of a path as FNames\n * \n * Path conversion each time Set is called\n */" },
		{ "HasNativeBreak", "/Script/ContentBrowserData.ContentBrowserItemPathExtensions.BreakContentBrowserItemPath" },
		{ "HasNativeMake", "/Script/ContentBrowserData.ContentBrowserItemPathExtensions.MakeContentBrowserItemPath" },
		{ "ModuleRelativePath", "Public/ContentBrowserItemPath.h" },
		{ "ToolTip", "Hold multiple versions of a path as FNames\n\nPath conversion each time Set is called" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContentBrowserItemPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContentBrowserItemPath>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContentBrowserItemPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowserData,
		nullptr,
		&NewStructOps,
		"ContentBrowserItemPath",
		sizeof(FContentBrowserItemPath),
		alignof(FContentBrowserItemPath),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserItemPath_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserItemPath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserItemPath()
	{
		if (!Z_Registration_Info_UScriptStruct_ContentBrowserItemPath.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContentBrowserItemPath.InnerSingleton, Z_Construct_UScriptStruct_FContentBrowserItemPath_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContentBrowserItemPath.InnerSingleton;
	}
	DEFINE_FUNCTION(UContentBrowserItemPathExtensions::execBreakContentBrowserItemPath)
	{
		P_GET_STRUCT_REF(FContentBrowserItemPath,Z_Param_Out_ItemPath);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_VirtualPath);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InternalPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UContentBrowserItemPathExtensions::BreakContentBrowserItemPath(Z_Param_Out_ItemPath,Z_Param_Out_VirtualPath,Z_Param_Out_InternalPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContentBrowserItemPathExtensions::execMakeContentBrowserItemPath)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InPath);
		P_GET_ENUM(EContentBrowserPathType,Z_Param_InPathType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FContentBrowserItemPath*)Z_Param__Result=UContentBrowserItemPathExtensions::MakeContentBrowserItemPath(Z_Param_InPath,EContentBrowserPathType(Z_Param_InPathType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContentBrowserItemPathExtensions::execGetInternalPath)
	{
		P_GET_STRUCT_REF(FContentBrowserItemPath,Z_Param_Out_ItemPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UContentBrowserItemPathExtensions::GetInternalPath(Z_Param_Out_ItemPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContentBrowserItemPathExtensions::execGetVirtualPath)
	{
		P_GET_STRUCT_REF(FContentBrowserItemPath,Z_Param_Out_ItemPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UContentBrowserItemPathExtensions::GetVirtualPath(Z_Param_Out_ItemPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContentBrowserItemPathExtensions::execSetPath)
	{
		P_GET_STRUCT_REF(FContentBrowserItemPath,Z_Param_Out_ItemPath);
		P_GET_PROPERTY(FNameProperty,Z_Param_InPath);
		P_GET_ENUM(EContentBrowserPathType,Z_Param_InPathType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UContentBrowserItemPathExtensions::SetPath(Z_Param_Out_ItemPath,Z_Param_InPath,EContentBrowserPathType(Z_Param_InPathType));
		P_NATIVE_END;
	}
	void UContentBrowserItemPathExtensions::StaticRegisterNativesUContentBrowserItemPathExtensions()
	{
		UClass* Class = UContentBrowserItemPathExtensions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakContentBrowserItemPath", &UContentBrowserItemPathExtensions::execBreakContentBrowserItemPath },
			{ "GetInternalPath", &UContentBrowserItemPathExtensions::execGetInternalPath },
			{ "GetVirtualPath", &UContentBrowserItemPathExtensions::execGetVirtualPath },
			{ "MakeContentBrowserItemPath", &UContentBrowserItemPathExtensions::execMakeContentBrowserItemPath },
			{ "SetPath", &UContentBrowserItemPathExtensions::execSetPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UContentBrowserItemPathExtensions_BreakContentBrowserItemPath_Statics
	{
		struct ContentBrowserItemPathExtensions_eventBreakContentBrowserItemPath_Parms
		{
			FContentBrowserItemPath ItemPath;
			FName VirtualPath;
			FName InternalPath;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemPath;
		static const UECodeGen_Private::FNamePropertyParams NewProp_VirtualPath;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InternalPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserItemPathExtensions_BreakContentBrowserItemPath_Statics::NewProp_ItemPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContentBrowserItemPathExtensions_BreakContentBrowserItemPath_Statics::NewProp_ItemPath = { "ItemPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserItemPathExtensions_eventBreakContentBrowserItemPath_Parms, ItemPath), Z_Construct_UScriptStruct_FContentBrowserItemPath, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserItemPathExtensions_BreakContentBrowserItemPath_Statics::NewProp_ItemPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemPathExtensions_BreakContentBrowserItemPath_Statics::NewProp_ItemPath_MetaData)) }; // 1655231734
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContentBrowserItemPathExtensions_BreakContentBrowserItemPath_Statics::NewProp_VirtualPath = { "VirtualPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserItemPathExtensions_eventBreakContentBrowserItemPath_Parms, VirtualPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContentBrowserItemPathExtensions_BreakContentBrowserItemPath_Statics::NewProp_InternalPath = { "InternalPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserItemPathExtensions_eventBreakContentBrowserItemPath_Parms, InternalPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentBrowserItemPathExtensions_BreakContentBrowserItemPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserItemPathExtensions_BreakContentBrowserItemPath_Statics::NewProp_ItemPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserItemPathExtensions_BreakContentBrowserItemPath_Statics::NewProp_VirtualPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserItemPathExtensions_BreakContentBrowserItemPath_Statics::NewProp_InternalPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserItemPathExtensions_BreakContentBrowserItemPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Content Browser" },
		{ "ModuleRelativePath", "Public/ContentBrowserItemPath.h" },
		{ "NativeBreakFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowserItemPathExtensions_BreakContentBrowserItemPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowserItemPathExtensions, nullptr, "BreakContentBrowserItemPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContentBrowserItemPathExtensions_BreakContentBrowserItemPath_Statics::ContentBrowserItemPathExtensions_eventBreakContentBrowserItemPath_Parms), Z_Construct_UFunction_UContentBrowserItemPathExtensions_BreakContentBrowserItemPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemPathExtensions_BreakContentBrowserItemPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserItemPathExtensions_BreakContentBrowserItemPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemPathExtensions_BreakContentBrowserItemPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowserItemPathExtensions_BreakContentBrowserItemPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContentBrowserItemPathExtensions_BreakContentBrowserItemPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetInternalPath_Statics
	{
		struct ContentBrowserItemPathExtensions_eventGetInternalPath_Parms
		{
			FContentBrowserItemPath ItemPath;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemPath;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetInternalPath_Statics::NewProp_ItemPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetInternalPath_Statics::NewProp_ItemPath = { "ItemPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserItemPathExtensions_eventGetInternalPath_Parms, ItemPath), Z_Construct_UScriptStruct_FContentBrowserItemPath, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetInternalPath_Statics::NewProp_ItemPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetInternalPath_Statics::NewProp_ItemPath_MetaData)) }; // 1655231734
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetInternalPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserItemPathExtensions_eventGetInternalPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetInternalPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetInternalPath_Statics::NewProp_ItemPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetInternalPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetInternalPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Content Browser" },
		{ "Comment", "/**\n\x09 * Returns internal path if there is one (eg,. \"/PluginA/MyFile\").\n\x09 */" },
		{ "ModuleRelativePath", "Public/ContentBrowserItemPath.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns internal path if there is one (eg,. \"/PluginA/MyFile\")." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetInternalPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowserItemPathExtensions, nullptr, "GetInternalPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetInternalPath_Statics::ContentBrowserItemPathExtensions_eventGetInternalPath_Parms), Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetInternalPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetInternalPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetInternalPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetInternalPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetInternalPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetInternalPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetVirtualPath_Statics
	{
		struct ContentBrowserItemPathExtensions_eventGetVirtualPath_Parms
		{
			FContentBrowserItemPath ItemPath;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemPath;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetVirtualPath_Statics::NewProp_ItemPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetVirtualPath_Statics::NewProp_ItemPath = { "ItemPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserItemPathExtensions_eventGetVirtualPath_Parms, ItemPath), Z_Construct_UScriptStruct_FContentBrowserItemPath, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetVirtualPath_Statics::NewProp_ItemPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetVirtualPath_Statics::NewProp_ItemPath_MetaData)) }; // 1655231734
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetVirtualPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserItemPathExtensions_eventGetVirtualPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetVirtualPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetVirtualPath_Statics::NewProp_ItemPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetVirtualPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetVirtualPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Content Browser" },
		{ "Comment", "/**\n\x09 * Returns virtual path as FName (eg, \"/All/Plugins/PluginA/MyFile\").\n\x09 */" },
		{ "ModuleRelativePath", "Public/ContentBrowserItemPath.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns virtual path as FName (eg, \"/All/Plugins/PluginA/MyFile\")." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetVirtualPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowserItemPathExtensions, nullptr, "GetVirtualPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetVirtualPath_Statics::ContentBrowserItemPathExtensions_eventGetVirtualPath_Parms), Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetVirtualPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetVirtualPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetVirtualPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetVirtualPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetVirtualPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetVirtualPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContentBrowserItemPathExtensions_MakeContentBrowserItemPath_Statics
	{
		struct ContentBrowserItemPathExtensions_eventMakeContentBrowserItemPath_Parms
		{
			FName InPath;
			EContentBrowserPathType InPathType;
			FContentBrowserItemPath ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InPath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InPathType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPathType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InPathType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserItemPathExtensions_MakeContentBrowserItemPath_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContentBrowserItemPathExtensions_MakeContentBrowserItemPath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserItemPathExtensions_eventMakeContentBrowserItemPath_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserItemPathExtensions_MakeContentBrowserItemPath_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemPathExtensions_MakeContentBrowserItemPath_Statics::NewProp_InPath_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UContentBrowserItemPathExtensions_MakeContentBrowserItemPath_Statics::NewProp_InPathType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserItemPathExtensions_MakeContentBrowserItemPath_Statics::NewProp_InPathType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UContentBrowserItemPathExtensions_MakeContentBrowserItemPath_Statics::NewProp_InPathType = { "InPathType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserItemPathExtensions_eventMakeContentBrowserItemPath_Parms, InPathType), Z_Construct_UEnum_ContentBrowserData_EContentBrowserPathType, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserItemPathExtensions_MakeContentBrowserItemPath_Statics::NewProp_InPathType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemPathExtensions_MakeContentBrowserItemPath_Statics::NewProp_InPathType_MetaData)) }; // 3002901942
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContentBrowserItemPathExtensions_MakeContentBrowserItemPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserItemPathExtensions_eventMakeContentBrowserItemPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FContentBrowserItemPath, METADATA_PARAMS(nullptr, 0) }; // 1655231734
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentBrowserItemPathExtensions_MakeContentBrowserItemPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserItemPathExtensions_MakeContentBrowserItemPath_Statics::NewProp_InPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserItemPathExtensions_MakeContentBrowserItemPath_Statics::NewProp_InPathType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserItemPathExtensions_MakeContentBrowserItemPath_Statics::NewProp_InPathType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserItemPathExtensions_MakeContentBrowserItemPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserItemPathExtensions_MakeContentBrowserItemPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Content Browser" },
		{ "Keywords", "construct build" },
		{ "ModuleRelativePath", "Public/ContentBrowserItemPath.h" },
		{ "NativeMakeFunc", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowserItemPathExtensions_MakeContentBrowserItemPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowserItemPathExtensions, nullptr, "MakeContentBrowserItemPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContentBrowserItemPathExtensions_MakeContentBrowserItemPath_Statics::ContentBrowserItemPathExtensions_eventMakeContentBrowserItemPath_Parms), Z_Construct_UFunction_UContentBrowserItemPathExtensions_MakeContentBrowserItemPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemPathExtensions_MakeContentBrowserItemPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserItemPathExtensions_MakeContentBrowserItemPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemPathExtensions_MakeContentBrowserItemPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowserItemPathExtensions_MakeContentBrowserItemPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContentBrowserItemPathExtensions_MakeContentBrowserItemPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContentBrowserItemPathExtensions_SetPath_Statics
	{
		struct ContentBrowserItemPathExtensions_eventSetPath_Parms
		{
			FContentBrowserItemPath ItemPath;
			FName InPath;
			EContentBrowserPathType InPathType;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InPath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InPathType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPathType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InPathType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContentBrowserItemPathExtensions_SetPath_Statics::NewProp_ItemPath = { "ItemPath", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserItemPathExtensions_eventSetPath_Parms, ItemPath), Z_Construct_UScriptStruct_FContentBrowserItemPath, METADATA_PARAMS(nullptr, 0) }; // 1655231734
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserItemPathExtensions_SetPath_Statics::NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContentBrowserItemPathExtensions_SetPath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserItemPathExtensions_eventSetPath_Parms, InPath), METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserItemPathExtensions_SetPath_Statics::NewProp_InPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemPathExtensions_SetPath_Statics::NewProp_InPath_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UContentBrowserItemPathExtensions_SetPath_Statics::NewProp_InPathType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserItemPathExtensions_SetPath_Statics::NewProp_InPathType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UContentBrowserItemPathExtensions_SetPath_Statics::NewProp_InPathType = { "InPathType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContentBrowserItemPathExtensions_eventSetPath_Parms, InPathType), Z_Construct_UEnum_ContentBrowserData_EContentBrowserPathType, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserItemPathExtensions_SetPath_Statics::NewProp_InPathType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemPathExtensions_SetPath_Statics::NewProp_InPathType_MetaData)) }; // 3002901942
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContentBrowserItemPathExtensions_SetPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserItemPathExtensions_SetPath_Statics::NewProp_ItemPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserItemPathExtensions_SetPath_Statics::NewProp_InPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserItemPathExtensions_SetPath_Statics::NewProp_InPathType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContentBrowserItemPathExtensions_SetPath_Statics::NewProp_InPathType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContentBrowserItemPathExtensions_SetPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Content Browser" },
		{ "Comment", "/**\n\x09 * Set the path being stored\n\x09 */" },
		{ "ModuleRelativePath", "Public/ContentBrowserItemPath.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the path being stored" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContentBrowserItemPathExtensions_SetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContentBrowserItemPathExtensions, nullptr, "SetPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContentBrowserItemPathExtensions_SetPath_Statics::ContentBrowserItemPathExtensions_eventSetPath_Parms), Z_Construct_UFunction_UContentBrowserItemPathExtensions_SetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemPathExtensions_SetPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContentBrowserItemPathExtensions_SetPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContentBrowserItemPathExtensions_SetPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContentBrowserItemPathExtensions_SetPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContentBrowserItemPathExtensions_SetPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBrowserItemPathExtensions);
	UClass* Z_Construct_UClass_UContentBrowserItemPathExtensions_NoRegister()
	{
		return UContentBrowserItemPathExtensions::StaticClass();
	}
	struct Z_Construct_UClass_UContentBrowserItemPathExtensions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBrowserItemPathExtensions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowserData,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UContentBrowserItemPathExtensions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UContentBrowserItemPathExtensions_BreakContentBrowserItemPath, "BreakContentBrowserItemPath" }, // 2223150325
		{ &Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetInternalPath, "GetInternalPath" }, // 154180692
		{ &Z_Construct_UFunction_UContentBrowserItemPathExtensions_GetVirtualPath, "GetVirtualPath" }, // 521236320
		{ &Z_Construct_UFunction_UContentBrowserItemPathExtensions_MakeContentBrowserItemPath, "MakeContentBrowserItemPath" }, // 4280593445
		{ &Z_Construct_UFunction_UContentBrowserItemPathExtensions_SetPath, "SetPath" }, // 2368874858
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserItemPathExtensions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContentBrowserItemPath.h" },
		{ "ModuleRelativePath", "Public/ContentBrowserItemPath.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBrowserItemPathExtensions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBrowserItemPathExtensions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBrowserItemPathExtensions_Statics::ClassParams = {
		&UContentBrowserItemPathExtensions::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContentBrowserItemPathExtensions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserItemPathExtensions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBrowserItemPathExtensions()
	{
		if (!Z_Registration_Info_UClass_UContentBrowserItemPathExtensions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBrowserItemPathExtensions.OuterSingleton, Z_Construct_UClass_UContentBrowserItemPathExtensions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBrowserItemPathExtensions.OuterSingleton;
	}
	template<> CONTENTBROWSERDATA_API UClass* StaticClass<UContentBrowserItemPathExtensions>()
	{
		return UContentBrowserItemPathExtensions::StaticClass();
	}
	UContentBrowserItemPathExtensions::UContentBrowserItemPathExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBrowserItemPathExtensions);
	UContentBrowserItemPathExtensions::~UContentBrowserItemPathExtensions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_Statics::ScriptStructInfo[] = {
		{ FContentBrowserItemPath::StaticStruct, Z_Construct_UScriptStruct_FContentBrowserItemPath_Statics::NewStructOps, TEXT("ContentBrowserItemPath"), &Z_Registration_Info_UScriptStruct_ContentBrowserItemPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContentBrowserItemPath), 1655231734U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContentBrowserItemPathExtensions, UContentBrowserItemPathExtensions::StaticClass, TEXT("UContentBrowserItemPathExtensions"), &Z_Registration_Info_UClass_UContentBrowserItemPathExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBrowserItemPathExtensions), 2560169451U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_1399109477(TEXT("/Script/ContentBrowserData"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
