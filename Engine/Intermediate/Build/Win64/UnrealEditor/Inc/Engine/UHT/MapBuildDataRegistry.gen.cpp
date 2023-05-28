// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapBuildDataRegistry() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMapBuildDataRegistry();
	ENGINE_API UClass* Z_Construct_UClass_UMapBuildDataRegistry_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightingBuildQuality();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMapBuildDataRegistry::StaticRegisterNativesUMapBuildDataRegistry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapBuildDataRegistry);
	UClass* Z_Construct_UClass_UMapBuildDataRegistry_NoRegister()
	{
		return UMapBuildDataRegistry::StaticClass();
	}
	struct Z_Construct_UClass_UMapBuildDataRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelLightingQuality_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LevelLightingQuality;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMapBuildDataRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapBuildDataRegistry_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/MapBuildDataRegistry.h" },
		{ "ModuleRelativePath", "Classes/Engine/MapBuildDataRegistry.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMapBuildDataRegistry_Statics::NewProp_LevelLightingQuality_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** The lighting quality the level was last built with */" },
		{ "ModuleRelativePath", "Classes/Engine/MapBuildDataRegistry.h" },
		{ "ToolTip", "The lighting quality the level was last built with" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMapBuildDataRegistry_Statics::NewProp_LevelLightingQuality = { "LevelLightingQuality", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMapBuildDataRegistry, LevelLightingQuality), Z_Construct_UEnum_Engine_ELightingBuildQuality, METADATA_PARAMS(Z_Construct_UClass_UMapBuildDataRegistry_Statics::NewProp_LevelLightingQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMapBuildDataRegistry_Statics::NewProp_LevelLightingQuality_MetaData)) }; // 178065406
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapBuildDataRegistry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapBuildDataRegistry_Statics::NewProp_LevelLightingQuality,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMapBuildDataRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapBuildDataRegistry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapBuildDataRegistry_Statics::ClassParams = {
		&UMapBuildDataRegistry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMapBuildDataRegistry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMapBuildDataRegistry_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMapBuildDataRegistry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMapBuildDataRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMapBuildDataRegistry()
	{
		if (!Z_Registration_Info_UClass_UMapBuildDataRegistry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapBuildDataRegistry.OuterSingleton, Z_Construct_UClass_UMapBuildDataRegistry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMapBuildDataRegistry.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMapBuildDataRegistry>()
	{
		return UMapBuildDataRegistry::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMapBuildDataRegistry);
	UMapBuildDataRegistry::~UMapBuildDataRegistry() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMapBuildDataRegistry)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMapBuildDataRegistry, UMapBuildDataRegistry::StaticClass, TEXT("UMapBuildDataRegistry"), &Z_Registration_Info_UClass_UMapBuildDataRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapBuildDataRegistry), 3944511521U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_2054195610(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MapBuildDataRegistry_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
