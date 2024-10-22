// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WheeledVehiclePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWheeledVehiclePawn() {}
// Cross Module References
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn_NoRegister();
	CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosVehicles();
// End Cross Module References
	void AWheeledVehiclePawn::StaticRegisterNativesAWheeledVehiclePawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWheeledVehiclePawn);
	UClass* Z_Construct_UClass_AWheeledVehiclePawn_NoRegister()
	{
		return AWheeledVehiclePawn::StaticClass();
	}
	struct Z_Construct_UClass_AWheeledVehiclePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VehicleMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VehicleMovementComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWheeledVehiclePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehicles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWheeledVehiclePawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ChaosWheeledVehicle is the base wheeled vehicle pawn actor.\n * By default it uses UChaosWheeledVehicleMovementComponent for its simulation, but this can be overridden by inheriting from the class and modifying its constructor like so:\n * Super(ObjectInitializer.SetDefaultSubobjectClass<UMyMovement>(VehicleComponentName))\n * Where UMyMovement is the new movement type that inherits from UChaosVehicleMovementComponent\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "WheeledVehiclePawn.h" },
		{ "ModuleRelativePath", "Public/WheeledVehiclePawn.h" },
		{ "ToolTip", "ChaosWheeledVehicle is the base wheeled vehicle pawn actor.\nBy default it uses UChaosWheeledVehicleMovementComponent for its simulation, but this can be overridden by inheriting from the class and modifying its constructor like so:\nSuper(ObjectInitializer.SetDefaultSubobjectClass<UMyMovement>(VehicleComponentName))\nWhere UMyMovement is the new movement type that inherits from UChaosVehicleMovementComponent" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWheeledVehiclePawn_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Vehicle" },
		{ "Comment", "/**  The main skeletal mesh associated with this Vehicle */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WheeledVehiclePawn.h" },
		{ "ToolTip", "The main skeletal mesh associated with this Vehicle" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWheeledVehiclePawn_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00440000000b001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWheeledVehiclePawn, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWheeledVehiclePawn_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWheeledVehiclePawn_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWheeledVehiclePawn_Statics::NewProp_VehicleMovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Vehicle" },
		{ "Comment", "/** vehicle simulation component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WheeledVehiclePawn.h" },
		{ "ToolTip", "vehicle simulation component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWheeledVehiclePawn_Statics::NewProp_VehicleMovementComponent = { "VehicleMovementComponent", nullptr, (EPropertyFlags)0x00440000000b001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWheeledVehiclePawn, VehicleMovementComponent), Z_Construct_UClass_UChaosVehicleMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWheeledVehiclePawn_Statics::NewProp_VehicleMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWheeledVehiclePawn_Statics::NewProp_VehicleMovementComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWheeledVehiclePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWheeledVehiclePawn_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWheeledVehiclePawn_Statics::NewProp_VehicleMovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWheeledVehiclePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWheeledVehiclePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWheeledVehiclePawn_Statics::ClassParams = {
		&AWheeledVehiclePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWheeledVehiclePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWheeledVehiclePawn_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AWheeledVehiclePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWheeledVehiclePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWheeledVehiclePawn()
	{
		if (!Z_Registration_Info_UClass_AWheeledVehiclePawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWheeledVehiclePawn.OuterSingleton, Z_Construct_UClass_AWheeledVehiclePawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWheeledVehiclePawn.OuterSingleton;
	}
	template<> CHAOSVEHICLES_API UClass* StaticClass<AWheeledVehiclePawn>()
	{
		return AWheeledVehiclePawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWheeledVehiclePawn);
	AWheeledVehiclePawn::~AWheeledVehiclePawn() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_WheeledVehiclePawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_WheeledVehiclePawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWheeledVehiclePawn, AWheeledVehiclePawn::StaticClass, TEXT("AWheeledVehiclePawn"), &Z_Registration_Info_UClass_AWheeledVehiclePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWheeledVehiclePawn), 2619970427U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_WheeledVehiclePawn_h_3273385851(TEXT("/Script/ChaosVehicles"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_WheeledVehiclePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_WheeledVehiclePawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
