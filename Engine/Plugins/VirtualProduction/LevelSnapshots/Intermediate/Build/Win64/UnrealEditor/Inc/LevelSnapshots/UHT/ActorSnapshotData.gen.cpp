// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/ActorSnapshotData.h"
#include "Data/ActorSnapshotHash.h"
#include "Data/ComponentSnapshotData.h"
#include "Data/CustomSerializationData.h"
#include "Data/ObjectSnapshotData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorSnapshotData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FActorSnapshotData();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FActorSnapshotHash();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSnapshotData();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FCustomSerializationData();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FObjectSnapshotData();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshots();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorSnapshotData;
class UScriptStruct* FActorSnapshotData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorSnapshotData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorSnapshotData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorSnapshotData, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("ActorSnapshotData"));
	}
	return Z_Registration_Info_UScriptStruct_ActorSnapshotData.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FActorSnapshotData>()
{
	return FActorSnapshotData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorSnapshotData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActorLabel;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClassIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedActorData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializedActorData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomActorSerializationData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomActorSerializationData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentData_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ComponentData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ComponentData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OwnedSubobjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnedSubobjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OwnedSubobjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hash;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSnapshotData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds saved actor data. See ActorUtil for operations. */" },
		{ "ModuleRelativePath", "Public/Data/ActorSnapshotData.h" },
		{ "ToolTip", "Holds saved actor data. See ActorUtil for operations." },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorSnapshotData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_ActorLabel_MetaData[] = {
		{ "Comment", "/** The label of the actor when it was saved. */" },
		{ "ModuleRelativePath", "Public/Data/ActorSnapshotData.h" },
		{ "ToolTip", "The label of the actor when it was saved." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_ActorLabel = { "ActorLabel", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorSnapshotData, ActorLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_ActorLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_ActorLabel_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Comment", "/** The class the actor had when it was saved. */" },
		{ "ModuleRelativePath", "Public/Data/ActorSnapshotData.h" },
		{ "ToolTip", "The class the actor had when it was saved." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorSnapshotData, ActorClass_DEPRECATED), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_ClassIndex_MetaData[] = {
		{ "Comment", "/** Valid index to FWorldSnapshotData::ClassData. Use to lookup class and archetype data. */" },
		{ "ModuleRelativePath", "Public/Data/ActorSnapshotData.h" },
		{ "ToolTip", "Valid index to FWorldSnapshotData::ClassData. Use to lookup class and archetype data." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_ClassIndex = { "ClassIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorSnapshotData, ClassIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_ClassIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_ClassIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_SerializedActorData_MetaData[] = {
		{ "Comment", "/** The actor's serialized data */" },
		{ "ModuleRelativePath", "Public/Data/ActorSnapshotData.h" },
		{ "ToolTip", "The actor's serialized data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_SerializedActorData = { "SerializedActorData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorSnapshotData, SerializedActorData), Z_Construct_UScriptStruct_FObjectSnapshotData, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_SerializedActorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_SerializedActorData_MetaData)) }; // 2466474185
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_CustomActorSerializationData_MetaData[] = {
		{ "Comment", "/** Data that was generated by some ICustomObjectSnapshotSerializer. Needed to restore custom subobjects. */" },
		{ "ModuleRelativePath", "Public/Data/ActorSnapshotData.h" },
		{ "ToolTip", "Data that was generated by some ICustomObjectSnapshotSerializer. Needed to restore custom subobjects." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_CustomActorSerializationData = { "CustomActorSerializationData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorSnapshotData, CustomActorSerializationData), Z_Construct_UScriptStruct_FCustomSerializationData, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_CustomActorSerializationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_CustomActorSerializationData_MetaData)) }; // 1933641368
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_ComponentData_ValueProp = { "ComponentData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FComponentSnapshotData, METADATA_PARAMS(nullptr, 0) }; // 3256671777
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_ComponentData_Key_KeyProp = { "ComponentData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_ComponentData_MetaData[] = {
		{ "Comment", "/** Additional component recreation info */" },
		{ "ModuleRelativePath", "Public/Data/ActorSnapshotData.h" },
		{ "ToolTip", "Additional component recreation info" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_ComponentData = { "ComponentData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorSnapshotData, ComponentData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_ComponentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_ComponentData_MetaData)) }; // 3256671777
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_OwnedSubobjects_Inner = { "OwnedSubobjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_OwnedSubobjects_MetaData[] = {
		{ "Comment", "/** Tracks all non-component subobjects. Valid index to FWorldSnapshotData::SerializedObjectReferences. */" },
		{ "ModuleRelativePath", "Public/Data/ActorSnapshotData.h" },
		{ "ToolTip", "Tracks all non-component subobjects. Valid index to FWorldSnapshotData::SerializedObjectReferences." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_OwnedSubobjects = { "OwnedSubobjects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorSnapshotData, OwnedSubobjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_OwnedSubobjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_OwnedSubobjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_Hash_MetaData[] = {
		{ "Comment", "/** Used to detect changes without loading actor into memory. */" },
		{ "ModuleRelativePath", "Public/Data/ActorSnapshotData.h" },
		{ "ToolTip", "Used to detect changes without loading actor into memory." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorSnapshotData, Hash), Z_Construct_UScriptStruct_FActorSnapshotHash, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_Hash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_Hash_MetaData)) }; // 4254594790
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorSnapshotData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_ActorLabel,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_ClassIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_SerializedActorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_CustomActorSerializationData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_ComponentData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_ComponentData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_ComponentData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_OwnedSubobjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_OwnedSubobjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewProp_Hash,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorSnapshotData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		nullptr,
		&NewStructOps,
		"ActorSnapshotData",
		sizeof(FActorSnapshotData),
		alignof(FActorSnapshotData),
		Z_Construct_UScriptStruct_FActorSnapshotData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSnapshotData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSnapshotData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSnapshotData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorSnapshotData()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorSnapshotData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorSnapshotData.InnerSingleton, Z_Construct_UScriptStruct_FActorSnapshotData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorSnapshotData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ActorSnapshotData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ActorSnapshotData_h_Statics::ScriptStructInfo[] = {
		{ FActorSnapshotData::StaticStruct, Z_Construct_UScriptStruct_FActorSnapshotData_Statics::NewStructOps, TEXT("ActorSnapshotData"), &Z_Registration_Info_UScriptStruct_ActorSnapshotData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorSnapshotData), 141884411U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ActorSnapshotData_h_2187288535(TEXT("/Script/LevelSnapshots"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ActorSnapshotData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ActorSnapshotData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
