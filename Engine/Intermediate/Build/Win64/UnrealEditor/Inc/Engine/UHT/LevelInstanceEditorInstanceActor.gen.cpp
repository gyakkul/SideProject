// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/LevelInstance/LevelInstanceEditorInstanceActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstanceEditorInstanceActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ALevelInstanceEditorInstanceActor();
	ENGINE_API UClass* Z_Construct_UClass_ALevelInstanceEditorInstanceActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ALevelInstanceEditorInstanceActor::StaticRegisterNativesALevelInstanceEditorInstanceActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelInstanceEditorInstanceActor);
	UClass* Z_Construct_UClass_ALevelInstanceEditorInstanceActor_NoRegister()
	{
		return ALevelInstanceEditorInstanceActor::StaticClass();
	}
	struct Z_Construct_UClass_ALevelInstanceEditorInstanceActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelInstanceEditorInstanceActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelInstanceEditorInstanceActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Editor Only Actor that is spawned inside every LevelInstance Instance Level so that we can update its Actor Transforms through the ILevelInstanceInterface's (ULevelInstanceComponent)\n * @see ULevelInstanceComponent\n */" },
		{ "IncludePath", "LevelInstance/LevelInstanceEditorInstanceActor.h" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceEditorInstanceActor.h" },
		{ "ToolTip", "Editor Only Actor that is spawned inside every LevelInstance Instance Level so that we can update its Actor Transforms through the ILevelInstanceInterface's (ULevelInstanceComponent)\n@see ULevelInstanceComponent" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelInstanceEditorInstanceActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelInstanceEditorInstanceActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelInstanceEditorInstanceActor_Statics::ClassParams = {
		&ALevelInstanceEditorInstanceActor::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALevelInstanceEditorInstanceActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelInstanceEditorInstanceActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelInstanceEditorInstanceActor()
	{
		if (!Z_Registration_Info_UClass_ALevelInstanceEditorInstanceActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelInstanceEditorInstanceActor.OuterSingleton, Z_Construct_UClass_ALevelInstanceEditorInstanceActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALevelInstanceEditorInstanceActor.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ALevelInstanceEditorInstanceActor>()
	{
		return ALevelInstanceEditorInstanceActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelInstanceEditorInstanceActor);
	ALevelInstanceEditorInstanceActor::~ALevelInstanceEditorInstanceActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorInstanceActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorInstanceActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALevelInstanceEditorInstanceActor, ALevelInstanceEditorInstanceActor::StaticClass, TEXT("ALevelInstanceEditorInstanceActor"), &Z_Registration_Info_UClass_ALevelInstanceEditorInstanceActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelInstanceEditorInstanceActor), 421582934U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorInstanceActor_h_415991040(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorInstanceActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceEditorInstanceActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
