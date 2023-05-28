// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Level.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ANavigationObjectBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AWorldDataLayers_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AWorldSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorContainer();
	ENGINE_API UClass* Z_Construct_UClass_UActorContainer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorFolder_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelActorContainer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelPartitionInterface();
	ENGINE_API UClass* Z_Construct_UClass_ULevelPartitionInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelScriptBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMapBuildDataRegistry_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UModel();
	ENGINE_API UClass* Z_Construct_UClass_UModelComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationDataChunk_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EActorPackagingScheme();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorFolderSet();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicTextureInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSimplificationDetails();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialProxySettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStreamableTextureInstance();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ULevelPartitionInterface::StaticRegisterNativesULevelPartitionInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelPartitionInterface);
	UClass* Z_Construct_UClass_ULevelPartitionInterface_NoRegister()
	{
		return ULevelPartitionInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULevelPartitionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelPartitionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelPartitionInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelPartitionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILevelPartitionInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelPartitionInterface_Statics::ClassParams = {
		&ULevelPartitionInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelPartitionInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelPartitionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelPartitionInterface()
	{
		if (!Z_Registration_Info_UClass_ULevelPartitionInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelPartitionInterface.OuterSingleton, Z_Construct_UClass_ULevelPartitionInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelPartitionInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ULevelPartitionInterface>()
	{
		return ULevelPartitionInterface::StaticClass();
	}
	ULevelPartitionInterface::ULevelPartitionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelPartitionInterface);
	ULevelPartitionInterface::~ULevelPartitionInterface() {}
	void UActorContainer::StaticRegisterNativesUActorContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorContainer);
	UClass* Z_Construct_UClass_UActorContainer_NoRegister()
	{
		return UActorContainer::StaticClass();
	}
	struct Z_Construct_UClass_UActorContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Actors_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Actors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorContainer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Actor container class used to duplicate actors during cells streaming in PIE\n" },
		{ "IncludePath", "Engine/Level.h" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Actor container class used to duplicate actors during cells streaming in PIE" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UActorContainer_Statics::NewProp_Actors_ValueProp = { "Actors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UActorContainer_Statics::NewProp_Actors_Key_KeyProp = { "Actors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorContainer_Statics::NewProp_Actors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UActorContainer_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorContainer, Actors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorContainer_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorContainer_Statics::NewProp_Actors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorContainer_Statics::NewProp_Actors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorContainer_Statics::NewProp_Actors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorContainer_Statics::NewProp_Actors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorContainer_Statics::ClassParams = {
		&UActorContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorContainer_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorContainer()
	{
		if (!Z_Registration_Info_UClass_UActorContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorContainer.OuterSingleton, Z_Construct_UClass_UActorContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorContainer.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UActorContainer>()
	{
		return UActorContainer::StaticClass();
	}
	UActorContainer::UActorContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorContainer);
	UActorContainer::~UActorContainer() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorFolderSet;
class UScriptStruct* FActorFolderSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorFolderSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorFolderSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorFolderSet, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ActorFolderSet"));
	}
	return Z_Registration_Info_UScriptStruct_ActorFolderSet.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActorFolderSet>()
{
	return FActorFolderSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorFolderSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorFolders_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorFolders_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ActorFolders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorFolderSet_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorFolderSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorFolderSet>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FActorFolderSet_Statics::NewProp_ActorFolders_ElementProp = { "ActorFolders", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UActorFolder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorFolderSet_Statics::NewProp_ActorFolders_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FActorFolderSet_Statics::NewProp_ActorFolders = { "ActorFolders", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorFolderSet, ActorFolders), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorFolderSet_Statics::NewProp_ActorFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorFolderSet_Statics::NewProp_ActorFolders_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorFolderSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorFolderSet_Statics::NewProp_ActorFolders_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorFolderSet_Statics::NewProp_ActorFolders,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorFolderSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ActorFolderSet",
		sizeof(FActorFolderSet),
		alignof(FActorFolderSet),
		Z_Construct_UScriptStruct_FActorFolderSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorFolderSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorFolderSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorFolderSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorFolderSet()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorFolderSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorFolderSet.InnerSingleton, Z_Construct_UScriptStruct_FActorFolderSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorFolderSet.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StreamableTextureInstance;
class UScriptStruct* FStreamableTextureInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StreamableTextureInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StreamableTextureInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamableTextureInstance, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StreamableTextureInstance"));
	}
	return Z_Registration_Info_UScriptStruct_StreamableTextureInstance.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStreamableTextureInstance>()
{
	return FStreamableTextureInstance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStreamableTextureInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamableTextureInstance_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure containing all information needed for determining the screen space\n * size of an object/ texture instance.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Structure containing all information needed for determining the screen space\nsize of an object/ texture instance." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreamableTextureInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamableTextureInstance>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreamableTextureInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StreamableTextureInstance",
		sizeof(FStreamableTextureInstance),
		alignof(FStreamableTextureInstance),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamableTextureInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamableTextureInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreamableTextureInstance()
	{
		if (!Z_Registration_Info_UScriptStruct_StreamableTextureInstance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StreamableTextureInstance.InnerSingleton, Z_Construct_UScriptStruct_FStreamableTextureInstance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StreamableTextureInstance.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDynamicTextureInstance>() == std::is_polymorphic<FStreamableTextureInstance>(), "USTRUCT FDynamicTextureInstance cannot be polymorphic unless super FStreamableTextureInstance is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DynamicTextureInstance;
class UScriptStruct* FDynamicTextureInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DynamicTextureInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DynamicTextureInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicTextureInstance, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DynamicTextureInstance"));
	}
	return Z_Registration_Info_UScriptStruct_DynamicTextureInstance.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDynamicTextureInstance>()
{
	return FDynamicTextureInstance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttached_MetaData[];
#endif
		static void NewProp_bAttached_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttached;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Serialized ULevel information about dynamic texture instances\n */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Serialized ULevel information about dynamic texture instances" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicTextureInstance>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_Texture_MetaData[] = {
		{ "Comment", "/** Texture that is used by a dynamic UPrimitiveComponent. */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Texture that is used by a dynamic UPrimitiveComponent." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDynamicTextureInstance, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_bAttached_MetaData[] = {
		{ "Comment", "/** Whether the primitive that uses this texture is attached to the scene or not. */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Whether the primitive that uses this texture is attached to the scene or not." },
	};
#endif
	void Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_bAttached_SetBit(void* Obj)
	{
		((FDynamicTextureInstance*)Obj)->bAttached = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_bAttached = { "bAttached", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDynamicTextureInstance), &Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_bAttached_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_bAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_bAttached_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_OriginalRadius_MetaData[] = {
		{ "Comment", "/** Original bounding sphere radius, at the time the TexelFactor was calculated originally. */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Original bounding sphere radius, at the time the TexelFactor was calculated originally." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_OriginalRadius = { "OriginalRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDynamicTextureInstance, OriginalRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_OriginalRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_OriginalRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_bAttached,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewProp_OriginalRadius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FStreamableTextureInstance,
		&NewStructOps,
		"DynamicTextureInstance",
		sizeof(FDynamicTextureInstance),
		alignof(FDynamicTextureInstance),
		Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDynamicTextureInstance()
	{
		if (!Z_Registration_Info_UScriptStruct_DynamicTextureInstance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DynamicTextureInstance.InnerSingleton, Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DynamicTextureInstance.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelSimplificationDetails;
class UScriptStruct* FLevelSimplificationDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSimplificationDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelSimplificationDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSimplificationDetails, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LevelSimplificationDetails"));
	}
	return Z_Registration_Info_UScriptStruct_LevelSimplificationDetails.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLevelSimplificationDetails>()
{
	return FLevelSimplificationDetails::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreatePackagePerAsset_MetaData[];
#endif
		static void NewProp_bCreatePackagePerAsset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreatePackagePerAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetailsPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DetailsPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshMaterialSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshMaterialSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideLandscapeExportLOD_MetaData[];
#endif
		static void NewProp_bOverrideLandscapeExportLOD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLandscapeExportLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeExportLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LandscapeExportLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeMaterialSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeMaterialSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBakeFoliageToLandscape_MetaData[];
#endif
		static void NewProp_bBakeFoliageToLandscape_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeFoliageToLandscape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBakeGrassToLandscape_MetaData[];
#endif
		static void NewProp_bBakeGrassToLandscape_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeGrassToLandscape;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSimplificationDetails>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bCreatePackagePerAsset_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether to create separate packages for each generated asset. All in map package otherwise */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Whether to create separate packages for each generated asset. All in map package otherwise" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bCreatePackagePerAsset_SetBit(void* Obj)
	{
		((FLevelSimplificationDetails*)Obj)->bCreatePackagePerAsset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bCreatePackagePerAsset = { "bCreatePackagePerAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLevelSimplificationDetails), &Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bCreatePackagePerAsset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bCreatePackagePerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bCreatePackagePerAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_DetailsPercentage_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Percentage of details for static mesh proxy */" },
		{ "DisplayName", "Static Mesh Details Percentage" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Percentage of details for static mesh proxy" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_DetailsPercentage = { "DetailsPercentage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSimplificationDetails, DetailsPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_DetailsPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_DetailsPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_StaticMeshMaterialSettings_MetaData[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/** Landscape material simplification */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Landscape material simplification" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_StaticMeshMaterialSettings = { "StaticMeshMaterialSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSimplificationDetails, StaticMeshMaterialSettings), Z_Construct_UScriptStruct_FMaterialProxySettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_StaticMeshMaterialSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_StaticMeshMaterialSettings_MetaData)) }; // 3442938596
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bOverrideLandscapeExportLOD_MetaData[] = {
		{ "Category", "Landscape" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bOverrideLandscapeExportLOD_SetBit(void* Obj)
	{
		((FLevelSimplificationDetails*)Obj)->bOverrideLandscapeExportLOD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bOverrideLandscapeExportLOD = { "bOverrideLandscapeExportLOD", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLevelSimplificationDetails), &Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bOverrideLandscapeExportLOD_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bOverrideLandscapeExportLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bOverrideLandscapeExportLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_LandscapeExportLOD_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ClampMax", "7" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Landscape LOD to use for static mesh generation, when not specified 'Max LODLevel' from landscape actor will be used */" },
		{ "editcondition", "bOverrideLandscapeExportLOD" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Landscape LOD to use for static mesh generation, when not specified 'Max LODLevel' from landscape actor will be used" },
		{ "UIMax", "7" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_LandscapeExportLOD = { "LandscapeExportLOD", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSimplificationDetails, LandscapeExportLOD), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_LandscapeExportLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_LandscapeExportLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_LandscapeMaterialSettings_MetaData[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/** Landscape material simplification */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Landscape material simplification" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_LandscapeMaterialSettings = { "LandscapeMaterialSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSimplificationDetails, LandscapeMaterialSettings), Z_Construct_UScriptStruct_FMaterialProxySettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_LandscapeMaterialSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_LandscapeMaterialSettings_MetaData)) }; // 3442938596
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeFoliageToLandscape_MetaData[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/** Whether to bake foliage into landscape static mesh texture */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Whether to bake foliage into landscape static mesh texture" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeFoliageToLandscape_SetBit(void* Obj)
	{
		((FLevelSimplificationDetails*)Obj)->bBakeFoliageToLandscape = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeFoliageToLandscape = { "bBakeFoliageToLandscape", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLevelSimplificationDetails), &Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeFoliageToLandscape_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeFoliageToLandscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeFoliageToLandscape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeGrassToLandscape_MetaData[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/** Whether to bake grass into landscape static mesh texture */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Whether to bake grass into landscape static mesh texture" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeGrassToLandscape_SetBit(void* Obj)
	{
		((FLevelSimplificationDetails*)Obj)->bBakeGrassToLandscape = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeGrassToLandscape = { "bBakeGrassToLandscape", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLevelSimplificationDetails), &Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeGrassToLandscape_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeGrassToLandscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeGrassToLandscape_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bCreatePackagePerAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_DetailsPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_StaticMeshMaterialSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bOverrideLandscapeExportLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_LandscapeExportLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_LandscapeMaterialSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeFoliageToLandscape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewProp_bBakeGrassToLandscape,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LevelSimplificationDetails",
		sizeof(FLevelSimplificationDetails),
		alignof(FLevelSimplificationDetails),
		Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSimplificationDetails()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelSimplificationDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelSimplificationDetails.InnerSingleton, Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelSimplificationDetails.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReplicatedStaticActorDestructionInfo;
class UScriptStruct* FReplicatedStaticActorDestructionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReplicatedStaticActorDestructionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReplicatedStaticActorDestructionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ReplicatedStaticActorDestructionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ReplicatedStaticActorDestructionInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FReplicatedStaticActorDestructionInfo>()
{
	return FReplicatedStaticActorDestructionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_ObjClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Stored information about replicated static/placed actors that have been destroyed in a level.\n * This information is cached in ULevel so that any net drivers that are created after these actors\n * are destroyed can access this info and correctly replicate the destruction to their clients.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Stored information about replicated static/placed actors that have been destroyed in a level.\nThis information is cached in ULevel so that any net drivers that are created after these actors\nare destroyed can access this info and correctly replicate the destruction to their clients." },
	};
#endif
	void* Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplicatedStaticActorDestructionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::NewProp_ObjClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::NewProp_ObjClass = { "ObjClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReplicatedStaticActorDestructionInfo, ObjClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::NewProp_ObjClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::NewProp_ObjClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::NewProp_ObjClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ReplicatedStaticActorDestructionInfo",
		sizeof(FReplicatedStaticActorDestructionInfo),
		alignof(FReplicatedStaticActorDestructionInfo),
		Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ReplicatedStaticActorDestructionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReplicatedStaticActorDestructionInfo.InnerSingleton, Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ReplicatedStaticActorDestructionInfo.InnerSingleton;
	}
#if WITH_EDITORONLY_DATA
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EActorPackagingScheme;
	static UEnum* EActorPackagingScheme_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EActorPackagingScheme.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EActorPackagingScheme.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EActorPackagingScheme, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EActorPackagingScheme"));
		}
		return Z_Registration_Info_UEnum_EActorPackagingScheme.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EActorPackagingScheme>()
	{
		return EActorPackagingScheme_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EActorPackagingScheme_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EActorPackagingScheme_Statics::Enumerators[] = {
		{ "EActorPackagingScheme::Original", (int64)EActorPackagingScheme::Original },
		{ "EActorPackagingScheme::Reduced", (int64)EActorPackagingScheme::Reduced },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EActorPackagingScheme_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum defining how external actors are saved on disk */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "Original.Name", "EActorPackagingScheme::Original" },
		{ "Reduced.Comment", "// Original scheme: ZZ/ZZ/... (maximum 1679616 folders,  ~0.6 files per folder with 1000000 files)\n" },
		{ "Reduced.Name", "EActorPackagingScheme::Reduced" },
		{ "Reduced.ToolTip", "Original scheme: ZZ/ZZ/... (maximum 1679616 folders,  ~0.6 files per folder with 1000000 files)" },
		{ "ToolTip", "Enum defining how external actors are saved on disk" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EActorPackagingScheme_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EActorPackagingScheme",
		"EActorPackagingScheme",
		Z_Construct_UEnum_Engine_EActorPackagingScheme_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EActorPackagingScheme_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EActorPackagingScheme_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EActorPackagingScheme_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EActorPackagingScheme()
	{
		if (!Z_Registration_Info_UEnum_EActorPackagingScheme.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EActorPackagingScheme.InnerSingleton, Z_Construct_UEnum_Engine_EActorPackagingScheme_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EActorPackagingScheme.InnerSingleton;
	}
#endif // WITH_EDITORONLY_DATA
	void ULevel::StaticRegisterNativesULevel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevel);
	UClass* Z_Construct_UClass_ULevel_NoRegister()
	{
		return ULevel::StaticClass();
	}
	struct Z_Construct_UClass_ULevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorsModifiedForPIE_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorsModifiedForPIE_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsModifiedForPIE_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ActorsModifiedForPIE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseExternalActors_MetaData[];
#endif
		static void NewProp_bUseExternalActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExternalActors;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwningWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Model;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ModelComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModelComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorCluster_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorCluster;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelScriptBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LevelScriptBlueprint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureStreamingResourceGuids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureStreamingResourceGuids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureStreamingResourceGuids;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTextureStreamingUnbuiltComponents_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumTextureStreamingUnbuiltComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTextureStreamingDirtyResources_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumTextureStreamingDirtyResources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelScriptActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LevelScriptActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavListStart_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NavListStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavListEnd_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NavListEnd;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NavDataChunks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavDataChunks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NavDataChunks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightmapTotalSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightmapTotalSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowmapTotalSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowmapTotalSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticNavigableGeometry_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticNavigableGeometry_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticNavigableGeometry;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StreamingTextureGuids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamingTextureGuids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StreamingTextureGuids;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StreamingTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamingTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StreamingTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackedTextureStreamingQualityLevelFeatureLevel_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_PackedTextureStreamingQualityLevelFeatureLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelBuildDataId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelBuildDataId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapBuildData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MapBuildData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightBuildLevelOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightBuildLevelOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLightingScenario_MetaData[];
#endif
		static void NewProp_bIsLightingScenario_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLightingScenario;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTextureStreamingRotationChanged_MetaData[];
#endif
		static void NewProp_bTextureStreamingRotationChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTextureStreamingRotationChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStaticComponentsRegisteredInStreamingManager_MetaData[];
#endif
		static void NewProp_bStaticComponentsRegisteredInStreamingManager_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStaticComponentsRegisteredInStreamingManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[];
#endif
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPartitioned_MetaData[];
#endif
		static void NewProp_bIsPartitioned_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPartitioned;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSimplification_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelSimplification;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPromptWhenAddingToLevelBeforeCheckout_MetaData[];
#endif
		static void NewProp_bPromptWhenAddingToLevelBeforeCheckout_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPromptWhenAddingToLevelBeforeCheckout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPromptWhenAddingToLevelOutsideBounds_MetaData[];
#endif
		static void NewProp_bPromptWhenAddingToLevelOutsideBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPromptWhenAddingToLevelOutsideBounds;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorPackagingScheme_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorPackagingScheme_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorPackagingScheme;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WorldSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldDataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WorldDataLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPartitionRuntimeCell_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WorldPartitionRuntimeCell;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DestroyedReplicatedStaticActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestroyedReplicatedStaticActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DestroyedReplicatedStaticActors;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelPartition_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_LevelPartition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerLevelPartition_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OwnerLevelPartition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseActorFolders_MetaData[];
#endif
		static void NewProp_bUseActorFolders_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseActorFolders;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorFolders_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorFolders_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorFolders_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ActorFolders;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FolderLabelToActorFolders_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FolderLabelToActorFolders_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FolderLabelToActorFolders_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FolderLabelToActorFolders;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LoadedExternalActorFolders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedExternalActorFolders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadedExternalActorFolders;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A Level is a collection of Actors (lights, volumes, mesh instances etc.).\n * Multiple Levels can be loaded and unloaded into the World to create a streaming experience.\n * \n * @see https://docs.unrealengine.com/latest/INT/Engine/Levels\n * @see UActor\n */" },
		{ "IncludePath", "Engine/Level.h" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A Level is a collection of Actors (lights, volumes, mesh instances etc.).\nMultiple Levels can be loaded and unloaded into the World to create a streaming experience.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Levels\n@see UActor" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_ActorsModifiedForPIE_ValueProp = { "ActorsModifiedForPIE", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_ActorsModifiedForPIE_Key_KeyProp = { "ActorsModifiedForPIE_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_ActorsModifiedForPIE_MetaData[] = {
		{ "Comment", "/** List of modified, unsaved actors that needs to be duplicated for PIE */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "List of modified, unsaved actors that needs to be duplicated for PIE" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_ActorsModifiedForPIE = { "ActorsModifiedForPIE", nullptr, (EPropertyFlags)0x0014800800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, ActorsModifiedForPIE), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_ActorsModifiedForPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_ActorsModifiedForPIE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_bUseExternalActors_MetaData[] = {
		{ "Category", "World" },
		{ "Comment", "/** Use external actors, new actor spawned in this level will be external and existing external actors will be loaded on load. */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Use external actors, new actor spawned in this level will be external and existing external actors will be loaded on load." },
	};
#endif
	void Z_Construct_UClass_ULevel_Statics::NewProp_bUseExternalActors_SetBit(void* Obj)
	{
		((ULevel*)Obj)->bUseExternalActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_bUseExternalActors = { "bUseExternalActors", nullptr, (EPropertyFlags)0x0010000800000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevel), &Z_Construct_UClass_ULevel_Statics::NewProp_bUseExternalActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_bUseExternalActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_bUseExternalActors_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_OwningWorld_MetaData[] = {
		{ "Comment", "/** \n\x09 * The World that has this level in its Levels array. \n\x09 * This is not the same as GetOuter(), because GetOuter() for a streaming level is a vestigial world that is not used. \n\x09 * It should not be accessed during BeginDestroy(), just like any other UObject references, since GC may occur in any order.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "The World that has this level in its Levels array.\nThis is not the same as GetOuter(), because GetOuter() for a streaming level is a vestigial world that is not used.\nIt should not be accessed during BeginDestroy(), just like any other UObject references, since GC may occur in any order." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_OwningWorld = { "OwningWorld", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, OwningWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_OwningWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_OwningWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_Model_MetaData[] = {
		{ "Comment", "/** BSP UModel. */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "BSP UModel." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, Model), Z_Construct_UClass_UModel, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_Model_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_Model_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_ModelComponents_Inner = { "ModelComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UModelComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_ModelComponents_MetaData[] = {
		{ "Comment", "/** BSP Model components used for rendering. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "BSP Model components used for rendering." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_ModelComponents = { "ModelComponents", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, ModelComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_ModelComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_ModelComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_ActorCluster_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_ActorCluster = { "ActorCluster", nullptr, (EPropertyFlags)0x0014000400282008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, ActorCluster), Z_Construct_UClass_ULevelActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_ActorCluster_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_ActorCluster_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_LevelScriptBlueprint_MetaData[] = {
		{ "Comment", "/** Reference to the blueprint for level scripting */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Reference to the blueprint for level scripting" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_LevelScriptBlueprint = { "LevelScriptBlueprint", nullptr, (EPropertyFlags)0x0014000c00000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, LevelScriptBlueprint), Z_Construct_UClass_ULevelScriptBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_LevelScriptBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_LevelScriptBlueprint_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_TextureStreamingResourceGuids_Inner = { "TextureStreamingResourceGuids", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_TextureStreamingResourceGuids_MetaData[] = {
		{ "Comment", "/** The Guid list of all materials and meshes Guid used in the last texture streaming build. Used to know if the streaming data needs rebuild. Only used for the persistent level. */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "The Guid list of all materials and meshes Guid used in the last texture streaming build. Used to know if the streaming data needs rebuild. Only used for the persistent level." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_TextureStreamingResourceGuids = { "TextureStreamingResourceGuids", nullptr, (EPropertyFlags)0x0010000c00000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, TextureStreamingResourceGuids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_TextureStreamingResourceGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_TextureStreamingResourceGuids_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_NumTextureStreamingUnbuiltComponents_MetaData[] = {
		{ "Comment", "/** Num of components missing valid texture streaming data. Updated in map check. */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Num of components missing valid texture streaming data. Updated in map check." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_NumTextureStreamingUnbuiltComponents = { "NumTextureStreamingUnbuiltComponents", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, NumTextureStreamingUnbuiltComponents), METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_NumTextureStreamingUnbuiltComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_NumTextureStreamingUnbuiltComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_NumTextureStreamingDirtyResources_MetaData[] = {
		{ "Comment", "/** Num of resources that have changed since the last texture streaming build. Updated in map check. */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Num of resources that have changed since the last texture streaming build. Updated in map check." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_NumTextureStreamingDirtyResources = { "NumTextureStreamingDirtyResources", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, NumTextureStreamingDirtyResources), METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_NumTextureStreamingDirtyResources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_NumTextureStreamingDirtyResources_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_LevelScriptActor_MetaData[] = {
		{ "Comment", "/** The level scripting actor, created by instantiating the class from LevelScriptBlueprint.  This handles all level scripting */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "The level scripting actor, created by instantiating the class from LevelScriptBlueprint.  This handles all level scripting" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_LevelScriptActor = { "LevelScriptActor", nullptr, (EPropertyFlags)0x0014000400000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, LevelScriptActor), Z_Construct_UClass_ALevelScriptActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_LevelScriptActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_LevelScriptActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_NavListStart_MetaData[] = {
		{ "Comment", "/**\n\x09 * Start and end of the navigation list for this level, used for quickly fixing up\n\x09 * when streaming this level in/out. @TODO DEPRECATED - DELETE\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Start and end of the navigation list for this level, used for quickly fixing up\nwhen streaming this level in/out. @TODO DEPRECATED - DELETE" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_NavListStart = { "NavListStart", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, NavListStart), Z_Construct_UClass_ANavigationObjectBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_NavListStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_NavListStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_NavListEnd_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_NavListEnd = { "NavListEnd", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, NavListEnd), Z_Construct_UClass_ANavigationObjectBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_NavListEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_NavListEnd_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_NavDataChunks_Inner = { "NavDataChunks", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNavigationDataChunk_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_NavDataChunks_MetaData[] = {
		{ "Comment", "/** Navigation related data that can be stored per level */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Navigation related data that can be stored per level" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_NavDataChunks = { "NavDataChunks", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, NavDataChunks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_NavDataChunks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_NavDataChunks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_LightmapTotalSize_MetaData[] = {
		{ "Category", "Level" },
		{ "Comment", "/** Total number of KB used for lightmap textures in the level. */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Total number of KB used for lightmap textures in the level." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_LightmapTotalSize = { "LightmapTotalSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, LightmapTotalSize), METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_LightmapTotalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_LightmapTotalSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_ShadowmapTotalSize_MetaData[] = {
		{ "Category", "Level" },
		{ "Comment", "/** Total number of KB used for shadowmap textures in the level. */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Total number of KB used for shadowmap textures in the level." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_ShadowmapTotalSize = { "ShadowmapTotalSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, ShadowmapTotalSize), METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_ShadowmapTotalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_ShadowmapTotalSize_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_StaticNavigableGeometry_Inner = { "StaticNavigableGeometry", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_StaticNavigableGeometry_MetaData[] = {
		{ "Comment", "/** threes of triangle vertices - AABB filtering friendly. Stored if there's a runtime need to rebuild navigation that accepts BSPs \n\x09 *\x09""as well - it's a lot easier this way than retrieve this data at runtime */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "threes of triangle vertices - AABB filtering friendly. Stored if there's a runtime need to rebuild navigation that accepts BSPs\n    as well - it's a lot easier this way than retrieve this data at runtime" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_StaticNavigableGeometry = { "StaticNavigableGeometry", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, StaticNavigableGeometry), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_StaticNavigableGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_StaticNavigableGeometry_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_StreamingTextureGuids_Inner = { "StreamingTextureGuids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_StreamingTextureGuids_MetaData[] = {
		{ "Comment", "/** The Guid of each streamable texture refered by FStreamingTextureBuildInfo::TextureLevelIndex\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "The Guid of each streamable texture refered by FStreamingTextureBuildInfo::TextureLevelIndex" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_StreamingTextureGuids = { "StreamingTextureGuids", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, StreamingTextureGuids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_StreamingTextureGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_StreamingTextureGuids_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_StreamingTextures_Inner = { "StreamingTextures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_StreamingTextures_MetaData[] = {
		{ "Comment", "/** The name of each streamable texture referred by FStreamingTextureBuildInfo::TextureLevelIndex */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "The name of each streamable texture referred by FStreamingTextureBuildInfo::TextureLevelIndex" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_StreamingTextures = { "StreamingTextures", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, StreamingTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_StreamingTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_StreamingTextures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_PackedTextureStreamingQualityLevelFeatureLevel_MetaData[] = {
		{ "Comment", "/** Packed quality level and feature level used when building texture streaming data. This is used by runtime to determine if built data can be used or not. */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Packed quality level and feature level used when building texture streaming data. This is used by runtime to determine if built data can be used or not." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_PackedTextureStreamingQualityLevelFeatureLevel = { "PackedTextureStreamingQualityLevelFeatureLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, PackedTextureStreamingQualityLevelFeatureLevel), METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_PackedTextureStreamingQualityLevelFeatureLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_PackedTextureStreamingQualityLevelFeatureLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_LevelBuildDataId_MetaData[] = {
		{ "Comment", "/** Identifies map build data specific to this level, eg lighting volume samples. */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Identifies map build data specific to this level, eg lighting volume samples." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_LevelBuildDataId = { "LevelBuildDataId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, LevelBuildDataId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_LevelBuildDataId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_LevelBuildDataId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_MapBuildData_MetaData[] = {
		{ "Comment", "/** \n\x09 * Registry for data from the map build.  This is stored in a separate package from the level to speed up saving / autosaving. \n\x09 * ReleaseRenderingResources must be called before changing what is referenced, to update the rendering thread state.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Registry for data from the map build.  This is stored in a separate package from the level to speed up saving / autosaving.\nReleaseRenderingResources must be called before changing what is referenced, to update the rendering thread state." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_MapBuildData = { "MapBuildData", nullptr, (EPropertyFlags)0x0014800000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, MapBuildData), Z_Construct_UClass_UMapBuildDataRegistry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_MapBuildData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_MapBuildData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_LightBuildLevelOffset_MetaData[] = {
		{ "Comment", "/** Level offset at time when lighting was built */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Level offset at time when lighting was built" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_LightBuildLevelOffset = { "LightBuildLevelOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, LightBuildLevelOffset), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_LightBuildLevelOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_LightBuildLevelOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_bIsLightingScenario_MetaData[] = {
		{ "Comment", "/** \n\x09 * Whether the level is a lighting scenario.  Lighting is built separately for each lighting scenario level with all other scenario levels hidden. \n\x09 * Only one lighting scenario level should be visible at a time for correct rendering, and lightmaps from that level will be used on the rest of the world.\n\x09 * Note: When a lighting scenario level is present, lightmaps for all streaming levels are placed in the scenario's _BuildData package.  \n\x09 *\x09\x09This means that lightmaps for those streaming levels will not be streamed with them.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Whether the level is a lighting scenario.  Lighting is built separately for each lighting scenario level with all other scenario levels hidden.\nOnly one lighting scenario level should be visible at a time for correct rendering, and lightmaps from that level will be used on the rest of the world.\nNote: When a lighting scenario level is present, lightmaps for all streaming levels are placed in the scenario's _BuildData package.\n             This means that lightmaps for those streaming levels will not be streamed with them." },
	};
#endif
	void Z_Construct_UClass_ULevel_Statics::NewProp_bIsLightingScenario_SetBit(void* Obj)
	{
		((ULevel*)Obj)->bIsLightingScenario = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_bIsLightingScenario = { "bIsLightingScenario", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevel), &Z_Construct_UClass_ULevel_Statics::NewProp_bIsLightingScenario_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_bIsLightingScenario_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_bIsLightingScenario_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_bTextureStreamingRotationChanged_MetaData[] = {
		{ "Comment", "/** Whether a level transform rotation was applied since the texture streaming builds. Invalidates the precomputed streaming bounds. */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Whether a level transform rotation was applied since the texture streaming builds. Invalidates the precomputed streaming bounds." },
	};
#endif
	void Z_Construct_UClass_ULevel_Statics::NewProp_bTextureStreamingRotationChanged_SetBit(void* Obj)
	{
		((ULevel*)Obj)->bTextureStreamingRotationChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_bTextureStreamingRotationChanged = { "bTextureStreamingRotationChanged", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevel), &Z_Construct_UClass_ULevel_Statics::NewProp_bTextureStreamingRotationChanged_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_bTextureStreamingRotationChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_bTextureStreamingRotationChanged_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_bStaticComponentsRegisteredInStreamingManager_MetaData[] = {
		{ "Comment", "/** \n\x09 * Whether the level has finished registering all static components in the streaming manager.\n\x09 * Once a level static components are registered, all new components need to go through the dynamic path.\n\x09 * This flag is used to direct the registration to the right path with a low perf impact.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Whether the level has finished registering all static components in the streaming manager.\nOnce a level static components are registered, all new components need to go through the dynamic path.\nThis flag is used to direct the registration to the right path with a low perf impact." },
	};
#endif
	void Z_Construct_UClass_ULevel_Statics::NewProp_bStaticComponentsRegisteredInStreamingManager_SetBit(void* Obj)
	{
		((ULevel*)Obj)->bStaticComponentsRegisteredInStreamingManager = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_bStaticComponentsRegisteredInStreamingManager = { "bStaticComponentsRegisteredInStreamingManager", nullptr, (EPropertyFlags)0x0010000400202000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevel), &Z_Construct_UClass_ULevel_Statics::NewProp_bStaticComponentsRegisteredInStreamingManager_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_bStaticComponentsRegisteredInStreamingManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_bStaticComponentsRegisteredInStreamingManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "Comment", "/** \n\x09 * Whether the level is currently visible/ associated with the world. \n\x09 * If false, may not yet be fully removed from the world.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Whether the level is currently visible/ associated with the world.\nIf false, may not yet be fully removed from the world." },
	};
#endif
	void Z_Construct_UClass_ULevel_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((ULevel*)Obj)->bIsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevel), &Z_Construct_UClass_ULevel_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_bIsVisible_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_bLocked_MetaData[] = {
		{ "Comment", "/** Whether this level is locked; that is, its actors are read-only \n\x09 *\x09Used by WorldBrowser to lock a level when corresponding ULevelStreaming does not exist\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Whether this level is locked; that is, its actors are read-only\n    Used by WorldBrowser to lock a level when corresponding ULevelStreaming does not exist" },
	};
#endif
	void Z_Construct_UClass_ULevel_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((ULevel*)Obj)->bLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevel), &Z_Construct_UClass_ULevel_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_bLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_bLocked_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_bIsPartitioned_MetaData[] = {
		{ "Comment", "/** Whether the level is partitioned or not. */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Whether the level is partitioned or not." },
	};
#endif
	void Z_Construct_UClass_ULevel_Statics::NewProp_bIsPartitioned_SetBit(void* Obj)
	{
		((ULevel*)Obj)->bIsPartitioned = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_bIsPartitioned = { "bIsPartitioned", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULevel), &Z_Construct_UClass_ULevel_Statics::NewProp_bIsPartitioned_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_bIsPartitioned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_bIsPartitioned_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_LevelSimplification_MetaData[] = {
		{ "Comment", "/** Level simplification settings for each LOD */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Level simplification settings for each LOD" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_LevelSimplification = { "LevelSimplification", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(LevelSimplification, ULevel), nullptr, nullptr, STRUCT_OFFSET(ULevel, LevelSimplification), Z_Construct_UScriptStruct_FLevelSimplificationDetails, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_LevelSimplification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_LevelSimplification_MetaData)) }; // 2261177661
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_LevelColor_MetaData[] = {
		{ "Comment", "/** \n\x09 * The level color used for visualization. (Show -> Advanced -> Level Coloration)\n\x09 * Used only in world composition mode\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "The level color used for visualization. (Show -> Advanced -> Level Coloration)\nUsed only in world composition mode" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_LevelColor = { "LevelColor", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, LevelColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_LevelColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_LevelColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_bPromptWhenAddingToLevelBeforeCheckout_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	void Z_Construct_UClass_ULevel_Statics::NewProp_bPromptWhenAddingToLevelBeforeCheckout_SetBit(void* Obj)
	{
		((ULevel*)Obj)->bPromptWhenAddingToLevelBeforeCheckout = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_bPromptWhenAddingToLevelBeforeCheckout = { "bPromptWhenAddingToLevelBeforeCheckout", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevel), &Z_Construct_UClass_ULevel_Statics::NewProp_bPromptWhenAddingToLevelBeforeCheckout_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_bPromptWhenAddingToLevelBeforeCheckout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_bPromptWhenAddingToLevelBeforeCheckout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_bPromptWhenAddingToLevelOutsideBounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	void Z_Construct_UClass_ULevel_Statics::NewProp_bPromptWhenAddingToLevelOutsideBounds_SetBit(void* Obj)
	{
		((ULevel*)Obj)->bPromptWhenAddingToLevelOutsideBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_bPromptWhenAddingToLevelOutsideBounds = { "bPromptWhenAddingToLevelOutsideBounds", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevel), &Z_Construct_UClass_ULevel_Statics::NewProp_bPromptWhenAddingToLevelOutsideBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_bPromptWhenAddingToLevelOutsideBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_bPromptWhenAddingToLevelOutsideBounds_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_ActorPackagingScheme_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_ActorPackagingScheme_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_ActorPackagingScheme = { "ActorPackagingScheme", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, ActorPackagingScheme), Z_Construct_UEnum_Engine_EActorPackagingScheme, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_ActorPackagingScheme_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_ActorPackagingScheme_MetaData)) }; // 2446367387
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_WorldSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_WorldSettings = { "WorldSettings", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, WorldSettings), Z_Construct_UClass_AWorldSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_WorldSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_WorldSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_WorldDataLayers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_WorldDataLayers = { "WorldDataLayers", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, WorldDataLayers), Z_Construct_UClass_AWorldDataLayers_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_WorldDataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_WorldDataLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_WorldPartitionRuntimeCell_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_WorldPartitionRuntimeCell = { "WorldPartitionRuntimeCell", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, WorldPartitionRuntimeCell), Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_WorldPartitionRuntimeCell_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_WorldPartitionRuntimeCell_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_AssetUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_AssetUserData_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_DestroyedReplicatedStaticActors_Inner = { "DestroyedReplicatedStaticActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo, METADATA_PARAMS(nullptr, 0) }; // 783488674
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_DestroyedReplicatedStaticActors_MetaData[] = {
		{ "Comment", "/** List of replicated static actors that have been destroyed. Used by net drivers to replicate destruction to clients. */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "List of replicated static actors that have been destroyed. Used by net drivers to replicate destruction to clients." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_DestroyedReplicatedStaticActors = { "DestroyedReplicatedStaticActors", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, DestroyedReplicatedStaticActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_DestroyedReplicatedStaticActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_DestroyedReplicatedStaticActors_MetaData)) }; // 783488674
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_LevelPartition_MetaData[] = {
		{ "Category", "World" },
		{ "Comment", "/** Level partition, if any */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Level partition, if any" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_LevelPartition = { "LevelPartition", nullptr, (EPropertyFlags)0x0044000800000801, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, LevelPartition), Z_Construct_UClass_ULevelPartitionInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_LevelPartition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_LevelPartition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_OwnerLevelPartition_MetaData[] = {
		{ "Comment", "/** When the level is partitioned, this will point to the owner partition (will be the same as this->LevelPartition in case that is the top partition level */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "When the level is partitioned, this will point to the owner partition (will be the same as this->LevelPartition in case that is the top partition level" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_OwnerLevelPartition = { "OwnerLevelPartition", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, OwnerLevelPartition), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_OwnerLevelPartition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_OwnerLevelPartition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_bUseActorFolders_MetaData[] = {
		{ "Category", "World" },
		{ "Comment", "/** Use actor folder objects, actor folders of this level will be persistent in their own object. */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Use actor folder objects, actor folders of this level will be persistent in their own object." },
	};
#endif
	void Z_Construct_UClass_ULevel_Statics::NewProp_bUseActorFolders_SetBit(void* Obj)
	{
		((ULevel*)Obj)->bUseActorFolders = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_bUseActorFolders = { "bUseActorFolders", nullptr, (EPropertyFlags)0x0040000800000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevel), &Z_Construct_UClass_ULevel_Statics::NewProp_bUseActorFolders_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_bUseActorFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_bUseActorFolders_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_ActorFolders_ValueProp = { "ActorFolders", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UActorFolder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_ActorFolders_Key_KeyProp = { "ActorFolders_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_ActorFolders_MetaData[] = {
		{ "Comment", "/** Actor folder objects. They can either be saved inside level or in their own package. */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Actor folder objects. They can either be saved inside level or in their own package." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_ActorFolders = { "ActorFolders", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, ActorFolders), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_ActorFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_ActorFolders_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_FolderLabelToActorFolders_ValueProp = { "FolderLabelToActorFolders", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FActorFolderSet, METADATA_PARAMS(nullptr, 0) }; // 90588531
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_FolderLabelToActorFolders_Key_KeyProp = { "FolderLabelToActorFolders_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_FolderLabelToActorFolders_MetaData[] = {
		{ "Comment", "/** Acceleration table used to find an ActorFolder object for a given folder path. */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Acceleration table used to find an ActorFolder object for a given folder path." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_FolderLabelToActorFolders = { "FolderLabelToActorFolders", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, FolderLabelToActorFolders), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_FolderLabelToActorFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_FolderLabelToActorFolders_MetaData)) }; // 90588531
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_LoadedExternalActorFolders_Inner = { "LoadedExternalActorFolders", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UActorFolder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevel_Statics::NewProp_LoadedExternalActorFolders_MetaData[] = {
		{ "Comment", "/** Temporary array containing actor folder objects manually loaded from their external packages (only used while loading the level). */" },
		{ "ModuleRelativePath", "Classes/Engine/Level.h" },
		{ "ToolTip", "Temporary array containing actor folder objects manually loaded from their external packages (only used while loading the level)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevel_Statics::NewProp_LoadedExternalActorFolders = { "LoadedExternalActorFolders", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevel, LoadedExternalActorFolders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::NewProp_LoadedExternalActorFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::NewProp_LoadedExternalActorFolders_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevel_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_ActorsModifiedForPIE_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_ActorsModifiedForPIE_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_ActorsModifiedForPIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_bUseExternalActors,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_OwningWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_ModelComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_ModelComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_ActorCluster,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_LevelScriptBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_TextureStreamingResourceGuids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_TextureStreamingResourceGuids,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_NumTextureStreamingUnbuiltComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_NumTextureStreamingDirtyResources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_LevelScriptActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_NavListStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_NavListEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_NavDataChunks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_NavDataChunks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_LightmapTotalSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_ShadowmapTotalSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_StaticNavigableGeometry_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_StaticNavigableGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_StreamingTextureGuids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_StreamingTextureGuids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_StreamingTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_StreamingTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_PackedTextureStreamingQualityLevelFeatureLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_LevelBuildDataId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_MapBuildData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_LightBuildLevelOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_bIsLightingScenario,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_bTextureStreamingRotationChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_bStaticComponentsRegisteredInStreamingManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_bIsVisible,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_bLocked,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_bIsPartitioned,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_LevelSimplification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_LevelColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_bPromptWhenAddingToLevelBeforeCheckout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_bPromptWhenAddingToLevelOutsideBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_ActorPackagingScheme_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_ActorPackagingScheme,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_WorldSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_WorldDataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_WorldPartitionRuntimeCell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_AssetUserData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_AssetUserData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_DestroyedReplicatedStaticActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_DestroyedReplicatedStaticActors,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_LevelPartition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_OwnerLevelPartition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_bUseActorFolders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_ActorFolders_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_ActorFolders_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_ActorFolders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_FolderLabelToActorFolders_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_FolderLabelToActorFolders_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_FolderLabelToActorFolders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_LoadedExternalActorFolders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevel_Statics::NewProp_LoadedExternalActorFolders,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULevel_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(ULevel, IInterface_AssetUserData), false },  // 1283872964
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevel_Statics::ClassParams = {
		&ULevel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevel_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevel()
	{
		if (!Z_Registration_Info_UClass_ULevel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevel.OuterSingleton, Z_Construct_UClass_ULevel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevel.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ULevel>()
	{
		return ULevel::StaticClass();
	}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULevel)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_Statics
	{
#if WITH_EDITORONLY_DATA
		static const FEnumRegisterCompiledInInfo EnumInfo[];
#endif
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
#if WITH_EDITORONLY_DATA
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_Statics::EnumInfo[] = {
		{ EActorPackagingScheme_StaticEnum, TEXT("EActorPackagingScheme"), &Z_Registration_Info_UEnum_EActorPackagingScheme, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2446367387U) },
	};
#endif
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_Statics::ScriptStructInfo[] = {
		{ FActorFolderSet::StaticStruct, Z_Construct_UScriptStruct_FActorFolderSet_Statics::NewStructOps, TEXT("ActorFolderSet"), &Z_Registration_Info_UScriptStruct_ActorFolderSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorFolderSet), 90588531U) },
		{ FStreamableTextureInstance::StaticStruct, Z_Construct_UScriptStruct_FStreamableTextureInstance_Statics::NewStructOps, TEXT("StreamableTextureInstance"), &Z_Registration_Info_UScriptStruct_StreamableTextureInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreamableTextureInstance), 373312162U) },
		{ FDynamicTextureInstance::StaticStruct, Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics::NewStructOps, TEXT("DynamicTextureInstance"), &Z_Registration_Info_UScriptStruct_DynamicTextureInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDynamicTextureInstance), 3481922127U) },
		{ FLevelSimplificationDetails::StaticStruct, Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics::NewStructOps, TEXT("LevelSimplificationDetails"), &Z_Registration_Info_UScriptStruct_LevelSimplificationDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelSimplificationDetails), 2261177661U) },
		{ FReplicatedStaticActorDestructionInfo::StaticStruct, Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics::NewStructOps, TEXT("ReplicatedStaticActorDestructionInfo"), &Z_Registration_Info_UScriptStruct_ReplicatedStaticActorDestructionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplicatedStaticActorDestructionInfo), 783488674U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelPartitionInterface, ULevelPartitionInterface::StaticClass, TEXT("ULevelPartitionInterface"), &Z_Registration_Info_UClass_ULevelPartitionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelPartitionInterface), 4007860402U) },
		{ Z_Construct_UClass_UActorContainer, UActorContainer::StaticClass, TEXT("UActorContainer"), &Z_Registration_Info_UClass_UActorContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorContainer), 1804866782U) },
		{ Z_Construct_UClass_ULevel, ULevel::StaticClass, TEXT("ULevel"), &Z_Registration_Info_UClass_ULevel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevel), 1673468153U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_3788342731(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_Statics::ScriptStructInfo),
		IF_WITH_EDITORONLY_DATA(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_Statics::EnumInfo, nullptr), IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_Statics::EnumInfo), 0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
