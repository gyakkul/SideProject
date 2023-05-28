// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartObjectTestTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectTestTypes() {}
// Cross Module References
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_ASmartObjectPersistentCollection();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectBehaviorDefinition();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectSubsystem();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionData();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotStateData();
	SMARTOBJECTSTESTSUITE_API UClass* Z_Construct_UClass_ASmartObjectTestCollection();
	SMARTOBJECTSTESTSUITE_API UClass* Z_Construct_UClass_ASmartObjectTestCollection_NoRegister();
	SMARTOBJECTSTESTSUITE_API UClass* Z_Construct_UClass_USmartObjectTestBehaviorDefinition();
	SMARTOBJECTSTESTSUITE_API UClass* Z_Construct_UClass_USmartObjectTestBehaviorDefinition_NoRegister();
	SMARTOBJECTSTESTSUITE_API UClass* Z_Construct_UClass_USmartObjectTestSubsystem();
	SMARTOBJECTSTESTSUITE_API UClass* Z_Construct_UClass_USmartObjectTestSubsystem_NoRegister();
	SMARTOBJECTSTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotTestDefinitionData();
	SMARTOBJECTSTESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotTestRuntimeData();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsTestSuite();
// End Cross Module References
	void USmartObjectTestBehaviorDefinition::StaticRegisterNativesUSmartObjectTestBehaviorDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectTestBehaviorDefinition);
	UClass* Z_Construct_UClass_USmartObjectTestBehaviorDefinition_NoRegister()
	{
		return USmartObjectTestBehaviorDefinition::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectTestBehaviorDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectTestBehaviorDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USmartObjectBehaviorDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectTestBehaviorDefinition_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Concrete definition class for testing purposes\n */" },
		{ "IncludePath", "SmartObjectTestTypes.h" },
		{ "ModuleRelativePath", "Public/SmartObjectTestTypes.h" },
		{ "ToolTip", "Concrete definition class for testing purposes" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectTestBehaviorDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectTestBehaviorDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectTestBehaviorDefinition_Statics::ClassParams = {
		&USmartObjectTestBehaviorDefinition::StaticClass,
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
		0x041030A0u,
		METADATA_PARAMS(Z_Construct_UClass_USmartObjectTestBehaviorDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectTestBehaviorDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartObjectTestBehaviorDefinition()
	{
		if (!Z_Registration_Info_UClass_USmartObjectTestBehaviorDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectTestBehaviorDefinition.OuterSingleton, Z_Construct_UClass_USmartObjectTestBehaviorDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectTestBehaviorDefinition.OuterSingleton;
	}
	template<> SMARTOBJECTSTESTSUITE_API UClass* StaticClass<USmartObjectTestBehaviorDefinition>()
	{
		return USmartObjectTestBehaviorDefinition::StaticClass();
	}
	USmartObjectTestBehaviorDefinition::USmartObjectTestBehaviorDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectTestBehaviorDefinition);
	USmartObjectTestBehaviorDefinition::~USmartObjectTestBehaviorDefinition() {}
	void USmartObjectTestSubsystem::StaticRegisterNativesUSmartObjectTestSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectTestSubsystem);
	UClass* Z_Construct_UClass_USmartObjectTestSubsystem_NoRegister()
	{
		return USmartObjectTestSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectTestSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectTestSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USmartObjectSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectTestSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Test-time SmartObjectSubsystem override, aimed at encapsulating test-time smart object instances and functionality\n */" },
		{ "IncludePath", "SmartObjectTestTypes.h" },
		{ "ModuleRelativePath", "Public/SmartObjectTestTypes.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Test-time SmartObjectSubsystem override, aimed at encapsulating test-time smart object instances and functionality" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectTestSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectTestSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectTestSubsystem_Statics::ClassParams = {
		&USmartObjectTestSubsystem::StaticClass,
		"SmartObjects",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x048000AEu,
		METADATA_PARAMS(Z_Construct_UClass_USmartObjectTestSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectTestSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartObjectTestSubsystem()
	{
		if (!Z_Registration_Info_UClass_USmartObjectTestSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectTestSubsystem.OuterSingleton, Z_Construct_UClass_USmartObjectTestSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectTestSubsystem.OuterSingleton;
	}
	template<> SMARTOBJECTSTESTSUITE_API UClass* StaticClass<USmartObjectTestSubsystem>()
	{
		return USmartObjectTestSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectTestSubsystem);
	USmartObjectTestSubsystem::~USmartObjectTestSubsystem() {}
	void ASmartObjectTestCollection::StaticRegisterNativesASmartObjectTestCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASmartObjectTestCollection);
	UClass* Z_Construct_UClass_ASmartObjectTestCollection_NoRegister()
	{
		return ASmartObjectTestCollection::StaticClass();
	}
	struct Z_Construct_UClass_ASmartObjectTestCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASmartObjectTestCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASmartObjectPersistentCollection,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsTestSuite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASmartObjectTestCollection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Test-time ASmartObjectPersistentCollection override, aimed at encapsulating test-time smart object instances and functionality\n */" },
		{ "HideCategories", "Rendering Replication Collision Input HLOD Actor LOD Cooking WorldPartition" },
		{ "IncludePath", "SmartObjectTestTypes.h" },
		{ "ModuleRelativePath", "Public/SmartObjectTestTypes.h" },
		{ "ToolTip", "Test-time ASmartObjectPersistentCollection override, aimed at encapsulating test-time smart object instances and functionality" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASmartObjectTestCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASmartObjectTestCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASmartObjectTestCollection_Statics::ClassParams = {
		&ASmartObjectTestCollection::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x048000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASmartObjectTestCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASmartObjectTestCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASmartObjectTestCollection()
	{
		if (!Z_Registration_Info_UClass_ASmartObjectTestCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASmartObjectTestCollection.OuterSingleton, Z_Construct_UClass_ASmartObjectTestCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASmartObjectTestCollection.OuterSingleton;
	}
	template<> SMARTOBJECTSTESTSUITE_API UClass* StaticClass<ASmartObjectTestCollection>()
	{
		return ASmartObjectTestCollection::StaticClass();
	}
	ASmartObjectTestCollection::ASmartObjectTestCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASmartObjectTestCollection);
	ASmartObjectTestCollection::~ASmartObjectTestCollection() {}

static_assert(std::is_polymorphic<FSmartObjectSlotTestDefinitionData>() == std::is_polymorphic<FSmartObjectSlotDefinitionData>(), "USTRUCT FSmartObjectSlotTestDefinitionData cannot be polymorphic unless super FSmartObjectSlotDefinitionData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectSlotTestDefinitionData;
class UScriptStruct* FSmartObjectSlotTestDefinitionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotTestDefinitionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectSlotTestDefinitionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectSlotTestDefinitionData, (UObject*)Z_Construct_UPackage__Script_SmartObjectsTestSuite(), TEXT("SmartObjectSlotTestDefinitionData"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectSlotTestDefinitionData.OuterSingleton;
}
template<> SMARTOBJECTSTESTSUITE_API UScriptStruct* StaticStruct<FSmartObjectSlotTestDefinitionData>()
{
	return FSmartObjectSlotTestDefinitionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectSlotTestDefinitionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotTestDefinitionData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Some user data to assign to a slot definition\n */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/SmartObjectTestTypes.h" },
		{ "ToolTip", "Some user data to assign to a slot definition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectSlotTestDefinitionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectSlotTestDefinitionData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectSlotTestDefinitionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsTestSuite,
		Z_Construct_UScriptStruct_FSmartObjectSlotDefinitionData,
		&NewStructOps,
		"SmartObjectSlotTestDefinitionData",
		sizeof(FSmartObjectSlotTestDefinitionData),
		alignof(FSmartObjectSlotTestDefinitionData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotTestDefinitionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotTestDefinitionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotTestDefinitionData()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotTestDefinitionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectSlotTestDefinitionData.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectSlotTestDefinitionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectSlotTestDefinitionData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSmartObjectSlotTestRuntimeData>() == std::is_polymorphic<FSmartObjectSlotStateData>(), "USTRUCT FSmartObjectSlotTestRuntimeData cannot be polymorphic unless super FSmartObjectSlotStateData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectSlotTestRuntimeData;
class UScriptStruct* FSmartObjectSlotTestRuntimeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotTestRuntimeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectSlotTestRuntimeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectSlotTestRuntimeData, (UObject*)Z_Construct_UPackage__Script_SmartObjectsTestSuite(), TEXT("SmartObjectSlotTestRuntimeData"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectSlotTestRuntimeData.OuterSingleton;
}
template<> SMARTOBJECTSTESTSUITE_API UScriptStruct* StaticStruct<FSmartObjectSlotTestRuntimeData>()
{
	return FSmartObjectSlotTestRuntimeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectSlotTestRuntimeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectSlotTestRuntimeData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Some user runtime data to assign to a slot instance\n */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/SmartObjectTestTypes.h" },
		{ "ToolTip", "Some user runtime data to assign to a slot instance" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectSlotTestRuntimeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectSlotTestRuntimeData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectSlotTestRuntimeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsTestSuite,
		Z_Construct_UScriptStruct_FSmartObjectSlotStateData,
		&NewStructOps,
		"SmartObjectSlotTestRuntimeData",
		sizeof(FSmartObjectSlotTestRuntimeData),
		alignof(FSmartObjectSlotTestRuntimeData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectSlotTestRuntimeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectSlotTestRuntimeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSlotTestRuntimeData()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectSlotTestRuntimeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectSlotTestRuntimeData.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectSlotTestRuntimeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectSlotTestRuntimeData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsTestSuite_Public_SmartObjectTestTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsTestSuite_Public_SmartObjectTestTypes_h_Statics::ScriptStructInfo[] = {
		{ FSmartObjectSlotTestDefinitionData::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectSlotTestDefinitionData_Statics::NewStructOps, TEXT("SmartObjectSlotTestDefinitionData"), &Z_Registration_Info_UScriptStruct_SmartObjectSlotTestDefinitionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectSlotTestDefinitionData), 1101210708U) },
		{ FSmartObjectSlotTestRuntimeData::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectSlotTestRuntimeData_Statics::NewStructOps, TEXT("SmartObjectSlotTestRuntimeData"), &Z_Registration_Info_UScriptStruct_SmartObjectSlotTestRuntimeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectSlotTestRuntimeData), 2723417531U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsTestSuite_Public_SmartObjectTestTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USmartObjectTestBehaviorDefinition, USmartObjectTestBehaviorDefinition::StaticClass, TEXT("USmartObjectTestBehaviorDefinition"), &Z_Registration_Info_UClass_USmartObjectTestBehaviorDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectTestBehaviorDefinition), 2661509293U) },
		{ Z_Construct_UClass_USmartObjectTestSubsystem, USmartObjectTestSubsystem::StaticClass, TEXT("USmartObjectTestSubsystem"), &Z_Registration_Info_UClass_USmartObjectTestSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectTestSubsystem), 2137771287U) },
		{ Z_Construct_UClass_ASmartObjectTestCollection, ASmartObjectTestCollection::StaticClass, TEXT("ASmartObjectTestCollection"), &Z_Registration_Info_UClass_ASmartObjectTestCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASmartObjectTestCollection), 3788004354U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsTestSuite_Public_SmartObjectTestTypes_h_2631136235(TEXT("/Script/SmartObjectsTestSuite"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsTestSuite_Public_SmartObjectTestTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsTestSuite_Public_SmartObjectTestTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsTestSuite_Public_SmartObjectTestTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsTestSuite_Public_SmartObjectTestTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
