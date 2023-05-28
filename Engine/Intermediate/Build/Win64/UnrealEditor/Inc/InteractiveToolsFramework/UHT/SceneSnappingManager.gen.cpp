// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SceneQueries/SceneSnappingManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneSnappingManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USceneSnappingManager();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USceneSnappingManager_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryTargetType();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryType();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESceneSnapQueryType;
	static UEnum* ESceneSnapQueryType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESceneSnapQueryType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESceneSnapQueryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryType, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("ESceneSnapQueryType"));
		}
		return Z_Registration_Info_UEnum_ESceneSnapQueryType.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<ESceneSnapQueryType>()
	{
		return ESceneSnapQueryType_StaticEnum();
	}
	struct Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryType_Statics::Enumerators[] = {
		{ "ESceneSnapQueryType::Position", (int64)ESceneSnapQueryType::Position },
		{ "ESceneSnapQueryType::Rotation", (int64)ESceneSnapQueryType::Rotation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Types of Snap Queries that a USceneSnappingManager may support */" },
		{ "ModuleRelativePath", "Public/SceneQueries/SceneSnappingManager.h" },
		{ "Position.Comment", "/** snapping a position */" },
		{ "Position.Name", "ESceneSnapQueryType::Position" },
		{ "Position.ToolTip", "snapping a position" },
		{ "Rotation.Name", "ESceneSnapQueryType::Rotation" },
		{ "ToolTip", "Types of Snap Queries that a USceneSnappingManager may support" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		"ESceneSnapQueryType",
		"ESceneSnapQueryType",
		Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryType()
	{
		if (!Z_Registration_Info_UEnum_ESceneSnapQueryType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESceneSnapQueryType.InnerSingleton, Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESceneSnapQueryType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESceneSnapQueryTargetType;
	static UEnum* ESceneSnapQueryTargetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESceneSnapQueryTargetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESceneSnapQueryTargetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryTargetType, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("ESceneSnapQueryTargetType"));
		}
		return Z_Registration_Info_UEnum_ESceneSnapQueryTargetType.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<ESceneSnapQueryTargetType>()
	{
		return ESceneSnapQueryTargetType_StaticEnum();
	}
	struct Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryTargetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryTargetType_Statics::Enumerators[] = {
		{ "ESceneSnapQueryTargetType::None", (int64)ESceneSnapQueryTargetType::None },
		{ "ESceneSnapQueryTargetType::MeshVertex", (int64)ESceneSnapQueryTargetType::MeshVertex },
		{ "ESceneSnapQueryTargetType::MeshEdge", (int64)ESceneSnapQueryTargetType::MeshEdge },
		{ "ESceneSnapQueryTargetType::Grid", (int64)ESceneSnapQueryTargetType::Grid },
		{ "ESceneSnapQueryTargetType::All", (int64)ESceneSnapQueryTargetType::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryTargetType_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "ESceneSnapQueryTargetType::All" },
		{ "Comment", "/** Types of Snap Targets that a caller may want to run snap queries against. */" },
		{ "Grid.Comment", "/** Grid Snapping */" },
		{ "Grid.Name", "ESceneSnapQueryTargetType::Grid" },
		{ "Grid.ToolTip", "Grid Snapping" },
		{ "MeshEdge.Comment", "/** Consider any mesh edge */" },
		{ "MeshEdge.Name", "ESceneSnapQueryTargetType::MeshEdge" },
		{ "MeshEdge.ToolTip", "Consider any mesh edge" },
		{ "MeshVertex.Comment", "/** Consider any mesh vertex */" },
		{ "MeshVertex.Name", "ESceneSnapQueryTargetType::MeshVertex" },
		{ "MeshVertex.ToolTip", "Consider any mesh vertex" },
		{ "ModuleRelativePath", "Public/SceneQueries/SceneSnappingManager.h" },
		{ "None.Name", "ESceneSnapQueryTargetType::None" },
		{ "ToolTip", "Types of Snap Targets that a caller may want to run snap queries against." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryTargetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		"ESceneSnapQueryTargetType",
		"ESceneSnapQueryTargetType",
		Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryTargetType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryTargetType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryTargetType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryTargetType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryTargetType()
	{
		if (!Z_Registration_Info_UEnum_ESceneSnapQueryTargetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESceneSnapQueryTargetType.InnerSingleton, Z_Construct_UEnum_InteractiveToolsFramework_ESceneSnapQueryTargetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESceneSnapQueryTargetType.InnerSingleton;
	}
	void USceneSnappingManager::StaticRegisterNativesUSceneSnappingManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USceneSnappingManager);
	UClass* Z_Construct_UClass_USceneSnappingManager_NoRegister()
	{
		return USceneSnappingManager::StaticClass();
	}
	struct Z_Construct_UClass_USceneSnappingManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USceneSnappingManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneSnappingManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * USceneSnappingManager is intended to be used as a base class for a Snapping implementation\n * stored in the ContextObjectStore of an InteractiveToolsContext. ITF classes like Tools and Gizmos\n * can then access this object and run snap queries via the various API functions.\n * \n * USceneSnappingManager::Find() can be used to look up a registered USceneSnappingManager, if one is available\n * \n * See UModelingSceneSnappingManager for a sample implementation.\n */" },
		{ "IncludePath", "SceneQueries/SceneSnappingManager.h" },
		{ "ModuleRelativePath", "Public/SceneQueries/SceneSnappingManager.h" },
		{ "ToolTip", "USceneSnappingManager is intended to be used as a base class for a Snapping implementation\nstored in the ContextObjectStore of an InteractiveToolsContext. ITF classes like Tools and Gizmos\ncan then access this object and run snap queries via the various API functions.\n\nUSceneSnappingManager::Find() can be used to look up a registered USceneSnappingManager, if one is available\n\nSee UModelingSceneSnappingManager for a sample implementation." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USceneSnappingManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneSnappingManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USceneSnappingManager_Statics::ClassParams = {
		&USceneSnappingManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USceneSnappingManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USceneSnappingManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USceneSnappingManager()
	{
		if (!Z_Registration_Info_UClass_USceneSnappingManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USceneSnappingManager.OuterSingleton, Z_Construct_UClass_USceneSnappingManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USceneSnappingManager.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<USceneSnappingManager>()
	{
		return USceneSnappingManager::StaticClass();
	}
	USceneSnappingManager::USceneSnappingManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USceneSnappingManager);
	USceneSnappingManager::~USceneSnappingManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_Statics::EnumInfo[] = {
		{ ESceneSnapQueryType_StaticEnum, TEXT("ESceneSnapQueryType"), &Z_Registration_Info_UEnum_ESceneSnapQueryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 405864334U) },
		{ ESceneSnapQueryTargetType_StaticEnum, TEXT("ESceneSnapQueryTargetType"), &Z_Registration_Info_UEnum_ESceneSnapQueryTargetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 970049U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USceneSnappingManager, USceneSnappingManager::StaticClass, TEXT("USceneSnappingManager"), &Z_Registration_Info_UClass_USceneSnappingManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USceneSnappingManager), 4106949055U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_2004685210(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SceneQueries_SceneSnappingManager_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
