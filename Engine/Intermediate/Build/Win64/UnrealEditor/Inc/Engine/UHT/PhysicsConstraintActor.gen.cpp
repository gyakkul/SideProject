// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsConstraintActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsConstraintActor();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsConstraintActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ARigidBodyBase();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void APhysicsConstraintActor::StaticRegisterNativesAPhysicsConstraintActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APhysicsConstraintActor);
	UClass* Z_Construct_UClass_APhysicsConstraintActor_NoRegister()
	{
		return APhysicsConstraintActor::StaticClass();
	}
	struct Z_Construct_UClass_APhysicsConstraintActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConstraintComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintActor1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConstraintActor1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintActor2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConstraintActor2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableCollision_MetaData[];
#endif
		static void NewProp_bDisableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCollision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhysicsConstraintActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARigidBodyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsConstraintActor_Statics::Class_MetaDataParams[] = {
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "PhysicsEngine/PhysicsConstraintActor.h" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ConstraintActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "JointDrive,Physics|Components|PhysicsConstraint" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintComp = { "ConstraintComp", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhysicsConstraintActor, ConstraintComp), Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintActor1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintActor1 = { "ConstraintActor1", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhysicsConstraintActor, ConstraintActor1_DEPRECATED), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintActor1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintActor1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintActor2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintActor2 = { "ConstraintActor2", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhysicsConstraintActor, ConstraintActor2_DEPRECATED), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintActor2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintActor2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_bDisableCollision_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsConstraintActor.h" },
	};
#endif
	void Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_bDisableCollision_SetBit(void* Obj)
	{
		((APhysicsConstraintActor*)Obj)->bDisableCollision_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_bDisableCollision = { "bDisableCollision", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(APhysicsConstraintActor), &Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_bDisableCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_bDisableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_bDisableCollision_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APhysicsConstraintActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintActor1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_ConstraintActor2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsConstraintActor_Statics::NewProp_bDisableCollision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhysicsConstraintActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhysicsConstraintActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APhysicsConstraintActor_Statics::ClassParams = {
		&APhysicsConstraintActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APhysicsConstraintActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsConstraintActor_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_APhysicsConstraintActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsConstraintActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhysicsConstraintActor()
	{
		if (!Z_Registration_Info_UClass_APhysicsConstraintActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APhysicsConstraintActor.OuterSingleton, Z_Construct_UClass_APhysicsConstraintActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APhysicsConstraintActor.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<APhysicsConstraintActor>()
	{
		return APhysicsConstraintActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhysicsConstraintActor);
	APhysicsConstraintActor::~APhysicsConstraintActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APhysicsConstraintActor, APhysicsConstraintActor::StaticClass, TEXT("APhysicsConstraintActor"), &Z_Registration_Info_UClass_APhysicsConstraintActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APhysicsConstraintActor), 2097985784U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_3480940489(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsConstraintActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
