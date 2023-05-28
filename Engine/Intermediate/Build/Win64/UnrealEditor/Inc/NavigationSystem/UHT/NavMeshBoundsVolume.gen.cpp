// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavMesh/NavMeshBoundsVolume.h"
#include "../../Source/Runtime/Engine/Classes/AI/Navigation/NavAgentSelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavMeshBoundsVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentSelector();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavMeshBoundsVolume();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavMeshBoundsVolume_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void ANavMeshBoundsVolume::StaticRegisterNativesANavMeshBoundsVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavMeshBoundsVolume);
	UClass* Z_Construct_UClass_ANavMeshBoundsVolume_NoRegister()
	{
		return ANavMeshBoundsVolume::StaticClass();
	}
	struct Z_Construct_UClass_ANavMeshBoundsVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedAgents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SupportedAgents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavMeshBoundsVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavMeshBoundsVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "NavMesh/NavMeshBoundsVolume.h" },
		{ "ModuleRelativePath", "Public/NavMesh/NavMeshBoundsVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavMeshBoundsVolume_Statics::NewProp_SupportedAgents_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavMesh/NavMeshBoundsVolume.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavMeshBoundsVolume_Statics::NewProp_SupportedAgents = { "SupportedAgents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavMeshBoundsVolume, SupportedAgents), Z_Construct_UScriptStruct_FNavAgentSelector, METADATA_PARAMS(Z_Construct_UClass_ANavMeshBoundsVolume_Statics::NewProp_SupportedAgents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavMeshBoundsVolume_Statics::NewProp_SupportedAgents_MetaData)) }; // 1383248333
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavMeshBoundsVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavMeshBoundsVolume_Statics::NewProp_SupportedAgents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavMeshBoundsVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavMeshBoundsVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavMeshBoundsVolume_Statics::ClassParams = {
		&ANavMeshBoundsVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANavMeshBoundsVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANavMeshBoundsVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANavMeshBoundsVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavMeshBoundsVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavMeshBoundsVolume()
	{
		if (!Z_Registration_Info_UClass_ANavMeshBoundsVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavMeshBoundsVolume.OuterSingleton, Z_Construct_UClass_ANavMeshBoundsVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANavMeshBoundsVolume.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<ANavMeshBoundsVolume>()
	{
		return ANavMeshBoundsVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavMeshBoundsVolume);
	ANavMeshBoundsVolume::~ANavMeshBoundsVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANavMeshBoundsVolume, ANavMeshBoundsVolume::StaticClass, TEXT("ANavMeshBoundsVolume"), &Z_Registration_Info_UClass_ANavMeshBoundsVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavMeshBoundsVolume), 438495410U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_1581432399(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshBoundsVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
