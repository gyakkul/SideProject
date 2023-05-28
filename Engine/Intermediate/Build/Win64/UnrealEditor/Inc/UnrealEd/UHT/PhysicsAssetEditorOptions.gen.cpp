// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Preferences/PhysicsAssetEditorOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsAssetEditorOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicsTransformUpdateMode();
	UNREALED_API UClass* Z_Construct_UClass_UPhysicsAssetEditorOptions();
	UNREALED_API UClass* Z_Construct_UClass_UPhysicsAssetEditorOptions_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorCollisionViewMode();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorConstraintViewMode();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorMeshViewMode();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhysicsAssetEditorCollisionViewMode;
	static UEnum* EPhysicsAssetEditorCollisionViewMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPhysicsAssetEditorCollisionViewMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPhysicsAssetEditorCollisionViewMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorCollisionViewMode, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EPhysicsAssetEditorCollisionViewMode"));
		}
		return Z_Registration_Info_UEnum_EPhysicsAssetEditorCollisionViewMode.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EPhysicsAssetEditorCollisionViewMode>()
	{
		return EPhysicsAssetEditorCollisionViewMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorCollisionViewMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorCollisionViewMode_Statics::Enumerators[] = {
		{ "EPhysicsAssetEditorCollisionViewMode::Solid", (int64)EPhysicsAssetEditorCollisionViewMode::Solid },
		{ "EPhysicsAssetEditorCollisionViewMode::Wireframe", (int64)EPhysicsAssetEditorCollisionViewMode::Wireframe },
		{ "EPhysicsAssetEditorCollisionViewMode::SolidWireframe", (int64)EPhysicsAssetEditorCollisionViewMode::SolidWireframe },
		{ "EPhysicsAssetEditorCollisionViewMode::None", (int64)EPhysicsAssetEditorCollisionViewMode::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorCollisionViewMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "None.Name", "EPhysicsAssetEditorCollisionViewMode::None" },
		{ "Solid.Name", "EPhysicsAssetEditorCollisionViewMode::Solid" },
		{ "SolidWireframe.Name", "EPhysicsAssetEditorCollisionViewMode::SolidWireframe" },
		{ "Wireframe.Name", "EPhysicsAssetEditorCollisionViewMode::Wireframe" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorCollisionViewMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EPhysicsAssetEditorCollisionViewMode",
		"EPhysicsAssetEditorCollisionViewMode",
		Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorCollisionViewMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorCollisionViewMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorCollisionViewMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorCollisionViewMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorCollisionViewMode()
	{
		if (!Z_Registration_Info_UEnum_EPhysicsAssetEditorCollisionViewMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhysicsAssetEditorCollisionViewMode.InnerSingleton, Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorCollisionViewMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPhysicsAssetEditorCollisionViewMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhysicsAssetEditorMeshViewMode;
	static UEnum* EPhysicsAssetEditorMeshViewMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPhysicsAssetEditorMeshViewMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPhysicsAssetEditorMeshViewMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorMeshViewMode, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EPhysicsAssetEditorMeshViewMode"));
		}
		return Z_Registration_Info_UEnum_EPhysicsAssetEditorMeshViewMode.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EPhysicsAssetEditorMeshViewMode>()
	{
		return EPhysicsAssetEditorMeshViewMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorMeshViewMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorMeshViewMode_Statics::Enumerators[] = {
		{ "EPhysicsAssetEditorMeshViewMode::Solid", (int64)EPhysicsAssetEditorMeshViewMode::Solid },
		{ "EPhysicsAssetEditorMeshViewMode::Wireframe", (int64)EPhysicsAssetEditorMeshViewMode::Wireframe },
		{ "EPhysicsAssetEditorMeshViewMode::None", (int64)EPhysicsAssetEditorMeshViewMode::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorMeshViewMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "None.Name", "EPhysicsAssetEditorMeshViewMode::None" },
		{ "Solid.Name", "EPhysicsAssetEditorMeshViewMode::Solid" },
		{ "Wireframe.Name", "EPhysicsAssetEditorMeshViewMode::Wireframe" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorMeshViewMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EPhysicsAssetEditorMeshViewMode",
		"EPhysicsAssetEditorMeshViewMode",
		Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorMeshViewMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorMeshViewMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorMeshViewMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorMeshViewMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorMeshViewMode()
	{
		if (!Z_Registration_Info_UEnum_EPhysicsAssetEditorMeshViewMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhysicsAssetEditorMeshViewMode.InnerSingleton, Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorMeshViewMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPhysicsAssetEditorMeshViewMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhysicsAssetEditorConstraintViewMode;
	static UEnum* EPhysicsAssetEditorConstraintViewMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPhysicsAssetEditorConstraintViewMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPhysicsAssetEditorConstraintViewMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorConstraintViewMode, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EPhysicsAssetEditorConstraintViewMode"));
		}
		return Z_Registration_Info_UEnum_EPhysicsAssetEditorConstraintViewMode.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EPhysicsAssetEditorConstraintViewMode>()
	{
		return EPhysicsAssetEditorConstraintViewMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorConstraintViewMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorConstraintViewMode_Statics::Enumerators[] = {
		{ "EPhysicsAssetEditorConstraintViewMode::None", (int64)EPhysicsAssetEditorConstraintViewMode::None },
		{ "EPhysicsAssetEditorConstraintViewMode::AllPositions", (int64)EPhysicsAssetEditorConstraintViewMode::AllPositions },
		{ "EPhysicsAssetEditorConstraintViewMode::AllLimits", (int64)EPhysicsAssetEditorConstraintViewMode::AllLimits },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorConstraintViewMode_Statics::Enum_MetaDataParams[] = {
		{ "AllLimits.Name", "EPhysicsAssetEditorConstraintViewMode::AllLimits" },
		{ "AllPositions.Name", "EPhysicsAssetEditorConstraintViewMode::AllPositions" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "None.Name", "EPhysicsAssetEditorConstraintViewMode::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorConstraintViewMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EPhysicsAssetEditorConstraintViewMode",
		"EPhysicsAssetEditorConstraintViewMode",
		Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorConstraintViewMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorConstraintViewMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorConstraintViewMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorConstraintViewMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorConstraintViewMode()
	{
		if (!Z_Registration_Info_UEnum_EPhysicsAssetEditorConstraintViewMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhysicsAssetEditorConstraintViewMode.InnerSingleton, Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorConstraintViewMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPhysicsAssetEditorConstraintViewMode.InnerSingleton;
	}
	void UPhysicsAssetEditorOptions::StaticRegisterNativesUPhysicsAssetEditorOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsAssetEditorOptions);
	UClass* Z_Construct_UClass_UPhysicsAssetEditorOptions_NoRegister()
	{
		return UPhysicsAssetEditorOptions::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsBlend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PhysicsBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateJointsFromAnimation_MetaData[];
#endif
		static void NewProp_bUpdateJointsFromAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateJointsFromAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsUpdateMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PhysicsUpdateMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokePauseTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PokePauseTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokeBlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PokeBlendTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityOverrideZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityOverrideZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGravityOverride_MetaData[];
#endif
		static void NewProp_bUseGravityOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGravityOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxFPS_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxFPS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandleLinearDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HandleLinearDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandleLinearStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HandleLinearStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandleAngularDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HandleAngularDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandleAngularStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HandleAngularStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PokeStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PokeStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowConstraintsAsPoints_MetaData[];
#endif
		static void NewProp_bShowConstraintsAsPoints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowConstraintsAsPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderOnlySelectedConstraints_MetaData[];
#endif
		static void NewProp_bRenderOnlySelectedConstraints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderOnlySelectedConstraints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimulationFloorCollisionEnabled_MetaData[];
#endif
		static void NewProp_bSimulationFloorCollisionEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulationFloorCollisionEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintDrawSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstraintDrawSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MeshViewMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshViewMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionViewMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionViewMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConstraintViewMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConstraintViewMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SimulationMeshViewMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationMeshViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SimulationMeshViewMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SimulationCollisionViewMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationCollisionViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SimulationCollisionViewMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SimulationConstraintViewMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationConstraintViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SimulationConstraintViewMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSolidRenderingForSelectedOnly_MetaData[];
#endif
		static void NewProp_bSolidRenderingForSelectedOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSolidRenderingForSelectedOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideSimulatedBodies_MetaData[];
#endif
		static void NewProp_bHideSimulatedBodies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideSimulatedBodies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideKinematicBodies_MetaData[];
#endif
		static void NewProp_bHideKinematicBodies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideKinematicBodies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetClothWhenSimulating_MetaData[];
#endif
		static void NewProp_bResetClothWhenSimulating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetClothWhenSimulating;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Preferences/PhysicsAssetEditorOptions.h" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PhysicsBlend_MetaData[] = {
		{ "Category", "Anim" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Lets you manually control the physics/animation */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Lets you manually control the physics/animation" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PhysicsBlend = { "PhysicsBlend", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetEditorOptions, PhysicsBlend), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PhysicsBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PhysicsBlend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUpdateJointsFromAnimation_MetaData[] = {
		{ "Category", "Anim" },
		{ "Comment", "/** Lets you manually control the physics/animation */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Lets you manually control the physics/animation" },
	};
#endif
	void Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUpdateJointsFromAnimation_SetBit(void* Obj)
	{
		((UPhysicsAssetEditorOptions*)Obj)->bUpdateJointsFromAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUpdateJointsFromAnimation = { "bUpdateJointsFromAnimation", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPhysicsAssetEditorOptions), &Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUpdateJointsFromAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUpdateJointsFromAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUpdateJointsFromAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PhysicsUpdateMode_MetaData[] = {
		{ "Category", "Anim" },
		{ "Comment", "/** Determines whether simulation of root body updates component transform */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Determines whether simulation of root body updates component transform" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PhysicsUpdateMode = { "PhysicsUpdateMode", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetEditorOptions, PhysicsUpdateMode), Z_Construct_UEnum_Engine_EPhysicsTransformUpdateMode, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PhysicsUpdateMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PhysicsUpdateMode_MetaData)) }; // 3005969211
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokePauseTime_MetaData[] = {
		{ "Category", "Anim" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Time between poking ragdoll and starting to blend back. */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Time between poking ragdoll and starting to blend back." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokePauseTime = { "PokePauseTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetEditorOptions, PokePauseTime), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokePauseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokePauseTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokeBlendTime_MetaData[] = {
		{ "Category", "Anim" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Time taken to blend from physics to animation. */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Time taken to blend from physics to animation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokeBlendTime = { "PokeBlendTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetEditorOptions, PokeBlendTime), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokeBlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokeBlendTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_GravScale_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "-10000" },
		{ "Comment", "/** Scale factor for the gravity used in the simulation */" },
		{ "EditCondition", "!bUseGravityOverride" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Scale factor for the gravity used in the simulation" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_GravScale = { "GravScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetEditorOptions, GravScale), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_GravScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_GravScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_GravityOverrideZ_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "-100000" },
		{ "Comment", "/** Gravity override used in the simulation */" },
		{ "EditCondition", "bUseGravityOverride" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Gravity override used in the simulation" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_GravityOverrideZ = { "GravityOverrideZ", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetEditorOptions, GravityOverrideZ), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_GravityOverrideZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_GravityOverrideZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUseGravityOverride_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/* Toggle gravity override vs gravity scale */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Toggle gravity override vs gravity scale" },
	};
#endif
	void Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUseGravityOverride_SetBit(void* Obj)
	{
		((UPhysicsAssetEditorOptions*)Obj)->bUseGravityOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUseGravityOverride = { "bUseGravityOverride", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPhysicsAssetEditorOptions), &Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUseGravityOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUseGravityOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUseGravityOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_MaxFPS_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/** Max FPS for simulation in PhysicsAssetEditor. This is helpful for targeting the same FPS as your game. -1 means disabled*/" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Max FPS for simulation in PhysicsAssetEditor. This is helpful for targeting the same FPS as your game. -1 means disabled" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_MaxFPS = { "MaxFPS", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetEditorOptions, MaxFPS), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_MaxFPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_MaxFPS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleLinearDamping_MetaData[] = {
		{ "Category", "MouseSpring" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Linear damping of mouse spring forces */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Linear damping of mouse spring forces" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleLinearDamping = { "HandleLinearDamping", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetEditorOptions, HandleLinearDamping), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleLinearDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleLinearDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleLinearStiffness_MetaData[] = {
		{ "Category", "MouseSpring" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Linear stiffness of mouse spring forces */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Linear stiffness of mouse spring forces" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleLinearStiffness = { "HandleLinearStiffness", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetEditorOptions, HandleLinearStiffness), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleLinearStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleLinearStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleAngularDamping_MetaData[] = {
		{ "Category", "MouseSpring" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Angular damping of mouse spring forces */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Angular damping of mouse spring forces" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleAngularDamping = { "HandleAngularDamping", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetEditorOptions, HandleAngularDamping), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleAngularDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleAngularDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleAngularStiffness_MetaData[] = {
		{ "Category", "MouseSpring" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Angular stiffness of mouse spring forces */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Angular stiffness of mouse spring forces" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleAngularStiffness = { "HandleAngularStiffness", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetEditorOptions, HandleAngularStiffness), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleAngularStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleAngularStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_InterpolationSpeed_MetaData[] = {
		{ "Category", "MouseSpring" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How quickly we interpolate the physics target transform for mouse spring forces */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "How quickly we interpolate the physics target transform for mouse spring forces" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_InterpolationSpeed = { "InterpolationSpeed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetEditorOptions, InterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_InterpolationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_InterpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokeStrength_MetaData[] = {
		{ "Category", "Poking" },
		{ "Comment", "/** Strength of the impulse used when poking with left mouse button */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Strength of the impulse used when poking with left mouse button" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokeStrength = { "PokeStrength", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetEditorOptions, PokeStrength), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokeStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokeStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_InteractionDistance_MetaData[] = {
		{ "Category", "Poking" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Raycast distance when poking or grabbing */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Raycast distance when poking or grabbing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_InteractionDistance = { "InteractionDistance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetEditorOptions, InteractionDistance), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_InteractionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_InteractionDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bShowConstraintsAsPoints_MetaData[] = {
		{ "Comment", "/** Whether to draw constraints as points */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Whether to draw constraints as points" },
	};
#endif
	void Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bShowConstraintsAsPoints_SetBit(void* Obj)
	{
		((UPhysicsAssetEditorOptions*)Obj)->bShowConstraintsAsPoints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bShowConstraintsAsPoints = { "bShowConstraintsAsPoints", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPhysicsAssetEditorOptions), &Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bShowConstraintsAsPoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bShowConstraintsAsPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bShowConstraintsAsPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bRenderOnlySelectedConstraints_MetaData[] = {
		{ "Comment", "/** Whether to only render selected constraints */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Whether to only render selected constraints" },
	};
#endif
	void Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bRenderOnlySelectedConstraints_SetBit(void* Obj)
	{
		((UPhysicsAssetEditorOptions*)Obj)->bRenderOnlySelectedConstraints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bRenderOnlySelectedConstraints = { "bRenderOnlySelectedConstraints", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPhysicsAssetEditorOptions), &Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bRenderOnlySelectedConstraints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bRenderOnlySelectedConstraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bRenderOnlySelectedConstraints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bSimulationFloorCollisionEnabled_MetaData[] = {
		{ "Comment", "/* Toggle collisions with floor in the simulation */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Toggle collisions with floor in the simulation" },
	};
#endif
	void Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bSimulationFloorCollisionEnabled_SetBit(void* Obj)
	{
		((UPhysicsAssetEditorOptions*)Obj)->bSimulationFloorCollisionEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bSimulationFloorCollisionEnabled = { "bSimulationFloorCollisionEnabled", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPhysicsAssetEditorOptions), &Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bSimulationFloorCollisionEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bSimulationFloorCollisionEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bSimulationFloorCollisionEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_ConstraintDrawSize_MetaData[] = {
		{ "Comment", "/** Controls how large constraints are drawn in Physics Asset Editor */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Controls how large constraints are drawn in Physics Asset Editor" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_ConstraintDrawSize = { "ConstraintDrawSize", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetEditorOptions, ConstraintDrawSize), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_ConstraintDrawSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_ConstraintDrawSize_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_MeshViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_MeshViewMode_MetaData[] = {
		{ "Comment", "/** View mode for meshes in edit mode */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "View mode for meshes in edit mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_MeshViewMode = { "MeshViewMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetEditorOptions, MeshViewMode), Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorMeshViewMode, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_MeshViewMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_MeshViewMode_MetaData)) }; // 2238288443
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_CollisionViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_CollisionViewMode_MetaData[] = {
		{ "Comment", "/** View mode for collision in edit mode */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "View mode for collision in edit mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_CollisionViewMode = { "CollisionViewMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetEditorOptions, CollisionViewMode), Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorCollisionViewMode, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_CollisionViewMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_CollisionViewMode_MetaData)) }; // 1838436077
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_ConstraintViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_ConstraintViewMode_MetaData[] = {
		{ "Comment", "/** View mode for constraints in edit mode */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "View mode for constraints in edit mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_ConstraintViewMode = { "ConstraintViewMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetEditorOptions, ConstraintViewMode), Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorConstraintViewMode, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_ConstraintViewMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_ConstraintViewMode_MetaData)) }; // 778463392
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationMeshViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationMeshViewMode_MetaData[] = {
		{ "Comment", "/** View mode for meshes in simulation mode */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "View mode for meshes in simulation mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationMeshViewMode = { "SimulationMeshViewMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetEditorOptions, SimulationMeshViewMode), Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorMeshViewMode, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationMeshViewMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationMeshViewMode_MetaData)) }; // 2238288443
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationCollisionViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationCollisionViewMode_MetaData[] = {
		{ "Comment", "/** View mode for collision in simulation mode */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "View mode for collision in simulation mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationCollisionViewMode = { "SimulationCollisionViewMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetEditorOptions, SimulationCollisionViewMode), Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorCollisionViewMode, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationCollisionViewMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationCollisionViewMode_MetaData)) }; // 1838436077
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationConstraintViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationConstraintViewMode_MetaData[] = {
		{ "Comment", "/** View mode for constraints in simulation mode */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "View mode for constraints in simulation mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationConstraintViewMode = { "SimulationConstraintViewMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetEditorOptions, SimulationConstraintViewMode), Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorConstraintViewMode, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationConstraintViewMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationConstraintViewMode_MetaData)) }; // 778463392
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_CollisionOpacity_MetaData[] = {
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Opacity of 'solid' rendering */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "Opacity of 'solid' rendering" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_CollisionOpacity = { "CollisionOpacity", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetEditorOptions, CollisionOpacity), METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_CollisionOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_CollisionOpacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bSolidRenderingForSelectedOnly_MetaData[] = {
		{ "Comment", "/** When set, turns opacity of solid rendering for unselected bodies to zero */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "When set, turns opacity of solid rendering for unselected bodies to zero" },
	};
#endif
	void Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bSolidRenderingForSelectedOnly_SetBit(void* Obj)
	{
		((UPhysicsAssetEditorOptions*)Obj)->bSolidRenderingForSelectedOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bSolidRenderingForSelectedOnly = { "bSolidRenderingForSelectedOnly", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPhysicsAssetEditorOptions), &Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bSolidRenderingForSelectedOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bSolidRenderingForSelectedOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bSolidRenderingForSelectedOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bHideSimulatedBodies_MetaData[] = {
		{ "Comment", "/** When set, disables rendering for simulated bodies */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "When set, disables rendering for simulated bodies" },
	};
#endif
	void Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bHideSimulatedBodies_SetBit(void* Obj)
	{
		((UPhysicsAssetEditorOptions*)Obj)->bHideSimulatedBodies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bHideSimulatedBodies = { "bHideSimulatedBodies", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPhysicsAssetEditorOptions), &Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bHideSimulatedBodies_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bHideSimulatedBodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bHideSimulatedBodies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bHideKinematicBodies_MetaData[] = {
		{ "Comment", "/** When set, disables rendering for kinematic bodies */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "When set, disables rendering for kinematic bodies" },
	};
#endif
	void Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bHideKinematicBodies_SetBit(void* Obj)
	{
		((UPhysicsAssetEditorOptions*)Obj)->bHideKinematicBodies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bHideKinematicBodies = { "bHideKinematicBodies", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPhysicsAssetEditorOptions), &Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bHideKinematicBodies_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bHideKinematicBodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bHideKinematicBodies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bResetClothWhenSimulating_MetaData[] = {
		{ "Category", "Clothing" },
		{ "Comment", "/** When set, cloth will reset each time simulation is toggled */" },
		{ "ModuleRelativePath", "Classes/Preferences/PhysicsAssetEditorOptions.h" },
		{ "ToolTip", "When set, cloth will reset each time simulation is toggled" },
	};
#endif
	void Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bResetClothWhenSimulating_SetBit(void* Obj)
	{
		((UPhysicsAssetEditorOptions*)Obj)->bResetClothWhenSimulating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bResetClothWhenSimulating = { "bResetClothWhenSimulating", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPhysicsAssetEditorOptions), &Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bResetClothWhenSimulating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bResetClothWhenSimulating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bResetClothWhenSimulating_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PhysicsBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUpdateJointsFromAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PhysicsUpdateMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokePauseTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokeBlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_GravScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_GravityOverrideZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bUseGravityOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_MaxFPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleLinearDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleLinearStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleAngularDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_HandleAngularStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_InterpolationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_PokeStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_InteractionDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bShowConstraintsAsPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bRenderOnlySelectedConstraints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bSimulationFloorCollisionEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_ConstraintDrawSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_MeshViewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_MeshViewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_CollisionViewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_CollisionViewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_ConstraintViewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_ConstraintViewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationMeshViewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationMeshViewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationCollisionViewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationCollisionViewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationConstraintViewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_SimulationConstraintViewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_CollisionOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bSolidRenderingForSelectedOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bHideSimulatedBodies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bHideKinematicBodies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::NewProp_bResetClothWhenSimulating,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsAssetEditorOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::ClassParams = {
		&UPhysicsAssetEditorOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsAssetEditorOptions()
	{
		if (!Z_Registration_Info_UClass_UPhysicsAssetEditorOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsAssetEditorOptions.OuterSingleton, Z_Construct_UClass_UPhysicsAssetEditorOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsAssetEditorOptions.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UPhysicsAssetEditorOptions>()
	{
		return UPhysicsAssetEditorOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsAssetEditorOptions);
	UPhysicsAssetEditorOptions::~UPhysicsAssetEditorOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_Statics::EnumInfo[] = {
		{ EPhysicsAssetEditorCollisionViewMode_StaticEnum, TEXT("EPhysicsAssetEditorCollisionViewMode"), &Z_Registration_Info_UEnum_EPhysicsAssetEditorCollisionViewMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1838436077U) },
		{ EPhysicsAssetEditorMeshViewMode_StaticEnum, TEXT("EPhysicsAssetEditorMeshViewMode"), &Z_Registration_Info_UEnum_EPhysicsAssetEditorMeshViewMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2238288443U) },
		{ EPhysicsAssetEditorConstraintViewMode_StaticEnum, TEXT("EPhysicsAssetEditorConstraintViewMode"), &Z_Registration_Info_UEnum_EPhysicsAssetEditorConstraintViewMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 778463392U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsAssetEditorOptions, UPhysicsAssetEditorOptions::StaticClass, TEXT("UPhysicsAssetEditorOptions"), &Z_Registration_Info_UClass_UPhysicsAssetEditorOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsAssetEditorOptions), 2739383673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_3013236173(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_PhysicsAssetEditorOptions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
