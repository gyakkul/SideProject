// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartObjectHashGrid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectHashGrid() {}
// Cross Module References
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectHashGrid();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectHashGrid_NoRegister();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectSpacePartition();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectHashGridEntryData();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References

static_assert(std::is_polymorphic<FSmartObjectHashGridEntryData>() == std::is_polymorphic<FSmartObjectSpatialEntryData>(), "USTRUCT FSmartObjectHashGridEntryData cannot be polymorphic unless super FSmartObjectSpatialEntryData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectHashGridEntryData;
class UScriptStruct* FSmartObjectHashGridEntryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectHashGridEntryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectHashGridEntryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectHashGridEntryData, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectHashGridEntryData"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectHashGridEntryData.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectHashGridEntryData>()
{
	return FSmartObjectHashGridEntryData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectHashGridEntryData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectHashGridEntryData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SmartObjectHashGrid.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectHashGridEntryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectHashGridEntryData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectHashGridEntryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		Z_Construct_UScriptStruct_FSmartObjectSpatialEntryData,
		&NewStructOps,
		"SmartObjectHashGridEntryData",
		sizeof(FSmartObjectHashGridEntryData),
		alignof(FSmartObjectHashGridEntryData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectHashGridEntryData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectHashGridEntryData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectHashGridEntryData()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectHashGridEntryData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectHashGridEntryData.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectHashGridEntryData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectHashGridEntryData.InnerSingleton;
	}
	void USmartObjectHashGrid::StaticRegisterNativesUSmartObjectHashGrid()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectHashGrid);
	UClass* Z_Construct_UClass_USmartObjectHashGrid_NoRegister()
	{
		return USmartObjectHashGrid::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectHashGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectHashGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USmartObjectSpacePartition,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectHashGrid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SmartObjectHashGrid.h" },
		{ "ModuleRelativePath", "Public/SmartObjectHashGrid.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectHashGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectHashGrid>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectHashGrid_Statics::ClassParams = {
		&USmartObjectHashGrid::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USmartObjectHashGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectHashGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartObjectHashGrid()
	{
		if (!Z_Registration_Info_UClass_USmartObjectHashGrid.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectHashGrid.OuterSingleton, Z_Construct_UClass_USmartObjectHashGrid_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectHashGrid.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<USmartObjectHashGrid>()
	{
		return USmartObjectHashGrid::StaticClass();
	}
	USmartObjectHashGrid::USmartObjectHashGrid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectHashGrid);
	USmartObjectHashGrid::~USmartObjectHashGrid() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectHashGrid_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectHashGrid_h_Statics::ScriptStructInfo[] = {
		{ FSmartObjectHashGridEntryData::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectHashGridEntryData_Statics::NewStructOps, TEXT("SmartObjectHashGridEntryData"), &Z_Registration_Info_UScriptStruct_SmartObjectHashGridEntryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectHashGridEntryData), 1031630237U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectHashGrid_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USmartObjectHashGrid, USmartObjectHashGrid::StaticClass, TEXT("USmartObjectHashGrid"), &Z_Registration_Info_UClass_USmartObjectHashGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectHashGrid), 1425958353U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectHashGrid_h_1342720642(TEXT("/Script/SmartObjectsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectHashGrid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectHashGrid_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectHashGrid_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectHashGrid_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
