// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassRepresentation/Public/MassVisualizationComponent.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassRepresentation/Public/MassRepresentationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassVisualizationComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationComponent();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationComponent_NoRegister();
	MASSREPRESENTATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo();
	UPackage* Z_Construct_UPackage__Script_MassRepresentation();
// End Cross Module References
	void UMassVisualizationComponent::StaticRegisterNativesUMassVisualizationComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassVisualizationComponent);
	UClass* Z_Construct_UClass_UMassVisualizationComponent_NoRegister()
	{
		return UMassVisualizationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMassVisualizationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedStaticMeshInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedStaticMeshInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancedStaticMeshInfos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassVisualizationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MassRepresentation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassVisualizationComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * This component handles all the static mesh instances for a MassRepresentationProcessor and is an actor component off a MassVisualizer actor.\n * Meant to be created at runtime and owned by an MassVisualizer actor. Will ensure if placed on a different type of actor. \n */" },
		{ "IncludePath", "MassVisualizationComponent.h" },
		{ "ModuleRelativePath", "Public/MassVisualizationComponent.h" },
		{ "ToolTip", "This component handles all the static mesh instances for a MassRepresentationProcessor and is an actor component off a MassVisualizer actor.\nMeant to be created at runtime and owned by an MassVisualizer actor. Will ensure if placed on a different type of actor." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassVisualizationComponent_Statics::NewProp_InstancedStaticMeshInfos_Inner = { "InstancedStaticMeshInfos", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMassInstancedStaticMeshInfo, METADATA_PARAMS(nullptr, 0) }; // 1846068014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassVisualizationComponent_Statics::NewProp_InstancedStaticMeshInfos_MetaData[] = {
		{ "Comment", "/** The information of all the instanced static meshes */" },
		{ "ModuleRelativePath", "Public/MassVisualizationComponent.h" },
		{ "ToolTip", "The information of all the instanced static meshes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassVisualizationComponent_Statics::NewProp_InstancedStaticMeshInfos = { "InstancedStaticMeshInfos", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassVisualizationComponent, InstancedStaticMeshInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMassVisualizationComponent_Statics::NewProp_InstancedStaticMeshInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassVisualizationComponent_Statics::NewProp_InstancedStaticMeshInfos_MetaData)) }; // 1846068014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassVisualizationComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassVisualizationComponent_Statics::NewProp_InstancedStaticMeshInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassVisualizationComponent_Statics::NewProp_InstancedStaticMeshInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassVisualizationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassVisualizationComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassVisualizationComponent_Statics::ClassParams = {
		&UMassVisualizationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassVisualizationComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassVisualizationComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMassVisualizationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassVisualizationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassVisualizationComponent()
	{
		if (!Z_Registration_Info_UClass_UMassVisualizationComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassVisualizationComponent.OuterSingleton, Z_Construct_UClass_UMassVisualizationComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassVisualizationComponent.OuterSingleton;
	}
	template<> MASSREPRESENTATION_API UClass* StaticClass<UMassVisualizationComponent>()
	{
		return UMassVisualizationComponent::StaticClass();
	}
	UMassVisualizationComponent::UMassVisualizationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassVisualizationComponent);
	UMassVisualizationComponent::~UMassVisualizationComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassVisualizationComponent, UMassVisualizationComponent::StaticClass, TEXT("UMassVisualizationComponent"), &Z_Registration_Info_UClass_UMassVisualizationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassVisualizationComponent), 1530855627U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationComponent_h_899628857(TEXT("/Script/MassRepresentation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizationComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
