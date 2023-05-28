// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollection/GeometryCollectionSimulationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionSimulationTypes() {}
// Cross Module References
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_ECollisionTypeEnum();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EEmissionPatternTypeEnum();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EGeometryCollectionPhysicsTypeEnum();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EImplicitTypeEnum();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EInitialVelocityTypeEnum();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EObjectStateTypeEnum();
	UPackage* Z_Construct_UPackage__Script_Chaos();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECollisionTypeEnum;
	static UEnum* ECollisionTypeEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECollisionTypeEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECollisionTypeEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_ECollisionTypeEnum, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("ECollisionTypeEnum"));
		}
		return Z_Registration_Info_UEnum_ECollisionTypeEnum.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<ECollisionTypeEnum>()
	{
		return ECollisionTypeEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_ECollisionTypeEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_ECollisionTypeEnum_Statics::Enumerators[] = {
		{ "ECollisionTypeEnum::Chaos_Volumetric", (int64)ECollisionTypeEnum::Chaos_Volumetric },
		{ "ECollisionTypeEnum::Chaos_Surface_Volumetric", (int64)ECollisionTypeEnum::Chaos_Surface_Volumetric },
		{ "ECollisionTypeEnum::Chaos_Max", (int64)ECollisionTypeEnum::Chaos_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_ECollisionTypeEnum_Statics::Enum_MetaDataParams[] = {
		{ "Chaos_Max.Comment", "//\n" },
		{ "Chaos_Max.Hidden", "" },
		{ "Chaos_Max.Name", "ECollisionTypeEnum::Chaos_Max" },
		{ "Chaos_Surface_Volumetric.DisplayName", "Particle-Implicit" },
		{ "Chaos_Surface_Volumetric.Name", "ECollisionTypeEnum::Chaos_Surface_Volumetric" },
		{ "Chaos_Volumetric.DisplayName", "Implicit-Implicit" },
		{ "Chaos_Volumetric.Name", "ECollisionTypeEnum::Chaos_Volumetric" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionSimulationTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_ECollisionTypeEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"ECollisionTypeEnum",
		"ECollisionTypeEnum",
		Z_Construct_UEnum_Chaos_ECollisionTypeEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_ECollisionTypeEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_ECollisionTypeEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_ECollisionTypeEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_ECollisionTypeEnum()
	{
		if (!Z_Registration_Info_UEnum_ECollisionTypeEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECollisionTypeEnum.InnerSingleton, Z_Construct_UEnum_Chaos_ECollisionTypeEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECollisionTypeEnum.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EImplicitTypeEnum;
	static UEnum* EImplicitTypeEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EImplicitTypeEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EImplicitTypeEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EImplicitTypeEnum, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EImplicitTypeEnum"));
		}
		return Z_Registration_Info_UEnum_EImplicitTypeEnum.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EImplicitTypeEnum>()
	{
		return EImplicitTypeEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_EImplicitTypeEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_EImplicitTypeEnum_Statics::Enumerators[] = {
		{ "EImplicitTypeEnum::Chaos_Implicit_Box", (int64)EImplicitTypeEnum::Chaos_Implicit_Box },
		{ "EImplicitTypeEnum::Chaos_Implicit_Sphere", (int64)EImplicitTypeEnum::Chaos_Implicit_Sphere },
		{ "EImplicitTypeEnum::Chaos_Implicit_Capsule", (int64)EImplicitTypeEnum::Chaos_Implicit_Capsule },
		{ "EImplicitTypeEnum::Chaos_Implicit_LevelSet", (int64)EImplicitTypeEnum::Chaos_Implicit_LevelSet },
		{ "EImplicitTypeEnum::Chaos_Implicit_None", (int64)EImplicitTypeEnum::Chaos_Implicit_None },
		{ "EImplicitTypeEnum::Chaos_Implicit_Convex", (int64)EImplicitTypeEnum::Chaos_Implicit_Convex },
		{ "EImplicitTypeEnum::Chaos_Max", (int64)EImplicitTypeEnum::Chaos_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_EImplicitTypeEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Chaos_Implicit_Box.DisplayName", "Box" },
		{ "Chaos_Implicit_Box.Name", "EImplicitTypeEnum::Chaos_Implicit_Box" },
		{ "Chaos_Implicit_Capsule.DisplayName", "Capsule" },
		{ "Chaos_Implicit_Capsule.Name", "EImplicitTypeEnum::Chaos_Implicit_Capsule" },
		{ "Chaos_Implicit_Convex.DisplayName", "Convex" },
		{ "Chaos_Implicit_Convex.Name", "EImplicitTypeEnum::Chaos_Implicit_Convex" },
		{ "Chaos_Implicit_LevelSet.DisplayName", "Level Set" },
		{ "Chaos_Implicit_LevelSet.Name", "EImplicitTypeEnum::Chaos_Implicit_LevelSet" },
		{ "Chaos_Implicit_None.DisplayName", "None" },
		{ "Chaos_Implicit_None.Name", "EImplicitTypeEnum::Chaos_Implicit_None" },
		{ "Chaos_Implicit_Sphere.DisplayName", "Sphere" },
		{ "Chaos_Implicit_Sphere.Name", "EImplicitTypeEnum::Chaos_Implicit_Sphere" },
		{ "Chaos_Max.Comment", "//\n" },
		{ "Chaos_Max.Hidden", "" },
		{ "Chaos_Max.Name", "EImplicitTypeEnum::Chaos_Max" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionSimulationTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EImplicitTypeEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"EImplicitTypeEnum",
		"EImplicitTypeEnum",
		Z_Construct_UEnum_Chaos_EImplicitTypeEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EImplicitTypeEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_EImplicitTypeEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EImplicitTypeEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_EImplicitTypeEnum()
	{
		if (!Z_Registration_Info_UEnum_EImplicitTypeEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EImplicitTypeEnum.InnerSingleton, Z_Construct_UEnum_Chaos_EImplicitTypeEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EImplicitTypeEnum.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EObjectStateTypeEnum;
	static UEnum* EObjectStateTypeEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EObjectStateTypeEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EObjectStateTypeEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EObjectStateTypeEnum, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EObjectStateTypeEnum"));
		}
		return Z_Registration_Info_UEnum_EObjectStateTypeEnum.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EObjectStateTypeEnum>()
	{
		return EObjectStateTypeEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_EObjectStateTypeEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_EObjectStateTypeEnum_Statics::Enumerators[] = {
		{ "EObjectStateTypeEnum::Chaos_NONE", (int64)EObjectStateTypeEnum::Chaos_NONE },
		{ "EObjectStateTypeEnum::Chaos_Object_Sleeping", (int64)EObjectStateTypeEnum::Chaos_Object_Sleeping },
		{ "EObjectStateTypeEnum::Chaos_Object_Kinematic", (int64)EObjectStateTypeEnum::Chaos_Object_Kinematic },
		{ "EObjectStateTypeEnum::Chaos_Object_Static", (int64)EObjectStateTypeEnum::Chaos_Object_Static },
		{ "EObjectStateTypeEnum::Chaos_Object_Dynamic", (int64)EObjectStateTypeEnum::Chaos_Object_Dynamic },
		{ "EObjectStateTypeEnum::Chaos_Object_UserDefined", (int64)EObjectStateTypeEnum::Chaos_Object_UserDefined },
		{ "EObjectStateTypeEnum::Chaos_Max", (int64)EObjectStateTypeEnum::Chaos_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_EObjectStateTypeEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Chaos_Max.Comment", "//\n" },
		{ "Chaos_Max.Hidden", "" },
		{ "Chaos_Max.Name", "EObjectStateTypeEnum::Chaos_Max" },
		{ "Chaos_NONE.DisplayName", "None" },
		{ "Chaos_NONE.Hidden", "" },
		{ "Chaos_NONE.Name", "EObjectStateTypeEnum::Chaos_NONE" },
		{ "Chaos_Object_Dynamic.DisplayName", "Dynamic" },
		{ "Chaos_Object_Dynamic.Name", "EObjectStateTypeEnum::Chaos_Object_Dynamic" },
		{ "Chaos_Object_Kinematic.DisplayName", "Kinematic" },
		{ "Chaos_Object_Kinematic.Name", "EObjectStateTypeEnum::Chaos_Object_Kinematic" },
		{ "Chaos_Object_Sleeping.DisplayName", "Sleeping" },
		{ "Chaos_Object_Sleeping.Name", "EObjectStateTypeEnum::Chaos_Object_Sleeping" },
		{ "Chaos_Object_Static.DisplayName", "Static" },
		{ "Chaos_Object_Static.Name", "EObjectStateTypeEnum::Chaos_Object_Static" },
		{ "Chaos_Object_UserDefined.DisplayName", "User Defined" },
		{ "Chaos_Object_UserDefined.Name", "EObjectStateTypeEnum::Chaos_Object_UserDefined" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionSimulationTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EObjectStateTypeEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"EObjectStateTypeEnum",
		"EObjectStateTypeEnum",
		Z_Construct_UEnum_Chaos_EObjectStateTypeEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EObjectStateTypeEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_EObjectStateTypeEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EObjectStateTypeEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_EObjectStateTypeEnum()
	{
		if (!Z_Registration_Info_UEnum_EObjectStateTypeEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EObjectStateTypeEnum.InnerSingleton, Z_Construct_UEnum_Chaos_EObjectStateTypeEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EObjectStateTypeEnum.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryCollectionPhysicsTypeEnum;
	static UEnum* EGeometryCollectionPhysicsTypeEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryCollectionPhysicsTypeEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryCollectionPhysicsTypeEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EGeometryCollectionPhysicsTypeEnum, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EGeometryCollectionPhysicsTypeEnum"));
		}
		return Z_Registration_Info_UEnum_EGeometryCollectionPhysicsTypeEnum.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EGeometryCollectionPhysicsTypeEnum>()
	{
		return EGeometryCollectionPhysicsTypeEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_EGeometryCollectionPhysicsTypeEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_EGeometryCollectionPhysicsTypeEnum_Statics::Enumerators[] = {
		{ "EGeometryCollectionPhysicsTypeEnum::Chaos_AngularVelocity", (int64)EGeometryCollectionPhysicsTypeEnum::Chaos_AngularVelocity },
		{ "EGeometryCollectionPhysicsTypeEnum::Chaos_DynamicState", (int64)EGeometryCollectionPhysicsTypeEnum::Chaos_DynamicState },
		{ "EGeometryCollectionPhysicsTypeEnum::Chaos_LinearVelocity", (int64)EGeometryCollectionPhysicsTypeEnum::Chaos_LinearVelocity },
		{ "EGeometryCollectionPhysicsTypeEnum::Chaos_InitialAngularVelocity", (int64)EGeometryCollectionPhysicsTypeEnum::Chaos_InitialAngularVelocity },
		{ "EGeometryCollectionPhysicsTypeEnum::Chaos_InitialLinearVelocity", (int64)EGeometryCollectionPhysicsTypeEnum::Chaos_InitialLinearVelocity },
		{ "EGeometryCollectionPhysicsTypeEnum::Chaos_CollisionGroup", (int64)EGeometryCollectionPhysicsTypeEnum::Chaos_CollisionGroup },
		{ "EGeometryCollectionPhysicsTypeEnum::Chaos_LinearForce", (int64)EGeometryCollectionPhysicsTypeEnum::Chaos_LinearForce },
		{ "EGeometryCollectionPhysicsTypeEnum::Chaos_AngularTorque", (int64)EGeometryCollectionPhysicsTypeEnum::Chaos_AngularTorque },
		{ "EGeometryCollectionPhysicsTypeEnum::Chaos_DisableThreshold", (int64)EGeometryCollectionPhysicsTypeEnum::Chaos_DisableThreshold },
		{ "EGeometryCollectionPhysicsTypeEnum::Chaos_SleepingThreshold", (int64)EGeometryCollectionPhysicsTypeEnum::Chaos_SleepingThreshold },
		{ "EGeometryCollectionPhysicsTypeEnum::Chaos_ExternalClusterStrain", (int64)EGeometryCollectionPhysicsTypeEnum::Chaos_ExternalClusterStrain },
		{ "EGeometryCollectionPhysicsTypeEnum::Chaos_InternalClusterStrain", (int64)EGeometryCollectionPhysicsTypeEnum::Chaos_InternalClusterStrain },
		{ "EGeometryCollectionPhysicsTypeEnum::Chaos_LinearImpulse", (int64)EGeometryCollectionPhysicsTypeEnum::Chaos_LinearImpulse },
		{ "EGeometryCollectionPhysicsTypeEnum::Chaos_Max", (int64)EGeometryCollectionPhysicsTypeEnum::Chaos_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_EGeometryCollectionPhysicsTypeEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Chaos_AngularTorque.DisplayName", "Angular Torque" },
		{ "Chaos_AngularTorque.Name", "EGeometryCollectionPhysicsTypeEnum::Chaos_AngularTorque" },
		{ "Chaos_AngularTorque.ToolTip", "Add a vector field to the particles angular torque." },
		{ "Chaos_AngularVelocity.DisplayName", "Angular Velocity" },
		{ "Chaos_AngularVelocity.Name", "EGeometryCollectionPhysicsTypeEnum::Chaos_AngularVelocity" },
		{ "Chaos_AngularVelocity.ToolTip", "Add a vector field to the particles angular velocity." },
		{ "Chaos_CollisionGroup.DisplayName", "Collision Group" },
		{ "Chaos_CollisionGroup.Name", "EGeometryCollectionPhysicsTypeEnum::Chaos_CollisionGroup" },
		{ "Chaos_CollisionGroup.ToolTip", "Set the particles collision group." },
		{ "Chaos_DisableThreshold.DisplayName", "Disable Threshold" },
		{ "Chaos_DisableThreshold.Name", "EGeometryCollectionPhysicsTypeEnum::Chaos_DisableThreshold" },
		{ "Chaos_DisableThreshold.ToolTip", "Disable the particles if their linear and angular velocity are less than the threshold." },
		{ "Chaos_DynamicState.DisplayName", "Dynamic State" },
		{ "Chaos_DynamicState.Name", "EGeometryCollectionPhysicsTypeEnum::Chaos_DynamicState" },
		{ "Chaos_DynamicState.ToolTip", "Set the dynamic state of a particle (static, dynamic, kinematic...)" },
		{ "Chaos_ExternalClusterStrain.DisplayName", "External Strain" },
		{ "Chaos_ExternalClusterStrain.Name", "EGeometryCollectionPhysicsTypeEnum::Chaos_ExternalClusterStrain" },
		{ "Chaos_ExternalClusterStrain.ToolTip", "Apply an external strain over the particles. If this strain is over the internal one, the cluster will break." },
		{ "Chaos_InitialAngularVelocity.DisplayName", "Initial Angular Velocity" },
		{ "Chaos_InitialAngularVelocity.Name", "EGeometryCollectionPhysicsTypeEnum::Chaos_InitialAngularVelocity" },
		{ "Chaos_InitialAngularVelocity.ToolTip", "Initial particles angular velocity." },
		{ "Chaos_InitialLinearVelocity.DisplayName", "Initial Linear Velocity" },
		{ "Chaos_InitialLinearVelocity.Name", "EGeometryCollectionPhysicsTypeEnum::Chaos_InitialLinearVelocity" },
		{ "Chaos_InitialLinearVelocity.ToolTip", "Initial particles linear velocity." },
		{ "Chaos_InternalClusterStrain.DisplayName", "Internal Strain" },
		{ "Chaos_InternalClusterStrain.Name", "EGeometryCollectionPhysicsTypeEnum::Chaos_InternalClusterStrain" },
		{ "Chaos_InternalClusterStrain.ToolTip", "Add a strain field to the particles internal one." },
		{ "Chaos_LinearForce.DisplayName", "Linear Force" },
		{ "Chaos_LinearForce.Name", "EGeometryCollectionPhysicsTypeEnum::Chaos_LinearForce" },
		{ "Chaos_LinearForce.ToolTip", "Add a vector field to the particles linear force." },
		{ "Chaos_LinearImpulse.DisplayName", "Linear Impulse" },
		{ "Chaos_LinearImpulse.Name", "EGeometryCollectionPhysicsTypeEnum::Chaos_LinearImpulse" },
		{ "Chaos_LinearImpulse.ToolTip", "Add a vector field to apply an impulse to the particles." },
		{ "Chaos_LinearVelocity.DisplayName", "Linear Velocity" },
		{ "Chaos_LinearVelocity.Name", "EGeometryCollectionPhysicsTypeEnum::Chaos_LinearVelocity" },
		{ "Chaos_LinearVelocity.ToolTip", "Add a vector field to the particles linear velocity." },
		{ "Chaos_Max.Comment", "//\n" },
		{ "Chaos_Max.Hidden", "" },
		{ "Chaos_Max.Name", "EGeometryCollectionPhysicsTypeEnum::Chaos_Max" },
		{ "Chaos_SleepingThreshold.DisplayName", "Sleeping Threshold" },
		{ "Chaos_SleepingThreshold.Name", "EGeometryCollectionPhysicsTypeEnum::Chaos_SleepingThreshold" },
		{ "Chaos_SleepingThreshold.ToolTip", "Set particles in sleeping mode if their linear and angular velocity are less than the threshold." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionSimulationTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EGeometryCollectionPhysicsTypeEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"EGeometryCollectionPhysicsTypeEnum",
		"EGeometryCollectionPhysicsTypeEnum",
		Z_Construct_UEnum_Chaos_EGeometryCollectionPhysicsTypeEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EGeometryCollectionPhysicsTypeEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_EGeometryCollectionPhysicsTypeEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EGeometryCollectionPhysicsTypeEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_EGeometryCollectionPhysicsTypeEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryCollectionPhysicsTypeEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryCollectionPhysicsTypeEnum.InnerSingleton, Z_Construct_UEnum_Chaos_EGeometryCollectionPhysicsTypeEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryCollectionPhysicsTypeEnum.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInitialVelocityTypeEnum;
	static UEnum* EInitialVelocityTypeEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInitialVelocityTypeEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInitialVelocityTypeEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EInitialVelocityTypeEnum, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EInitialVelocityTypeEnum"));
		}
		return Z_Registration_Info_UEnum_EInitialVelocityTypeEnum.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EInitialVelocityTypeEnum>()
	{
		return EInitialVelocityTypeEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_EInitialVelocityTypeEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_EInitialVelocityTypeEnum_Statics::Enumerators[] = {
		{ "EInitialVelocityTypeEnum::Chaos_Initial_Velocity_User_Defined", (int64)EInitialVelocityTypeEnum::Chaos_Initial_Velocity_User_Defined },
		{ "EInitialVelocityTypeEnum::Chaos_Initial_Velocity_None", (int64)EInitialVelocityTypeEnum::Chaos_Initial_Velocity_None },
		{ "EInitialVelocityTypeEnum::Chaos_Max", (int64)EInitialVelocityTypeEnum::Chaos_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_EInitialVelocityTypeEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Chaos_Initial_Velocity_None.Comment", "//Chaos_Initial_Velocity_Field UMETA(DisplayName = \"Field\"),\n" },
		{ "Chaos_Initial_Velocity_None.DisplayName", "None" },
		{ "Chaos_Initial_Velocity_None.Name", "EInitialVelocityTypeEnum::Chaos_Initial_Velocity_None" },
		{ "Chaos_Initial_Velocity_None.ToolTip", "Chaos_Initial_Velocity_Field UMETA(DisplayName = \"Field\")," },
		{ "Chaos_Initial_Velocity_User_Defined.Comment", "//Chaos_Initial_Velocity_Animation UMETA(DisplayName = \"Animation\"),\n" },
		{ "Chaos_Initial_Velocity_User_Defined.DisplayName", "User Defined" },
		{ "Chaos_Initial_Velocity_User_Defined.Name", "EInitialVelocityTypeEnum::Chaos_Initial_Velocity_User_Defined" },
		{ "Chaos_Initial_Velocity_User_Defined.ToolTip", "Chaos_Initial_Velocity_Animation UMETA(DisplayName = \"Animation\")," },
		{ "Chaos_Max.Comment", "//\n" },
		{ "Chaos_Max.Hidden", "" },
		{ "Chaos_Max.Name", "EInitialVelocityTypeEnum::Chaos_Max" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionSimulationTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EInitialVelocityTypeEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"EInitialVelocityTypeEnum",
		"EInitialVelocityTypeEnum",
		Z_Construct_UEnum_Chaos_EInitialVelocityTypeEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EInitialVelocityTypeEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_EInitialVelocityTypeEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EInitialVelocityTypeEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_EInitialVelocityTypeEnum()
	{
		if (!Z_Registration_Info_UEnum_EInitialVelocityTypeEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInitialVelocityTypeEnum.InnerSingleton, Z_Construct_UEnum_Chaos_EInitialVelocityTypeEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInitialVelocityTypeEnum.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEmissionPatternTypeEnum;
	static UEnum* EEmissionPatternTypeEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEmissionPatternTypeEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEmissionPatternTypeEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EEmissionPatternTypeEnum, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EEmissionPatternTypeEnum"));
		}
		return Z_Registration_Info_UEnum_EEmissionPatternTypeEnum.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EEmissionPatternTypeEnum>()
	{
		return EEmissionPatternTypeEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_EEmissionPatternTypeEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_EEmissionPatternTypeEnum_Statics::Enumerators[] = {
		{ "EEmissionPatternTypeEnum::Chaos_Emission_Pattern_First_Frame", (int64)EEmissionPatternTypeEnum::Chaos_Emission_Pattern_First_Frame },
		{ "EEmissionPatternTypeEnum::Chaos_Emission_Pattern_On_Demand", (int64)EEmissionPatternTypeEnum::Chaos_Emission_Pattern_On_Demand },
		{ "EEmissionPatternTypeEnum::Chaos_Max", (int64)EEmissionPatternTypeEnum::Chaos_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_EEmissionPatternTypeEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Chaos_Emission_Pattern_First_Frame.DisplayName", "First Frame" },
		{ "Chaos_Emission_Pattern_First_Frame.Name", "EEmissionPatternTypeEnum::Chaos_Emission_Pattern_First_Frame" },
		{ "Chaos_Emission_Pattern_On_Demand.DisplayName", "On Demand" },
		{ "Chaos_Emission_Pattern_On_Demand.Name", "EEmissionPatternTypeEnum::Chaos_Emission_Pattern_On_Demand" },
		{ "Chaos_Max.Comment", "//\n" },
		{ "Chaos_Max.Hidden", "" },
		{ "Chaos_Max.Name", "EEmissionPatternTypeEnum::Chaos_Max" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionSimulationTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EEmissionPatternTypeEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"EEmissionPatternTypeEnum",
		"EEmissionPatternTypeEnum",
		Z_Construct_UEnum_Chaos_EEmissionPatternTypeEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EEmissionPatternTypeEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_EEmissionPatternTypeEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EEmissionPatternTypeEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_EEmissionPatternTypeEnum()
	{
		if (!Z_Registration_Info_UEnum_EEmissionPatternTypeEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEmissionPatternTypeEnum.InnerSingleton, Z_Construct_UEnum_Chaos_EEmissionPatternTypeEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEmissionPatternTypeEnum.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionSimulationTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionSimulationTypes_h_Statics::EnumInfo[] = {
		{ ECollisionTypeEnum_StaticEnum, TEXT("ECollisionTypeEnum"), &Z_Registration_Info_UEnum_ECollisionTypeEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2773679451U) },
		{ EImplicitTypeEnum_StaticEnum, TEXT("EImplicitTypeEnum"), &Z_Registration_Info_UEnum_EImplicitTypeEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 623206369U) },
		{ EObjectStateTypeEnum_StaticEnum, TEXT("EObjectStateTypeEnum"), &Z_Registration_Info_UEnum_EObjectStateTypeEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3137136666U) },
		{ EGeometryCollectionPhysicsTypeEnum_StaticEnum, TEXT("EGeometryCollectionPhysicsTypeEnum"), &Z_Registration_Info_UEnum_EGeometryCollectionPhysicsTypeEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3526196198U) },
		{ EInitialVelocityTypeEnum_StaticEnum, TEXT("EInitialVelocityTypeEnum"), &Z_Registration_Info_UEnum_EInitialVelocityTypeEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 478557433U) },
		{ EEmissionPatternTypeEnum_StaticEnum, TEXT("EEmissionPatternTypeEnum"), &Z_Registration_Info_UEnum_EEmissionPatternTypeEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3418908294U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionSimulationTypes_h_3408331033(TEXT("/Script/Chaos"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionSimulationTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionSimulationTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
