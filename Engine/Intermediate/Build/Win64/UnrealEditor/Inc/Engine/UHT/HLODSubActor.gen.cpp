// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/HLOD/HLODSubActor.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartitionActorContainerID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODSubActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorContainerID();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHLODSubActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHLODSubActorDesc();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HLODSubActorDesc;
class UScriptStruct* FHLODSubActorDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HLODSubActorDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HLODSubActorDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHLODSubActorDesc, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("HLODSubActorDesc"));
	}
	return Z_Registration_Info_UScriptStruct_HLODSubActorDesc.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FHLODSubActorDesc>()
{
	return FHLODSubActorDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHLODSubActorDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODSubActorDesc_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODSubActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHLODSubActorDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHLODSubActorDesc>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODSubActorDesc_Statics::NewProp_ActorGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODSubActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHLODSubActorDesc_Statics::NewProp_ActorGuid = { "ActorGuid", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHLODSubActorDesc, ActorGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODSubActorDesc_Statics::NewProp_ActorGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODSubActorDesc_Statics::NewProp_ActorGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODSubActorDesc_Statics::NewProp_ContainerID_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODSubActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHLODSubActorDesc_Statics::NewProp_ContainerID = { "ContainerID", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHLODSubActorDesc, ContainerID), Z_Construct_UScriptStruct_FActorContainerID, METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODSubActorDesc_Statics::NewProp_ContainerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODSubActorDesc_Statics::NewProp_ContainerID_MetaData)) }; // 1914037964
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHLODSubActorDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODSubActorDesc_Statics::NewProp_ActorGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODSubActorDesc_Statics::NewProp_ContainerID,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHLODSubActorDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"HLODSubActorDesc",
		sizeof(FHLODSubActorDesc),
		alignof(FHLODSubActorDesc),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FHLODSubActorDesc_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODSubActorDesc_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODSubActorDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODSubActorDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHLODSubActorDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_HLODSubActorDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HLODSubActorDesc.InnerSingleton, Z_Construct_UScriptStruct_FHLODSubActorDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HLODSubActorDesc.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HLODSubActor;
class UScriptStruct* FHLODSubActor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HLODSubActor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HLODSubActor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHLODSubActor, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("HLODSubActor"));
	}
	return Z_Registration_Info_UScriptStruct_HLODSubActor.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FHLODSubActor>()
{
	return FHLODSubActor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHLODSubActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorPackage_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorPackage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerPackage_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ContainerPackage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODSubActor_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODSubActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHLODSubActor>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ActorGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODSubActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ActorGuid = { "ActorGuid", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHLODSubActor, ActorGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ActorGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ActorGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ActorPackage_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODSubActor.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ActorPackage = { "ActorPackage", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHLODSubActor, ActorPackage), METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ActorPackage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ActorPackage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ActorPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODSubActor.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ActorPath = { "ActorPath", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHLODSubActor, ActorPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ActorPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ActorPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ContainerID_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODSubActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ContainerID = { "ContainerID", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHLODSubActor, ContainerID), Z_Construct_UScriptStruct_FActorContainerID, METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ContainerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ContainerID_MetaData)) }; // 1914037964
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ContainerPackage_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODSubActor.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ContainerPackage = { "ContainerPackage", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHLODSubActor, ContainerPackage), METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ContainerPackage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ContainerPackage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ContainerTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODSubActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ContainerTransform = { "ContainerTransform", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHLODSubActor, ContainerTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ContainerTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ContainerTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHLODSubActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ActorGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ActorPackage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ActorPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ContainerID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ContainerPackage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewProp_ContainerTransform,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHLODSubActor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"HLODSubActor",
		sizeof(FHLODSubActor),
		alignof(FHLODSubActor),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FHLODSubActor_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODSubActor_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODSubActor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODSubActor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHLODSubActor()
	{
		if (!Z_Registration_Info_UScriptStruct_HLODSubActor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HLODSubActor.InnerSingleton, Z_Construct_UScriptStruct_FHLODSubActor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HLODSubActor.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSubActor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSubActor_h_Statics::ScriptStructInfo[] = {
		{ FHLODSubActorDesc::StaticStruct, Z_Construct_UScriptStruct_FHLODSubActorDesc_Statics::NewStructOps, TEXT("HLODSubActorDesc"), &Z_Registration_Info_UScriptStruct_HLODSubActorDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHLODSubActorDesc), 564016838U) },
		{ FHLODSubActor::StaticStruct, Z_Construct_UScriptStruct_FHLODSubActor_Statics::NewStructOps, TEXT("HLODSubActor"), &Z_Registration_Info_UScriptStruct_HLODSubActor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHLODSubActor), 4162148267U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSubActor_h_644216356(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSubActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSubActor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
