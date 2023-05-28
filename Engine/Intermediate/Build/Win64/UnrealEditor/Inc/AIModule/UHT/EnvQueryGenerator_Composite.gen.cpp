// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_Composite() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Composite();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_Composite_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UEnvQueryGenerator_Composite::StaticRegisterNativesUEnvQueryGenerator_Composite()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryGenerator_Composite);
	UClass* Z_Construct_UClass_UEnvQueryGenerator_Composite_NoRegister()
	{
		return UEnvQueryGenerator_Composite::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Generators_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Generators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Generators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Generators;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDifferentItemTypes_MetaData[];
#endif
		static void NewProp_bAllowDifferentItemTypes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDifferentItemTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasMatchingItemType_MetaData[];
#endif
		static void NewProp_bHasMatchingItemType_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMatchingItemType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForcedItemType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ForcedItemType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Composite generator allows using multiple generators in single query option\n * All child generators must produce exactly the same item type!\n */" },
		{ "DisplayName", "Composite" },
		{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
		{ "ToolTip", "Composite generator allows using multiple generators in single query option\nAll child generators must produce exactly the same item type!" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_Generators_Inner_MetaData[] = {
		{ "Category", "Generator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_Generators_Inner = { "Generators", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UEnvQueryGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_Generators_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_Generators_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_Generators_MetaData[] = {
		{ "Category", "Generator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_Generators = { "Generators", nullptr, (EPropertyFlags)0x0014008000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Composite, Generators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_Generators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_Generators_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bAllowDifferentItemTypes_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** allow generators with different item types, use at own risk!\n\x09 *\n\x09 *  WARNING: \n\x09 *  generator will use ForcedItemType for raw data, you MUST ensure proper memory layout\n\x09 *  child generators will be writing to memory block through their own item types:\n\x09 *  - data must fit info block allocated by ForcedItemType\n\x09 *  - tests will read item location/properties through ForcedItemType\n\x09 */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
		{ "ToolTip", "allow generators with different item types, use at own risk!\n\nWARNING:\ngenerator will use ForcedItemType for raw data, you MUST ensure proper memory layout\nchild generators will be writing to memory block through their own item types:\n- data must fit info block allocated by ForcedItemType\n- tests will read item location/properties through ForcedItemType" },
	};
#endif
	void Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bAllowDifferentItemTypes_SetBit(void* Obj)
	{
		((UEnvQueryGenerator_Composite*)Obj)->bAllowDifferentItemTypes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bAllowDifferentItemTypes = { "bAllowDifferentItemTypes", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEnvQueryGenerator_Composite), &Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bAllowDifferentItemTypes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bAllowDifferentItemTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bAllowDifferentItemTypes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bHasMatchingItemType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
	};
#endif
	void Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bHasMatchingItemType_SetBit(void* Obj)
	{
		((UEnvQueryGenerator_Composite*)Obj)->bHasMatchingItemType = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bHasMatchingItemType = { "bHasMatchingItemType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEnvQueryGenerator_Composite), &Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bHasMatchingItemType_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bHasMatchingItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bHasMatchingItemType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_ForcedItemType_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_Composite.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_ForcedItemType = { "ForcedItemType", nullptr, (EPropertyFlags)0x0014040000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_Composite, ForcedItemType), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryItemType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_ForcedItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_ForcedItemType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_Generators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_Generators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bAllowDifferentItemTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_bHasMatchingItemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::NewProp_ForcedItemType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_Composite>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::ClassParams = {
		&UEnvQueryGenerator_Composite::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryGenerator_Composite()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryGenerator_Composite.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryGenerator_Composite.OuterSingleton, Z_Construct_UClass_UEnvQueryGenerator_Composite_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryGenerator_Composite.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryGenerator_Composite>()
	{
		return UEnvQueryGenerator_Composite::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_Composite);
	UEnvQueryGenerator_Composite::~UEnvQueryGenerator_Composite() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Composite_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Composite_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryGenerator_Composite, UEnvQueryGenerator_Composite::StaticClass, TEXT("UEnvQueryGenerator_Composite"), &Z_Registration_Info_UClass_UEnvQueryGenerator_Composite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryGenerator_Composite), 4156108338U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Composite_h_1278274291(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Composite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_Composite_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
