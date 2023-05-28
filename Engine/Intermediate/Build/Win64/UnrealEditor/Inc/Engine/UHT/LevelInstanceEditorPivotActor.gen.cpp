// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/LevelInstance/LevelInstanceEditorPivotActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstanceEditorPivotActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ALevelInstancePivot();
	ENGINE_API UClass* Z_Construct_UClass_ALevelInstancePivot_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceEditorPivotInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ALevelInstancePivot::StaticRegisterNativesALevelInstancePivot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelInstancePivot);
	UClass* Z_Construct_UClass_ALevelInstancePivot_NoRegister()
	{
		return ALevelInstancePivot::StaticClass();
	}
	struct Z_Construct_UClass_ALevelInstancePivot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelInstancePivot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelInstancePivot_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Replication Collision Partition Input HLOD Actor Cooking" },
		{ "IncludePath", "LevelInstance/LevelInstanceEditorPivotActor.h" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceEditorPivotActor.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALevelInstancePivot_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULevelInstanceEditorPivotInterface_NoRegister, (int32)VTABLE_OFFSET(ALevelInstancePivot, ILevelInstanceEditorPivotInterface), false },  // 3306435135
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelInstancePivot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelInstancePivot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelInstancePivot_Statics::ClassParams = {
		&ALevelInstancePivot::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALevelInstancePivot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelInstancePivot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelInstancePivot()
	{
		if (!Z_Registration_Info_UClass_ALevelInstancePivot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelInstancePivot.OuterSingleton, Z_Construct_UClass_ALevelInstancePivot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALevelInstancePivot.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ALevelInstancePivot>()
	{
		return ALevelInstancePivot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelInstancePivot);
	ALevelInstancePivot::~ALevelInstancePivot() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALevelInstancePivot, ALevelInstancePivot::StaticClass, TEXT("ALevelInstancePivot"), &Z_Registration_Info_UClass_ALevelInstancePivot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelInstancePivot), 876654288U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotActor_h_3661853985(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorPivotActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
