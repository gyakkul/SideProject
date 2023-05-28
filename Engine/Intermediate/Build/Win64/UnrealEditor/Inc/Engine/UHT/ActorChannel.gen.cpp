// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/ActorChannel.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorChannel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorChannel();
	ENGINE_API UClass* Z_Construct_UClass_UActorChannel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChannel();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UActorChannel::StaticRegisterNativesUActorChannel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorChannel);
	UClass* Z_Construct_UClass_UActorChannel_NoRegister()
	{
		return UActorChannel::StaticClass();
	}
	struct Z_Construct_UClass_UActorChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CreateSubObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreateSubObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CreateSubObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChannel,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorChannel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A channel for exchanging actor and its subobject's properties and RPCs.\n *\n * ActorChannel manages the creation and lifetime of a replicated actor. Actual replication of properties and RPCs\n * actually happens in FObjectReplicator now (see DataReplication.h).\n *\n * An ActorChannel bunch looks like this:\n *\n * +----------------------+---------------------------------------------------------------------------+\n * | SpawnInfo            | (Spawn Info) Initial bunch only                                           |\n * |  -Actor Class        |   -Created by ActorChannel                                                |\n * |  -Spawn Loc/Rot      |                                                                           |\n * | NetGUID assigns      |                                                                           |\n * |  -Actor NetGUID      |                                                                           |\n * |  -Component NetGUIDs |                                                                           |\n * +----------------------+---------------------------------------------------------------------------+\n * |                      |                                                                           |\n * +----------------------+---------------------------------------------------------------------------+\n * | NetGUID ObjRef       | (Content chunks) x number of replicating objects (Actor + any components) |\n * |                      |   -Each chunk created by its own FObjectReplicator instance.              |\n * +----------------------+---------------------------------------------------------------------------+\n * |                      |                                                                           |\n * | Properties...        |                                                                           |\n * |                      |                                                                           |\n * | RPCs...              |                                                                           |\n * |                      |                                                                           |\n * +----------------------+---------------------------------------------------------------------------+\n * | </End Tag>           |                                                                           |\n * +----------------------+---------------------------------------------------------------------------+\n */" },
		{ "IncludePath", "Engine/ActorChannel.h" },
		{ "ModuleRelativePath", "Classes/Engine/ActorChannel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A channel for exchanging actor and its subobject's properties and RPCs.\n\nActorChannel manages the creation and lifetime of a replicated actor. Actual replication of properties and RPCs\nactually happens in FObjectReplicator now (see DataReplication.h).\n\nAn ActorChannel bunch looks like this:\n\n+----------------------+---------------------------------------------------------------------------+\n| SpawnInfo            | (Spawn Info) Initial bunch only                                           |\n|  -Actor Class        |   -Created by ActorChannel                                                |\n|  -Spawn Loc/Rot      |                                                                           |\n| NetGUID assigns      |                                                                           |\n|  -Actor NetGUID      |                                                                           |\n|  -Component NetGUIDs |                                                                           |\n+----------------------+---------------------------------------------------------------------------+\n|                      |                                                                           |\n+----------------------+---------------------------------------------------------------------------+\n| NetGUID ObjRef       | (Content chunks) x number of replicating objects (Actor + any components) |\n|                      |   -Each chunk created by its own FObjectReplicator instance.              |\n+----------------------+---------------------------------------------------------------------------+\n|                      |                                                                           |\n| Properties...        |                                                                           |\n|                      |                                                                           |\n| RPCs...              |                                                                           |\n|                      |                                                                           |\n+----------------------+---------------------------------------------------------------------------+\n| </End Tag>           |                                                                           |\n+----------------------+---------------------------------------------------------------------------+" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorChannel_Statics::NewProp_Actor_MetaData[] = {
		{ "Comment", "// Variables.\n" },
		{ "ModuleRelativePath", "Classes/Engine/ActorChannel.h" },
		{ "ToolTip", "Variables." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UActorChannel_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorChannel, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorChannel_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorChannel_Statics::NewProp_Actor_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UActorChannel_Statics::NewProp_CreateSubObjects_Inner = { "CreateSubObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorChannel_Statics::NewProp_CreateSubObjects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/ActorChannel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorChannel_Statics::NewProp_CreateSubObjects = { "CreateSubObjects", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorChannel, CreateSubObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorChannel_Statics::NewProp_CreateSubObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorChannel_Statics::NewProp_CreateSubObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorChannel_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorChannel_Statics::NewProp_CreateSubObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorChannel_Statics::NewProp_CreateSubObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorChannel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorChannel_Statics::ClassParams = {
		&UActorChannel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorChannel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorChannel_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UActorChannel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorChannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorChannel()
	{
		if (!Z_Registration_Info_UClass_UActorChannel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorChannel.OuterSingleton, Z_Construct_UClass_UActorChannel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorChannel.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UActorChannel>()
	{
		return UActorChannel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorChannel);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UActorChannel)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorChannel, UActorChannel::StaticClass, TEXT("UActorChannel"), &Z_Registration_Info_UClass_UActorChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorChannel), 1608000996U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_1253307121(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
