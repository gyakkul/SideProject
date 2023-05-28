// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/WorldFolders.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldFolders() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UNREALED_API UClass* Z_Construct_UClass_UWorldFolders();
	UNREALED_API UClass* Z_Construct_UClass_UWorldFolders_NoRegister();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FActorFolderProps();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FActorPlacementFolder();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorFolderProps;
class UScriptStruct* FActorFolderProps::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorFolderProps.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorFolderProps.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorFolderProps, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ActorFolderProps"));
	}
	return Z_Registration_Info_UScriptStruct_ActorFolderProps.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FActorFolderProps>()
{
	return FActorFolderProps::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorFolderProps_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorFolderProps_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldFolders.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorFolderProps_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorFolderProps>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorFolderProps_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"ActorFolderProps",
		sizeof(FActorFolderProps),
		alignof(FActorFolderProps),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorFolderProps_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorFolderProps_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorFolderProps()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorFolderProps.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorFolderProps.InnerSingleton, Z_Construct_UScriptStruct_FActorFolderProps_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorFolderProps.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorPlacementFolder;
class UScriptStruct* FActorPlacementFolder::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorPlacementFolder.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorPlacementFolder.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorPlacementFolder, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ActorPlacementFolder"));
	}
	return Z_Registration_Info_UScriptStruct_ActorPlacementFolder.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FActorPlacementFolder>()
{
	return FActorPlacementFolder::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorPlacementFolder_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootObjectPtr_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_RootObjectPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorFolderGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorFolderGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPlacementFolder_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldFolders.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorPlacementFolder_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorPlacementFolder>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPlacementFolder_Statics::NewProp_Path_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldFolders.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FActorPlacementFolder_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorPlacementFolder, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPlacementFolder_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPlacementFolder_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPlacementFolder_Statics::NewProp_RootObjectPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldFolders.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FActorPlacementFolder_Statics::NewProp_RootObjectPtr = { "RootObjectPtr", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorPlacementFolder, RootObjectPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPlacementFolder_Statics::NewProp_RootObjectPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPlacementFolder_Statics::NewProp_RootObjectPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPlacementFolder_Statics::NewProp_ActorFolderGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldFolders.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorPlacementFolder_Statics::NewProp_ActorFolderGuid = { "ActorFolderGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorPlacementFolder, ActorFolderGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPlacementFolder_Statics::NewProp_ActorFolderGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPlacementFolder_Statics::NewProp_ActorFolderGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorPlacementFolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPlacementFolder_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPlacementFolder_Statics::NewProp_RootObjectPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPlacementFolder_Statics::NewProp_ActorFolderGuid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorPlacementFolder_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"ActorPlacementFolder",
		sizeof(FActorPlacementFolder),
		alignof(FActorPlacementFolder),
		Z_Construct_UScriptStruct_FActorPlacementFolder_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPlacementFolder_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPlacementFolder_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPlacementFolder_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorPlacementFolder()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorPlacementFolder.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorPlacementFolder.InnerSingleton, Z_Construct_UScriptStruct_FActorPlacementFolder_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorPlacementFolder.InnerSingleton;
	}
	void UWorldFolders::StaticRegisterNativesUWorldFolders()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldFolders);
	UClass* Z_Construct_UClass_UWorldFolders_NoRegister()
	{
		return UWorldFolders::StaticClass();
	}
	struct Z_Construct_UClass_UWorldFolders_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentFolder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldFolders_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldFolders_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Per-World Actor Folders UObject (used to support undo/redo reliably) */" },
		{ "IncludePath", "WorldFolders.h" },
		{ "ModuleRelativePath", "Public/WorldFolders.h" },
		{ "ToolTip", "Per-World Actor Folders UObject (used to support undo/redo reliably)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldFolders_Statics::NewProp_CurrentFolder_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldFolders.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldFolders_Statics::NewProp_CurrentFolder = { "CurrentFolder", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldFolders, CurrentFolder), Z_Construct_UScriptStruct_FActorPlacementFolder, METADATA_PARAMS(Z_Construct_UClass_UWorldFolders_Statics::NewProp_CurrentFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldFolders_Statics::NewProp_CurrentFolder_MetaData)) }; // 1981310710
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldFolders_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldFolders_Statics::NewProp_CurrentFolder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldFolders_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldFolders>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldFolders_Statics::ClassParams = {
		&UWorldFolders::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldFolders_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldFolders_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldFolders_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldFolders_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldFolders()
	{
		if (!Z_Registration_Info_UClass_UWorldFolders.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldFolders.OuterSingleton, Z_Construct_UClass_UWorldFolders_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldFolders.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UWorldFolders>()
	{
		return UWorldFolders::StaticClass();
	}
	UWorldFolders::UWorldFolders(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldFolders);
	UWorldFolders::~UWorldFolders() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UWorldFolders)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldFolders_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldFolders_h_Statics::ScriptStructInfo[] = {
		{ FActorFolderProps::StaticStruct, Z_Construct_UScriptStruct_FActorFolderProps_Statics::NewStructOps, TEXT("ActorFolderProps"), &Z_Registration_Info_UScriptStruct_ActorFolderProps, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorFolderProps), 1051662490U) },
		{ FActorPlacementFolder::StaticStruct, Z_Construct_UScriptStruct_FActorPlacementFolder_Statics::NewStructOps, TEXT("ActorPlacementFolder"), &Z_Registration_Info_UScriptStruct_ActorPlacementFolder, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorPlacementFolder), 1981310710U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldFolders_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldFolders, UWorldFolders::StaticClass, TEXT("UWorldFolders"), &Z_Registration_Info_UClass_UWorldFolders, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldFolders), 890908439U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldFolders_h_2109409386(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldFolders_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldFolders_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldFolders_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldFolders_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
