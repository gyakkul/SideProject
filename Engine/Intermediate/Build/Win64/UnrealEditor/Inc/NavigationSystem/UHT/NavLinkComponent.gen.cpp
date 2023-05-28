// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavLinkComponent.h"
#include "../../Source/Runtime/Engine/Classes/AI/Navigation/NavLinkDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationLink();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkComponent();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkComponent_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkHostInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void UNavLinkComponent::StaticRegisterNativesUNavLinkComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavLinkComponent);
	UClass* Z_Construct_UClass_UNavLinkComponent_NoRegister()
	{
		return UNavLinkComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNavLinkComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Links_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Links_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Links;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavLinkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Navigation" },
		{ "HideCategories", "Activation Mobility VirtualTexture Trigger" },
		{ "IncludePath", "NavLinkComponent.h" },
		{ "ModuleRelativePath", "Public/NavLinkComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavLinkComponent_Statics::NewProp_Links_Inner = { "Links", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNavigationLink, METADATA_PARAMS(nullptr, 0) }; // 437560671
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkComponent_Statics::NewProp_Links_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavLinkComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNavLinkComponent_Statics::NewProp_Links = { "Links", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavLinkComponent, Links), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNavLinkComponent_Statics::NewProp_Links_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavLinkComponent_Statics::NewProp_Links_MetaData)) }; // 437560671
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavLinkComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkComponent_Statics::NewProp_Links_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkComponent_Statics::NewProp_Links,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNavLinkComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavLinkHostInterface_NoRegister, (int32)VTABLE_OFFSET(UNavLinkComponent, INavLinkHostInterface), false },  // 873609221
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavLinkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavLinkComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavLinkComponent_Statics::ClassParams = {
		&UNavLinkComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNavLinkComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNavLinkComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNavLinkComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavLinkComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavLinkComponent()
	{
		if (!Z_Registration_Info_UClass_UNavLinkComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavLinkComponent.OuterSingleton, Z_Construct_UClass_UNavLinkComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNavLinkComponent.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavLinkComponent>()
	{
		return UNavLinkComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavLinkComponent);
	UNavLinkComponent::~UNavLinkComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNavLinkComponent, UNavLinkComponent::StaticClass, TEXT("UNavLinkComponent"), &Z_Registration_Info_UClass_UNavLinkComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavLinkComponent), 491649890U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_3840350059(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
