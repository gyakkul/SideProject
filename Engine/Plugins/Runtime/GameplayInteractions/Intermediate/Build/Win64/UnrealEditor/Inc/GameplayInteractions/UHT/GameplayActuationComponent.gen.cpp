// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayActuationComponent.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayActuationComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UGameplayActuationComponent();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UGameplayActuationComponent_NoRegister();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_GameplayInteractionsModule();
// End Cross Module References
	void UGameplayActuationComponent::StaticRegisterNativesUGameplayActuationComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayActuationComponent);
	UClass* Z_Construct_UClass_UGameplayActuationComponent_NoRegister()
	{
		return UGameplayActuationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayActuationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActuationState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActuationState;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transitions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTransitions_MetaData[];
#endif
		static void NewProp_bEnableTransitions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTransitions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayActuationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayActuationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GameplayTasks" },
		{ "Comment", "/**\n * Component holding current actuation state, and functionality to create transitions between GameplayTasks. \n */" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "GameplayActuationComponent.h" },
		{ "ModuleRelativePath", "Public/GameplayActuationComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Component holding current actuation state, and functionality to create transitions between GameplayTasks." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayActuationComponent_Statics::NewProp_ActuationState_MetaData[] = {
		{ "Comment", "/** Current actuation state */" },
		{ "ModuleRelativePath", "Public/GameplayActuationComponent.h" },
		{ "ToolTip", "Current actuation state" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayActuationComponent_Statics::NewProp_ActuationState = { "ActuationState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayActuationComponent, ActuationState), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(Z_Construct_UClass_UGameplayActuationComponent_Statics::NewProp_ActuationState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayActuationComponent_Statics::NewProp_ActuationState_MetaData)) }; // 3026308664
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayActuationComponent_Statics::NewProp_Transitions_Inner = { "Transitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(nullptr, 0) }; // 3026308664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayActuationComponent_Statics::NewProp_Transitions_MetaData[] = {
		{ "BaseStruct", "/Script/GameplayInteractionsModule.GameplayTransitionDesc" },
		{ "Category", "Actuation" },
		{ "Comment", "/** Transition descriptors */" },
		{ "ModuleRelativePath", "Public/GameplayActuationComponent.h" },
		{ "ToolTip", "Transition descriptors" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayActuationComponent_Statics::NewProp_Transitions = { "Transitions", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayActuationComponent, Transitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayActuationComponent_Statics::NewProp_Transitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayActuationComponent_Statics::NewProp_Transitions_MetaData)) }; // 3026308664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayActuationComponent_Statics::NewProp_bEnableTransitions_MetaData[] = {
		{ "Category", "Actuation" },
		{ "Comment", "/** If true, allow transition tasks. */" },
		{ "ModuleRelativePath", "Public/GameplayActuationComponent.h" },
		{ "ToolTip", "If true, allow transition tasks." },
	};
#endif
	void Z_Construct_UClass_UGameplayActuationComponent_Statics::NewProp_bEnableTransitions_SetBit(void* Obj)
	{
		((UGameplayActuationComponent*)Obj)->bEnableTransitions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayActuationComponent_Statics::NewProp_bEnableTransitions = { "bEnableTransitions", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameplayActuationComponent), &Z_Construct_UClass_UGameplayActuationComponent_Statics::NewProp_bEnableTransitions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayActuationComponent_Statics::NewProp_bEnableTransitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayActuationComponent_Statics::NewProp_bEnableTransitions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayActuationComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayActuationComponent_Statics::NewProp_ActuationState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayActuationComponent_Statics::NewProp_Transitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayActuationComponent_Statics::NewProp_Transitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayActuationComponent_Statics::NewProp_bEnableTransitions,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGameplayActuationComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister, (int32)VTABLE_OFFSET(UGameplayActuationComponent, IVisualLoggerDebugSnapshotInterface), false },  // 224036737
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayActuationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayActuationComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayActuationComponent_Statics::ClassParams = {
		&UGameplayActuationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayActuationComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayActuationComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayActuationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayActuationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayActuationComponent()
	{
		if (!Z_Registration_Info_UClass_UGameplayActuationComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayActuationComponent.OuterSingleton, Z_Construct_UClass_UGameplayActuationComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayActuationComponent.OuterSingleton;
	}
	template<> GAMEPLAYINTERACTIONSMODULE_API UClass* StaticClass<UGameplayActuationComponent>()
	{
		return UGameplayActuationComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayActuationComponent);
	UGameplayActuationComponent::~UGameplayActuationComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayActuationComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayActuationComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayActuationComponent, UGameplayActuationComponent::StaticClass, TEXT("UGameplayActuationComponent"), &Z_Registration_Info_UClass_UGameplayActuationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayActuationComponent), 60337978U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayActuationComponent_h_198329667(TEXT("/Script/GameplayInteractionsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayActuationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayActuationComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
