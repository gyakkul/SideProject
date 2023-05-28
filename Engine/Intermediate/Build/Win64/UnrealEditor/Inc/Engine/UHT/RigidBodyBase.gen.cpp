// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/RigidBodyBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigidBodyBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ARigidBodyBase();
	ENGINE_API UClass* Z_Construct_UClass_ARigidBodyBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ARigidBodyBase::StaticRegisterNativesARigidBodyBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARigidBodyBase);
	UClass* Z_Construct_UClass_ARigidBodyBase_NoRegister()
	{
		return ARigidBodyBase::StaticClass();
	}
	struct Z_Construct_UClass_ARigidBodyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARigidBodyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARigidBodyBase_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Physics" },
		{ "IncludePath", "PhysicsEngine/RigidBodyBase.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/RigidBodyBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARigidBodyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARigidBodyBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARigidBodyBase_Statics::ClassParams = {
		&ARigidBodyBase::StaticClass,
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
		0x008800A5u,
		METADATA_PARAMS(Z_Construct_UClass_ARigidBodyBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARigidBodyBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARigidBodyBase()
	{
		if (!Z_Registration_Info_UClass_ARigidBodyBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARigidBodyBase.OuterSingleton, Z_Construct_UClass_ARigidBodyBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARigidBodyBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ARigidBodyBase>()
	{
		return ARigidBodyBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARigidBodyBase);
	ARigidBodyBase::~ARigidBodyBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARigidBodyBase, ARigidBodyBase::StaticClass, TEXT("ARigidBodyBase"), &Z_Registration_Info_UClass_ARigidBodyBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARigidBodyBase), 1163879668U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_1444523522(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_RigidBodyBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
