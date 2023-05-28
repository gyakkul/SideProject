// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationInvokerComponent.h"
#include "../../Source/Runtime/Engine/Classes/AI/Navigation/NavAgentSelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationInvokerComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentSelector();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationInvokerComponent();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationInvokerComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void UNavigationInvokerComponent::StaticRegisterNativesUNavigationInvokerComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigationInvokerComponent);
	UClass* Z_Construct_UClass_UNavigationInvokerComponent_NoRegister()
	{
		return UNavigationInvokerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationInvokerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileGenerationRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileGenerationRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileRemovalRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileRemovalRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedAgents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SupportedAgents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationInvokerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationInvokerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Navigation" },
		{ "IncludePath", "NavigationInvokerComponent.h" },
		{ "ModuleRelativePath", "Public/NavigationInvokerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_TileGenerationRadius_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/NavigationInvokerComponent.h" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_TileGenerationRadius = { "TileGenerationRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationInvokerComponent, TileGenerationRadius), METADATA_PARAMS(Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_TileGenerationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_TileGenerationRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_TileRemovalRadius_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/NavigationInvokerComponent.h" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_TileRemovalRadius = { "TileRemovalRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationInvokerComponent, TileRemovalRadius), METADATA_PARAMS(Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_TileRemovalRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_TileRemovalRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_SupportedAgents_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** restrict navigation generation to specific agents */" },
		{ "ModuleRelativePath", "Public/NavigationInvokerComponent.h" },
		{ "ToolTip", "restrict navigation generation to specific agents" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_SupportedAgents = { "SupportedAgents", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationInvokerComponent, SupportedAgents), Z_Construct_UScriptStruct_FNavAgentSelector, METADATA_PARAMS(Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_SupportedAgents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_SupportedAgents_MetaData)) }; // 1383248333
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationInvokerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_TileGenerationRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_TileRemovalRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationInvokerComponent_Statics::NewProp_SupportedAgents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationInvokerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationInvokerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationInvokerComponent_Statics::ClassParams = {
		&UNavigationInvokerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNavigationInvokerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationInvokerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNavigationInvokerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationInvokerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationInvokerComponent()
	{
		if (!Z_Registration_Info_UClass_UNavigationInvokerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationInvokerComponent.OuterSingleton, Z_Construct_UClass_UNavigationInvokerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNavigationInvokerComponent.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavigationInvokerComponent>()
	{
		return UNavigationInvokerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationInvokerComponent);
	UNavigationInvokerComponent::~UNavigationInvokerComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNavigationInvokerComponent, UNavigationInvokerComponent::StaticClass, TEXT("UNavigationInvokerComponent"), &Z_Registration_Info_UClass_UNavigationInvokerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationInvokerComponent), 3119748915U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_2185412194(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
