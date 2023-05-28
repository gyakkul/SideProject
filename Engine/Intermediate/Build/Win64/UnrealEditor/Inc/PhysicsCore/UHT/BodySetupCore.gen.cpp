// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BodySetupCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodySetupCore() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UBodySetupCore();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UBodySetupCore_NoRegister();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicsType();
	UPackage* Z_Construct_UPackage__Script_PhysicsCore();
// End Cross Module References
	void UBodySetupCore::StaticRegisterNativesUBodySetupCore()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBodySetupCore);
	UClass* Z_Construct_UClass_UBodySetupCore_NoRegister()
	{
		return UBodySetupCore::StaticClass();
	}
	struct Z_Construct_UClass_UBodySetupCore_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PhysicsType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionTraceFlag_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionTraceFlag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionReponse_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionReponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBodySetupCore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetupCore_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BodySetupCore.h" },
		{ "ModuleRelativePath", "Public/BodySetupCore.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetupCore_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "BodySetup" },
		{ "Comment", "/** Used in the PhysicsAsset case. Associates this Body with Bone in a skeletal mesh. */" },
		{ "ModuleRelativePath", "Public/BodySetupCore.h" },
		{ "ToolTip", "Used in the PhysicsAsset case. Associates this Body with Bone in a skeletal mesh." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBodySetupCore_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBodySetupCore, BoneName), METADATA_PARAMS(Z_Construct_UClass_UBodySetupCore_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetupCore_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetupCore_Statics::NewProp_PhysicsType_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** \n\x09 *\x09If simulated it will use physics, if kinematic it will not be affected by physics, but can interact with physically simulated bodies. Default will inherit from OwnerComponent's behavior.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BodySetupCore.h" },
		{ "ToolTip", "If simulated it will use physics, if kinematic it will not be affected by physics, but can interact with physically simulated bodies. Default will inherit from OwnerComponent's behavior." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBodySetupCore_Statics::NewProp_PhysicsType = { "PhysicsType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBodySetupCore, PhysicsType), Z_Construct_UEnum_PhysicsCore_EPhysicsType, METADATA_PARAMS(Z_Construct_UClass_UBodySetupCore_Statics::NewProp_PhysicsType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetupCore_Statics::NewProp_PhysicsType_MetaData)) }; // 3667393612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetupCore_Statics::NewProp_CollisionTraceFlag_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Collision Trace behavior - by default, it will keep simple(convex)/complex(per-poly) separate **/" },
		{ "DisplayName", "Collision Complexity" },
		{ "ModuleRelativePath", "Public/BodySetupCore.h" },
		{ "ToolTip", "Collision Trace behavior - by default, it will keep simple(convex)/complex(per-poly) separate *" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBodySetupCore_Statics::NewProp_CollisionTraceFlag = { "CollisionTraceFlag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBodySetupCore, CollisionTraceFlag), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(Z_Construct_UClass_UBodySetupCore_Statics::NewProp_CollisionTraceFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetupCore_Statics::NewProp_CollisionTraceFlag_MetaData)) }; // 3043805667
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBodySetupCore_Statics::NewProp_CollisionReponse_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Collision Type for this body. This eventually changes response to collision to others **/" },
		{ "ModuleRelativePath", "Public/BodySetupCore.h" },
		{ "ToolTip", "Collision Type for this body. This eventually changes response to collision to others *" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBodySetupCore_Statics::NewProp_CollisionReponse = { "CollisionReponse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBodySetupCore, CollisionReponse), Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse, METADATA_PARAMS(Z_Construct_UClass_UBodySetupCore_Statics::NewProp_CollisionReponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetupCore_Statics::NewProp_CollisionReponse_MetaData)) }; // 3090169330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBodySetupCore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetupCore_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetupCore_Statics::NewProp_PhysicsType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetupCore_Statics::NewProp_CollisionTraceFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBodySetupCore_Statics::NewProp_CollisionReponse,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBodySetupCore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBodySetupCore>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBodySetupCore_Statics::ClassParams = {
		&UBodySetupCore::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBodySetupCore_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetupCore_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBodySetupCore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBodySetupCore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBodySetupCore()
	{
		if (!Z_Registration_Info_UClass_UBodySetupCore.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBodySetupCore.OuterSingleton, Z_Construct_UClass_UBodySetupCore_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBodySetupCore.OuterSingleton;
	}
	template<> PHYSICSCORE_API UClass* StaticClass<UBodySetupCore>()
	{
		return UBodySetupCore::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBodySetupCore);
	UBodySetupCore::~UBodySetupCore() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBodySetupCore, UBodySetupCore::StaticClass, TEXT("UBodySetupCore"), &Z_Registration_Info_UClass_UBodySetupCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBodySetupCore), 3647950601U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_1180776217(TEXT("/Script/PhysicsCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupCore_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
