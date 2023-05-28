// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartObjectOctree.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectOctree() {}
// Cross Module References
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectOctree();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectOctree_NoRegister();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectSpacePartition();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectOctreeEntryData();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References

static_assert(std::is_polymorphic<FSmartObjectOctreeEntryData>() == std::is_polymorphic<FSmartObjectSpatialEntryData>(), "USTRUCT FSmartObjectOctreeEntryData cannot be polymorphic unless super FSmartObjectSpatialEntryData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectOctreeEntryData;
class UScriptStruct* FSmartObjectOctreeEntryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectOctreeEntryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectOctreeEntryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectOctreeEntryData, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectOctreeEntryData"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectOctreeEntryData.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectOctreeEntryData>()
{
	return FSmartObjectOctreeEntryData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectOctreeEntryData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectOctreeEntryData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SmartObjectOctree.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectOctreeEntryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectOctreeEntryData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectOctreeEntryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData,
		&NewStructOps,
		"SmartObjectOctreeEntryData",
		sizeof(FSmartObjectOctreeEntryData),
		alignof(FSmartObjectOctreeEntryData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectOctreeEntryData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectOctreeEntryData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectOctreeEntryData()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectOctreeEntryData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectOctreeEntryData.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectOctreeEntryData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectOctreeEntryData.InnerSingleton;
	}
	void USmartObjectOctree::StaticRegisterNativesUSmartObjectOctree()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectOctree);
	UClass* Z_Construct_UClass_USmartObjectOctree_NoRegister()
	{
		return USmartObjectOctree::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectOctree_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectOctree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USmartObjectSpacePartition,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectOctree_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SmartObjectOctree.h" },
		{ "ModuleRelativePath", "Public/SmartObjectOctree.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectOctree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectOctree>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectOctree_Statics::ClassParams = {
		&USmartObjectOctree::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USmartObjectOctree_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectOctree_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartObjectOctree()
	{
		if (!Z_Registration_Info_UClass_USmartObjectOctree.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectOctree.OuterSingleton, Z_Construct_UClass_USmartObjectOctree_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectOctree.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<USmartObjectOctree>()
	{
		return USmartObjectOctree::StaticClass();
	}
	USmartObjectOctree::USmartObjectOctree(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectOctree);
	USmartObjectOctree::~USmartObjectOctree() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectOctree_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectOctree_h_Statics::ScriptStructInfo[] = {
		{ FSmartObjectOctreeEntryData::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectOctreeEntryData_Statics::NewStructOps, TEXT("SmartObjectOctreeEntryData"), &Z_Registration_Info_UScriptStruct_SmartObjectOctreeEntryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectOctreeEntryData), 1753919889U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectOctree_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USmartObjectOctree, USmartObjectOctree::StaticClass, TEXT("USmartObjectOctree"), &Z_Registration_Info_UClass_USmartObjectOctree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectOctree), 2132180439U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectOctree_h_1638360386(TEXT("/Script/SmartObjectsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectOctree_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectOctree_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectOctree_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectOctree_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
