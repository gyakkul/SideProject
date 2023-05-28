// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tests/Types/ActorWithReferencesInCDO.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorWithReferencesInCDO() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_AActorWithReferencesInCDO();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_AActorWithReferencesInCDO_NoRegister();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FExternalReferenceDummy();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshots();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExternalReferenceDummy;
class UScriptStruct* FExternalReferenceDummy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExternalReferenceDummy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExternalReferenceDummy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExternalReferenceDummy, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("ExternalReferenceDummy"));
	}
	return Z_Registration_Info_UScriptStruct_ExternalReferenceDummy.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FExternalReferenceDummy>()
{
	return FExternalReferenceDummy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExternalReferenceDummy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalReferenceDummy_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/Types/ActorWithReferencesInCDO.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExternalReferenceDummy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExternalReferenceDummy>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExternalReferenceDummy_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/ActorWithReferencesInCDO.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FExternalReferenceDummy_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExternalReferenceDummy, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalReferenceDummy_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalReferenceDummy_Statics::NewProp_Object_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExternalReferenceDummy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExternalReferenceDummy_Statics::NewProp_Object,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExternalReferenceDummy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		nullptr,
		&NewStructOps,
		"ExternalReferenceDummy",
		sizeof(FExternalReferenceDummy),
		alignof(FExternalReferenceDummy),
		Z_Construct_UScriptStruct_FExternalReferenceDummy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalReferenceDummy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExternalReferenceDummy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExternalReferenceDummy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExternalReferenceDummy()
	{
		if (!Z_Registration_Info_UScriptStruct_ExternalReferenceDummy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExternalReferenceDummy.InnerSingleton, Z_Construct_UScriptStruct_FExternalReferenceDummy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExternalReferenceDummy.InnerSingleton;
	}
	void AActorWithReferencesInCDO::StaticRegisterNativesAActorWithReferencesInCDO()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActorWithReferencesInCDO);
	UClass* Z_Construct_UClass_AActorWithReferencesInCDO_NoRegister()
	{
		return AActorWithReferencesInCDO::StaticClass();
	}
	struct Z_Construct_UClass_AActorWithReferencesInCDO_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Set_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Set_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Set;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntKeyMap_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntKeyMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntKeyMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_IntKeyMap;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntValueMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntValueMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntValueMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_IntValueMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Struct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CubeMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CubeMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CylinderMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CylinderMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActorWithReferencesInCDO_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorWithReferencesInCDO_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/Types/ActorWithReferencesInCDO.h" },
		{ "ModuleRelativePath", "Private/Tests/Types/ActorWithReferencesInCDO.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FExternalReferenceDummy, METADATA_PARAMS(nullptr, 0) }; // 2951089210
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_Array_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/******************** Properties  ********************/" },
		{ "ModuleRelativePath", "Private/Tests/Types/ActorWithReferencesInCDO.h" },
		{ "ToolTip", "***************** Properties  *******************" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AActorWithReferencesInCDO, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_Array_MetaData)) }; // 2951089210
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_Set_ElementProp = { "Set", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FExternalReferenceDummy, METADATA_PARAMS(nullptr, 0) }; // 2951089210
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_Set_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/ActorWithReferencesInCDO.h" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FExternalReferenceDummy>::Value, "The structure 'FExternalReferenceDummy' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AActorWithReferencesInCDO, Set), METADATA_PARAMS(Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_Set_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_Set_MetaData)) }; // 2951089210
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_IntKeyMap_ValueProp = { "IntKeyMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FExternalReferenceDummy, METADATA_PARAMS(nullptr, 0) }; // 2951089210
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_IntKeyMap_Key_KeyProp = { "IntKeyMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_IntKeyMap_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/ActorWithReferencesInCDO.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_IntKeyMap = { "IntKeyMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AActorWithReferencesInCDO, IntKeyMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_IntKeyMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_IntKeyMap_MetaData)) }; // 2951089210
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_IntValueMap_ValueProp = { "IntValueMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_IntValueMap_Key_KeyProp = { "IntValueMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FExternalReferenceDummy, METADATA_PARAMS(nullptr, 0) }; // 2951089210
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_IntValueMap_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/ActorWithReferencesInCDO.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_IntValueMap = { "IntValueMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AActorWithReferencesInCDO, IntValueMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_IntValueMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_IntValueMap_MetaData)) }; // 2951089210
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_Struct_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/ActorWithReferencesInCDO.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AActorWithReferencesInCDO, Struct), Z_Construct_UScriptStruct_FExternalReferenceDummy, METADATA_PARAMS(Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_Struct_MetaData)) }; // 2951089210
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_CubeMesh_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/******************** External references  ********************/" },
		{ "ModuleRelativePath", "Private/Tests/Types/ActorWithReferencesInCDO.h" },
		{ "ToolTip", "***************** External references  *******************" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_CubeMesh = { "CubeMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AActorWithReferencesInCDO, CubeMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_CubeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_CubeMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_CylinderMesh_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/Tests/Types/ActorWithReferencesInCDO.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_CylinderMesh = { "CylinderMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AActorWithReferencesInCDO, CylinderMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_CylinderMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_CylinderMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActorWithReferencesInCDO_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_Array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_Array,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_Set_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_Set,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_IntKeyMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_IntKeyMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_IntKeyMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_IntValueMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_IntValueMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_IntValueMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_CubeMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorWithReferencesInCDO_Statics::NewProp_CylinderMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActorWithReferencesInCDO_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorWithReferencesInCDO>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AActorWithReferencesInCDO_Statics::ClassParams = {
		&AActorWithReferencesInCDO::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AActorWithReferencesInCDO_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AActorWithReferencesInCDO_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AActorWithReferencesInCDO_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActorWithReferencesInCDO_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActorWithReferencesInCDO()
	{
		if (!Z_Registration_Info_UClass_AActorWithReferencesInCDO.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActorWithReferencesInCDO.OuterSingleton, Z_Construct_UClass_AActorWithReferencesInCDO_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AActorWithReferencesInCDO.OuterSingleton;
	}
	template<> LEVELSNAPSHOTS_API UClass* StaticClass<AActorWithReferencesInCDO>()
	{
		return AActorWithReferencesInCDO::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActorWithReferencesInCDO);
	AActorWithReferencesInCDO::~AActorWithReferencesInCDO() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Private_Tests_Types_ActorWithReferencesInCDO_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Private_Tests_Types_ActorWithReferencesInCDO_h_Statics::ScriptStructInfo[] = {
		{ FExternalReferenceDummy::StaticStruct, Z_Construct_UScriptStruct_FExternalReferenceDummy_Statics::NewStructOps, TEXT("ExternalReferenceDummy"), &Z_Registration_Info_UScriptStruct_ExternalReferenceDummy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExternalReferenceDummy), 2951089210U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Private_Tests_Types_ActorWithReferencesInCDO_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AActorWithReferencesInCDO, AActorWithReferencesInCDO::StaticClass, TEXT("AActorWithReferencesInCDO"), &Z_Registration_Info_UClass_AActorWithReferencesInCDO, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActorWithReferencesInCDO), 2508725769U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Private_Tests_Types_ActorWithReferencesInCDO_h_3262427219(TEXT("/Script/LevelSnapshots"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Private_Tests_Types_ActorWithReferencesInCDO_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Private_Tests_Types_ActorWithReferencesInCDO_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Private_Tests_Types_ActorWithReferencesInCDO_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Private_Tests_Types_ActorWithReferencesInCDO_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
