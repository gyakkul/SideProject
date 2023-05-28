// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassRepresentation/Public/MassRepresentationSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassRepresentationSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassActorSpawnerSubsystem_NoRegister();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_AMassVisualizer_NoRegister();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationSubsystem();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationSubsystem_NoRegister();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassRepresentation();
// End Cross Module References
	void UMassRepresentationSubsystem::StaticRegisterNativesUMassRepresentationSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassRepresentationSubsystem);
	UClass* Z_Construct_UClass_UMassRepresentationSubsystem_NoRegister()
	{
		return UMassRepresentationSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassRepresentationSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TemplateActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TemplateActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizationComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VisualizationComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Visualizer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Visualizer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorSpawnerSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorSpawnerSubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPartitionSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WorldPartitionSubsystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassRepresentationSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassRepresentation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassRepresentationSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Subsystem responsible for all visual of mass agents, will handle actors spawning and static mesh instances\n */" },
		{ "IncludePath", "MassRepresentationSubsystem.h" },
		{ "ModuleRelativePath", "Public/MassRepresentationSubsystem.h" },
		{ "ToolTip", "Subsystem responsible for all visual of mass agents, will handle actors spawning and static mesh instances" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_TemplateActors_Inner = { "TemplateActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_TemplateActors_MetaData[] = {
		{ "Comment", "/** The array of all the template actors */" },
		{ "ModuleRelativePath", "Public/MassRepresentationSubsystem.h" },
		{ "ToolTip", "The array of all the template actors" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_TemplateActors = { "TemplateActors", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassRepresentationSubsystem, TemplateActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_TemplateActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_TemplateActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_VisualizationComponent_MetaData[] = {
		{ "Comment", "/** The component that handles all the static mesh instances */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassRepresentationSubsystem.h" },
		{ "ToolTip", "The component that handles all the static mesh instances" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_VisualizationComponent = { "VisualizationComponent", nullptr, (EPropertyFlags)0x0024080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassRepresentationSubsystem, VisualizationComponent), Z_Construct_UClass_UMassVisualizationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_VisualizationComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_VisualizationComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_Visualizer_MetaData[] = {
		{ "Comment", "/** The actor owning the above visualization component */" },
		{ "ModuleRelativePath", "Public/MassRepresentationSubsystem.h" },
		{ "ToolTip", "The actor owning the above visualization component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_Visualizer = { "Visualizer", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassRepresentationSubsystem, Visualizer), Z_Construct_UClass_AMassVisualizer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_Visualizer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_Visualizer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_ActorSpawnerSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassRepresentationSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_ActorSpawnerSubsystem = { "ActorSpawnerSubsystem", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassRepresentationSubsystem, ActorSpawnerSubsystem), Z_Construct_UClass_UMassActorSpawnerSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_ActorSpawnerSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_ActorSpawnerSubsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_WorldPartitionSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassRepresentationSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_WorldPartitionSubsystem = { "WorldPartitionSubsystem", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassRepresentationSubsystem, WorldPartitionSubsystem), Z_Construct_UClass_UWorldPartitionSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_WorldPartitionSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_WorldPartitionSubsystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassRepresentationSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_TemplateActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_TemplateActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_VisualizationComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_Visualizer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_ActorSpawnerSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassRepresentationSubsystem_Statics::NewProp_WorldPartitionSubsystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassRepresentationSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassRepresentationSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassRepresentationSubsystem_Statics::ClassParams = {
		&UMassRepresentationSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassRepresentationSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassRepresentationSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassRepresentationSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassRepresentationSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassRepresentationSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassRepresentationSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassRepresentationSubsystem.OuterSingleton, Z_Construct_UClass_UMassRepresentationSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassRepresentationSubsystem.OuterSingleton;
	}
	template<> MASSREPRESENTATION_API UClass* StaticClass<UMassRepresentationSubsystem>()
	{
		return UMassRepresentationSubsystem::StaticClass();
	}
	UMassRepresentationSubsystem::UMassRepresentationSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassRepresentationSubsystem);
	UMassRepresentationSubsystem::~UMassRepresentationSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassRepresentationSubsystem, UMassRepresentationSubsystem::StaticClass, TEXT("UMassRepresentationSubsystem"), &Z_Registration_Info_UClass_UMassRepresentationSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassRepresentationSubsystem), 1400281151U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationSubsystem_h_329157816(TEXT("/Script/MassRepresentation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
