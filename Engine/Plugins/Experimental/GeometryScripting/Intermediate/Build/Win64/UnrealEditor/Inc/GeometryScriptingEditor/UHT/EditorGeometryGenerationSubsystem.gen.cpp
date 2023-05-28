// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryActors/EditorGeometryGenerationSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorGeometryGenerationSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	GEOMETRYSCRIPTINGEDITOR_API UClass* Z_Construct_UClass_UEditorGeometryGenerationManager();
	GEOMETRYSCRIPTINGEDITOR_API UClass* Z_Construct_UClass_UEditorGeometryGenerationManager_NoRegister();
	GEOMETRYSCRIPTINGEDITOR_API UClass* Z_Construct_UClass_UEditorGeometryGenerationSubsystem();
	GEOMETRYSCRIPTINGEDITOR_API UClass* Z_Construct_UClass_UEditorGeometryGenerationSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingEditor();
// End Cross Module References
	void UEditorGeometryGenerationSubsystem::StaticRegisterNativesUEditorGeometryGenerationSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorGeometryGenerationSubsystem);
	UClass* Z_Construct_UClass_UEditorGeometryGenerationSubsystem_NoRegister()
	{
		return UEditorGeometryGenerationSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UEditorGeometryGenerationSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerationManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GenerationManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorGeometryGenerationSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorGeometryGenerationSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UEditorGeometryGenerationSubsystem manages recomputation of \"generated\" mesh actors, eg\n * to provide procedural mesh generation in-Editor. Generally such procedural mesh generation\n * is expensive, and if many objects need to be generated, the regeneration needs to be \n * managed at a higher level to ensure that the Editor remains responsive/interactive.\n * \n * AGeneratedDynamicMeshActors register themselves with this Subsystem, and\n * allow the Subsystem to tell them when they should regenerate themselves (if necessary).\n * The current behavior is to run all pending generations on a Tick, however in future\n * this regeneration will be more carefully managed via throttling / timeslicing / etc.\n * \n */" },
		{ "IncludePath", "GeometryActors/EditorGeometryGenerationSubsystem.h" },
		{ "ModuleRelativePath", "Public/GeometryActors/EditorGeometryGenerationSubsystem.h" },
		{ "ToolTip", "UEditorGeometryGenerationSubsystem manages recomputation of \"generated\" mesh actors, eg\nto provide procedural mesh generation in-Editor. Generally such procedural mesh generation\nis expensive, and if many objects need to be generated, the regeneration needs to be\nmanaged at a higher level to ensure that the Editor remains responsive/interactive.\n\nAGeneratedDynamicMeshActors register themselves with this Subsystem, and\nallow the Subsystem to tell them when they should regenerate themselves (if necessary).\nThe current behavior is to run all pending generations on a Tick, however in future\nthis regeneration will be more carefully managed via throttling / timeslicing / etc." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorGeometryGenerationSubsystem_Statics::NewProp_GenerationManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryActors/EditorGeometryGenerationSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorGeometryGenerationSubsystem_Statics::NewProp_GenerationManager = { "GenerationManager", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorGeometryGenerationSubsystem, GenerationManager), Z_Construct_UClass_UEditorGeometryGenerationManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorGeometryGenerationSubsystem_Statics::NewProp_GenerationManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorGeometryGenerationSubsystem_Statics::NewProp_GenerationManager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorGeometryGenerationSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorGeometryGenerationSubsystem_Statics::NewProp_GenerationManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorGeometryGenerationSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorGeometryGenerationSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorGeometryGenerationSubsystem_Statics::ClassParams = {
		&UEditorGeometryGenerationSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorGeometryGenerationSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorGeometryGenerationSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorGeometryGenerationSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorGeometryGenerationSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorGeometryGenerationSubsystem()
	{
		if (!Z_Registration_Info_UClass_UEditorGeometryGenerationSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorGeometryGenerationSubsystem.OuterSingleton, Z_Construct_UClass_UEditorGeometryGenerationSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorGeometryGenerationSubsystem.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGEDITOR_API UClass* StaticClass<UEditorGeometryGenerationSubsystem>()
	{
		return UEditorGeometryGenerationSubsystem::StaticClass();
	}
	UEditorGeometryGenerationSubsystem::UEditorGeometryGenerationSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorGeometryGenerationSubsystem);
	UEditorGeometryGenerationSubsystem::~UEditorGeometryGenerationSubsystem() {}
	void UEditorGeometryGenerationManager::StaticRegisterNativesUEditorGeometryGenerationManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorGeometryGenerationManager);
	UClass* Z_Construct_UClass_UEditorGeometryGenerationManager_NoRegister()
	{
		return UEditorGeometryGenerationManager::StaticClass();
	}
	struct Z_Construct_UClass_UEditorGeometryGenerationManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorGeometryGenerationManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorGeometryGenerationManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UEditorGeometryGenerationManager is a class used by UEditorGeometryGenerationSubsystem to\n * store registrations and provide a Tick()\n */" },
		{ "IncludePath", "GeometryActors/EditorGeometryGenerationSubsystem.h" },
		{ "ModuleRelativePath", "Public/GeometryActors/EditorGeometryGenerationSubsystem.h" },
		{ "ToolTip", "UEditorGeometryGenerationManager is a class used by UEditorGeometryGenerationSubsystem to\nstore registrations and provide a Tick()" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorGeometryGenerationManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorGeometryGenerationManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorGeometryGenerationManager_Statics::ClassParams = {
		&UEditorGeometryGenerationManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorGeometryGenerationManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorGeometryGenerationManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorGeometryGenerationManager()
	{
		if (!Z_Registration_Info_UClass_UEditorGeometryGenerationManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorGeometryGenerationManager.OuterSingleton, Z_Construct_UClass_UEditorGeometryGenerationManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorGeometryGenerationManager.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGEDITOR_API UClass* StaticClass<UEditorGeometryGenerationManager>()
	{
		return UEditorGeometryGenerationManager::StaticClass();
	}
	UEditorGeometryGenerationManager::UEditorGeometryGenerationManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorGeometryGenerationManager);
	UEditorGeometryGenerationManager::~UEditorGeometryGenerationManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryActors_EditorGeometryGenerationSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryActors_EditorGeometryGenerationSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorGeometryGenerationSubsystem, UEditorGeometryGenerationSubsystem::StaticClass, TEXT("UEditorGeometryGenerationSubsystem"), &Z_Registration_Info_UClass_UEditorGeometryGenerationSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorGeometryGenerationSubsystem), 2484421483U) },
		{ Z_Construct_UClass_UEditorGeometryGenerationManager, UEditorGeometryGenerationManager::StaticClass, TEXT("UEditorGeometryGenerationManager"), &Z_Registration_Info_UClass_UEditorGeometryGenerationManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorGeometryGenerationManager), 958649641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryActors_EditorGeometryGenerationSubsystem_h_377702618(TEXT("/Script/GeometryScriptingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryActors_EditorGeometryGenerationSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryActors_EditorGeometryGenerationSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
