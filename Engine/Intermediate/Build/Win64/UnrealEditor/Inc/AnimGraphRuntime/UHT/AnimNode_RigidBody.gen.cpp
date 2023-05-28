// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoneControllers/AnimNode_RigidBody.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RigidBody() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESimulationTiming();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RigidBody();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSimSpaceSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimulationSpace;
	static UEnum* ESimulationSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimulationSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimulationSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ESimulationSpace"));
		}
		return Z_Registration_Info_UEnum_ESimulationSpace.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ESimulationSpace>()
	{
		return ESimulationSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace_Statics::Enumerators[] = {
		{ "ESimulationSpace::ComponentSpace", (int64)ESimulationSpace::ComponentSpace },
		{ "ESimulationSpace::WorldSpace", (int64)ESimulationSpace::WorldSpace },
		{ "ESimulationSpace::BaseBoneSpace", (int64)ESimulationSpace::BaseBoneSpace },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace_Statics::Enum_MetaDataParams[] = {
		{ "BaseBoneSpace.Comment", "/** Simulate in another bone space. Moving the entire skeletal mesh and individually modifying the base bone will have no affect on velocities */" },
		{ "BaseBoneSpace.Name", "ESimulationSpace::BaseBoneSpace" },
		{ "BaseBoneSpace.ToolTip", "Simulate in another bone space. Moving the entire skeletal mesh and individually modifying the base bone will have no affect on velocities" },
		{ "Comment", "/** Determines in what space the simulation should run */" },
		{ "ComponentSpace.Comment", "/** Simulate in component space. Moving the entire skeletal mesh will have no affect on velocities */" },
		{ "ComponentSpace.Name", "ESimulationSpace::ComponentSpace" },
		{ "ComponentSpace.ToolTip", "Simulate in component space. Moving the entire skeletal mesh will have no affect on velocities" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Determines in what space the simulation should run" },
		{ "WorldSpace.Comment", "/** Simulate in world space. Moving the skeletal mesh will generate velocity changes */" },
		{ "WorldSpace.Name", "ESimulationSpace::WorldSpace" },
		{ "WorldSpace.ToolTip", "Simulate in world space. Moving the skeletal mesh will generate velocity changes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		"ESimulationSpace",
		"ESimulationSpace",
		Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace()
	{
		if (!Z_Registration_Info_UEnum_ESimulationSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimulationSpace.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimulationSpace.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimulationTiming;
	static UEnum* ESimulationTiming_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimulationTiming.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimulationTiming.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ESimulationTiming, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ESimulationTiming"));
		}
		return Z_Registration_Info_UEnum_ESimulationTiming.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ESimulationTiming>()
	{
		return ESimulationTiming_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraphRuntime_ESimulationTiming_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraphRuntime_ESimulationTiming_Statics::Enumerators[] = {
		{ "ESimulationTiming::Default", (int64)ESimulationTiming::Default },
		{ "ESimulationTiming::Synchronous", (int64)ESimulationTiming::Synchronous },
		{ "ESimulationTiming::Deferred", (int64)ESimulationTiming::Deferred },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraphRuntime_ESimulationTiming_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Determines behaviour regarding deferral of simulation tasks. */" },
		{ "Default.Comment", "/** Use the default project setting as defined by p.RigidBodyNode.DeferredSimulationDefault. */" },
		{ "Default.Name", "ESimulationTiming::Default" },
		{ "Default.ToolTip", "Use the default project setting as defined by p.RigidBodyNode.DeferredSimulationDefault." },
		{ "Deferred.Comment", "/** Always run the simulation in the background and retrieve the result on the next animation evaluation. */" },
		{ "Deferred.Name", "ESimulationTiming::Deferred" },
		{ "Deferred.ToolTip", "Always run the simulation in the background and retrieve the result on the next animation evaluation." },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "Synchronous.Comment", "/** Always run the simulation to completion during animation evaluation. */" },
		{ "Synchronous.Name", "ESimulationTiming::Synchronous" },
		{ "Synchronous.ToolTip", "Always run the simulation to completion during animation evaluation." },
		{ "ToolTip", "Determines behaviour regarding deferral of simulation tasks." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_ESimulationTiming_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		"ESimulationTiming",
		"ESimulationTiming",
		Z_Construct_UEnum_AnimGraphRuntime_ESimulationTiming_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ESimulationTiming_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraphRuntime_ESimulationTiming_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ESimulationTiming_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESimulationTiming()
	{
		if (!Z_Registration_Info_UEnum_ESimulationTiming.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimulationTiming.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_ESimulationTiming_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimulationTiming.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimSpaceSettings;
class UScriptStruct* FSimSpaceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimSpaceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimSpaceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimSpaceSettings, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("SimSpaceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SimSpaceSettings.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FSimSpaceSettings>()
{
	return FSimSpaceSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimSpaceSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityScaleZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityScaleZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLinearVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngularVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLinearAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLinearAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngularAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngularAcceleration;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalLinearDrag_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExternalLinearDrag;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalLinearDragV_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalLinearDragV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalLinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalLinearVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalAngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalAngularVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Settings for the system which passes motion of the simulation's space into the simulation. This allows the simulation to pass a \n * fraction of the world space motion onto the bodies which allows Bone-Space and Component-Space simulations to react to world-space \n * movement in a controllable way.\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Settings for the system which passes motion of the simulation's space into the simulation. This allows the simulation to pass a\nfraction of the world space motion onto the bodies which allows Bone-Space and Component-Space simulations to react to world-space\nmovement in a controllable way." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimSpaceSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_WorldAlpha_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Global multipler on the effects of simulation space movement. Must be in range [0, 1]. If WorldAlpha = 0.0, the system is disabled and the simulation will\n// be fully local (i.e., world-space actor movement and rotation does not affect the simulation). When WorldAlpha = 1.0 the simulation effectively acts as a \n// world-space sim, but with the ability to apply limits using the other parameters.\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Global multipler on the effects of simulation space movement. Must be in range [0, 1]. If WorldAlpha = 0.0, the system is disabled and the simulation will\nbe fully local (i.e., world-space actor movement and rotation does not affect the simulation). When WorldAlpha = 1.0 the simulation effectively acts as a\nworld-space sim, but with the ability to apply limits using the other parameters." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_WorldAlpha = { "WorldAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimSpaceSettings, WorldAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_WorldAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_WorldAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_VelocityScaleZ_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Multiplier on the Z-component of velocity and acceleration that is passed to the simulation. Usually from 0.0 to 1.0 to \n// reduce the effects of jumping and crouching on the simulation, but it can be higher than 1.0 if you need to exaggerate this motion for some reason.\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Multiplier on the Z-component of velocity and acceleration that is passed to the simulation. Usually from 0.0 to 1.0 to\nreduce the effects of jumping and crouching on the simulation, but it can be higher than 1.0 if you need to exaggerate this motion for some reason." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_VelocityScaleZ = { "VelocityScaleZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimSpaceSettings, VelocityScaleZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_VelocityScaleZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_VelocityScaleZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxLinearVelocity_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// A clamp on the effective world-space velocity that is passed to the simulation. Units are cm/s. The default value effectively means \"unlimited\". It is not usually required to\n// change this but you would reduce this to limit the effects of drag on the bodies in the simulation (if you have bodies that have LinearDrag set to non-zero in the physics asset). \n// Expected values in this case would be somewhat less than the usual velocities of your object which is commonly a few hundred for a character.\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "A clamp on the effective world-space velocity that is passed to the simulation. Units are cm/s. The default value effectively means \"unlimited\". It is not usually required to\nchange this but you would reduce this to limit the effects of drag on the bodies in the simulation (if you have bodies that have LinearDrag set to non-zero in the physics asset).\nExpected values in this case would be somewhat less than the usual velocities of your object which is commonly a few hundred for a character." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxLinearVelocity = { "MaxLinearVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimSpaceSettings, MaxLinearVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxLinearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxLinearVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxAngularVelocity_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// A clamp on the effective world-space angular velocity that is passed to the simulation. Units are radian/s, so a value of about 6.0 is one rotation per second.\n// The default value effectively means \"unlimited\". You would reduce this (and MaxAngularAcceleration) to limit how much bodies \"fly out\" when the actor spins on the spot. \n// This is especially useful if you have characters than can rotate very quickly and you would probably want values around or less than 10 in this case.\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "A clamp on the effective world-space angular velocity that is passed to the simulation. Units are radian/s, so a value of about 6.0 is one rotation per second.\nThe default value effectively means \"unlimited\". You would reduce this (and MaxAngularAcceleration) to limit how much bodies \"fly out\" when the actor spins on the spot.\nThis is especially useful if you have characters than can rotate very quickly and you would probably want values around or less than 10 in this case." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxAngularVelocity = { "MaxAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimSpaceSettings, MaxAngularVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxAngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxAngularVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxLinearAcceleration_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// A clamp on the effective world-space acceleration that is passed to the simulation. Units are cm/s/s. The default value effectively means \"unlimited\". \n// This property is used to stop the bodies of the simulation flying out when suddenly changing linear speed. It is useful when you have characters than can \n// changes from stationary to running very quickly such as in an FPS. A common value for a character might be in the few hundreds.\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "A clamp on the effective world-space acceleration that is passed to the simulation. Units are cm/s/s. The default value effectively means \"unlimited\".\nThis property is used to stop the bodies of the simulation flying out when suddenly changing linear speed. It is useful when you have characters than can\nchanges from stationary to running very quickly such as in an FPS. A common value for a character might be in the few hundreds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxLinearAcceleration = { "MaxLinearAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimSpaceSettings, MaxLinearAcceleration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxLinearAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxLinearAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxAngularAcceleration_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// A clamp on the effective world-space angular accleration that is passed to the simulation. Units are radian/s/s. The default value effectively means \"unlimited\". \n// This has a similar effect to MaxAngularVelocity, except that it is related to the flying out of bodies when the rotation speed suddenly changes. Typical limist for\n// a character might be around 100.\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "A clamp on the effective world-space angular accleration that is passed to the simulation. Units are radian/s/s. The default value effectively means \"unlimited\".\nThis has a similar effect to MaxAngularVelocity, except that it is related to the flying out of bodies when the rotation speed suddenly changes. Typical limist for\na character might be around 100." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxAngularAcceleration = { "MaxAngularAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimSpaceSettings, MaxAngularAcceleration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxAngularAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxAngularAcceleration_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalLinearDrag_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "ExternalLinearDrag is deprecated. Please use ExternalLinearDragV instead." },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalLinearDrag = { "ExternalLinearDrag", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimSpaceSettings, ExternalLinearDrag_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalLinearDrag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalLinearDrag_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalLinearDragV_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Additional linear drag applied to every body in addition to linear drag specified on them in the physics asset. \n// When combined with ExternalLinearVelocity, this can be used to add a temporary wind-blown effect without having to tune linear drag on \n// all the bodies in the physics asset. The result is that each body has a force equal to -ExternalLinearDragV * ExternalLinearVelocity applied to it, in \n// additional to all other forces. The vector is in simulation local space.\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Additional linear drag applied to every body in addition to linear drag specified on them in the physics asset.\nWhen combined with ExternalLinearVelocity, this can be used to add a temporary wind-blown effect without having to tune linear drag on\nall the bodies in the physics asset. The result is that each body has a force equal to -ExternalLinearDragV * ExternalLinearVelocity applied to it, in\nadditional to all other forces. The vector is in simulation local space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalLinearDragV = { "ExternalLinearDragV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimSpaceSettings, ExternalLinearDragV), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalLinearDragV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalLinearDragV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalLinearVelocity_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Additional velocity that is added to the component velocity so the simulation acts as if the actor is moving at speed, even when stationary. \n// Vector is in world space. Units are cm/s. Could be used for a wind effects etc. Typical values are similar to the velocity of the object or effect, \n// and usually around or less than 1000 for characters/wind.\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Additional velocity that is added to the component velocity so the simulation acts as if the actor is moving at speed, even when stationary.\nVector is in world space. Units are cm/s. Could be used for a wind effects etc. Typical values are similar to the velocity of the object or effect,\nand usually around or less than 1000 for characters/wind." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalLinearVelocity = { "ExternalLinearVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimSpaceSettings, ExternalLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalLinearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalLinearVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalAngularVelocity_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Additional angular velocity that is added to the component angular velocity. This can be used to make the simulation act as if the actor is rotating\n// even when it is not. E.g., to apply physics to a character on a podium as the camera rotates around it, to emulate the podium itself rotating.\n// Vector is in world space. Units are rad/s.\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Additional angular velocity that is added to the component angular velocity. This can be used to make the simulation act as if the actor is rotating\neven when it is not. E.g., to apply physics to a character on a podium as the camera rotates around it, to emulate the podium itself rotating.\nVector is in world space. Units are rad/s." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalAngularVelocity = { "ExternalAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimSpaceSettings, ExternalAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalAngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalAngularVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_WorldAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_VelocityScaleZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxLinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxAngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxLinearAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_MaxAngularAcceleration,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalLinearDrag,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalLinearDragV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalLinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewProp_ExternalAngularVelocity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"SimSpaceSettings",
		sizeof(FSimSpaceSettings),
		alignof(FSimSpaceSettings),
		Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimSpaceSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SimSpaceSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimSpaceSettings.InnerSingleton, Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimSpaceSettings.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_RigidBody>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_RigidBody cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_RigidBody;
class UScriptStruct* FAnimNode_RigidBody::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_RigidBody.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_RigidBody.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RigidBody, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_RigidBody"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_RigidBody.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_RigidBody>()
{
	return FAnimNode_RigidBody::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverridePhysicsAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverridePhysicsAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideWorldGravity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideWorldGravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalForce_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentLinearAccScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentLinearAccScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentLinearVelScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentLinearVelScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentAppliedLinearAccClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentAppliedLinearAccClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimSpaceSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SimSpaceSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedBoundsScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedBoundsScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseBoneRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseBoneRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlapChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverlapChannel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SimulationSpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationSpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SimulationSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceDisableCollisionBetweenConstraintBodies_MetaData[];
#endif
		static void NewProp_bForceDisableCollisionBetweenConstraintBodies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceDisableCollisionBetweenConstraintBodies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseExternalClothCollision_MetaData[];
#endif
		static void NewProp_bUseExternalClothCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExternalClothCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWorldGeometry_MetaData[];
#endif
		static void NewProp_bEnableWorldGeometry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWorldGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideWorldGravity_MetaData[];
#endif
		static void NewProp_bOverrideWorldGravity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideWorldGravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTransferBoneVelocities_MetaData[];
#endif
		static void NewProp_bTransferBoneVelocities_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransferBoneVelocities;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFreezeIncomingPoseOnStart_MetaData[];
#endif
		static void NewProp_bFreezeIncomingPoseOnStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFreezeIncomingPoseOnStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClampLinearTranslationLimitToRefPose_MetaData[];
#endif
		static void NewProp_bClampLinearTranslationLimitToRefPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampLinearTranslationLimitToRefPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldSpaceMinimumScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldSpaceMinimumScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationResetTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EvaluationResetTime;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bComponentSpaceSimulation_MetaData[];
#endif
		static void NewProp_bComponentSpaceSimulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComponentSpaceSimulation;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_SimulationTiming_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationTiming_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SimulationTiming;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Controller that simulates physics based on the physics asset of the skeletal mesh component\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Controller that simulates physics based on the physics asset of the skeletal mesh component" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RigidBody>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_OverridePhysicsAsset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Physics asset to use. If empty use the skeletal mesh's default physics asset */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Physics asset to use. If empty use the skeletal mesh's default physics asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_OverridePhysicsAsset = { "OverridePhysicsAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RigidBody, OverridePhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_OverridePhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_OverridePhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_OverrideWorldGravity_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Override gravity*/" },
		{ "editcondition", "bOverrideWorldGravity" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Override gravity" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_OverrideWorldGravity = { "OverrideWorldGravity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RigidBody, OverrideWorldGravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_OverrideWorldGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_OverrideWorldGravity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ExternalForce_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Applies a uniform external force in world space. This allows for easily faking inertia of movement while still simulating in component space for example */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Applies a uniform external force in world space. This allows for easily faking inertia of movement while still simulating in component space for example" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ExternalForce = { "ExternalForce", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RigidBody, ExternalForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ExternalForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ExternalForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ComponentLinearAccScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When using non-world-space sim, this controls how much of the components world-space acceleration is passed on to the local-space simulation. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "When using non-world-space sim, this controls how much of the components world-space acceleration is passed on to the local-space simulation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ComponentLinearAccScale = { "ComponentLinearAccScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RigidBody, ComponentLinearAccScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ComponentLinearAccScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ComponentLinearAccScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ComponentLinearVelScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When using non-world-space sim, this applies a 'drag' to the bodies in the local space simulation, based on the components world-space velocity. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "When using non-world-space sim, this applies a 'drag' to the bodies in the local space simulation, based on the components world-space velocity." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ComponentLinearVelScale = { "ComponentLinearVelScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RigidBody, ComponentLinearVelScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ComponentLinearVelScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ComponentLinearVelScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ComponentAppliedLinearAccClamp_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When using non-world-space sim, this is an overall clamp on acceleration derived from ComponentLinearAccScale and ComponentLinearVelScale, to ensure it is not too large. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "When using non-world-space sim, this is an overall clamp on acceleration derived from ComponentLinearAccScale and ComponentLinearVelScale, to ensure it is not too large." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ComponentAppliedLinearAccClamp = { "ComponentAppliedLinearAccClamp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RigidBody, ComponentAppliedLinearAccClamp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ComponentAppliedLinearAccClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ComponentAppliedLinearAccClamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimSpaceSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * Settings for the system which passes motion of the simulation's space\n\x09 * into the simulation. This allows the simulation to pass a\n\x09 * fraction of the world space motion onto the bodies which allows Bone-Space\n\x09 * and Component-Space simulations to react to world-space movement in a\n\x09 * controllable way.\n\x09 * This system is a superset of the functionality provided by ComponentLinearAccScale,\n\x09 * ComponentLinearVelScale, and ComponentAppliedLinearAccClamp. In general\n\x09 * you should not have both systems enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Settings for the system which passes motion of the simulation's space\ninto the simulation. This allows the simulation to pass a\nfraction of the world space motion onto the bodies which allows Bone-Space\nand Component-Space simulations to react to world-space movement in a\ncontrollable way.\nThis system is a superset of the functionality provided by ComponentLinearAccScale,\nComponentLinearVelScale, and ComponentAppliedLinearAccClamp. In general\nyou should not have both systems enabled." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimSpaceSettings = { "SimSpaceSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RigidBody, SimSpaceSettings), Z_Construct_UScriptStruct_FSimSpaceSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimSpaceSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimSpaceSettings_MetaData)) }; // 3286045056
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_CachedBoundsScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/**\n\x09 * Scale of cached bounds (vs. actual bounds).\n\x09 * Increasing this may improve performance, but overlaps may not work as well.\n\x09 * (A value of 1.0 effectively disables cached bounds).\n\x09 */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Scale of cached bounds (vs. actual bounds).\nIncreasing this may improve performance, but overlaps may not work as well.\n(A value of 1.0 effectively disables cached bounds)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_CachedBoundsScale = { "CachedBoundsScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RigidBody, CachedBoundsScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_CachedBoundsScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_CachedBoundsScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_BaseBoneRef_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Matters if SimulationSpace is BaseBone */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Matters if SimulationSpace is BaseBone" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_BaseBoneRef = { "BaseBoneRef", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RigidBody, BaseBoneRef), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_BaseBoneRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_BaseBoneRef_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_OverlapChannel_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The channel we use to find static geometry to collide with */" },
		{ "editcondition", "bEnableWorldGeometry" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "The channel we use to find static geometry to collide with" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_OverlapChannel = { "OverlapChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RigidBody, OverlapChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_OverlapChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_OverlapChannel_MetaData)) }; // 727872708
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimulationSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimulationSpace_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** What space to simulate the bodies in. This affects how velocities are generated */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "What space to simulate the bodies in. This affects how velocities are generated" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimulationSpace = { "SimulationSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RigidBody, SimulationSpace), Z_Construct_UEnum_AnimGraphRuntime_ESimulationSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimulationSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimulationSpace_MetaData)) }; // 1116451442
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to allow collisions between two bodies joined by a constraint  */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Whether to allow collisions between two bodies joined by a constraint" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies_SetBit(void* Obj)
	{
		((FAnimNode_RigidBody*)Obj)->bForceDisableCollisionBetweenConstraintBodies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies = { "bForceDisableCollisionBetweenConstraintBodies", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_RigidBody), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bUseExternalClothCollision_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If true, kinematic objects will be added to the simulation at runtime to represent any cloth colliders defined for the parent object. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "If true, kinematic objects will be added to the simulation at runtime to represent any cloth colliders defined for the parent object." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bUseExternalClothCollision_SetBit(void* Obj)
	{
		((FAnimNode_RigidBody*)Obj)->bUseExternalClothCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bUseExternalClothCollision = { "bUseExternalClothCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_RigidBody), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bUseExternalClothCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bUseExternalClothCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bUseExternalClothCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bEnableWorldGeometry_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bEnableWorldGeometry_SetBit(void* Obj)
	{
		((FAnimNode_RigidBody*)Obj)->bEnableWorldGeometry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bEnableWorldGeometry = { "bEnableWorldGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_RigidBody), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bEnableWorldGeometry_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bEnableWorldGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bEnableWorldGeometry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bOverrideWorldGravity_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bOverrideWorldGravity_SetBit(void* Obj)
	{
		((FAnimNode_RigidBody*)Obj)->bOverrideWorldGravity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bOverrideWorldGravity = { "bOverrideWorldGravity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_RigidBody), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bOverrideWorldGravity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bOverrideWorldGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bOverrideWorldGravity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bTransferBoneVelocities_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** \n\x09\x09When simulation starts, transfer previous bone velocities (from animation)\n\x09\x09to make transition into simulation seamless.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "When simulation starts, transfer previous bone velocities (from animation)\nto make transition into simulation seamless." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bTransferBoneVelocities_SetBit(void* Obj)
	{
		((FAnimNode_RigidBody*)Obj)->bTransferBoneVelocities = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bTransferBoneVelocities = { "bTransferBoneVelocities", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_RigidBody), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bTransferBoneVelocities_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bTransferBoneVelocities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bTransferBoneVelocities_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bFreezeIncomingPoseOnStart_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09\x09When simulation starts, freeze incoming pose.\n\x09\x09This is useful for ragdolls, when we want the simulation to take over.\n\x09\x09It prevents non simulated bones from animating.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "When simulation starts, freeze incoming pose.\nThis is useful for ragdolls, when we want the simulation to take over.\nIt prevents non simulated bones from animating." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bFreezeIncomingPoseOnStart_SetBit(void* Obj)
	{
		((FAnimNode_RigidBody*)Obj)->bFreezeIncomingPoseOnStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bFreezeIncomingPoseOnStart = { "bFreezeIncomingPoseOnStart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_RigidBody), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bFreezeIncomingPoseOnStart_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bFreezeIncomingPoseOnStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bFreezeIncomingPoseOnStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bClampLinearTranslationLimitToRefPose_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09\x09""Correct for linear tearing on bodies with all axes Locked.\n\x09\x09This only works if all axes linear translation are locked\n\x09*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Correct for linear tearing on bodies with all axes Locked.\nThis only works if all axes linear translation are locked" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bClampLinearTranslationLimitToRefPose_SetBit(void* Obj)
	{
		((FAnimNode_RigidBody*)Obj)->bClampLinearTranslationLimitToRefPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bClampLinearTranslationLimitToRefPose = { "bClampLinearTranslationLimitToRefPose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_RigidBody), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bClampLinearTranslationLimitToRefPose_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bClampLinearTranslationLimitToRefPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bClampLinearTranslationLimitToRefPose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_WorldSpaceMinimumScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09\x09""For world-space simulations, if the magnitude of the component's 3D scale is less than WorldSpaceMinimumScale, do not update the node.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "For world-space simulations, if the magnitude of the component's 3D scale is less than WorldSpaceMinimumScale, do not update the node." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_WorldSpaceMinimumScale = { "WorldSpaceMinimumScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RigidBody, WorldSpaceMinimumScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_WorldSpaceMinimumScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_WorldSpaceMinimumScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_EvaluationResetTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09\x09If the node is not evaluated for this amount of time (seconds), either because a lower LOD was in use for a while or the component was\n\x09\x09not visible, reset the simulation to the default pose on the next evaluation. Set to 0 to disable time-based reset.\n\x09*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "If the node is not evaluated for this amount of time (seconds), either because a lower LOD was in use for a while or the component was\nnot visible, reset the simulation to the default pose on the next evaluation. Set to 0 to disable time-based reset." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_EvaluationResetTime = { "EvaluationResetTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RigidBody, EvaluationResetTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_EvaluationResetTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_EvaluationResetTime_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bComponentSpaceSimulation_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bComponentSpaceSimulation_SetBit(void* Obj)
	{
		((FAnimNode_RigidBody*)Obj)->bComponentSpaceSimulation_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bComponentSpaceSimulation = { "bComponentSpaceSimulation", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_RigidBody), &Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bComponentSpaceSimulation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bComponentSpaceSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bComponentSpaceSimulation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimulationTiming_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimulationTiming_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/* Whether the physics simulation runs synchronously with the node's evaluation or is run in the background until the next frame. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_RigidBody.h" },
		{ "ToolTip", "Whether the physics simulation runs synchronously with the node's evaluation or is run in the background until the next frame." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimulationTiming = { "SimulationTiming", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RigidBody, SimulationTiming), Z_Construct_UEnum_AnimGraphRuntime_ESimulationTiming, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimulationTiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimulationTiming_MetaData)) }; // 2699322885
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_OverridePhysicsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_OverrideWorldGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ExternalForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ComponentLinearAccScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ComponentLinearVelScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_ComponentAppliedLinearAccClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimSpaceSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_CachedBoundsScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_BaseBoneRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_OverlapChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimulationSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimulationSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bForceDisableCollisionBetweenConstraintBodies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bUseExternalClothCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bEnableWorldGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bOverrideWorldGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bTransferBoneVelocities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bFreezeIncomingPoseOnStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bClampLinearTranslationLimitToRefPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_WorldSpaceMinimumScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_EvaluationResetTime,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_bComponentSpaceSimulation,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimulationTiming_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewProp_SimulationTiming,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_RigidBody",
		sizeof(FAnimNode_RigidBody),
		alignof(FAnimNode_RigidBody),
		Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RigidBody()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_RigidBody.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_RigidBody.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_RigidBody.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_h_Statics::EnumInfo[] = {
		{ ESimulationSpace_StaticEnum, TEXT("ESimulationSpace"), &Z_Registration_Info_UEnum_ESimulationSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1116451442U) },
		{ ESimulationTiming_StaticEnum, TEXT("ESimulationTiming"), &Z_Registration_Info_UEnum_ESimulationTiming, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2699322885U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_h_Statics::ScriptStructInfo[] = {
		{ FSimSpaceSettings::StaticStruct, Z_Construct_UScriptStruct_FSimSpaceSettings_Statics::NewStructOps, TEXT("SimSpaceSettings"), &Z_Registration_Info_UScriptStruct_SimSpaceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimSpaceSettings), 3286045056U) },
		{ FAnimNode_RigidBody::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewStructOps, TEXT("AnimNode_RigidBody"), &Z_Registration_Info_UScriptStruct_AnimNode_RigidBody, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_RigidBody), 167924381U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_h_2068330927(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
