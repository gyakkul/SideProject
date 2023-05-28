// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsThruster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsThruster() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APhysicsThruster();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsThruster_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ARigidBodyBase();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsThrusterComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void APhysicsThruster::StaticRegisterNativesAPhysicsThruster()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APhysicsThruster);
	UClass* Z_Construct_UClass_APhysicsThruster_NoRegister()
	{
		return APhysicsThruster::StaticClass();
	}
	struct Z_Construct_UClass_APhysicsThruster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrusterComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ThrusterComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhysicsThruster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARigidBodyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsThruster_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n *\x09""Attach one of these on an object using physics simulation and it will apply a force down the negative-X direction\n *\x09ie. point X in the direction you want the thrust in.\n */" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "PhysicsEngine/PhysicsThruster.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsThruster.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Attach one of these on an object using physics simulation and it will apply a force down the negative-X direction\nie. point X in the direction you want the thrust in." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsThruster_Statics::NewProp_ThrusterComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Physics" },
		{ "Comment", "/** Thruster component */" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Activation,Components|Activation" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsThruster.h" },
		{ "ToolTip", "Thruster component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APhysicsThruster_Statics::NewProp_ThrusterComponent = { "ThrusterComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhysicsThruster, ThrusterComponent), Z_Construct_UClass_UPhysicsThrusterComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhysicsThruster_Statics::NewProp_ThrusterComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsThruster_Statics::NewProp_ThrusterComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsThruster_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsThruster.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APhysicsThruster_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0044000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhysicsThruster, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhysicsThruster_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsThruster_Statics::NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APhysicsThruster_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsThruster_Statics::NewProp_ThrusterComponent,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsThruster_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhysicsThruster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhysicsThruster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APhysicsThruster_Statics::ClassParams = {
		&APhysicsThruster::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APhysicsThruster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsThruster_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APhysicsThruster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsThruster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhysicsThruster()
	{
		if (!Z_Registration_Info_UClass_APhysicsThruster.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APhysicsThruster.OuterSingleton, Z_Construct_UClass_APhysicsThruster_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APhysicsThruster.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<APhysicsThruster>()
	{
		return APhysicsThruster::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhysicsThruster);
	APhysicsThruster::~APhysicsThruster() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APhysicsThruster, APhysicsThruster::StaticClass, TEXT("APhysicsThruster"), &Z_Registration_Info_UClass_APhysicsThruster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APhysicsThruster), 606258575U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_2034796517(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsThruster_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
