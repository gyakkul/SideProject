// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassObserverRegistry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassObserverRegistry() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverRegistry();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverRegistry_NoRegister();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor_NoRegister();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityObserverClassesMap();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassProcessorClassCollection();
	UPackage* Z_Construct_UPackage__Script_MassEntity();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassProcessorClassCollection;
class UScriptStruct* FMassProcessorClassCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassProcessorClassCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassProcessorClassCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassProcessorClassCollection, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassProcessorClassCollection"));
	}
	return Z_Registration_Info_UScriptStruct_MassProcessorClassCollection.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassProcessorClassCollection>()
{
	return FMassProcessorClassCollection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClassCollection_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassCollection_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A wrapper type for a TArray to support having map-of-arrays UPROPERTY members in FMassEntityObserverClassesMap\n */" },
		{ "ModuleRelativePath", "Public/MassObserverRegistry.h" },
		{ "ToolTip", "A wrapper type for a TArray to support having map-of-arrays UPROPERTY members in FMassEntityObserverClassesMap" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassProcessorClassCollection>();
	}
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::NewProp_ClassCollection_Inner = { "ClassCollection", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UMassProcessor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::NewProp_ClassCollection_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassObserverRegistry.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::NewProp_ClassCollection = { "ClassCollection", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassProcessorClassCollection, ClassCollection), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::NewProp_ClassCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::NewProp_ClassCollection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::NewProp_ClassCollection_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::NewProp_ClassCollection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
		nullptr,
		&NewStructOps,
		"MassProcessorClassCollection",
		sizeof(FMassProcessorClassCollection),
		alignof(FMassProcessorClassCollection),
		Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassProcessorClassCollection()
	{
		if (!Z_Registration_Info_UScriptStruct_MassProcessorClassCollection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassProcessorClassCollection.InnerSingleton, Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassProcessorClassCollection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassEntityObserverClassesMap;
class UScriptStruct* FMassEntityObserverClassesMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassEntityObserverClassesMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassEntityObserverClassesMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassEntityObserverClassesMap, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassEntityObserverClassesMap"));
	}
	return Z_Registration_Info_UScriptStruct_MassEntityObserverClassesMap.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassEntityObserverClassesMap>()
{
	return FMassEntityObserverClassesMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Container_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Container_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Container;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A wrapper type for a TMap to support having array-of-maps UPROPERTY members in UMassObserverRegistry\n */" },
		{ "ModuleRelativePath", "Public/MassObserverRegistry.h" },
		{ "ToolTip", "A wrapper type for a TMap to support having array-of-maps UPROPERTY members in UMassObserverRegistry" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassEntityObserverClassesMap>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::NewProp_Container_ValueProp = { "Container", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMassProcessorClassCollection, METADATA_PARAMS(nullptr, 0) }; // 4054887527
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::NewProp_Container_Key_KeyProp = { "Container_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::NewProp_Container_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassObserverRegistry.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassEntityObserverClassesMap, Container), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::NewProp_Container_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::NewProp_Container_MetaData)) }; // 4054887527
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::NewProp_Container_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::NewProp_Container_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::NewProp_Container,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
		nullptr,
		&NewStructOps,
		"MassEntityObserverClassesMap",
		sizeof(FMassEntityObserverClassesMap),
		alignof(FMassEntityObserverClassesMap),
		Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassEntityObserverClassesMap()
	{
		if (!Z_Registration_Info_UScriptStruct_MassEntityObserverClassesMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassEntityObserverClassesMap.InnerSingleton, Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassEntityObserverClassesMap.InnerSingleton;
	}
	void UMassObserverRegistry::StaticRegisterNativesUMassObserverRegistry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassObserverRegistry);
	UClass* Z_Construct_UClass_UMassObserverRegistry_NoRegister()
	{
		return UMassObserverRegistry::StaticClass();
	}
	struct Z_Construct_UClass_UMassObserverRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FragmentObservers_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FragmentObservers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagObservers_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagObservers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassObserverRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassObserverRegistry_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassObserverRegistry.h" },
		{ "ModuleRelativePath", "Public/MassObserverRegistry.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassObserverRegistry_Statics::NewProp_FragmentObservers_MetaData[] = {
		{ "ArraySizeEnum", "/Script/MassEntity.EMassObservedOperation" },
		{ "ModuleRelativePath", "Public/MassObserverRegistry.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassObserverRegistry_Statics::NewProp_FragmentObservers = { "FragmentObservers", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(FragmentObservers, UMassObserverRegistry), nullptr, nullptr, STRUCT_OFFSET(UMassObserverRegistry, FragmentObservers), Z_Construct_UScriptStruct_FMassEntityObserverClassesMap, METADATA_PARAMS(Z_Construct_UClass_UMassObserverRegistry_Statics::NewProp_FragmentObservers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassObserverRegistry_Statics::NewProp_FragmentObservers_MetaData)) }; // 942037768
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassObserverRegistry_Statics::NewProp_TagObservers_MetaData[] = {
		{ "ArraySizeEnum", "/Script/MassEntity.EMassObservedOperation" },
		{ "ModuleRelativePath", "Public/MassObserverRegistry.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassObserverRegistry_Statics::NewProp_TagObservers = { "TagObservers", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(TagObservers, UMassObserverRegistry), nullptr, nullptr, STRUCT_OFFSET(UMassObserverRegistry, TagObservers), Z_Construct_UScriptStruct_FMassEntityObserverClassesMap, METADATA_PARAMS(Z_Construct_UClass_UMassObserverRegistry_Statics::NewProp_TagObservers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassObserverRegistry_Statics::NewProp_TagObservers_MetaData)) }; // 942037768
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassObserverRegistry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassObserverRegistry_Statics::NewProp_FragmentObservers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassObserverRegistry_Statics::NewProp_TagObservers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassObserverRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassObserverRegistry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassObserverRegistry_Statics::ClassParams = {
		&UMassObserverRegistry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassObserverRegistry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassObserverRegistry_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassObserverRegistry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassObserverRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassObserverRegistry()
	{
		if (!Z_Registration_Info_UClass_UMassObserverRegistry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassObserverRegistry.OuterSingleton, Z_Construct_UClass_UMassObserverRegistry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassObserverRegistry.OuterSingleton;
	}
	template<> MASSENTITY_API UClass* StaticClass<UMassObserverRegistry>()
	{
		return UMassObserverRegistry::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassObserverRegistry);
	UMassObserverRegistry::~UMassObserverRegistry() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassObserverRegistry_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassObserverRegistry_h_Statics::ScriptStructInfo[] = {
		{ FMassProcessorClassCollection::StaticStruct, Z_Construct_UScriptStruct_FMassProcessorClassCollection_Statics::NewStructOps, TEXT("MassProcessorClassCollection"), &Z_Registration_Info_UScriptStruct_MassProcessorClassCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassProcessorClassCollection), 4054887527U) },
		{ FMassEntityObserverClassesMap::StaticStruct, Z_Construct_UScriptStruct_FMassEntityObserverClassesMap_Statics::NewStructOps, TEXT("MassEntityObserverClassesMap"), &Z_Registration_Info_UScriptStruct_MassEntityObserverClassesMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassEntityObserverClassesMap), 942037768U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassObserverRegistry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassObserverRegistry, UMassObserverRegistry::StaticClass, TEXT("UMassObserverRegistry"), &Z_Registration_Info_UClass_UMassObserverRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassObserverRegistry), 2647502551U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassObserverRegistry_h_4025645165(TEXT("/Script/MassEntity"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassObserverRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassObserverRegistry_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassObserverRegistry_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassObserverRegistry_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
