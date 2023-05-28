// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteControlFieldPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlFieldPath() {}
// Cross Module References
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCFieldPathInfo();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCFieldPathSegment();
	UPackage* Z_Construct_UPackage__Script_RemoteControl();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCFieldPathSegment;
class UScriptStruct* FRCFieldPathSegment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCFieldPathSegment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCFieldPathSegment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCFieldPathSegment, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RCFieldPathSegment"));
	}
	return Z_Registration_Info_UScriptStruct_RCFieldPathSegment.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRCFieldPathSegment>()
{
	return FRCFieldPathSegment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValuePropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ValuePropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MapKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** RemoteControl Path segment holding a property layer */" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldPath.h" },
		{ "ToolTip", "RemoteControl Path segment holding a property layer" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCFieldPathSegment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name of the segment */" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldPath.h" },
		{ "ToolTip", "Name of the segment" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCFieldPathSegment, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::NewProp_ArrayIndex_MetaData[] = {
		{ "Comment", "/** Container index if any. */" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldPath.h" },
		{ "ToolTip", "Container index if any." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::NewProp_ArrayIndex = { "ArrayIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCFieldPathSegment, ArrayIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::NewProp_ArrayIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::NewProp_ArrayIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::NewProp_ValuePropertyName_MetaData[] = {
		{ "Comment", "/**\n\x09 * Value property name, in case a map is being indexed.\n\x09 * ie. The path Var.Var_Value[0] will populate ValuePropertyName with \"Var\"\n\x09 * This is needed because sometimes the value's property name will differ from the\n\x09 * name before.\n\x09 * For example a map property named Test_1 will generate the following path: Test_1.Test_Value[0]\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldPath.h" },
		{ "ToolTip", "Value property name, in case a map is being indexed.\nie. The path Var.Var_Value[0] will populate ValuePropertyName with \"Var\"\nThis is needed because sometimes the value's property name will differ from the\nname before.\nFor example a map property named Test_1 will generate the following path: Test_1.Test_Value[0]" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::NewProp_ValuePropertyName = { "ValuePropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCFieldPathSegment, ValuePropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::NewProp_ValuePropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::NewProp_ValuePropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::NewProp_MapKey_MetaData[] = {
		{ "Comment", "/**\n\x09 * Holds the key in case of a path containing an indexed map.\n\x09 * ie. Field path MapProp[\"mykey\"] will fill MapKey with \"mykey\" \n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldPath.h" },
		{ "ToolTip", "Holds the key in case of a path containing an indexed map.\nie. Field path MapProp[\"mykey\"] will fill MapKey with \"mykey\"" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::NewProp_MapKey = { "MapKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCFieldPathSegment, MapKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::NewProp_MapKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::NewProp_MapKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::NewProp_ArrayIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::NewProp_ValuePropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::NewProp_MapKey,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		&NewStructOps,
		"RCFieldPathSegment",
		sizeof(FRCFieldPathSegment),
		alignof(FRCFieldPathSegment),
		Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCFieldPathSegment()
	{
		if (!Z_Registration_Info_UScriptStruct_RCFieldPathSegment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCFieldPathSegment.InnerSingleton, Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCFieldPathSegment.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCFieldPathInfo;
class UScriptStruct* FRCFieldPathInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCFieldPathInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCFieldPathInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCFieldPathInfo, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RCFieldPathInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RCFieldPathInfo.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRCFieldPathInfo>()
{
	return FRCFieldPathInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCFieldPathInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Segments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Segments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathHash_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_PathHash;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCFieldPathInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a path from a UObject to a field.\n * Has facilities to resolve for a given owner.\n *\n * Example Usage Create a path to relative location's x value, then resolve it on an static mesh component.\n * FRCFieldPathInfo Path(\"RelativeLocation.X\"));\n * bool bResolved = Path.Resolve(MyStaticMeshComponent);\n * if (bResolved)\n * {\n *   FRCFieldResolvedData Data = Path.GetResolvedData();\n *   // Data.ContainerAddress corresponds to &MyStaticMeshComponent.RelativeLocation\n *   // Data.Field corresponds to FFloatProperty (X) \n *   // Data.Struct corresponds to FVector\n * }\n * \n * Other example paths:\n * \"MyStructProperty.NestedArrayProperty[3]\"\n * \"RelativeLocation\"\n * \"RelativeLocation.X\"\n * \n * Supports array/set/map indexing.\n * @Note Only String keys are currently supported for map key indexing.\n * ie. MyStructProperty.MyStringToVectorMap[\"MyKey\"].X\n * Be aware that MyStringToVectorMap[2] will not correspond to the key 2 in the map, but to the index 2 of the map.\n * This behaviour is intended to match PropertyHandle's GeneratePathToProperty method.\n */" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldPath.h" },
		{ "ToolTip", "Holds a path from a UObject to a field.\nHas facilities to resolve for a given owner.\n\nExample Usage Create a path to relative location's x value, then resolve it on an static mesh component.\nFRCFieldPathInfo Path(\"RelativeLocation.X\"));\nbool bResolved = Path.Resolve(MyStaticMeshComponent);\nif (bResolved)\n{\n  FRCFieldResolvedData Data = Path.GetResolvedData();\n  // Data.ContainerAddress corresponds to &MyStaticMeshComponent.RelativeLocation\n  // Data.Field corresponds to FFloatProperty (X)\n  // Data.Struct corresponds to FVector\n}\n\nOther example paths:\n\"MyStructProperty.NestedArrayProperty[3]\"\n\"RelativeLocation\"\n\"RelativeLocation.X\"\n\nSupports array/set/map indexing.\n@Note Only String keys are currently supported for map key indexing.\nie. MyStructProperty.MyStringToVectorMap[\"MyKey\"].X\nBe aware that MyStringToVectorMap[2] will not correspond to the key 2 in the map, but to the index 2 of the map.\nThis behaviour is intended to match PropertyHandle's GeneratePathToProperty method." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCFieldPathInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCFieldPathInfo>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCFieldPathInfo_Statics::NewProp_Segments_Inner = { "Segments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCFieldPathSegment, METADATA_PARAMS(nullptr, 0) }; // 815627766
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCFieldPathInfo_Statics::NewProp_Segments_MetaData[] = {
		{ "Comment", "/** List of segments to point to a given field */" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldPath.h" },
		{ "ToolTip", "List of segments to point to a given field" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCFieldPathInfo_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCFieldPathInfo, Segments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCFieldPathInfo_Statics::NewProp_Segments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCFieldPathInfo_Statics::NewProp_Segments_MetaData)) }; // 815627766
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCFieldPathInfo_Statics::NewProp_PathHash_MetaData[] = {
		{ "Comment", "/** Hash created from the string we were built from to quickly compare to paths */" },
		{ "ModuleRelativePath", "Public/RemoteControlFieldPath.h" },
		{ "ToolTip", "Hash created from the string we were built from to quickly compare to paths" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRCFieldPathInfo_Statics::NewProp_PathHash = { "PathHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCFieldPathInfo, PathHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCFieldPathInfo_Statics::NewProp_PathHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCFieldPathInfo_Statics::NewProp_PathHash_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCFieldPathInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCFieldPathInfo_Statics::NewProp_Segments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCFieldPathInfo_Statics::NewProp_Segments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCFieldPathInfo_Statics::NewProp_PathHash,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCFieldPathInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		&NewStructOps,
		"RCFieldPathInfo",
		sizeof(FRCFieldPathInfo),
		alignof(FRCFieldPathInfo),
		Z_Construct_UScriptStruct_FRCFieldPathInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCFieldPathInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCFieldPathInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCFieldPathInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCFieldPathInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_RCFieldPathInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCFieldPathInfo.InnerSingleton, Z_Construct_UScriptStruct_FRCFieldPathInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCFieldPathInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFieldPath_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFieldPath_h_Statics::ScriptStructInfo[] = {
		{ FRCFieldPathSegment::StaticStruct, Z_Construct_UScriptStruct_FRCFieldPathSegment_Statics::NewStructOps, TEXT("RCFieldPathSegment"), &Z_Registration_Info_UScriptStruct_RCFieldPathSegment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCFieldPathSegment), 815627766U) },
		{ FRCFieldPathInfo::StaticStruct, Z_Construct_UScriptStruct_FRCFieldPathInfo_Statics::NewStructOps, TEXT("RCFieldPathInfo"), &Z_Registration_Info_UScriptStruct_RCFieldPathInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCFieldPathInfo), 1811249294U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFieldPath_h_184068652(TEXT("/Script/RemoteControl"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFieldPath_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFieldPath_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
