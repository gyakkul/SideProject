// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/NodeCommManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeCommManager() {}
// Cross Module References
	BRIDGE_API UScriptStruct* Z_Construct_UScriptStruct_FBifrostNodeInfo();
	UPackage* Z_Construct_UPackage__Script_Bridge();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BifrostNodeInfo;
class UScriptStruct* FBifrostNodeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BifrostNodeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BifrostNodeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBifrostNodeInfo, (UObject*)Z_Construct_UPackage__Script_Bridge(), TEXT("BifrostNodeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_BifrostNodeInfo.OuterSingleton;
}
template<> BRIDGE_API UScriptStruct* StaticStruct<FBifrostNodeInfo>()
{
	return FBifrostNodeInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//Dummy data structure, all json data to be converted to ustructs\n" },
		{ "ModuleRelativePath", "Private/NodeCommManager.h" },
		{ "ToolTip", "Dummy data structure, all json data to be converted to ustructs" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBifrostNodeInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "NodeData" },
		{ "ModuleRelativePath", "Private/NodeCommManager.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBifrostNodeInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "NodeData" },
		{ "ModuleRelativePath", "Private/NodeCommManager.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBifrostNodeInfo, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Bridge,
		nullptr,
		&NewStructOps,
		"BifrostNodeInfo",
		sizeof(FBifrostNodeInfo),
		alignof(FBifrostNodeInfo),
		Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBifrostNodeInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_BifrostNodeInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BifrostNodeInfo.InnerSingleton, Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BifrostNodeInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Bridge_Source_Bridge_Private_NodeCommManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Bridge_Source_Bridge_Private_NodeCommManager_h_Statics::ScriptStructInfo[] = {
		{ FBifrostNodeInfo::StaticStruct, Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::NewStructOps, TEXT("BifrostNodeInfo"), &Z_Registration_Info_UScriptStruct_BifrostNodeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBifrostNodeInfo), 3973530273U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Bridge_Source_Bridge_Private_NodeCommManager_h_916779140(TEXT("/Script/Bridge"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Bridge_Source_Bridge_Private_NodeCommManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Bridge_Source_Bridge_Private_NodeCommManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
