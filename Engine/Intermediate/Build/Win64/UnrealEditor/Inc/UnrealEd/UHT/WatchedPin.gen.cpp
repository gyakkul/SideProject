// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Kismet2/WatchedPin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWatchedPin() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintWatchedPin();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintWatchedPin;
class UScriptStruct* FBlueprintWatchedPin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintWatchedPin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintWatchedPin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintWatchedPin, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("BlueprintWatchedPin"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintWatchedPin.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FBlueprintWatchedPin>()
{
	return FBlueprintWatchedPin::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningNode_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OwningNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinId;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PathToProperty_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathToProperty_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PathToProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Contains information about a watched pin in a Blueprint graph for local settings data.\n */" },
		{ "ModuleRelativePath", "Public/Kismet2/WatchedPin.h" },
		{ "ToolTip", "Contains information about a watched pin in a Blueprint graph for local settings data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintWatchedPin>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::NewProp_OwningNode_MetaData[] = {
		{ "Comment", "/** Node that owns the pin that the watch is placed on */" },
		{ "ModuleRelativePath", "Public/Kismet2/WatchedPin.h" },
		{ "ToolTip", "Node that owns the pin that the watch is placed on" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::NewProp_OwningNode = { "OwningNode", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintWatchedPin, OwningNode), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::NewProp_OwningNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::NewProp_OwningNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::NewProp_PinId_MetaData[] = {
		{ "Comment", "/** Unique ID of the pin that the watch is placed on */" },
		{ "ModuleRelativePath", "Public/Kismet2/WatchedPin.h" },
		{ "ToolTip", "Unique ID of the pin that the watch is placed on" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::NewProp_PinId = { "PinId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintWatchedPin, PinId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::NewProp_PinId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::NewProp_PinId_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::NewProp_PathToProperty_Inner = { "PathToProperty", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::NewProp_PathToProperty_MetaData[] = {
		{ "Comment", "/** Path from the pin to a nested property, empty if just watching the Pin\n\x09 *  NOTE: each segment of the path is Property->GetAuthoredName\n\x09 */" },
		{ "ModuleRelativePath", "Public/Kismet2/WatchedPin.h" },
		{ "ToolTip", "Path from the pin to a nested property, empty if just watching the Pin\nNOTE: each segment of the path is Property->GetAuthoredName" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::NewProp_PathToProperty = { "PathToProperty", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintWatchedPin, PathToProperty), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::NewProp_PathToProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::NewProp_PathToProperty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::NewProp_OwningNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::NewProp_PinId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::NewProp_PathToProperty_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::NewProp_PathToProperty,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"BlueprintWatchedPin",
		sizeof(FBlueprintWatchedPin),
		alignof(FBlueprintWatchedPin),
		Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintWatchedPin()
	{
		if (!Z_Registration_Info_UScriptStruct_BlueprintWatchedPin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintWatchedPin.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlueprintWatchedPin.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Kismet2_WatchedPin_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Kismet2_WatchedPin_h_Statics::ScriptStructInfo[] = {
		{ FBlueprintWatchedPin::StaticStruct, Z_Construct_UScriptStruct_FBlueprintWatchedPin_Statics::NewStructOps, TEXT("BlueprintWatchedPin"), &Z_Registration_Info_UScriptStruct_BlueprintWatchedPin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintWatchedPin), 3924230225U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Kismet2_WatchedPin_h_2061890724(TEXT("/Script/UnrealEd"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Kismet2_WatchedPin_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Kismet2_WatchedPin_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
