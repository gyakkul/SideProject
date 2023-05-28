// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsThrusterComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsThrusterComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsThrusterComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsThrusterComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UPhysicsThrusterComponent::StaticRegisterNativesUPhysicsThrusterComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsThrusterComponent);
	UClass* Z_Construct_UClass_UPhysicsThrusterComponent_NoRegister()
	{
		return UPhysicsThrusterComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsThrusterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrustStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrustStrength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsThrusterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsThrusterComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Physics" },
		{ "Comment", "/** \n *\x09Used with objects that have physics to apply a force down the negative-X direction\n *\x09ie. point X in the direction you want the thrust in.\n */" },
		{ "HideCategories", "Object Mobility LOD PhysicsVolume" },
		{ "IncludePath", "PhysicsEngine/PhysicsThrusterComponent.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsThrusterComponent.h" },
		{ "ToolTip", "Used with objects that have physics to apply a force down the negative-X direction\nie. point X in the direction you want the thrust in." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsThrusterComponent_Statics::NewProp_ThrustStrength_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Strength of thrust force applied to the base object. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsThrusterComponent.h" },
		{ "ToolTip", "Strength of thrust force applied to the base object." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsThrusterComponent_Statics::NewProp_ThrustStrength = { "ThrustStrength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsThrusterComponent, ThrustStrength), METADATA_PARAMS(Z_Construct_UClass_UPhysicsThrusterComponent_Statics::NewProp_ThrustStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsThrusterComponent_Statics::NewProp_ThrustStrength_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsThrusterComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsThrusterComponent_Statics::NewProp_ThrustStrength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsThrusterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsThrusterComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsThrusterComponent_Statics::ClassParams = {
		&UPhysicsThrusterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicsThrusterComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsThrusterComponent_Statics::PropPointers),
		0,
		0x00A800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsThrusterComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsThrusterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsThrusterComponent()
	{
		if (!Z_Registration_Info_UClass_UPhysicsThrusterComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsThrusterComponent.OuterSingleton, Z_Construct_UClass_UPhysicsThrusterComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsThrusterComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPhysicsThrusterComponent>()
	{
		return UPhysicsThrusterComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsThrusterComponent);
	UPhysicsThrusterComponent::~UPhysicsThrusterComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThrusterComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThrusterComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsThrusterComponent, UPhysicsThrusterComponent::StaticClass, TEXT("UPhysicsThrusterComponent"), &Z_Registration_Info_UClass_UPhysicsThrusterComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsThrusterComponent), 3877317654U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThrusterComponent_h_1645270373(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThrusterComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThrusterComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
