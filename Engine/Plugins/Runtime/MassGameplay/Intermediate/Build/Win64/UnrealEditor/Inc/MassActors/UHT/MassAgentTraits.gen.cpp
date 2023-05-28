// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassActors/Public/MassAgentTraits.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassAgentTraits() {}
// Cross Module References
	MASSACTORS_API UClass* Z_Construct_UClass_UMassAgentCapsuleCollisionSyncTrait();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassAgentCapsuleCollisionSyncTrait_NoRegister();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassAgentFeetLocationSyncTrait();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassAgentFeetLocationSyncTrait_NoRegister();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassAgentMovementSyncTrait();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassAgentMovementSyncTrait_NoRegister();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassAgentOrientationSyncTrait();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassAgentOrientationSyncTrait_NoRegister();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassAgentSyncTrait();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassAgentSyncTrait_NoRegister();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	MASSSPAWNER_API UEnum* Z_Construct_UEnum_MassSpawner_EMassTranslationDirection();
	UPackage* Z_Construct_UPackage__Script_MassActors();
// End Cross Module References
	void UMassAgentSyncTrait::StaticRegisterNativesUMassAgentSyncTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassAgentSyncTrait);
	UClass* Z_Construct_UClass_UMassAgentSyncTrait_NoRegister()
	{
		return UMassAgentSyncTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassAgentSyncTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SyncDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SyncDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SyncDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassAgentSyncTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassAgentSyncTrait_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassAgentTraits.h" },
		{ "ModuleRelativePath", "Public/MassAgentTraits.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMassAgentSyncTrait_Statics::NewProp_SyncDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassAgentSyncTrait_Statics::NewProp_SyncDirection_MetaData[] = {
		{ "Category", "Mass" },
		{ "ModuleRelativePath", "Public/MassAgentTraits.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMassAgentSyncTrait_Statics::NewProp_SyncDirection = { "SyncDirection", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassAgentSyncTrait, SyncDirection), Z_Construct_UEnum_MassSpawner_EMassTranslationDirection, METADATA_PARAMS(Z_Construct_UClass_UMassAgentSyncTrait_Statics::NewProp_SyncDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassAgentSyncTrait_Statics::NewProp_SyncDirection_MetaData)) }; // 702585311
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassAgentSyncTrait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassAgentSyncTrait_Statics::NewProp_SyncDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassAgentSyncTrait_Statics::NewProp_SyncDirection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassAgentSyncTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassAgentSyncTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassAgentSyncTrait_Statics::ClassParams = {
		&UMassAgentSyncTrait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassAgentSyncTrait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassAgentSyncTrait_Statics::PropPointers),
		0,
		0x001030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMassAgentSyncTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassAgentSyncTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassAgentSyncTrait()
	{
		if (!Z_Registration_Info_UClass_UMassAgentSyncTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassAgentSyncTrait.OuterSingleton, Z_Construct_UClass_UMassAgentSyncTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassAgentSyncTrait.OuterSingleton;
	}
	template<> MASSACTORS_API UClass* StaticClass<UMassAgentSyncTrait>()
	{
		return UMassAgentSyncTrait::StaticClass();
	}
	UMassAgentSyncTrait::UMassAgentSyncTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassAgentSyncTrait);
	UMassAgentSyncTrait::~UMassAgentSyncTrait() {}
	void UMassAgentCapsuleCollisionSyncTrait::StaticRegisterNativesUMassAgentCapsuleCollisionSyncTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassAgentCapsuleCollisionSyncTrait);
	UClass* Z_Construct_UClass_UMassAgentCapsuleCollisionSyncTrait_NoRegister()
	{
		return UMassAgentCapsuleCollisionSyncTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassAgentCapsuleCollisionSyncTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSyncTransform_MetaData[];
#endif
		static void NewProp_bSyncTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSyncTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassAgentCapsuleCollisionSyncTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassAgentSyncTrait,
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassAgentCapsuleCollisionSyncTrait_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** The trait initializes the entity with actor capsule component's radius. In addition, if bSyncTransform is true \n *  the trait keeps actor capsule component's and entity's transforms in sync. */" },
		{ "DisplayName", "Agent Capsule Collision Sync" },
		{ "IncludePath", "MassAgentTraits.h" },
		{ "ModuleRelativePath", "Public/MassAgentTraits.h" },
		{ "ToolTip", "The trait initializes the entity with actor capsule component's radius. In addition, if bSyncTransform is true\nthe trait keeps actor capsule component's and entity's transforms in sync." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassAgentCapsuleCollisionSyncTrait_Statics::NewProp_bSyncTransform_MetaData[] = {
		{ "Category", "Mass" },
		{ "ModuleRelativePath", "Public/MassAgentTraits.h" },
	};
#endif
	void Z_Construct_UClass_UMassAgentCapsuleCollisionSyncTrait_Statics::NewProp_bSyncTransform_SetBit(void* Obj)
	{
		((UMassAgentCapsuleCollisionSyncTrait*)Obj)->bSyncTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassAgentCapsuleCollisionSyncTrait_Statics::NewProp_bSyncTransform = { "bSyncTransform", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMassAgentCapsuleCollisionSyncTrait), &Z_Construct_UClass_UMassAgentCapsuleCollisionSyncTrait_Statics::NewProp_bSyncTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMassAgentCapsuleCollisionSyncTrait_Statics::NewProp_bSyncTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassAgentCapsuleCollisionSyncTrait_Statics::NewProp_bSyncTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassAgentCapsuleCollisionSyncTrait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassAgentCapsuleCollisionSyncTrait_Statics::NewProp_bSyncTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassAgentCapsuleCollisionSyncTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassAgentCapsuleCollisionSyncTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassAgentCapsuleCollisionSyncTrait_Statics::ClassParams = {
		&UMassAgentCapsuleCollisionSyncTrait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassAgentCapsuleCollisionSyncTrait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassAgentCapsuleCollisionSyncTrait_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassAgentCapsuleCollisionSyncTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassAgentCapsuleCollisionSyncTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassAgentCapsuleCollisionSyncTrait()
	{
		if (!Z_Registration_Info_UClass_UMassAgentCapsuleCollisionSyncTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassAgentCapsuleCollisionSyncTrait.OuterSingleton, Z_Construct_UClass_UMassAgentCapsuleCollisionSyncTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassAgentCapsuleCollisionSyncTrait.OuterSingleton;
	}
	template<> MASSACTORS_API UClass* StaticClass<UMassAgentCapsuleCollisionSyncTrait>()
	{
		return UMassAgentCapsuleCollisionSyncTrait::StaticClass();
	}
	UMassAgentCapsuleCollisionSyncTrait::UMassAgentCapsuleCollisionSyncTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassAgentCapsuleCollisionSyncTrait);
	UMassAgentCapsuleCollisionSyncTrait::~UMassAgentCapsuleCollisionSyncTrait() {}
	void UMassAgentMovementSyncTrait::StaticRegisterNativesUMassAgentMovementSyncTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassAgentMovementSyncTrait);
	UClass* Z_Construct_UClass_UMassAgentMovementSyncTrait_NoRegister()
	{
		return UMassAgentMovementSyncTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassAgentMovementSyncTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassAgentMovementSyncTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassAgentSyncTrait,
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassAgentMovementSyncTrait_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Agent Movement Sync" },
		{ "IncludePath", "MassAgentTraits.h" },
		{ "ModuleRelativePath", "Public/MassAgentTraits.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassAgentMovementSyncTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassAgentMovementSyncTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassAgentMovementSyncTrait_Statics::ClassParams = {
		&UMassAgentMovementSyncTrait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassAgentMovementSyncTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassAgentMovementSyncTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassAgentMovementSyncTrait()
	{
		if (!Z_Registration_Info_UClass_UMassAgentMovementSyncTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassAgentMovementSyncTrait.OuterSingleton, Z_Construct_UClass_UMassAgentMovementSyncTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassAgentMovementSyncTrait.OuterSingleton;
	}
	template<> MASSACTORS_API UClass* StaticClass<UMassAgentMovementSyncTrait>()
	{
		return UMassAgentMovementSyncTrait::StaticClass();
	}
	UMassAgentMovementSyncTrait::UMassAgentMovementSyncTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassAgentMovementSyncTrait);
	UMassAgentMovementSyncTrait::~UMassAgentMovementSyncTrait() {}
	void UMassAgentOrientationSyncTrait::StaticRegisterNativesUMassAgentOrientationSyncTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassAgentOrientationSyncTrait);
	UClass* Z_Construct_UClass_UMassAgentOrientationSyncTrait_NoRegister()
	{
		return UMassAgentOrientationSyncTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassAgentOrientationSyncTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassAgentOrientationSyncTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassAgentSyncTrait,
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassAgentOrientationSyncTrait_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Agent Orientation Sync" },
		{ "IncludePath", "MassAgentTraits.h" },
		{ "ModuleRelativePath", "Public/MassAgentTraits.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassAgentOrientationSyncTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassAgentOrientationSyncTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassAgentOrientationSyncTrait_Statics::ClassParams = {
		&UMassAgentOrientationSyncTrait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassAgentOrientationSyncTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassAgentOrientationSyncTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassAgentOrientationSyncTrait()
	{
		if (!Z_Registration_Info_UClass_UMassAgentOrientationSyncTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassAgentOrientationSyncTrait.OuterSingleton, Z_Construct_UClass_UMassAgentOrientationSyncTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassAgentOrientationSyncTrait.OuterSingleton;
	}
	template<> MASSACTORS_API UClass* StaticClass<UMassAgentOrientationSyncTrait>()
	{
		return UMassAgentOrientationSyncTrait::StaticClass();
	}
	UMassAgentOrientationSyncTrait::UMassAgentOrientationSyncTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassAgentOrientationSyncTrait);
	UMassAgentOrientationSyncTrait::~UMassAgentOrientationSyncTrait() {}
	void UMassAgentFeetLocationSyncTrait::StaticRegisterNativesUMassAgentFeetLocationSyncTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassAgentFeetLocationSyncTrait);
	UClass* Z_Construct_UClass_UMassAgentFeetLocationSyncTrait_NoRegister()
	{
		return UMassAgentFeetLocationSyncTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassAgentFeetLocationSyncTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassAgentFeetLocationSyncTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassAgentSyncTrait,
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassAgentFeetLocationSyncTrait_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Agent Feet Location Sync" },
		{ "IncludePath", "MassAgentTraits.h" },
		{ "ModuleRelativePath", "Public/MassAgentTraits.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassAgentFeetLocationSyncTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassAgentFeetLocationSyncTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassAgentFeetLocationSyncTrait_Statics::ClassParams = {
		&UMassAgentFeetLocationSyncTrait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassAgentFeetLocationSyncTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassAgentFeetLocationSyncTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassAgentFeetLocationSyncTrait()
	{
		if (!Z_Registration_Info_UClass_UMassAgentFeetLocationSyncTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassAgentFeetLocationSyncTrait.OuterSingleton, Z_Construct_UClass_UMassAgentFeetLocationSyncTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassAgentFeetLocationSyncTrait.OuterSingleton;
	}
	template<> MASSACTORS_API UClass* StaticClass<UMassAgentFeetLocationSyncTrait>()
	{
		return UMassAgentFeetLocationSyncTrait::StaticClass();
	}
	UMassAgentFeetLocationSyncTrait::UMassAgentFeetLocationSyncTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassAgentFeetLocationSyncTrait);
	UMassAgentFeetLocationSyncTrait::~UMassAgentFeetLocationSyncTrait() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentTraits_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentTraits_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassAgentSyncTrait, UMassAgentSyncTrait::StaticClass, TEXT("UMassAgentSyncTrait"), &Z_Registration_Info_UClass_UMassAgentSyncTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassAgentSyncTrait), 3205557769U) },
		{ Z_Construct_UClass_UMassAgentCapsuleCollisionSyncTrait, UMassAgentCapsuleCollisionSyncTrait::StaticClass, TEXT("UMassAgentCapsuleCollisionSyncTrait"), &Z_Registration_Info_UClass_UMassAgentCapsuleCollisionSyncTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassAgentCapsuleCollisionSyncTrait), 861864843U) },
		{ Z_Construct_UClass_UMassAgentMovementSyncTrait, UMassAgentMovementSyncTrait::StaticClass, TEXT("UMassAgentMovementSyncTrait"), &Z_Registration_Info_UClass_UMassAgentMovementSyncTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassAgentMovementSyncTrait), 909496815U) },
		{ Z_Construct_UClass_UMassAgentOrientationSyncTrait, UMassAgentOrientationSyncTrait::StaticClass, TEXT("UMassAgentOrientationSyncTrait"), &Z_Registration_Info_UClass_UMassAgentOrientationSyncTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassAgentOrientationSyncTrait), 3067890531U) },
		{ Z_Construct_UClass_UMassAgentFeetLocationSyncTrait, UMassAgentFeetLocationSyncTrait::StaticClass, TEXT("UMassAgentFeetLocationSyncTrait"), &Z_Registration_Info_UClass_UMassAgentFeetLocationSyncTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassAgentFeetLocationSyncTrait), 1624106488U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentTraits_h_3480705336(TEXT("/Script/MassActors"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentTraits_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentTraits_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
