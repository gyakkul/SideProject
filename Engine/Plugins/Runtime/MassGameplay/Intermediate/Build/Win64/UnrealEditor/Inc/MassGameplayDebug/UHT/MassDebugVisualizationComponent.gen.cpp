// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassGameplayDebug/Public/MassDebugVisualizationComponent.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassGameplayDebug/Public/MassGameplayDebugTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassDebugVisualizationComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	MASSGAMEPLAYDEBUG_API UClass* Z_Construct_UClass_UMassDebugVisualizationComponent();
	MASSGAMEPLAYDEBUG_API UClass* Z_Construct_UClass_UMassDebugVisualizationComponent_NoRegister();
	MASSGAMEPLAYDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FAgentDebugVisualization();
	UPackage* Z_Construct_UPackage__Script_MassGameplayDebug();
// End Cross Module References
	void UMassDebugVisualizationComponent::StaticRegisterNativesUMassDebugVisualizationComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassDebugVisualizationComponent);
	UClass* Z_Construct_UClass_UMassDebugVisualizationComponent_NoRegister()
	{
		return UMassDebugVisualizationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMassDebugVisualizationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_VisualDataTable_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VisualDataTable;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VisualDataISMCs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualDataISMCs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VisualDataISMCs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassDebugVisualizationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MassGameplayDebug,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassDebugVisualizationComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** meant to be created procedurally and owned by an AMassDebugVisualizer instance. Will ensure if placed on a different type of actor */" },
		{ "IncludePath", "MassDebugVisualizationComponent.h" },
		{ "ModuleRelativePath", "Public/MassDebugVisualizationComponent.h" },
		{ "ToolTip", "meant to be created procedurally and owned by an AMassDebugVisualizer instance. Will ensure if placed on a different type of actor" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassDebugVisualizationComponent_Statics::NewProp_VisualDataTable_Inner = { "VisualDataTable", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAgentDebugVisualization, METADATA_PARAMS(nullptr, 0) }; // 2813970967
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassDebugVisualizationComponent_Statics::NewProp_VisualDataTable_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassDebugVisualizationComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassDebugVisualizationComponent_Statics::NewProp_VisualDataTable = { "VisualDataTable", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassDebugVisualizationComponent, VisualDataTable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMassDebugVisualizationComponent_Statics::NewProp_VisualDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassDebugVisualizationComponent_Statics::NewProp_VisualDataTable_MetaData)) }; // 2813970967
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassDebugVisualizationComponent_Statics::NewProp_VisualDataISMCs_Inner = { "VisualDataISMCs", nullptr, (EPropertyFlags)0x0004000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassDebugVisualizationComponent_Statics::NewProp_VisualDataISMCs_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassDebugVisualizationComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassDebugVisualizationComponent_Statics::NewProp_VisualDataISMCs = { "VisualDataISMCs", nullptr, (EPropertyFlags)0x0024088800002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassDebugVisualizationComponent, VisualDataISMCs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMassDebugVisualizationComponent_Statics::NewProp_VisualDataISMCs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassDebugVisualizationComponent_Statics::NewProp_VisualDataISMCs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassDebugVisualizationComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassDebugVisualizationComponent_Statics::NewProp_VisualDataTable_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassDebugVisualizationComponent_Statics::NewProp_VisualDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassDebugVisualizationComponent_Statics::NewProp_VisualDataISMCs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassDebugVisualizationComponent_Statics::NewProp_VisualDataISMCs,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassDebugVisualizationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassDebugVisualizationComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassDebugVisualizationComponent_Statics::ClassParams = {
		&UMassDebugVisualizationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UMassDebugVisualizationComponent_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UMassDebugVisualizationComponent_Statics::PropPointers), 0),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMassDebugVisualizationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassDebugVisualizationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassDebugVisualizationComponent()
	{
		if (!Z_Registration_Info_UClass_UMassDebugVisualizationComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassDebugVisualizationComponent.OuterSingleton, Z_Construct_UClass_UMassDebugVisualizationComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassDebugVisualizationComponent.OuterSingleton;
	}
	template<> MASSGAMEPLAYDEBUG_API UClass* StaticClass<UMassDebugVisualizationComponent>()
	{
		return UMassDebugVisualizationComponent::StaticClass();
	}
	UMassDebugVisualizationComponent::UMassDebugVisualizationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassDebugVisualizationComponent);
	UMassDebugVisualizationComponent::~UMassDebugVisualizationComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizationComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizationComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassDebugVisualizationComponent, UMassDebugVisualizationComponent::StaticClass, TEXT("UMassDebugVisualizationComponent"), &Z_Registration_Info_UClass_UMassDebugVisualizationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassDebugVisualizationComponent), 3502187221U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizationComponent_h_3688424053(TEXT("/Script/MassGameplayDebug"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_MassDebugVisualizationComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
