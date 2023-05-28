// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/DataLayer/ActorDataLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorDataLayer() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorDataLayer();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorDataLayer;
class UScriptStruct* FActorDataLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorDataLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorDataLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorDataLayer, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ActorDataLayer"));
	}
	return Z_Registration_Info_UScriptStruct_ActorDataLayer.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActorDataLayer>()
{
	return FActorDataLayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorDataLayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorDataLayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// This class is deprecated and only present for backward compatibility purposes.\n// Instead of using FActorDatalayer, directly save the DataLayerInstance FName if the DataLayer not exposed in data.\n// If the DataLayer is exposed in Data, then use DataLayerAssets.\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/ActorDataLayer.h" },
		{ "ToolTip", "This class is deprecated and only present for backward compatibility purposes.\nInstead of using FActorDatalayer, directly save the DataLayerInstance FName if the DataLayer not exposed in data.\nIf the DataLayer is exposed in Data, then use DataLayerAssets." },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorDataLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorDataLayer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorDataLayer_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "DataLayer" },
		{ "Comment", "/** The name of this layer */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/ActorDataLayer.h" },
		{ "ToolTip", "The name of this layer" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FActorDataLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorDataLayer, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorDataLayer_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorDataLayer_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorDataLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorDataLayer_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorDataLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ActorDataLayer",
		sizeof(FActorDataLayer),
		alignof(FActorDataLayer),
		Z_Construct_UScriptStruct_FActorDataLayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorDataLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorDataLayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorDataLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorDataLayer()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorDataLayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorDataLayer.InnerSingleton, Z_Construct_UScriptStruct_FActorDataLayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorDataLayer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ActorDataLayer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ActorDataLayer_h_Statics::ScriptStructInfo[] = {
		{ FActorDataLayer::StaticStruct, Z_Construct_UScriptStruct_FActorDataLayer_Statics::NewStructOps, TEXT("ActorDataLayer"), &Z_Registration_Info_UScriptStruct_ActorDataLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorDataLayer), 1259195716U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ActorDataLayer_h_3206788203(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ActorDataLayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ActorDataLayer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
