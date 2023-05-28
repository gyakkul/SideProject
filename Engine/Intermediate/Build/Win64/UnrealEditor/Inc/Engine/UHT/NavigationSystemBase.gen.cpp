// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/AI/NavigationSystemBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationSystemBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemBase();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_FNavigationSystemRunMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FNavigationSystemRunMode;
	static UEnum* FNavigationSystemRunMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FNavigationSystemRunMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FNavigationSystemRunMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_FNavigationSystemRunMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("FNavigationSystemRunMode"));
		}
		return Z_Registration_Info_UEnum_FNavigationSystemRunMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<FNavigationSystemRunMode>()
	{
		return FNavigationSystemRunMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_FNavigationSystemRunMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_FNavigationSystemRunMode_Statics::Enumerators[] = {
		{ "FNavigationSystemRunMode::InvalidMode", (int64)FNavigationSystemRunMode::InvalidMode },
		{ "FNavigationSystemRunMode::GameMode", (int64)FNavigationSystemRunMode::GameMode },
		{ "FNavigationSystemRunMode::EditorMode", (int64)FNavigationSystemRunMode::EditorMode },
		{ "FNavigationSystemRunMode::SimulationMode", (int64)FNavigationSystemRunMode::SimulationMode },
		{ "FNavigationSystemRunMode::PIEMode", (int64)FNavigationSystemRunMode::PIEMode },
		{ "FNavigationSystemRunMode::InferFromWorldMode", (int64)FNavigationSystemRunMode::InferFromWorldMode },
		{ "FNavigationSystemRunMode::EditorWorldPartitionBuildMode", (int64)FNavigationSystemRunMode::EditorWorldPartitionBuildMode },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_FNavigationSystemRunMode_Statics::Enum_MetaDataParams[] = {
		{ "EditorMode.Name", "FNavigationSystemRunMode::EditorMode" },
		{ "EditorWorldPartitionBuildMode.Name", "FNavigationSystemRunMode::EditorWorldPartitionBuildMode" },
		{ "GameMode.Name", "FNavigationSystemRunMode::GameMode" },
		{ "InferFromWorldMode.Name", "FNavigationSystemRunMode::InferFromWorldMode" },
		{ "InvalidMode.Name", "FNavigationSystemRunMode::InvalidMode" },
		{ "ModuleRelativePath", "Classes/AI/NavigationSystemBase.h" },
		{ "PIEMode.Name", "FNavigationSystemRunMode::PIEMode" },
		{ "SimulationMode.Name", "FNavigationSystemRunMode::SimulationMode" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_FNavigationSystemRunMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"FNavigationSystemRunMode",
		"FNavigationSystemRunMode",
		Z_Construct_UEnum_Engine_FNavigationSystemRunMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_FNavigationSystemRunMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_FNavigationSystemRunMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_FNavigationSystemRunMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_FNavigationSystemRunMode()
	{
		if (!Z_Registration_Info_UEnum_FNavigationSystemRunMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FNavigationSystemRunMode.InnerSingleton, Z_Construct_UEnum_Engine_FNavigationSystemRunMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FNavigationSystemRunMode.InnerSingleton;
	}
	void UNavigationSystemBase::StaticRegisterNativesUNavigationSystemBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigationSystemBase);
	UClass* Z_Construct_UClass_UNavigationSystemBase_NoRegister()
	{
		return UNavigationSystemBase::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationSystemBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationSystemBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/NavigationSystemBase.h" },
		{ "ModuleRelativePath", "Classes/AI/NavigationSystemBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationSystemBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationSystemBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationSystemBase_Statics::ClassParams = {
		&UNavigationSystemBase::StaticClass,
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
		0x001000ABu,
		METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationSystemBase()
	{
		if (!Z_Registration_Info_UClass_UNavigationSystemBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationSystemBase.OuterSingleton, Z_Construct_UClass_UNavigationSystemBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNavigationSystemBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UNavigationSystemBase>()
	{
		return UNavigationSystemBase::StaticClass();
	}
	UNavigationSystemBase::UNavigationSystemBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationSystemBase);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_Statics::EnumInfo[] = {
		{ FNavigationSystemRunMode_StaticEnum, TEXT("FNavigationSystemRunMode"), &Z_Registration_Info_UEnum_FNavigationSystemRunMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3607599205U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNavigationSystemBase, UNavigationSystemBase::StaticClass, TEXT("UNavigationSystemBase"), &Z_Registration_Info_UClass_UNavigationSystemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationSystemBase), 2969436509U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_2455891725(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
