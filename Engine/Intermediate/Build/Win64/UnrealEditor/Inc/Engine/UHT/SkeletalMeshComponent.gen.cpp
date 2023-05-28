// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "../../Source/Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "../../Source/Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshComponent() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationFactory_NoRegister();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationInteractor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimationMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECustomBoneAttributeLookup();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EKinematicBonesUpdateToPhysics();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicsTransformUpdateMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETeleportType();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ConstraintBrokenSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAnimInitialized__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnBoneTransformsFinalized__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_PlasticDeformationEventSignature__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstanceAccessor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSnapshot();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSingleAnimationPlayData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshComponentClothTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunction();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_OnAnimInitialized__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAnimInitialized__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnAnimInitialized__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnAnimInitialized__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAnimInitialized__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAnimInitialized__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnAnimInitialized__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnAnimInitialized__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAnimInitialized_DelegateWrapper(const FMulticastScriptDelegate& OnAnimInitialized)
{
	OnAnimInitialized.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_Engine_OnBoneTransformsFinalized__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnBoneTransformsFinalized__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnBoneTransformsFinalized__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnBoneTransformsFinalized__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnBoneTransformsFinalized__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnBoneTransformsFinalized__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnBoneTransformsFinalized__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnBoneTransformsFinalized__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnBoneTransformsFinalized_DelegateWrapper(const FMulticastScriptDelegate& OnBoneTransformsFinalized)
{
	OnBoneTransformsFinalized.ProcessMulticastDelegate<UObject>(NULL);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomBoneAttributeLookup;
	static UEnum* ECustomBoneAttributeLookup_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECustomBoneAttributeLookup.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECustomBoneAttributeLookup.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECustomBoneAttributeLookup, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECustomBoneAttributeLookup"));
		}
		return Z_Registration_Info_UEnum_ECustomBoneAttributeLookup.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECustomBoneAttributeLookup>()
	{
		return ECustomBoneAttributeLookup_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ECustomBoneAttributeLookup_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ECustomBoneAttributeLookup_Statics::Enumerators[] = {
		{ "ECustomBoneAttributeLookup::BoneOnly", (int64)ECustomBoneAttributeLookup::BoneOnly },
		{ "ECustomBoneAttributeLookup::ImmediateParent", (int64)ECustomBoneAttributeLookup::ImmediateParent },
		{ "ECustomBoneAttributeLookup::ParentHierarchy", (int64)ECustomBoneAttributeLookup::ParentHierarchy },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ECustomBoneAttributeLookup_Statics::Enum_MetaDataParams[] = {
		{ "BoneOnly.Comment", "/** Only look for the attribute using the provided bone (name) */" },
		{ "BoneOnly.Name", "ECustomBoneAttributeLookup::BoneOnly" },
		{ "BoneOnly.ToolTip", "Only look for the attribute using the provided bone (name)" },
		{ "Comment", "/** Method used when retrieving a attribute value*/" },
		{ "ImmediateParent.Comment", "/** Look for the attribute using the provided bone (name) and its direct parent bone */" },
		{ "ImmediateParent.Name", "ECustomBoneAttributeLookup::ImmediateParent" },
		{ "ImmediateParent.ToolTip", "Look for the attribute using the provided bone (name) and its direct parent bone" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ParentHierarchy.Comment", "/** Look for the attribute using the provided bone (name) and its direct bone parent hierarchy up and until the root bone */" },
		{ "ParentHierarchy.Name", "ECustomBoneAttributeLookup::ParentHierarchy" },
		{ "ParentHierarchy.ToolTip", "Look for the attribute using the provided bone (name) and its direct bone parent hierarchy up and until the root bone" },
		{ "ToolTip", "Method used when retrieving a attribute value" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECustomBoneAttributeLookup_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ECustomBoneAttributeLookup",
		"ECustomBoneAttributeLookup",
		Z_Construct_UEnum_Engine_ECustomBoneAttributeLookup_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECustomBoneAttributeLookup_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ECustomBoneAttributeLookup_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECustomBoneAttributeLookup_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ECustomBoneAttributeLookup()
	{
		if (!Z_Registration_Info_UEnum_ECustomBoneAttributeLookup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomBoneAttributeLookup.InnerSingleton, Z_Construct_UEnum_Engine_ECustomBoneAttributeLookup_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECustomBoneAttributeLookup.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKinematicBonesUpdateToPhysics;
	static UEnum* EKinematicBonesUpdateToPhysics_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EKinematicBonesUpdateToPhysics.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EKinematicBonesUpdateToPhysics.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EKinematicBonesUpdateToPhysics, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EKinematicBonesUpdateToPhysics"));
		}
		return Z_Registration_Info_UEnum_EKinematicBonesUpdateToPhysics.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EKinematicBonesUpdateToPhysics::Type>()
	{
		return EKinematicBonesUpdateToPhysics_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EKinematicBonesUpdateToPhysics_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EKinematicBonesUpdateToPhysics_Statics::Enumerators[] = {
		{ "EKinematicBonesUpdateToPhysics::SkipSimulatingBones", (int64)EKinematicBonesUpdateToPhysics::SkipSimulatingBones },
		{ "EKinematicBonesUpdateToPhysics::SkipAllBones", (int64)EKinematicBonesUpdateToPhysics::SkipAllBones },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EKinematicBonesUpdateToPhysics_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** This enum defines how you'd like to update bones to physics world.\n\x09If bone is simulating, you don't have to waste time on updating bone transform from kinematic.\n\x09""But also sometimes you don't like fixed bones to be updated by animation data. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "SkipAllBones.Comment", "/** Skip physics update from kinematic changes. */" },
		{ "SkipAllBones.Name", "EKinematicBonesUpdateToPhysics::SkipAllBones" },
		{ "SkipAllBones.ToolTip", "Skip physics update from kinematic changes." },
		{ "SkipSimulatingBones.Comment", "/** Update any bones that are not simulating. */" },
		{ "SkipSimulatingBones.Name", "EKinematicBonesUpdateToPhysics::SkipSimulatingBones" },
		{ "SkipSimulatingBones.ToolTip", "Update any bones that are not simulating." },
		{ "ToolTip", "This enum defines how you'd like to update bones to physics world.\n      If bone is simulating, you don't have to waste time on updating bone transform from kinematic.\n      But also sometimes you don't like fixed bones to be updated by animation data." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EKinematicBonesUpdateToPhysics_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EKinematicBonesUpdateToPhysics",
		"EKinematicBonesUpdateToPhysics::Type",
		Z_Construct_UEnum_Engine_EKinematicBonesUpdateToPhysics_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EKinematicBonesUpdateToPhysics_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EKinematicBonesUpdateToPhysics_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EKinematicBonesUpdateToPhysics_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EKinematicBonesUpdateToPhysics()
	{
		if (!Z_Registration_Info_UEnum_EKinematicBonesUpdateToPhysics.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKinematicBonesUpdateToPhysics.InnerSingleton, Z_Construct_UEnum_Engine_EKinematicBonesUpdateToPhysics_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EKinematicBonesUpdateToPhysics.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimationMode;
	static UEnum* EAnimationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimationMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAnimationMode"));
		}
		return Z_Registration_Info_UEnum_EAnimationMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAnimationMode::Type>()
	{
		return EAnimationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAnimationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAnimationMode_Statics::Enumerators[] = {
		{ "EAnimationMode::AnimationBlueprint", (int64)EAnimationMode::AnimationBlueprint },
		{ "EAnimationMode::AnimationSingleNode", (int64)EAnimationMode::AnimationSingleNode },
		{ "EAnimationMode::AnimationCustomMode", (int64)EAnimationMode::AnimationCustomMode },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAnimationMode_Statics::Enum_MetaDataParams[] = {
		{ "AnimationBlueprint.DisplayName", "Use Animation Blueprint" },
		{ "AnimationBlueprint.Name", "EAnimationMode::AnimationBlueprint" },
		{ "AnimationCustomMode.Comment", "// This is custom type, engine leaves AnimInstance as it is\n" },
		{ "AnimationCustomMode.DisplayName", "Use Custom Mode" },
		{ "AnimationCustomMode.Name", "EAnimationMode::AnimationCustomMode" },
		{ "AnimationCustomMode.ToolTip", "This is custom type, engine leaves AnimInstance as it is" },
		{ "AnimationSingleNode.DisplayName", "Use Animation Asset" },
		{ "AnimationSingleNode.Name", "EAnimationMode::AnimationSingleNode" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAnimationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAnimationMode",
		"EAnimationMode::Type",
		Z_Construct_UEnum_Engine_EAnimationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAnimationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAnimationMode()
	{
		if (!Z_Registration_Info_UEnum_EAnimationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimationMode.InnerSingleton, Z_Construct_UEnum_Engine_EAnimationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimationMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhysicsTransformUpdateMode;
	static UEnum* EPhysicsTransformUpdateMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPhysicsTransformUpdateMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPhysicsTransformUpdateMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPhysicsTransformUpdateMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPhysicsTransformUpdateMode"));
		}
		return Z_Registration_Info_UEnum_EPhysicsTransformUpdateMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EPhysicsTransformUpdateMode::Type>()
	{
		return EPhysicsTransformUpdateMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EPhysicsTransformUpdateMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EPhysicsTransformUpdateMode_Statics::Enumerators[] = {
		{ "EPhysicsTransformUpdateMode::SimulationUpatesComponentTransform", (int64)EPhysicsTransformUpdateMode::SimulationUpatesComponentTransform },
		{ "EPhysicsTransformUpdateMode::ComponentTransformIsKinematic", (int64)EPhysicsTransformUpdateMode::ComponentTransformIsKinematic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EPhysicsTransformUpdateMode_Statics::Enum_MetaDataParams[] = {
		{ "ComponentTransformIsKinematic.Name", "EPhysicsTransformUpdateMode::ComponentTransformIsKinematic" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "SimulationUpatesComponentTransform.Name", "EPhysicsTransformUpdateMode::SimulationUpatesComponentTransform" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPhysicsTransformUpdateMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EPhysicsTransformUpdateMode",
		"EPhysicsTransformUpdateMode::Type",
		Z_Construct_UEnum_Engine_EPhysicsTransformUpdateMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPhysicsTransformUpdateMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EPhysicsTransformUpdateMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPhysicsTransformUpdateMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EPhysicsTransformUpdateMode()
	{
		if (!Z_Registration_Info_UEnum_EPhysicsTransformUpdateMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhysicsTransformUpdateMode.InnerSingleton, Z_Construct_UEnum_Engine_EPhysicsTransformUpdateMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPhysicsTransformUpdateMode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSkeletalMeshComponentEndPhysicsTickFunction>() == std::is_polymorphic<FTickFunction>(), "USTRUCT FSkeletalMeshComponentEndPhysicsTickFunction cannot be polymorphic unless super FTickFunction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshComponentEndPhysicsTickFunction;
class UScriptStruct* FSkeletalMeshComponentEndPhysicsTickFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshComponentEndPhysicsTickFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshComponentEndPhysicsTickFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunction, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshComponentEndPhysicsTickFunction"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshComponentEndPhysicsTickFunction.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshComponentEndPhysicsTickFunction>()
{
	return FSkeletalMeshComponentEndPhysicsTickFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Tick function that does post physics work on skeletal mesh component. This executes in EndPhysics (after physics is done)\n**/" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Tick function that does post physics work on skeletal mesh component. This executes in EndPhysics (after physics is done)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshComponentEndPhysicsTickFunction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"SkeletalMeshComponentEndPhysicsTickFunction",
		sizeof(FSkeletalMeshComponentEndPhysicsTickFunction),
		alignof(FSkeletalMeshComponentEndPhysicsTickFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_SkeletalMeshComponentEndPhysicsTickFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshComponentEndPhysicsTickFunction.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkeletalMeshComponentEndPhysicsTickFunction.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSkeletalMeshComponentClothTickFunction>() == std::is_polymorphic<FTickFunction>(), "USTRUCT FSkeletalMeshComponentClothTickFunction cannot be polymorphic unless super FTickFunction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshComponentClothTickFunction;
class UScriptStruct* FSkeletalMeshComponentClothTickFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshComponentClothTickFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshComponentClothTickFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshComponentClothTickFunction, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshComponentClothTickFunction"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshComponentClothTickFunction.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshComponentClothTickFunction>()
{
	return FSkeletalMeshComponentClothTickFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkeletalMeshComponentClothTickFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshComponentClothTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Tick function that prepares and simulates cloth\n**/" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Tick function that prepares and simulates cloth" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshComponentClothTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshComponentClothTickFunction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshComponentClothTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"SkeletalMeshComponentClothTickFunction",
		sizeof(FSkeletalMeshComponentClothTickFunction),
		alignof(FSkeletalMeshComponentClothTickFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshComponentClothTickFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshComponentClothTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshComponentClothTickFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_SkeletalMeshComponentClothTickFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshComponentClothTickFunction.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshComponentClothTickFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkeletalMeshComponentClothTickFunction.InnerSingleton;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetCurrentJointAngles)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InBoneName);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Swing1Angle);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TwistAngle);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Swing2Angle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCurrentJointAngles(Z_Param_InBoneName,Z_Param_Out_Swing1Angle,Z_Param_Out_TwistAngle,Z_Param_Out_Swing2Angle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetAngularLimits)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InBoneName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Swing1LimitAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TwistLimitAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Swing2LimitAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAngularLimits(Z_Param_InBoneName,Z_Param_Swing1LimitAngle,Z_Param_TwistLimitAngle,Z_Param_Swing2LimitAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetConstraintsFromBody)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BodyName);
		P_GET_UBOOL(Z_Param_bParentConstraints);
		P_GET_UBOOL(Z_Param_bChildConstraints);
		P_GET_UBOOL(Z_Param_bIncludesTerminated);
		P_GET_TARRAY_REF(FConstraintInstanceAccessor,Z_Param_Out_OutConstraints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetConstraintsFromBody(Z_Param_BodyName,Z_Param_bParentConstraints,Z_Param_bChildConstraints,Z_Param_bIncludesTerminated,Z_Param_Out_OutConstraints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetConstraints)
	{
		P_GET_UBOOL(Z_Param_bIncludesTerminated);
		P_GET_TARRAY_REF(FConstraintInstanceAccessor,Z_Param_Out_OutConstraints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetConstraints(Z_Param_bIncludesTerminated,Z_Param_Out_OutConstraints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetConstraintByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ConstraintName);
		P_GET_UBOOL(Z_Param_bIncludesTerminated);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FConstraintInstanceAccessor*)Z_Param__Result=P_THIS->GetConstraintByName(Z_Param_ConstraintName,Z_Param_bIncludesTerminated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execBreakConstraint)
	{
		P_GET_STRUCT(FVector,Z_Param_Impulse);
		P_GET_STRUCT(FVector,Z_Param_HitLocation);
		P_GET_PROPERTY(FNameProperty,Z_Param_InBoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BreakConstraint(Z_Param_Impulse,Z_Param_HitLocation,Z_Param_InBoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execFindConstraintBoneName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ConstraintIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->FindConstraintBoneName(Z_Param_ConstraintIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetConstraintProfileForAll)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ProfileName);
		P_GET_UBOOL(Z_Param_bDefaultIfNotFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConstraintProfileForAll(Z_Param_ProfileName,Z_Param_bDefaultIfNotFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetConstraintProfile)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_JointName);
		P_GET_PROPERTY(FNameProperty,Z_Param_ProfileName);
		P_GET_UBOOL(Z_Param_bDefaultIfNotFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConstraintProfile(Z_Param_JointName,Z_Param_ProfileName,Z_Param_bDefaultIfNotFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetAllMotorsAngularDriveParams)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSpring);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDamping);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InForceLimit);
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllMotorsAngularDriveParams(Z_Param_InSpring,Z_Param_InDamping,Z_Param_InForceLimit,Z_Param_bSkipCustomPhysicsType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetAllMotorsAngularVelocityDrive)
	{
		P_GET_UBOOL(Z_Param_bEnableSwingDrive);
		P_GET_UBOOL(Z_Param_bEnableTwistDrive);
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllMotorsAngularVelocityDrive(Z_Param_bEnableSwingDrive,Z_Param_bEnableTwistDrive,Z_Param_bSkipCustomPhysicsType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetAllMotorsAngularPositionDrive)
	{
		P_GET_UBOOL(Z_Param_bEnableSwingDrive);
		P_GET_UBOOL(Z_Param_bEnableTwistDrive);
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllMotorsAngularPositionDrive(Z_Param_bEnableSwingDrive,Z_Param_bEnableTwistDrive,Z_Param_bSkipCustomPhysicsType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execAccumulateAllBodiesBelowPhysicsBlendWeight)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InBoneName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AddPhysicsBlendWeight);
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AccumulateAllBodiesBelowPhysicsBlendWeight(Z_Param_Out_InBoneName,Z_Param_AddPhysicsBlendWeight,Z_Param_bSkipCustomPhysicsType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetAllBodiesBelowPhysicsBlendWeight)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InBoneName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PhysicsBlendWeight);
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType);
		P_GET_UBOOL(Z_Param_bIncludeSelf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllBodiesBelowPhysicsBlendWeight(Z_Param_Out_InBoneName,Z_Param_PhysicsBlendWeight,Z_Param_bSkipCustomPhysicsType,Z_Param_bIncludeSelf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetAllBodiesPhysicsBlendWeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_PhysicsBlendWeight);
		P_GET_UBOOL(Z_Param_bSkipCustomPhysicsType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllBodiesPhysicsBlendWeight(Z_Param_PhysicsBlendWeight,Z_Param_bSkipCustomPhysicsType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execResetAllBodiesSimulatePhysics)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAllBodiesSimulatePhysics();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetAllBodiesBelowSimulatePhysics)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InBoneName);
		P_GET_UBOOL(Z_Param_bNewSimulate);
		P_GET_UBOOL(Z_Param_bIncludeSelf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllBodiesBelowSimulatePhysics(Z_Param_Out_InBoneName,Z_Param_bNewSimulate,Z_Param_bIncludeSelf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetBoneLinearVelocity)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InBoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetBoneLinearVelocity(Z_Param_Out_InBoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetAllBodiesBelowLinearVelocity)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InBoneName);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearVelocity);
		P_GET_UBOOL(Z_Param_bIncludeSelf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllBodiesBelowLinearVelocity(Z_Param_Out_InBoneName,Z_Param_Out_LinearVelocity,Z_Param_bIncludeSelf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetAllBodiesBelowPhysicsDisabled)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InBoneName);
		P_GET_UBOOL(Z_Param_bDisabled);
		P_GET_UBOOL(Z_Param_bIncludeSelf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllBodiesBelowPhysicsDisabled(Z_Param_Out_InBoneName,Z_Param_bDisabled,Z_Param_bIncludeSelf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetEnablePhysicsBlending)
	{
		P_GET_UBOOL(Z_Param_bNewBlendPhysics);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnablePhysicsBlending(Z_Param_bNewBlendPhysics);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetPhysicsBlendWeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_PhysicsBlendWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPhysicsBlendWeight(Z_Param_PhysicsBlendWeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetAllBodiesSimulatePhysics)
	{
		P_GET_UBOOL(Z_Param_bNewSimulate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllBodiesSimulatePhysics(Z_Param_bNewSimulate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execTermBodiesBelow)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParentBoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TermBodiesBelow(Z_Param_ParentBoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execAddImpulseToAllBodiesBelow)
	{
		P_GET_STRUCT(FVector,Z_Param_Impulse);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_UBOOL(Z_Param_bVelChange);
		P_GET_UBOOL(Z_Param_bIncludeSelf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddImpulseToAllBodiesBelow(Z_Param_Impulse,Z_Param_BoneName,Z_Param_bVelChange,Z_Param_bIncludeSelf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execAddForceToAllBodiesBelow)
	{
		P_GET_STRUCT(FVector,Z_Param_Force);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_UBOOL(Z_Param_bAccelChange);
		P_GET_UBOOL(Z_Param_bIncludeSelf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddForceToAllBodiesBelow(Z_Param_Force,Z_Param_BoneName,Z_Param_bAccelChange,Z_Param_bIncludeSelf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetSkeletalCenterOfMass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSkeletalCenterOfMass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetBoneMass)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_UBOOL(Z_Param_bScaleMass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBoneMass(Z_Param_BoneName,Z_Param_bScaleMass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execK2_GetClosestPointOnPhysicsAsset)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ClosestWorldPosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Normal);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_GetClosestPointOnPhysicsAsset(Z_Param_Out_WorldPosition,Z_Param_Out_ClosestWorldPosition,Z_Param_Out_Normal,Z_Param_Out_BoneName,Z_Param_Out_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetEnableGravityOnAllBodiesBelow)
	{
		P_GET_UBOOL(Z_Param_bEnableGravity);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_UBOOL(Z_Param_bIncludeSelf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableGravityOnAllBodiesBelow(Z_Param_bEnableGravity,Z_Param_BoneName,Z_Param_bIncludeSelf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execIsBodyGravityEnabled)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBodyGravityEnabled(Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetEnableBodyGravity)
	{
		P_GET_UBOOL(Z_Param_bEnableGravity);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableBodyGravity(Z_Param_bEnableGravity,Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetNotifyRigidBodyCollisionBelow)
	{
		P_GET_UBOOL(Z_Param_bNewNotifyRigidBodyCollision);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_UBOOL(Z_Param_bIncludeSelf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNotifyRigidBodyCollisionBelow(Z_Param_bNewNotifyRigidBodyCollision,Z_Param_BoneName,Z_Param_bIncludeSelf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetBodyNotifyRigidBodyCollision)
	{
		P_GET_UBOOL(Z_Param_bNewNotifyRigidBodyCollision);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBodyNotifyRigidBodyCollision(Z_Param_bNewNotifyRigidBodyCollision,Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetClothingSimulationInteractor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClothingSimulationInteractor**)Z_Param__Result=P_THIS->GetClothingSimulationInteractor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetTeleportDistanceThreshold)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Threshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTeleportDistanceThreshold(Z_Param_Threshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetTeleportDistanceThreshold)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTeleportDistanceThreshold();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetTeleportRotationThreshold)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Threshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTeleportRotationThreshold(Z_Param_Threshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetTeleportRotationThreshold)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTeleportRotationThreshold();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetAllowedAnimCurvesEvaluation)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_List);
		P_GET_UBOOL(Z_Param_bAllow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllowedAnimCurvesEvaluation(Z_Param_Out_List,Z_Param_bAllow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execResetAllowedAnimCurveEvaluation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAllowedAnimCurveEvaluation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execAllowAnimCurveEvaluation)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NameOfCurve);
		P_GET_UBOOL(Z_Param_bAllow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AllowAnimCurveEvaluation(Z_Param_NameOfCurve,Z_Param_bAllow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetAllowedAnimCurveEvaluate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAllowedAnimCurveEvaluate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetAllowAnimCurveEvaluation)
	{
		P_GET_UBOOL(Z_Param_bInAllow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllowAnimCurveEvaluation(Z_Param_bInAllow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetDisableAnimCurves)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDisableAnimCurves();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetDisableAnimCurves)
	{
		P_GET_UBOOL(Z_Param_bInDisableAnimCurves);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisableAnimCurves(Z_Param_bInDisableAnimCurves);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetUpdateClothInEditor)
	{
		P_GET_UBOOL(Z_Param_NewUpdateState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpdateClothInEditor(Z_Param_NewUpdateState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetUpdateAnimationInEditor)
	{
		P_GET_UBOOL(Z_Param_NewUpdateState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpdateAnimationInEditor(Z_Param_NewUpdateState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetAllowRigidBodyAnimNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAllowRigidBodyAnimNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetAllowRigidBodyAnimNode)
	{
		P_GET_UBOOL(Z_Param_bInAllow);
		P_GET_UBOOL(Z_Param_bReinitAnim);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllowRigidBodyAnimNode(Z_Param_bInAllow,Z_Param_bReinitAnim);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execUnbindClothFromLeaderPoseComponent)
	{
		P_GET_UBOOL(Z_Param_bRestoreSimulationSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindClothFromLeaderPoseComponent(Z_Param_bRestoreSimulationSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execBindClothToLeaderPoseComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindClothToLeaderPoseComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execResetClothTeleportMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetClothTeleportMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execIsClothingSimulationSuspended)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsClothingSimulationSuspended();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execResumeClothingSimulation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResumeClothingSimulation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSuspendClothingSimulation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SuspendClothingSimulation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execForceClothNextUpdateTeleportAndReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceClothNextUpdateTeleportAndReset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execForceClothNextUpdateTeleport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceClothNextUpdateTeleport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetClothMaxDistanceScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClothMaxDistanceScale(Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetClothMaxDistanceScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetClothMaxDistanceScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetAllowClothActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAllowClothActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetAllowClothActors)
	{
		P_GET_UBOOL(Z_Param_bInAllow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllowClothActors(Z_Param_bInAllow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSnapshotPose)
	{
		P_GET_STRUCT_REF(FPoseSnapshot,Z_Param_Out_Snapshot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SnapshotPose(Z_Param_Out_Snapshot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetMorphTarget)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MorphTargetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMorphTarget(Z_Param_MorphTargetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execClearMorphTargets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMorphTargets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetMorphTarget)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MorphTargetName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bRemoveZeroWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMorphTarget(Z_Param_MorphTargetName,Z_Param_Value,Z_Param_bRemoveZeroWeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execOverrideAnimationData)
	{
		P_GET_OBJECT(UAnimationAsset,Z_Param_InAnimToPlay);
		P_GET_UBOOL(Z_Param_bIsLooping);
		P_GET_UBOOL(Z_Param_bIsPlaying);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverrideAnimationData(Z_Param_InAnimToPlay,Z_Param_bIsLooping,Z_Param_bIsPlaying,Z_Param_Position,Z_Param_PlayRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetPlayRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlayRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetPlayRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayRate(Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetPosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPos);
		P_GET_UBOOL(Z_Param_bFireNotifies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPosition(Z_Param_InPos,Z_Param_bFireNotifies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execPlay)
	{
		P_GET_UBOOL(Z_Param_bLooping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play(Z_Param_bLooping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetAnimation)
	{
		P_GET_OBJECT(UAnimationAsset,Z_Param_NewAnimToPlay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnimation(Z_Param_NewAnimToPlay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execPlayAnimation)
	{
		P_GET_OBJECT(UAnimationAsset,Z_Param_NewAnimToPlay);
		P_GET_UBOOL(Z_Param_bLooping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayAnimation(Z_Param_NewAnimToPlay,Z_Param_bLooping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetAnimationMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EAnimationMode::Type>*)Z_Param__Result=P_THIS->GetAnimationMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetAnimationMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InAnimationMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnimationMode(EAnimationMode::Type(Z_Param_InAnimationMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execResetAnimInstanceDynamics)
	{
		P_GET_ENUM(ETeleportType,Z_Param_InTeleportType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAnimInstanceDynamics(ETeleportType(Z_Param_InTeleportType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execHasValidAnimationInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasValidAnimationInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetLinkedAnimLayerInstanceByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimInstance**)Z_Param__Result=P_THIS->GetLinkedAnimLayerInstanceByClass(Z_Param_InClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetLinkedAnimLayerInstanceByGroup)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimInstance**)Z_Param__Result=P_THIS->GetLinkedAnimLayerInstanceByGroup(Z_Param_InGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execUnlinkAnimClassLayers)
	{
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlinkAnimClassLayers(Z_Param_InClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execLinkAnimClassLayers)
	{
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LinkAnimClassLayers(Z_Param_InClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execLinkAnimGraphByTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InTag);
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LinkAnimGraphByTag(Z_Param_InTag,Z_Param_InClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetLinkedAnimGraphInstancesByTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InTag);
		P_GET_TARRAY_REF(UAnimInstance*,Z_Param_Out_OutLinkedInstances);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLinkedAnimGraphInstancesByTag(Z_Param_InTag,Z_Param_Out_OutLinkedInstances);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetLinkedAnimGraphInstanceByTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimInstance**)Z_Param__Result=P_THIS->GetLinkedAnimGraphInstanceByTag(Z_Param_InTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetPostProcessInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimInstance**)Z_Param__Result=P_THIS->GetPostProcessInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetAnimInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimInstance**)Z_Param__Result=P_THIS->GetAnimInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetAnimClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetAnimClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetAnimClass)
	{
		P_GET_OBJECT(UClass,Z_Param_NewClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnimClass(Z_Param_NewClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetStringAttribute)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AttributeName);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultValue);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutValue);
		P_GET_ENUM(ECustomBoneAttributeLookup,Z_Param_LookupType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetStringAttribute(Z_Param_Out_BoneName,Z_Param_Out_AttributeName,Z_Param_DefaultValue,Z_Param_Out_OutValue,ECustomBoneAttributeLookup(Z_Param_LookupType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetIntegerAttribute)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AttributeName);
		P_GET_PROPERTY(FIntProperty,Z_Param_DefaultValue);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutValue);
		P_GET_ENUM(ECustomBoneAttributeLookup,Z_Param_LookupType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIntegerAttribute(Z_Param_Out_BoneName,Z_Param_Out_AttributeName,Z_Param_DefaultValue,Z_Param_Out_OutValue,ECustomBoneAttributeLookup(Z_Param_LookupType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetTransformAttribute)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AttributeName);
		P_GET_STRUCT(FTransform,Z_Param_DefaultValue);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutValue);
		P_GET_ENUM(ECustomBoneAttributeLookup,Z_Param_LookupType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTransformAttribute(Z_Param_Out_BoneName,Z_Param_Out_AttributeName,Z_Param_DefaultValue,Z_Param_Out_OutValue,ECustomBoneAttributeLookup(Z_Param_LookupType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetFloatAttribute)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AttributeName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DefaultValue);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
		P_GET_ENUM(ECustomBoneAttributeLookup,Z_Param_LookupType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFloatAttribute(Z_Param_Out_BoneName,Z_Param_Out_AttributeName,Z_Param_DefaultValue,Z_Param_Out_OutValue,ECustomBoneAttributeLookup(Z_Param_LookupType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetStringAttribute_Ref)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AttributeName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutValue);
		P_GET_ENUM(ECustomBoneAttributeLookup,Z_Param_LookupType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetStringAttribute_Ref(Z_Param_Out_BoneName,Z_Param_Out_AttributeName,Z_Param_Out_OutValue,ECustomBoneAttributeLookup(Z_Param_LookupType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetIntegerAttribute_Ref)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AttributeName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutValue);
		P_GET_ENUM(ECustomBoneAttributeLookup,Z_Param_LookupType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIntegerAttribute_Ref(Z_Param_Out_BoneName,Z_Param_Out_AttributeName,Z_Param_Out_OutValue,ECustomBoneAttributeLookup(Z_Param_LookupType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetTransformAttribute_Ref)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AttributeName);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutValue);
		P_GET_ENUM(ECustomBoneAttributeLookup,Z_Param_LookupType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTransformAttribute_Ref(Z_Param_Out_BoneName,Z_Param_Out_AttributeName,Z_Param_Out_OutValue,ECustomBoneAttributeLookup(Z_Param_LookupType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetFloatAttribute_Ref)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AttributeName);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
		P_GET_ENUM(ECustomBoneAttributeLookup,Z_Param_LookupType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFloatAttribute_Ref(Z_Param_Out_BoneName,Z_Param_Out_AttributeName,Z_Param_Out_OutValue,ECustomBoneAttributeLookup(Z_Param_LookupType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetDisablePostProcessBlueprint)
	{
		P_GET_UBOOL(Z_Param_bInDisablePostProcess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisablePostProcessBlueprint(Z_Param_bInDisablePostProcess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetDisablePostProcessBlueprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDisablePostProcessBlueprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execToggleDisablePostProcessBlueprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleDisablePostProcessBlueprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetSkeletalMeshAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=P_THIS->GetSkeletalMeshAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetSkeletalMeshAsset)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_NewMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkeletalMeshAsset(Z_Param_NewMesh);
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetDefaultAnimatingRig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<UObject>*)Z_Param__Result=P_THIS->GetDefaultAnimatingRig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execGetDefaultAnimatingRigOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<UObject>*)Z_Param__Result=P_THIS->GetDefaultAnimatingRigOverride();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshComponent::execSetDefaultAnimatingRigOverride)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UObject>,Z_Param_InAnimatingRig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultAnimatingRigOverride(Z_Param_InAnimatingRig);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void USkeletalMeshComponent::GetSkeletalMeshAsset_WrapperImpl(const void* Object, void* OutValue)
	{
		const USkeletalMeshComponent* Obj = (const USkeletalMeshComponent*)Object;
		USkeletalMesh*& Result = *(USkeletalMesh**)OutValue;
		Result = (USkeletalMesh*)Obj->GetSkeletalMeshAsset();
	}
	void USkeletalMeshComponent::SetSkeletalMeshAsset_WrapperImpl(void* Object, const void* InValue)
	{
		USkeletalMeshComponent* Obj = (USkeletalMeshComponent*)Object;
		USkeletalMesh*& Value = *(USkeletalMesh**)InValue;
		Obj->SetSkeletalMeshAsset(Value);
	}
	void USkeletalMeshComponent::StaticRegisterNativesUSkeletalMeshComponent()
	{
		UClass* Class = USkeletalMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AccumulateAllBodiesBelowPhysicsBlendWeight", &USkeletalMeshComponent::execAccumulateAllBodiesBelowPhysicsBlendWeight },
			{ "AddForceToAllBodiesBelow", &USkeletalMeshComponent::execAddForceToAllBodiesBelow },
			{ "AddImpulseToAllBodiesBelow", &USkeletalMeshComponent::execAddImpulseToAllBodiesBelow },
			{ "AllowAnimCurveEvaluation", &USkeletalMeshComponent::execAllowAnimCurveEvaluation },
			{ "BindClothToLeaderPoseComponent", &USkeletalMeshComponent::execBindClothToLeaderPoseComponent },
			{ "BreakConstraint", &USkeletalMeshComponent::execBreakConstraint },
			{ "ClearMorphTargets", &USkeletalMeshComponent::execClearMorphTargets },
			{ "FindConstraintBoneName", &USkeletalMeshComponent::execFindConstraintBoneName },
			{ "ForceClothNextUpdateTeleport", &USkeletalMeshComponent::execForceClothNextUpdateTeleport },
			{ "ForceClothNextUpdateTeleportAndReset", &USkeletalMeshComponent::execForceClothNextUpdateTeleportAndReset },
			{ "GetAllowClothActors", &USkeletalMeshComponent::execGetAllowClothActors },
			{ "GetAllowedAnimCurveEvaluate", &USkeletalMeshComponent::execGetAllowedAnimCurveEvaluate },
			{ "GetAllowRigidBodyAnimNode", &USkeletalMeshComponent::execGetAllowRigidBodyAnimNode },
			{ "GetAnimationMode", &USkeletalMeshComponent::execGetAnimationMode },
			{ "GetAnimClass", &USkeletalMeshComponent::execGetAnimClass },
			{ "GetAnimInstance", &USkeletalMeshComponent::execGetAnimInstance },
			{ "GetBoneLinearVelocity", &USkeletalMeshComponent::execGetBoneLinearVelocity },
			{ "GetBoneMass", &USkeletalMeshComponent::execGetBoneMass },
			{ "GetClothingSimulationInteractor", &USkeletalMeshComponent::execGetClothingSimulationInteractor },
			{ "GetClothMaxDistanceScale", &USkeletalMeshComponent::execGetClothMaxDistanceScale },
			{ "GetConstraintByName", &USkeletalMeshComponent::execGetConstraintByName },
			{ "GetConstraints", &USkeletalMeshComponent::execGetConstraints },
			{ "GetConstraintsFromBody", &USkeletalMeshComponent::execGetConstraintsFromBody },
			{ "GetCurrentJointAngles", &USkeletalMeshComponent::execGetCurrentJointAngles },
#if WITH_EDITOR
			{ "GetDefaultAnimatingRig", &USkeletalMeshComponent::execGetDefaultAnimatingRig },
			{ "GetDefaultAnimatingRigOverride", &USkeletalMeshComponent::execGetDefaultAnimatingRigOverride },
#endif // WITH_EDITOR
			{ "GetDisableAnimCurves", &USkeletalMeshComponent::execGetDisableAnimCurves },
			{ "GetDisablePostProcessBlueprint", &USkeletalMeshComponent::execGetDisablePostProcessBlueprint },
			{ "GetFloatAttribute", &USkeletalMeshComponent::execGetFloatAttribute },
			{ "GetFloatAttribute_Ref", &USkeletalMeshComponent::execGetFloatAttribute_Ref },
			{ "GetIntegerAttribute", &USkeletalMeshComponent::execGetIntegerAttribute },
			{ "GetIntegerAttribute_Ref", &USkeletalMeshComponent::execGetIntegerAttribute_Ref },
			{ "GetLinkedAnimGraphInstanceByTag", &USkeletalMeshComponent::execGetLinkedAnimGraphInstanceByTag },
			{ "GetLinkedAnimGraphInstancesByTag", &USkeletalMeshComponent::execGetLinkedAnimGraphInstancesByTag },
			{ "GetLinkedAnimLayerInstanceByClass", &USkeletalMeshComponent::execGetLinkedAnimLayerInstanceByClass },
			{ "GetLinkedAnimLayerInstanceByGroup", &USkeletalMeshComponent::execGetLinkedAnimLayerInstanceByGroup },
			{ "GetMorphTarget", &USkeletalMeshComponent::execGetMorphTarget },
			{ "GetPlayRate", &USkeletalMeshComponent::execGetPlayRate },
			{ "GetPosition", &USkeletalMeshComponent::execGetPosition },
			{ "GetPostProcessInstance", &USkeletalMeshComponent::execGetPostProcessInstance },
			{ "GetSkeletalCenterOfMass", &USkeletalMeshComponent::execGetSkeletalCenterOfMass },
			{ "GetSkeletalMeshAsset", &USkeletalMeshComponent::execGetSkeletalMeshAsset },
			{ "GetStringAttribute", &USkeletalMeshComponent::execGetStringAttribute },
			{ "GetStringAttribute_Ref", &USkeletalMeshComponent::execGetStringAttribute_Ref },
			{ "GetTeleportDistanceThreshold", &USkeletalMeshComponent::execGetTeleportDistanceThreshold },
			{ "GetTeleportRotationThreshold", &USkeletalMeshComponent::execGetTeleportRotationThreshold },
			{ "GetTransformAttribute", &USkeletalMeshComponent::execGetTransformAttribute },
			{ "GetTransformAttribute_Ref", &USkeletalMeshComponent::execGetTransformAttribute_Ref },
			{ "HasValidAnimationInstance", &USkeletalMeshComponent::execHasValidAnimationInstance },
			{ "IsBodyGravityEnabled", &USkeletalMeshComponent::execIsBodyGravityEnabled },
			{ "IsClothingSimulationSuspended", &USkeletalMeshComponent::execIsClothingSimulationSuspended },
			{ "IsPlaying", &USkeletalMeshComponent::execIsPlaying },
			{ "K2_GetClosestPointOnPhysicsAsset", &USkeletalMeshComponent::execK2_GetClosestPointOnPhysicsAsset },
			{ "LinkAnimClassLayers", &USkeletalMeshComponent::execLinkAnimClassLayers },
			{ "LinkAnimGraphByTag", &USkeletalMeshComponent::execLinkAnimGraphByTag },
			{ "OverrideAnimationData", &USkeletalMeshComponent::execOverrideAnimationData },
			{ "Play", &USkeletalMeshComponent::execPlay },
			{ "PlayAnimation", &USkeletalMeshComponent::execPlayAnimation },
			{ "ResetAllBodiesSimulatePhysics", &USkeletalMeshComponent::execResetAllBodiesSimulatePhysics },
			{ "ResetAllowedAnimCurveEvaluation", &USkeletalMeshComponent::execResetAllowedAnimCurveEvaluation },
			{ "ResetAnimInstanceDynamics", &USkeletalMeshComponent::execResetAnimInstanceDynamics },
			{ "ResetClothTeleportMode", &USkeletalMeshComponent::execResetClothTeleportMode },
			{ "ResumeClothingSimulation", &USkeletalMeshComponent::execResumeClothingSimulation },
			{ "SetAllBodiesBelowLinearVelocity", &USkeletalMeshComponent::execSetAllBodiesBelowLinearVelocity },
			{ "SetAllBodiesBelowPhysicsBlendWeight", &USkeletalMeshComponent::execSetAllBodiesBelowPhysicsBlendWeight },
			{ "SetAllBodiesBelowPhysicsDisabled", &USkeletalMeshComponent::execSetAllBodiesBelowPhysicsDisabled },
			{ "SetAllBodiesBelowSimulatePhysics", &USkeletalMeshComponent::execSetAllBodiesBelowSimulatePhysics },
			{ "SetAllBodiesPhysicsBlendWeight", &USkeletalMeshComponent::execSetAllBodiesPhysicsBlendWeight },
			{ "SetAllBodiesSimulatePhysics", &USkeletalMeshComponent::execSetAllBodiesSimulatePhysics },
			{ "SetAllMotorsAngularDriveParams", &USkeletalMeshComponent::execSetAllMotorsAngularDriveParams },
			{ "SetAllMotorsAngularPositionDrive", &USkeletalMeshComponent::execSetAllMotorsAngularPositionDrive },
			{ "SetAllMotorsAngularVelocityDrive", &USkeletalMeshComponent::execSetAllMotorsAngularVelocityDrive },
			{ "SetAllowAnimCurveEvaluation", &USkeletalMeshComponent::execSetAllowAnimCurveEvaluation },
			{ "SetAllowClothActors", &USkeletalMeshComponent::execSetAllowClothActors },
			{ "SetAllowedAnimCurvesEvaluation", &USkeletalMeshComponent::execSetAllowedAnimCurvesEvaluation },
			{ "SetAllowRigidBodyAnimNode", &USkeletalMeshComponent::execSetAllowRigidBodyAnimNode },
			{ "SetAngularLimits", &USkeletalMeshComponent::execSetAngularLimits },
			{ "SetAnimation", &USkeletalMeshComponent::execSetAnimation },
			{ "SetAnimationMode", &USkeletalMeshComponent::execSetAnimationMode },
			{ "SetAnimClass", &USkeletalMeshComponent::execSetAnimClass },
			{ "SetBodyNotifyRigidBodyCollision", &USkeletalMeshComponent::execSetBodyNotifyRigidBodyCollision },
			{ "SetClothMaxDistanceScale", &USkeletalMeshComponent::execSetClothMaxDistanceScale },
			{ "SetConstraintProfile", &USkeletalMeshComponent::execSetConstraintProfile },
			{ "SetConstraintProfileForAll", &USkeletalMeshComponent::execSetConstraintProfileForAll },
#if WITH_EDITOR
			{ "SetDefaultAnimatingRigOverride", &USkeletalMeshComponent::execSetDefaultAnimatingRigOverride },
#endif // WITH_EDITOR
			{ "SetDisableAnimCurves", &USkeletalMeshComponent::execSetDisableAnimCurves },
			{ "SetDisablePostProcessBlueprint", &USkeletalMeshComponent::execSetDisablePostProcessBlueprint },
			{ "SetEnableBodyGravity", &USkeletalMeshComponent::execSetEnableBodyGravity },
			{ "SetEnableGravityOnAllBodiesBelow", &USkeletalMeshComponent::execSetEnableGravityOnAllBodiesBelow },
			{ "SetEnablePhysicsBlending", &USkeletalMeshComponent::execSetEnablePhysicsBlending },
			{ "SetMorphTarget", &USkeletalMeshComponent::execSetMorphTarget },
			{ "SetNotifyRigidBodyCollisionBelow", &USkeletalMeshComponent::execSetNotifyRigidBodyCollisionBelow },
			{ "SetPhysicsBlendWeight", &USkeletalMeshComponent::execSetPhysicsBlendWeight },
			{ "SetPlayRate", &USkeletalMeshComponent::execSetPlayRate },
			{ "SetPosition", &USkeletalMeshComponent::execSetPosition },
			{ "SetSkeletalMeshAsset", &USkeletalMeshComponent::execSetSkeletalMeshAsset },
			{ "SetTeleportDistanceThreshold", &USkeletalMeshComponent::execSetTeleportDistanceThreshold },
			{ "SetTeleportRotationThreshold", &USkeletalMeshComponent::execSetTeleportRotationThreshold },
			{ "SetUpdateAnimationInEditor", &USkeletalMeshComponent::execSetUpdateAnimationInEditor },
			{ "SetUpdateClothInEditor", &USkeletalMeshComponent::execSetUpdateClothInEditor },
			{ "SnapshotPose", &USkeletalMeshComponent::execSnapshotPose },
			{ "Stop", &USkeletalMeshComponent::execStop },
			{ "SuspendClothingSimulation", &USkeletalMeshComponent::execSuspendClothingSimulation },
			{ "TermBodiesBelow", &USkeletalMeshComponent::execTermBodiesBelow },
			{ "ToggleDisablePostProcessBlueprint", &USkeletalMeshComponent::execToggleDisablePostProcessBlueprint },
			{ "UnbindClothFromLeaderPoseComponent", &USkeletalMeshComponent::execUnbindClothFromLeaderPoseComponent },
			{ "UnlinkAnimClassLayers", &USkeletalMeshComponent::execUnlinkAnimClassLayers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Statics
	{
		struct SkeletalMeshComponent_eventAccumulateAllBodiesBelowPhysicsBlendWeight_Parms
		{
			FName InBoneName;
			float AddPhysicsBlendWeight;
			bool bSkipCustomPhysicsType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InBoneName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AddPhysicsBlendWeight;
		static void NewProp_bSkipCustomPhysicsType_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipCustomPhysicsType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Statics::NewProp_InBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Statics::NewProp_InBoneName = { "InBoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventAccumulateAllBodiesBelowPhysicsBlendWeight_Parms, InBoneName), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Statics::NewProp_InBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Statics::NewProp_InBoneName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Statics::NewProp_AddPhysicsBlendWeight = { "AddPhysicsBlendWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventAccumulateAllBodiesBelowPhysicsBlendWeight_Parms, AddPhysicsBlendWeight), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Statics::NewProp_bSkipCustomPhysicsType_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventAccumulateAllBodiesBelowPhysicsBlendWeight_Parms*)Obj)->bSkipCustomPhysicsType = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Statics::NewProp_bSkipCustomPhysicsType = { "bSkipCustomPhysicsType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventAccumulateAllBodiesBelowPhysicsBlendWeight_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Statics::NewProp_bSkipCustomPhysicsType_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Statics::NewProp_InBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Statics::NewProp_AddPhysicsBlendWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Statics::NewProp_bSkipCustomPhysicsType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Accumulate AddPhysicsBlendWeight to physics blendweight for all of the bones below passed in bone to be simulated */" },
		{ "CPP_Default_bSkipCustomPhysicsType", "false" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Accumulate AddPhysicsBlendWeight to physics blendweight for all of the bones below passed in bone to be simulated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "AccumulateAllBodiesBelowPhysicsBlendWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Statics::SkeletalMeshComponent_eventAccumulateAllBodiesBelowPhysicsBlendWeight_Parms), Z_Construct_UFunction_USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_AddForceToAllBodiesBelow_Statics
	{
		struct SkeletalMeshComponent_eventAddForceToAllBodiesBelow_Parms
		{
			FVector Force;
			FName BoneName;
			bool bAccelChange;
			bool bIncludeSelf;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static void NewProp_bAccelChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccelChange;
		static void NewProp_bIncludeSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeSelf;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_AddForceToAllBodiesBelow_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventAddForceToAllBodiesBelow_Parms, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_AddForceToAllBodiesBelow_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventAddForceToAllBodiesBelow_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_AddForceToAllBodiesBelow_Statics::NewProp_bAccelChange_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventAddForceToAllBodiesBelow_Parms*)Obj)->bAccelChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_AddForceToAllBodiesBelow_Statics::NewProp_bAccelChange = { "bAccelChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventAddForceToAllBodiesBelow_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_AddForceToAllBodiesBelow_Statics::NewProp_bAccelChange_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_AddForceToAllBodiesBelow_Statics::NewProp_bIncludeSelf_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventAddForceToAllBodiesBelow_Parms*)Obj)->bIncludeSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_AddForceToAllBodiesBelow_Statics::NewProp_bIncludeSelf = { "bIncludeSelf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventAddForceToAllBodiesBelow_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_AddForceToAllBodiesBelow_Statics::NewProp_bIncludeSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_AddForceToAllBodiesBelow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_AddForceToAllBodiesBelow_Statics::NewProp_Force,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_AddForceToAllBodiesBelow_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_AddForceToAllBodiesBelow_Statics::NewProp_bAccelChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_AddForceToAllBodiesBelow_Statics::NewProp_bIncludeSelf,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_AddForceToAllBodiesBelow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/**\n\x09*\x09""Add a force to all rigid bodies below.\n\x09*   This is like a 'thruster'. Good for adding a burst over some (non zero) time. Should be called every frame for the duration of the force.\n\x09*\n\x09*\x09@param\x09""Force\x09\x09 Force vector to apply. Magnitude indicates strength of force.\n\x09*\x09@param\x09""BoneName\x09 If a SkeletalMeshComponent, name of body to apply force to. 'None' indicates root body.\n\x09*   @param  bAccelChange If true, Force is taken as a change in acceleration instead of a physical force (i.e. mass will have no effect).\n\x09*   @param  bIncludeSelf If false, Force is only applied to bodies below but not given bone name.\n\x09*/" },
		{ "CPP_Default_bAccelChange", "false" },
		{ "CPP_Default_bIncludeSelf", "true" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Add a force to all rigid bodies below.\nThis is like a 'thruster'. Good for adding a burst over some (non zero) time. Should be called every frame for the duration of the force.\n\n@param  Force            Force vector to apply. Magnitude indicates strength of force.\n@param  BoneName         If a SkeletalMeshComponent, name of body to apply force to. 'None' indicates root body.\n@param  bAccelChange If true, Force is taken as a change in acceleration instead of a physical force (i.e. mass will have no effect).\n@param  bIncludeSelf If false, Force is only applied to bodies below but not given bone name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_AddForceToAllBodiesBelow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "AddForceToAllBodiesBelow", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_AddForceToAllBodiesBelow_Statics::SkeletalMeshComponent_eventAddForceToAllBodiesBelow_Parms), Z_Construct_UFunction_USkeletalMeshComponent_AddForceToAllBodiesBelow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_AddForceToAllBodiesBelow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_AddForceToAllBodiesBelow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_AddForceToAllBodiesBelow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_AddForceToAllBodiesBelow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_AddForceToAllBodiesBelow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_AddImpulseToAllBodiesBelow_Statics
	{
		struct SkeletalMeshComponent_eventAddImpulseToAllBodiesBelow_Parms
		{
			FVector Impulse;
			FName BoneName;
			bool bVelChange;
			bool bIncludeSelf;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static void NewProp_bVelChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVelChange;
		static void NewProp_bIncludeSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeSelf;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_AddImpulseToAllBodiesBelow_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventAddImpulseToAllBodiesBelow_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_AddImpulseToAllBodiesBelow_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventAddImpulseToAllBodiesBelow_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_AddImpulseToAllBodiesBelow_Statics::NewProp_bVelChange_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventAddImpulseToAllBodiesBelow_Parms*)Obj)->bVelChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_AddImpulseToAllBodiesBelow_Statics::NewProp_bVelChange = { "bVelChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventAddImpulseToAllBodiesBelow_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_AddImpulseToAllBodiesBelow_Statics::NewProp_bVelChange_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_AddImpulseToAllBodiesBelow_Statics::NewProp_bIncludeSelf_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventAddImpulseToAllBodiesBelow_Parms*)Obj)->bIncludeSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_AddImpulseToAllBodiesBelow_Statics::NewProp_bIncludeSelf = { "bIncludeSelf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventAddImpulseToAllBodiesBelow_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_AddImpulseToAllBodiesBelow_Statics::NewProp_bIncludeSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_AddImpulseToAllBodiesBelow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_AddImpulseToAllBodiesBelow_Statics::NewProp_Impulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_AddImpulseToAllBodiesBelow_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_AddImpulseToAllBodiesBelow_Statics::NewProp_bVelChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_AddImpulseToAllBodiesBelow_Statics::NewProp_bIncludeSelf,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_AddImpulseToAllBodiesBelow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/**\n\x09*\x09""Add impulse to all single rigid bodies below. Good for one time instant burst.\n\x09*\n\x09*\x09@param\x09Impulse\x09\x09Magnitude and direction of impulse to apply.\n\x09*\x09@param\x09""BoneName\x09If a SkeletalMeshComponent, name of body to apply impulse to. 'None' indicates root body.\n\x09*\x09@param\x09""bVelChange\x09If true, the Strength is taken as a change in velocity instead of an impulse (ie. mass will have no effect).\n\x09*\x09@param bIncludeSelf If false, Force is only applied to bodies below but not given bone name.\n\x09*/" },
		{ "CPP_Default_bIncludeSelf", "true" },
		{ "CPP_Default_BoneName", "None" },
		{ "CPP_Default_bVelChange", "false" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Add impulse to all single rigid bodies below. Good for one time instant burst.\n\n@param  Impulse         Magnitude and direction of impulse to apply.\n@param  BoneName        If a SkeletalMeshComponent, name of body to apply impulse to. 'None' indicates root body.\n@param  bVelChange      If true, the Strength is taken as a change in velocity instead of an impulse (ie. mass will have no effect).\n@param bIncludeSelf If false, Force is only applied to bodies below but not given bone name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_AddImpulseToAllBodiesBelow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "AddImpulseToAllBodiesBelow", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_AddImpulseToAllBodiesBelow_Statics::SkeletalMeshComponent_eventAddImpulseToAllBodiesBelow_Parms), Z_Construct_UFunction_USkeletalMeshComponent_AddImpulseToAllBodiesBelow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_AddImpulseToAllBodiesBelow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_AddImpulseToAllBodiesBelow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_AddImpulseToAllBodiesBelow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_AddImpulseToAllBodiesBelow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_AddImpulseToAllBodiesBelow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_AllowAnimCurveEvaluation_Statics
	{
		struct SkeletalMeshComponent_eventAllowAnimCurveEvaluation_Parms
		{
			FName NameOfCurve;
			bool bAllow;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameOfCurve;
		static void NewProp_bAllow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_AllowAnimCurveEvaluation_Statics::NewProp_NameOfCurve = { "NameOfCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventAllowAnimCurveEvaluation_Parms, NameOfCurve), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_AllowAnimCurveEvaluation_Statics::NewProp_bAllow_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventAllowAnimCurveEvaluation_Parms*)Obj)->bAllow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_AllowAnimCurveEvaluation_Statics::NewProp_bAllow = { "bAllow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventAllowAnimCurveEvaluation_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_AllowAnimCurveEvaluation_Statics::NewProp_bAllow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_AllowAnimCurveEvaluation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_AllowAnimCurveEvaluation_Statics::NewProp_NameOfCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_AllowAnimCurveEvaluation_Statics::NewProp_bAllow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_AllowAnimCurveEvaluation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_AllowAnimCurveEvaluation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "AllowAnimCurveEvaluation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_AllowAnimCurveEvaluation_Statics::SkeletalMeshComponent_eventAllowAnimCurveEvaluation_Parms), Z_Construct_UFunction_USkeletalMeshComponent_AllowAnimCurveEvaluation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_AllowAnimCurveEvaluation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_AllowAnimCurveEvaluation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_AllowAnimCurveEvaluation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_AllowAnimCurveEvaluation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_AllowAnimCurveEvaluation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_BindClothToLeaderPoseComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_BindClothToLeaderPoseComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clothing" },
		{ "Comment", "/** \n\x09 * If this component has a valid LeaderPoseComponent then this function makes cloth items on the follower component\n\x09 * take the transforms of the cloth items on the leader component instead of simulating separately.\n\x09 * @Note This will FORCE any cloth actor on the leader component to simulate in local space. Also\n\x09 * The meshes used in the components must be identical for the cloth to bind correctly\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "If this component has a valid LeaderPoseComponent then this function makes cloth items on the follower component\ntake the transforms of the cloth items on the leader component instead of simulating separately.\n@Note This will FORCE any cloth actor on the leader component to simulate in local space. Also\nThe meshes used in the components must be identical for the cloth to bind correctly" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_BindClothToLeaderPoseComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "BindClothToLeaderPoseComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_BindClothToLeaderPoseComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_BindClothToLeaderPoseComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_BindClothToLeaderPoseComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_BindClothToLeaderPoseComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_BreakConstraint_Statics
	{
		struct SkeletalMeshComponent_eventBreakConstraint_Parms
		{
			FVector Impulse;
			FVector HitLocation;
			FName InBoneName;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InBoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_BreakConstraint_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventBreakConstraint_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_BreakConstraint_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventBreakConstraint_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_BreakConstraint_Statics::NewProp_InBoneName = { "InBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventBreakConstraint_Parms, InBoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_BreakConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_BreakConstraint_Statics::NewProp_Impulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_BreakConstraint_Statics::NewProp_HitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_BreakConstraint_Statics::NewProp_InBoneName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_BreakConstraint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** \n\x09 * Break a constraint off a Gore mesh. \n\x09 * \n\x09 * @param\x09Impulse\x09vector of impulse\n\x09 * @param\x09HitLocation\x09location of the hit\n\x09 * @param\x09InBoneName\x09Name of bone to break constraint for\n\x09 */" },
		{ "Keywords", "Constraint" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Break a constraint off a Gore mesh.\n\n@param       Impulse vector of impulse\n@param       HitLocation     location of the hit\n@param       InBoneName      Name of bone to break constraint for" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_BreakConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "BreakConstraint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_BreakConstraint_Statics::SkeletalMeshComponent_eventBreakConstraint_Parms), Z_Construct_UFunction_USkeletalMeshComponent_BreakConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_BreakConstraint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_BreakConstraint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_BreakConstraint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_BreakConstraint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_BreakConstraint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_ClearMorphTargets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_ClearMorphTargets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "Comment", "/**\n\x09 * Clear all Morph Target that are set to this mesh\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Clear all Morph Target that are set to this mesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_ClearMorphTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "ClearMorphTargets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_ClearMorphTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_ClearMorphTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_ClearMorphTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_ClearMorphTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_FindConstraintBoneName_Statics
	{
		struct SkeletalMeshComponent_eventFindConstraintBoneName_Parms
		{
			int32 ConstraintIndex;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConstraintIndex;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_FindConstraintBoneName_Statics::NewProp_ConstraintIndex = { "ConstraintIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventFindConstraintBoneName_Parms, ConstraintIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_FindConstraintBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventFindConstraintBoneName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_FindConstraintBoneName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_FindConstraintBoneName_Statics::NewProp_ConstraintIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_FindConstraintBoneName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_FindConstraintBoneName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/**\n\x09 * Find Constraint Name from index\n\x09 * \n\x09 * @param\x09""ConstraintIndex\x09Index of constraint to look for\n\x09 * @return\x09""Constraint Joint Name\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Find Constraint Name from index\n\n@param       ConstraintIndex Index of constraint to look for\n@return      Constraint Joint Name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_FindConstraintBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "FindConstraintBoneName", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_FindConstraintBoneName_Statics::SkeletalMeshComponent_eventFindConstraintBoneName_Parms), Z_Construct_UFunction_USkeletalMeshComponent_FindConstraintBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_FindConstraintBoneName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_FindConstraintBoneName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_FindConstraintBoneName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_FindConstraintBoneName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_FindConstraintBoneName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_ForceClothNextUpdateTeleport_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_ForceClothNextUpdateTeleport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clothing" },
		{ "Comment", "/** \n\x09 * Used to indicate we should force 'teleport' during the next call to UpdateClothState, \n\x09 * This will transform positions and velocities and thus keep the simulation state, just translate it to a new pose.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Used to indicate we should force 'teleport' during the next call to UpdateClothState,\nThis will transform positions and velocities and thus keep the simulation state, just translate it to a new pose." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_ForceClothNextUpdateTeleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "ForceClothNextUpdateTeleport", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_ForceClothNextUpdateTeleport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_ForceClothNextUpdateTeleport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_ForceClothNextUpdateTeleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_ForceClothNextUpdateTeleport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_ForceClothNextUpdateTeleportAndReset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_ForceClothNextUpdateTeleportAndReset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clothing" },
		{ "Comment", "/** \n\x09 * Used to indicate we should force 'teleport and reset' during the next call to UpdateClothState.\n\x09 * This can be used to reset it from a bad state or by a teleport where the old state is not important anymore.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Used to indicate we should force 'teleport and reset' during the next call to UpdateClothState.\nThis can be used to reset it from a bad state or by a teleport where the old state is not important anymore." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_ForceClothNextUpdateTeleportAndReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "ForceClothNextUpdateTeleportAndReset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_ForceClothNextUpdateTeleportAndReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_ForceClothNextUpdateTeleportAndReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_ForceClothNextUpdateTeleportAndReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_ForceClothNextUpdateTeleportAndReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetAllowClothActors_Statics
	{
		struct SkeletalMeshComponent_eventGetAllowClothActors_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkeletalMeshComponent_GetAllowClothActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventGetAllowClothActors_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetAllowClothActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventGetAllowClothActors_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_GetAllowClothActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetAllowClothActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetAllowClothActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetAllowClothActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetAllowClothActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetAllowClothActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetAllowClothActors_Statics::SkeletalMeshComponent_eventGetAllowClothActors_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetAllowClothActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetAllowClothActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetAllowClothActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetAllowClothActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetAllowClothActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetAllowClothActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetAllowedAnimCurveEvaluate_Statics
	{
		struct SkeletalMeshComponent_eventGetAllowedAnimCurveEvaluate_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkeletalMeshComponent_GetAllowedAnimCurveEvaluate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventGetAllowedAnimCurveEvaluate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetAllowedAnimCurveEvaluate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventGetAllowedAnimCurveEvaluate_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_GetAllowedAnimCurveEvaluate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetAllowedAnimCurveEvaluate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetAllowedAnimCurveEvaluate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetAllowedAnimCurveEvaluate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetAllowedAnimCurveEvaluate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetAllowedAnimCurveEvaluate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetAllowedAnimCurveEvaluate_Statics::SkeletalMeshComponent_eventGetAllowedAnimCurveEvaluate_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetAllowedAnimCurveEvaluate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetAllowedAnimCurveEvaluate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetAllowedAnimCurveEvaluate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetAllowedAnimCurveEvaluate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetAllowedAnimCurveEvaluate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetAllowedAnimCurveEvaluate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetAllowRigidBodyAnimNode_Statics
	{
		struct SkeletalMeshComponent_eventGetAllowRigidBodyAnimNode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkeletalMeshComponent_GetAllowRigidBodyAnimNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventGetAllowRigidBodyAnimNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetAllowRigidBodyAnimNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventGetAllowRigidBodyAnimNode_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_GetAllowRigidBodyAnimNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetAllowRigidBodyAnimNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetAllowRigidBodyAnimNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetAllowRigidBodyAnimNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetAllowRigidBodyAnimNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetAllowRigidBodyAnimNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetAllowRigidBodyAnimNode_Statics::SkeletalMeshComponent_eventGetAllowRigidBodyAnimNode_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetAllowRigidBodyAnimNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetAllowRigidBodyAnimNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetAllowRigidBodyAnimNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetAllowRigidBodyAnimNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetAllowRigidBodyAnimNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetAllowRigidBodyAnimNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetAnimationMode_Statics
	{
		struct SkeletalMeshComponent_eventGetAnimationMode_Parms
		{
			TEnumAsByte<EAnimationMode::Type> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetAnimationMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetAnimationMode_Parms, ReturnValue), Z_Construct_UEnum_Engine_EAnimationMode, METADATA_PARAMS(nullptr, 0) }; // 4106539714
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetAnimationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetAnimationMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetAnimationMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Animation" },
		{ "Keywords", "Animation" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetAnimationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetAnimationMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetAnimationMode_Statics::SkeletalMeshComponent_eventGetAnimationMode_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetAnimationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetAnimationMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetAnimationMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetAnimationMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetAnimationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetAnimationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetAnimClass_Statics
	{
		struct SkeletalMeshComponent_eventGetAnimClass_Parms
		{
			UClass* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetAnimClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetAnimClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetAnimClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetAnimClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetAnimClass_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Get the anim instance class via getter callable by sequencer.  */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Get the anim instance class via getter callable by sequencer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetAnimClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetAnimClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetAnimClass_Statics::SkeletalMeshComponent_eventGetAnimClass_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetAnimClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetAnimClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetAnimClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetAnimClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetAnimClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetAnimClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetAnimInstance_Statics
	{
		struct SkeletalMeshComponent_eventGetAnimInstance_Parms
		{
			UAnimInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetAnimInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetAnimInstance_Parms, ReturnValue), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetAnimInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetAnimInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "Comment", "/** \n\x09 * Returns the animation instance that is driving the class (if available). This is typically an instance of\n\x09 * the class set as AnimBlueprintGeneratedClass (generated by an animation blueprint)\n\x09 * Since this instance is transient, it is not safe to be used during construction script\n\x09 */" },
		{ "Keywords", "AnimBlueprint" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Returns the animation instance that is driving the class (if available). This is typically an instance of\nthe class set as AnimBlueprintGeneratedClass (generated by an animation blueprint)\nSince this instance is transient, it is not safe to be used during construction script" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetAnimInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetAnimInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetAnimInstance_Statics::SkeletalMeshComponent_eventGetAnimInstance_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetAnimInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetAnimInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetAnimInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetAnimInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetAnimInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetAnimInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetBoneLinearVelocity_Statics
	{
		struct SkeletalMeshComponent_eventGetBoneLinearVelocity_Parms
		{
			FName InBoneName;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InBoneName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetBoneLinearVelocity_Statics::NewProp_InBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetBoneLinearVelocity_Statics::NewProp_InBoneName = { "InBoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetBoneLinearVelocity_Parms, InBoneName), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetBoneLinearVelocity_Statics::NewProp_InBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetBoneLinearVelocity_Statics::NewProp_InBoneName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetBoneLinearVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetBoneLinearVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetBoneLinearVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetBoneLinearVelocity_Statics::NewProp_InBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetBoneLinearVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetBoneLinearVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetBoneLinearVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetBoneLinearVelocity", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetBoneLinearVelocity_Statics::SkeletalMeshComponent_eventGetBoneLinearVelocity_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetBoneLinearVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetBoneLinearVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetBoneLinearVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetBoneLinearVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetBoneLinearVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetBoneLinearVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetBoneMass_Statics
	{
		struct SkeletalMeshComponent_eventGetBoneMass_Parms
		{
			FName BoneName;
			bool bScaleMass;
			float ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static void NewProp_bScaleMass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleMass;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetBoneMass_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetBoneMass_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_GetBoneMass_Statics::NewProp_bScaleMass_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventGetBoneMass_Parms*)Obj)->bScaleMass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetBoneMass_Statics::NewProp_bScaleMass = { "bScaleMass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventGetBoneMass_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_GetBoneMass_Statics::NewProp_bScaleMass_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetBoneMass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetBoneMass_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetBoneMass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetBoneMass_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetBoneMass_Statics::NewProp_bScaleMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetBoneMass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetBoneMass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/**\n\x09*\x09Returns the mass (in kg) of the given bone\n\x09*\n\x09*\x09@param BoneName\x09\x09Name of the body to return. 'None' indicates root body.\n\x09*\x09@param bScaleMass\x09If true, the mass is scaled by the bone's MassScale.\n\x09*/" },
		{ "CPP_Default_BoneName", "None" },
		{ "CPP_Default_bScaleMass", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Returns the mass (in kg) of the given bone\n\n@param BoneName         Name of the body to return. 'None' indicates root body.\n@param bScaleMass       If true, the mass is scaled by the bone's MassScale." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetBoneMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetBoneMass", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetBoneMass_Statics::SkeletalMeshComponent_eventGetBoneMass_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetBoneMass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetBoneMass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetBoneMass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetBoneMass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetBoneMass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetBoneMass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetClothingSimulationInteractor_Statics
	{
		struct SkeletalMeshComponent_eventGetClothingSimulationInteractor_Parms
		{
			UClothingSimulationInteractor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetClothingSimulationInteractor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetClothingSimulationInteractor_Parms, ReturnValue), Z_Construct_UClass_UClothingSimulationInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetClothingSimulationInteractor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetClothingSimulationInteractor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetClothingSimulationInteractor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clothing" },
		{ "Comment", "/** Get the current interactor for a clothing simulation, if the current simulation supports runtime interaction. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Get the current interactor for a clothing simulation, if the current simulation supports runtime interaction." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetClothingSimulationInteractor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetClothingSimulationInteractor", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetClothingSimulationInteractor_Statics::SkeletalMeshComponent_eventGetClothingSimulationInteractor_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetClothingSimulationInteractor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetClothingSimulationInteractor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetClothingSimulationInteractor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetClothingSimulationInteractor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetClothingSimulationInteractor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetClothingSimulationInteractor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetClothMaxDistanceScale_Statics
	{
		struct SkeletalMeshComponent_eventGetClothMaxDistanceScale_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetClothMaxDistanceScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetClothMaxDistanceScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetClothMaxDistanceScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetClothMaxDistanceScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetClothMaxDistanceScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clothing" },
		{ "Comment", "/**\n\x09 * Get/Set the max distance scale of clothing mesh vertices\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Get/Set the max distance scale of clothing mesh vertices" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetClothMaxDistanceScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetClothMaxDistanceScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetClothMaxDistanceScale_Statics::SkeletalMeshComponent_eventGetClothMaxDistanceScale_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetClothMaxDistanceScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetClothMaxDistanceScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetClothMaxDistanceScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetClothMaxDistanceScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetClothMaxDistanceScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetClothMaxDistanceScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintByName_Statics
	{
		struct SkeletalMeshComponent_eventGetConstraintByName_Parms
		{
			FName ConstraintName;
			bool bIncludesTerminated;
			FConstraintInstanceAccessor ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConstraintName;
		static void NewProp_bIncludesTerminated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludesTerminated;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintByName_Statics::NewProp_ConstraintName = { "ConstraintName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetConstraintByName_Parms, ConstraintName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintByName_Statics::NewProp_bIncludesTerminated_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventGetConstraintByName_Parms*)Obj)->bIncludesTerminated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintByName_Statics::NewProp_bIncludesTerminated = { "bIncludesTerminated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventGetConstraintByName_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintByName_Statics::NewProp_bIncludesTerminated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetConstraintByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintByName_Statics::NewProp_ConstraintName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintByName_Statics::NewProp_bIncludesTerminated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Gets a constraint by its name \n\x09* @param ConstraintName\x09\x09name of the constraint\n\x09* @param IncludesTerminated whether or not to return a terminated constraint\n\x09* */" },
		{ "Keywords", "Components|SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Gets a constraint by its name\n@param ConstraintName         name of the constraint\n@param IncludesTerminated whether or not to return a terminated constraint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetConstraintByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintByName_Statics::SkeletalMeshComponent_eventGetConstraintByName_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetConstraints_Statics
	{
		struct SkeletalMeshComponent_eventGetConstraints_Parms
		{
			bool bIncludesTerminated;
			TArray<FConstraintInstanceAccessor> OutConstraints;
		};
		static void NewProp_bIncludesTerminated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludesTerminated;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutConstraints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutConstraints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkeletalMeshComponent_GetConstraints_Statics::NewProp_bIncludesTerminated_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventGetConstraints_Parms*)Obj)->bIncludesTerminated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetConstraints_Statics::NewProp_bIncludesTerminated = { "bIncludesTerminated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventGetConstraints_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_GetConstraints_Statics::NewProp_bIncludesTerminated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetConstraints_Statics::NewProp_OutConstraints_Inner = { "OutConstraints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetConstraints_Statics::NewProp_OutConstraints = { "OutConstraints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetConstraints_Parms, OutConstraints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetConstraints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetConstraints_Statics::NewProp_bIncludesTerminated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetConstraints_Statics::NewProp_OutConstraints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetConstraints_Statics::NewProp_OutConstraints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetConstraints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Gets all the constraints\n\x09* @param IncludesTerminated whether or not to return terminated constraints\n\x09* @param OutConstraints returned list of constraints matching the parameters\n\x09* */" },
		{ "Keywords", "Components|SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Gets all the constraints\n@param IncludesTerminated whether or not to return terminated constraints\n@param OutConstraints returned list of constraints matching the parameters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetConstraints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetConstraints", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetConstraints_Statics::SkeletalMeshComponent_eventGetConstraints_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetConstraints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetConstraints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetConstraints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetConstraints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetConstraints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetConstraints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics
	{
		struct SkeletalMeshComponent_eventGetConstraintsFromBody_Parms
		{
			FName BodyName;
			bool bParentConstraints;
			bool bChildConstraints;
			bool bIncludesTerminated;
			TArray<FConstraintInstanceAccessor> OutConstraints;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BodyName;
		static void NewProp_bParentConstraints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bParentConstraints;
		static void NewProp_bChildConstraints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bChildConstraints;
		static void NewProp_bIncludesTerminated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludesTerminated;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutConstraints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutConstraints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::NewProp_BodyName = { "BodyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetConstraintsFromBody_Parms, BodyName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::NewProp_bParentConstraints_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventGetConstraintsFromBody_Parms*)Obj)->bParentConstraints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::NewProp_bParentConstraints = { "bParentConstraints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventGetConstraintsFromBody_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::NewProp_bParentConstraints_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::NewProp_bChildConstraints_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventGetConstraintsFromBody_Parms*)Obj)->bChildConstraints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::NewProp_bChildConstraints = { "bChildConstraints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventGetConstraintsFromBody_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::NewProp_bChildConstraints_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::NewProp_bIncludesTerminated_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventGetConstraintsFromBody_Parms*)Obj)->bIncludesTerminated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::NewProp_bIncludesTerminated = { "bIncludesTerminated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventGetConstraintsFromBody_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::NewProp_bIncludesTerminated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::NewProp_OutConstraints_Inner = { "OutConstraints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConstraintInstanceAccessor, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::NewProp_OutConstraints = { "OutConstraints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetConstraintsFromBody_Parms, OutConstraints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 486638601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::NewProp_BodyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::NewProp_bParentConstraints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::NewProp_bChildConstraints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::NewProp_bIncludesTerminated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::NewProp_OutConstraints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::NewProp_OutConstraints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Gets all the constraints attached to a body \n\x09* @param BodyName name of the body to get the attached constraints from \n\x09* @param bParentConstraints return constraints where BodyName is the child of the constraint\n\x09* @param bChildConstraints return constraints where BodyName is the parent of the constraint\n\x09* @param bParentConstraints return constraints attached to the parent of the body \n\x09* @param IncludesTerminated whether or not to return terminated constraints\n\x09* @param OutConstraints returned list of constraints matching the parameters\n\x09* */" },
		{ "Keywords", "Components|SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Gets all the constraints attached to a body\n@param BodyName name of the body to get the attached constraints from\n@param bParentConstraints return constraints where BodyName is the child of the constraint\n@param bChildConstraints return constraints where BodyName is the parent of the constraint\n@param bParentConstraints return constraints attached to the parent of the body\n@param IncludesTerminated whether or not to return terminated constraints\n@param OutConstraints returned list of constraints matching the parameters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetConstraintsFromBody", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::SkeletalMeshComponent_eventGetConstraintsFromBody_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetCurrentJointAngles_Statics
	{
		struct SkeletalMeshComponent_eventGetCurrentJointAngles_Parms
		{
			FName InBoneName;
			float Swing1Angle;
			float TwistAngle;
			float Swing2Angle;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InBoneName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Swing1Angle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Swing2Angle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetCurrentJointAngles_Statics::NewProp_InBoneName = { "InBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetCurrentJointAngles_Parms, InBoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetCurrentJointAngles_Statics::NewProp_Swing1Angle = { "Swing1Angle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetCurrentJointAngles_Parms, Swing1Angle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetCurrentJointAngles_Statics::NewProp_TwistAngle = { "TwistAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetCurrentJointAngles_Parms, TwistAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetCurrentJointAngles_Statics::NewProp_Swing2Angle = { "Swing2Angle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetCurrentJointAngles_Parms, Swing2Angle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetCurrentJointAngles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetCurrentJointAngles_Statics::NewProp_InBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetCurrentJointAngles_Statics::NewProp_Swing1Angle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetCurrentJointAngles_Statics::NewProp_TwistAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetCurrentJointAngles_Statics::NewProp_Swing2Angle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetCurrentJointAngles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Gets the current Angular state for a named bone constraint \n\x09*  @param InBoneName  Name of bone to get constraint ranges for\n\x09*  @param Swing1Angle current angular state of the constraint\n\x09*  @param TwistAngle  current angular state of the constraint\n\x09*  @param Swing2Angle current angular state of the constraint\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Gets the current Angular state for a named bone constraint\n@param InBoneName  Name of bone to get constraint ranges for\n@param Swing1Angle current angular state of the constraint\n@param TwistAngle  current angular state of the constraint\n@param Swing2Angle current angular state of the constraint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetCurrentJointAngles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetCurrentJointAngles", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetCurrentJointAngles_Statics::SkeletalMeshComponent_eventGetCurrentJointAngles_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetCurrentJointAngles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetCurrentJointAngles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetCurrentJointAngles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetCurrentJointAngles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetCurrentJointAngles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetCurrentJointAngles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRig_Statics
	{
		struct SkeletalMeshComponent_eventGetDefaultAnimatingRig_Parms
		{
			TSoftObjectPtr<UObject> ReturnValue;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetDefaultAnimatingRig_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetDefaultAnimatingRig", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRig_Statics::SkeletalMeshComponent_eventGetDefaultAnimatingRig_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRigOverride_Statics
	{
		struct SkeletalMeshComponent_eventGetDefaultAnimatingRigOverride_Parms
		{
			TSoftObjectPtr<UObject> ReturnValue;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRigOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetDefaultAnimatingRigOverride_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRigOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRigOverride_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRigOverride_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRigOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetDefaultAnimatingRigOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRigOverride_Statics::SkeletalMeshComponent_eventGetDefaultAnimatingRigOverride_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRigOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRigOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRigOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRigOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRigOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRigOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetDisableAnimCurves_Statics
	{
		struct SkeletalMeshComponent_eventGetDisableAnimCurves_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkeletalMeshComponent_GetDisableAnimCurves_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventGetDisableAnimCurves_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetDisableAnimCurves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventGetDisableAnimCurves_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_GetDisableAnimCurves_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetDisableAnimCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetDisableAnimCurves_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetDisableAnimCurves_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetDisableAnimCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetDisableAnimCurves", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetDisableAnimCurves_Statics::SkeletalMeshComponent_eventGetDisableAnimCurves_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetDisableAnimCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetDisableAnimCurves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetDisableAnimCurves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetDisableAnimCurves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetDisableAnimCurves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetDisableAnimCurves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetDisablePostProcessBlueprint_Statics
	{
		struct SkeletalMeshComponent_eventGetDisablePostProcessBlueprint_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkeletalMeshComponent_GetDisablePostProcessBlueprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventGetDisablePostProcessBlueprint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetDisablePostProcessBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventGetDisablePostProcessBlueprint_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_GetDisablePostProcessBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetDisablePostProcessBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetDisablePostProcessBlueprint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetDisablePostProcessBlueprint_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** Gets whether the post process blueprint is currently disabled for this component */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Gets whether the post process blueprint is currently disabled for this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetDisablePostProcessBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetDisablePostProcessBlueprint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetDisablePostProcessBlueprint_Statics::SkeletalMeshComponent_eventGetDisablePostProcessBlueprint_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetDisablePostProcessBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetDisablePostProcessBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetDisablePostProcessBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetDisablePostProcessBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetDisablePostProcessBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetDisablePostProcessBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics
	{
		struct SkeletalMeshComponent_eventGetFloatAttribute_Parms
		{
			FName BoneName;
			FName AttributeName;
			float DefaultValue;
			float OutValue;
			ECustomBoneAttributeLookup LookupType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LookupType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LookupType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetFloatAttribute_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetFloatAttribute_Parms, AttributeName), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::NewProp_AttributeName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetFloatAttribute_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetFloatAttribute_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::NewProp_LookupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::NewProp_LookupType = { "LookupType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetFloatAttribute_Parms, LookupType), Z_Construct_UEnum_Engine_ECustomBoneAttributeLookup, METADATA_PARAMS(nullptr, 0) }; // 2474496726
	void Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventGetFloatAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventGetFloatAttribute_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::NewProp_LookupType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::NewProp_LookupType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomAttributes" },
		{ "Comment", "/** \n\x09 * Get float type attribute value.\n\n\x09 * @param BoneName Name of the bone to retrieve try and retrieve the attribute from\n\x09 * @param AttributeName Name of the attribute to retrieve\n\x09 * @param DefaultValue In case the attribute could not be found\n     * @param OutValue Retrieved attribute value if found, otherwise is set to DefaultValue\n\x09 * @param LookupType Determines how the attribute is retrieved from the specified BoneName (see ECustomBoneAttributeLookup)\n\x09 * @return Whether or not the atttribute was successfully retrieved\n\x09*/" },
		{ "CPP_Default_LookupType", "BoneOnly" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Get float type attribute value.\n\n@param BoneName Name of the bone to retrieve try and retrieve the attribute from\n@param AttributeName Name of the attribute to retrieve\n@param DefaultValue In case the attribute could not be found\n@param OutValue Retrieved attribute value if found, otherwise is set to DefaultValue\n@param LookupType Determines how the attribute is retrieved from the specified BoneName (see ECustomBoneAttributeLookup)\n@return Whether or not the atttribute was successfully retrieved" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetFloatAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::SkeletalMeshComponent_eventGetFloatAttribute_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics
	{
		struct SkeletalMeshComponent_eventGetFloatAttribute_Ref_Parms
		{
			FName BoneName;
			FName AttributeName;
			float OutValue;
			ECustomBoneAttributeLookup LookupType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LookupType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LookupType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetFloatAttribute_Ref_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetFloatAttribute_Ref_Parms, AttributeName), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::NewProp_AttributeName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetFloatAttribute_Ref_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::NewProp_LookupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::NewProp_LookupType = { "LookupType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetFloatAttribute_Ref_Parms, LookupType), Z_Construct_UEnum_Engine_ECustomBoneAttributeLookup, METADATA_PARAMS(nullptr, 0) }; // 2474496726
	void Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventGetFloatAttribute_Ref_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventGetFloatAttribute_Ref_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::NewProp_LookupType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::NewProp_LookupType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomAttributes" },
		{ "Comment", "/** \n\x09 * Get float type attribute value.\n\n\x09 * @param BoneName Name of the bone to retrieve try and retrieve the attribute from\n\x09 * @param AttributeName Name of the attribute to retrieve\n     * @param OutValue (reference) Retrieved attribute value if found, otherwise is set to DefaultValue\n\x09 * @param LookupType Determines how the attribute is retrieved from the specified BoneName (see ECustomBoneAttributeLookup)\n\x09 * @return Whether or not the atttribute was successfully retrieved\n\x09*/" },
		{ "CPP_Default_LookupType", "BoneOnly" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Get float type attribute value.\n\n@param BoneName Name of the bone to retrieve try and retrieve the attribute from\n@param AttributeName Name of the attribute to retrieve\n@param OutValue (reference) Retrieved attribute value if found, otherwise is set to DefaultValue\n@param LookupType Determines how the attribute is retrieved from the specified BoneName (see ECustomBoneAttributeLookup)\n@return Whether or not the atttribute was successfully retrieved" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetFloatAttribute_Ref", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::SkeletalMeshComponent_eventGetFloatAttribute_Ref_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics
	{
		struct SkeletalMeshComponent_eventGetIntegerAttribute_Parms
		{
			FName BoneName;
			FName AttributeName;
			int32 DefaultValue;
			int32 OutValue;
			ECustomBoneAttributeLookup LookupType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LookupType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LookupType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetIntegerAttribute_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetIntegerAttribute_Parms, AttributeName), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::NewProp_AttributeName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetIntegerAttribute_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetIntegerAttribute_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::NewProp_LookupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::NewProp_LookupType = { "LookupType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetIntegerAttribute_Parms, LookupType), Z_Construct_UEnum_Engine_ECustomBoneAttributeLookup, METADATA_PARAMS(nullptr, 0) }; // 2474496726
	void Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventGetIntegerAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventGetIntegerAttribute_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::NewProp_LookupType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::NewProp_LookupType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomAttributes" },
		{ "Comment", "/** \n\x09 * Get integer type attribute value.\n\n\x09 * @param BoneName Name of the bone to retrieve try and retrieve the attribute from\n\x09 * @param AttributeName Name of the attribute to retrieve\n\x09 * @param DefaultValue In case the attribute could not be found\n     * @param OutValue Retrieved attribute value if found, otherwise is set to DefaultValue\n\x09 * @param LookupType Determines how the attribute is retrieved from the specified BoneName (see ECustomBoneAttributeLookup)\n\x09 * @return Whether or not the atttribute was successfully retrieved\n\x09*/" },
		{ "CPP_Default_LookupType", "BoneOnly" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Get integer type attribute value.\n\n@param BoneName Name of the bone to retrieve try and retrieve the attribute from\n@param AttributeName Name of the attribute to retrieve\n@param DefaultValue In case the attribute could not be found\n@param OutValue Retrieved attribute value if found, otherwise is set to DefaultValue\n@param LookupType Determines how the attribute is retrieved from the specified BoneName (see ECustomBoneAttributeLookup)\n@return Whether or not the atttribute was successfully retrieved" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetIntegerAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::SkeletalMeshComponent_eventGetIntegerAttribute_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics
	{
		struct SkeletalMeshComponent_eventGetIntegerAttribute_Ref_Parms
		{
			FName BoneName;
			FName AttributeName;
			int32 OutValue;
			ECustomBoneAttributeLookup LookupType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LookupType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LookupType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetIntegerAttribute_Ref_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetIntegerAttribute_Ref_Parms, AttributeName), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::NewProp_AttributeName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetIntegerAttribute_Ref_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::NewProp_LookupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::NewProp_LookupType = { "LookupType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetIntegerAttribute_Ref_Parms, LookupType), Z_Construct_UEnum_Engine_ECustomBoneAttributeLookup, METADATA_PARAMS(nullptr, 0) }; // 2474496726
	void Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventGetIntegerAttribute_Ref_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventGetIntegerAttribute_Ref_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::NewProp_LookupType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::NewProp_LookupType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomAttributes" },
		{ "Comment", "/** \n\x09 * Get integer type attribute value.\n\n\x09 * @param BoneName Name of the bone to retrieve try and retrieve the attribute from\n\x09 * @param AttributeName Name of the attribute to retrieve\n     * @param OutValue (reference) Retrieved attribute value if found, otherwise is set to DefaultValue\n\x09 * @param LookupType Determines how the attribute is retrieved from the specified BoneName (see ECustomBoneAttributeLookup)\n\x09 * @return Whether or not the atttribute was successfully retrieved\n\x09*/" },
		{ "CPP_Default_LookupType", "BoneOnly" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Get integer type attribute value.\n\n@param BoneName Name of the bone to retrieve try and retrieve the attribute from\n@param AttributeName Name of the attribute to retrieve\n@param OutValue (reference) Retrieved attribute value if found, otherwise is set to DefaultValue\n@param LookupType Determines how the attribute is retrieved from the specified BoneName (see ECustomBoneAttributeLookup)\n@return Whether or not the atttribute was successfully retrieved" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetIntegerAttribute_Ref", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::SkeletalMeshComponent_eventGetIntegerAttribute_Ref_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstanceByTag_Statics
	{
		struct SkeletalMeshComponent_eventGetLinkedAnimGraphInstanceByTag_Parms
		{
			FName InTag;
			UAnimInstance* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstanceByTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetLinkedAnimGraphInstanceByTag_Parms, InTag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstanceByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetLinkedAnimGraphInstanceByTag_Parms, ReturnValue), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstanceByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstanceByTag_Statics::NewProp_InTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstanceByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstanceByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh|Animation Blueprint Linking" },
		{ "Comment", "/**\n\x09 * Returns the a tagged linked instance node. If no linked instances are found or none are tagged with the\n\x09 * supplied name, this will return NULL.\n\x09 */" },
		{ "Keywords", "AnimBlueprint" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Returns the a tagged linked instance node. If no linked instances are found or none are tagged with the\nsupplied name, this will return NULL." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstanceByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetLinkedAnimGraphInstanceByTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstanceByTag_Statics::SkeletalMeshComponent_eventGetLinkedAnimGraphInstanceByTag_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstanceByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstanceByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstanceByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstanceByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstanceByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstanceByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstancesByTag_Statics
	{
		struct SkeletalMeshComponent_eventGetLinkedAnimGraphInstancesByTag_Parms
		{
			FName InTag;
			TArray<UAnimInstance*> OutLinkedInstances;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutLinkedInstances_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutLinkedInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstancesByTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetLinkedAnimGraphInstancesByTag_Parms, InTag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstancesByTag_Statics::NewProp_OutLinkedInstances_Inner = { "OutLinkedInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstancesByTag_Statics::NewProp_OutLinkedInstances = { "OutLinkedInstances", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetLinkedAnimGraphInstancesByTag_Parms, OutLinkedInstances), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstancesByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstancesByTag_Statics::NewProp_InTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstancesByTag_Statics::NewProp_OutLinkedInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstancesByTag_Statics::NewProp_OutLinkedInstances,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstancesByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh|Animation Blueprint Linking" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Tags are unique so this funciton is no longer supported. Please use GetLinkedAnimGraphInstanceByTag instead" },
		{ "Keywords", "AnimBlueprint" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstancesByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetLinkedAnimGraphInstancesByTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstancesByTag_Statics::SkeletalMeshComponent_eventGetLinkedAnimGraphInstancesByTag_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstancesByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstancesByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstancesByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstancesByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstancesByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstancesByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByClass_Statics
	{
		struct SkeletalMeshComponent_eventGetLinkedAnimLayerInstanceByClass_Parms
		{
			TSubclassOf<UAnimInstance>  InClass;
			UAnimInstance* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetLinkedAnimLayerInstanceByClass_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetLinkedAnimLayerInstanceByClass_Parms, ReturnValue), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByClass_Statics::NewProp_InClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh|Animation Blueprint Linking" },
		{ "Comment", "/** Gets the first layer linked instance corresponding to the specified class */" },
		{ "Keywords", "AnimBlueprint" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Gets the first layer linked instance corresponding to the specified class" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetLinkedAnimLayerInstanceByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByClass_Statics::SkeletalMeshComponent_eventGetLinkedAnimLayerInstanceByClass_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByGroup_Statics
	{
		struct SkeletalMeshComponent_eventGetLinkedAnimLayerInstanceByGroup_Parms
		{
			FName InGroup;
			UAnimInstance* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InGroup;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByGroup_Statics::NewProp_InGroup = { "InGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetLinkedAnimLayerInstanceByGroup_Parms, InGroup), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetLinkedAnimLayerInstanceByGroup_Parms, ReturnValue), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByGroup_Statics::NewProp_InGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh|Animation Blueprint Linking" },
		{ "Comment", "/** Gets the layer linked instance corresponding to the specified group */" },
		{ "Keywords", "AnimBlueprint" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Gets the layer linked instance corresponding to the specified group" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetLinkedAnimLayerInstanceByGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByGroup_Statics::SkeletalMeshComponent_eventGetLinkedAnimLayerInstanceByGroup_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetMorphTarget_Statics
	{
		struct SkeletalMeshComponent_eventGetMorphTarget_Parms
		{
			FName MorphTargetName;
			float ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_MorphTargetName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetMorphTarget_Statics::NewProp_MorphTargetName = { "MorphTargetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetMorphTarget_Parms, MorphTargetName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetMorphTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetMorphTarget_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetMorphTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetMorphTarget_Statics::NewProp_MorphTargetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetMorphTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetMorphTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "Comment", "/**\n\x09 * Get Morph target with given name\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Get Morph target with given name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetMorphTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetMorphTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetMorphTarget_Statics::SkeletalMeshComponent_eventGetMorphTarget_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetMorphTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetMorphTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetMorphTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetMorphTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetMorphTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetMorphTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetPlayRate_Statics
	{
		struct SkeletalMeshComponent_eventGetPlayRate_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetPlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetPlayRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetPlayRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetPlayRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Animation" },
		{ "Comment", "/* Animation play functions\n\x09*\n\x09* These changes status of animation instance, which is transient data, which means it won't serialize with this component\n\x09* Because of that reason, it is not safe to be used during construction script\n\x09* Please use OverrideAnimationData for construction script. That will override AnimationData to be serialized\n\x09*/" },
		{ "Keywords", "Animation" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Animation play functions\n      *\n      * These changes status of animation instance, which is transient data, which means it won't serialize with this component\n      * Because of that reason, it is not safe to be used during construction script\n      * Please use OverrideAnimationData for construction script. That will override AnimationData to be serialized" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetPlayRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetPlayRate_Statics::SkeletalMeshComponent_eventGetPlayRate_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetPlayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetPlayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetPosition_Statics
	{
		struct SkeletalMeshComponent_eventGetPosition_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetPosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Animation" },
		{ "Comment", "/* Animation play functions\n\x09*\n\x09* These changes status of animation instance, which is transient data, which means it won't serialize with this component\n\x09* Because of that reason, it is not safe to be used during construction script\n\x09* Please use OverrideAnimationData for construction script. That will override AnimationData to be serialized\n\x09*/" },
		{ "Keywords", "Animation" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Animation play functions\n      *\n      * These changes status of animation instance, which is transient data, which means it won't serialize with this component\n      * Because of that reason, it is not safe to be used during construction script\n      * Please use OverrideAnimationData for construction script. That will override AnimationData to be serialized" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetPosition_Statics::SkeletalMeshComponent_eventGetPosition_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetPostProcessInstance_Statics
	{
		struct SkeletalMeshComponent_eventGetPostProcessInstance_Parms
		{
			UAnimInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetPostProcessInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetPostProcessInstance_Parms, ReturnValue), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetPostProcessInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetPostProcessInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetPostProcessInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "Comment", "/**\n\x09 * Returns the active post process instance is one is available. This is set on the mesh that this\n\x09 * component is using, and is evaluated immediately after the main instance.\n\x09 */" },
		{ "Keywords", "AnimBlueprint" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Returns the active post process instance is one is available. This is set on the mesh that this\ncomponent is using, and is evaluated immediately after the main instance." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetPostProcessInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetPostProcessInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetPostProcessInstance_Statics::SkeletalMeshComponent_eventGetPostProcessInstance_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetPostProcessInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetPostProcessInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetPostProcessInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetPostProcessInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetPostProcessInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetPostProcessInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalCenterOfMass_Statics
	{
		struct SkeletalMeshComponent_eventGetSkeletalCenterOfMass_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalCenterOfMass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetSkeletalCenterOfMass_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalCenterOfMass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalCenterOfMass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalCenterOfMass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/**\n\x09*\x09Returns the center of mass of the skeletal mesh, instead of the root body's location\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Returns the center of mass of the skeletal mesh, instead of the root body's location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalCenterOfMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetSkeletalCenterOfMass", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalCenterOfMass_Statics::SkeletalMeshComponent_eventGetSkeletalCenterOfMass_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalCenterOfMass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalCenterOfMass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalCenterOfMass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalCenterOfMass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalCenterOfMass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalCenterOfMass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalMeshAsset_Statics
	{
		struct SkeletalMeshComponent_eventGetSkeletalMeshAsset_Parms
		{
			USkeletalMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalMeshAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetSkeletalMeshAsset_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalMeshAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalMeshAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalMeshAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "Comment", "/**\n\x09 * Get the SkeletalMesh rendered for this mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Get the SkeletalMesh rendered for this mesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalMeshAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetSkeletalMeshAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalMeshAsset_Statics::SkeletalMeshComponent_eventGetSkeletalMeshAsset_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalMeshAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalMeshAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalMeshAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalMeshAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalMeshAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalMeshAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics
	{
		struct SkeletalMeshComponent_eventGetStringAttribute_Parms
		{
			FName BoneName;
			FName AttributeName;
			FString DefaultValue;
			FString OutValue;
			ECustomBoneAttributeLookup LookupType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LookupType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LookupType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetStringAttribute_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetStringAttribute_Parms, AttributeName), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::NewProp_AttributeName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetStringAttribute_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetStringAttribute_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::NewProp_LookupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::NewProp_LookupType = { "LookupType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetStringAttribute_Parms, LookupType), Z_Construct_UEnum_Engine_ECustomBoneAttributeLookup, METADATA_PARAMS(nullptr, 0) }; // 2474496726
	void Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventGetStringAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventGetStringAttribute_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::NewProp_LookupType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::NewProp_LookupType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomAttributes" },
		{ "Comment", "/** \n\x09 * Get string type attribute value.\n\n\x09 * @param BoneName Name of the bone to retrieve try and retrieve the attribute from\n\x09 * @param AttributeName Name of the attribute to retrieve\n\x09 * @param DefaultValue In case the attribute could not be found\n     * @param OutValue Retrieved attribute value if found, otherwise is set to DefaultValue\n\x09 * @param LookupType Determines how the attribute is retrieved from the specified BoneName (see ECustomBoneAttributeLookup)\n\x09 * @return Whether or not the atttribute was successfully retrieved\n\x09*/" },
		{ "CPP_Default_LookupType", "BoneOnly" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Get string type attribute value.\n\n@param BoneName Name of the bone to retrieve try and retrieve the attribute from\n@param AttributeName Name of the attribute to retrieve\n@param DefaultValue In case the attribute could not be found\n@param OutValue Retrieved attribute value if found, otherwise is set to DefaultValue\n@param LookupType Determines how the attribute is retrieved from the specified BoneName (see ECustomBoneAttributeLookup)\n@return Whether or not the atttribute was successfully retrieved" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetStringAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::SkeletalMeshComponent_eventGetStringAttribute_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics
	{
		struct SkeletalMeshComponent_eventGetStringAttribute_Ref_Parms
		{
			FName BoneName;
			FName AttributeName;
			FString OutValue;
			ECustomBoneAttributeLookup LookupType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LookupType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LookupType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetStringAttribute_Ref_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetStringAttribute_Ref_Parms, AttributeName), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::NewProp_AttributeName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetStringAttribute_Ref_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::NewProp_LookupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::NewProp_LookupType = { "LookupType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetStringAttribute_Ref_Parms, LookupType), Z_Construct_UEnum_Engine_ECustomBoneAttributeLookup, METADATA_PARAMS(nullptr, 0) }; // 2474496726
	void Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventGetStringAttribute_Ref_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventGetStringAttribute_Ref_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::NewProp_LookupType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::NewProp_LookupType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomAttributes" },
		{ "Comment", "/** \n\x09 * Get string type attribute value.\n\n\x09 * @param BoneName Name of the bone to retrieve try and retrieve the attribute from\n\x09 * @param AttributeName Name of the attribute to retrieve\n     * @param OutValue (reference) Retrieved attribute value if found, otherwise is set to DefaultValue\n\x09 * @param LookupType Determines how the attribute is retrieved from the specified BoneName (see ECustomBoneAttributeLookup)\n\x09 * @return Whether or not the atttribute was successfully retrieved\n\x09*/" },
		{ "CPP_Default_LookupType", "BoneOnly" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Get string type attribute value.\n\n@param BoneName Name of the bone to retrieve try and retrieve the attribute from\n@param AttributeName Name of the attribute to retrieve\n@param OutValue (reference) Retrieved attribute value if found, otherwise is set to DefaultValue\n@param LookupType Determines how the attribute is retrieved from the specified BoneName (see ECustomBoneAttributeLookup)\n@return Whether or not the atttribute was successfully retrieved" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetStringAttribute_Ref", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::SkeletalMeshComponent_eventGetStringAttribute_Ref_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportDistanceThreshold_Statics
	{
		struct SkeletalMeshComponent_eventGetTeleportDistanceThreshold_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportDistanceThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetTeleportDistanceThreshold_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportDistanceThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportDistanceThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportDistanceThreshold_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Clothing" },
		{ "Comment", "/**\n\x09* Gets the teleportation distance threshold.\n\x09* \n\x09* @return Threshold value.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Gets the teleportation distance threshold.\n\n@return Threshold value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportDistanceThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetTeleportDistanceThreshold", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportDistanceThreshold_Statics::SkeletalMeshComponent_eventGetTeleportDistanceThreshold_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportDistanceThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportDistanceThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportDistanceThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportDistanceThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportDistanceThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportDistanceThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportRotationThreshold_Statics
	{
		struct SkeletalMeshComponent_eventGetTeleportRotationThreshold_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportRotationThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetTeleportRotationThreshold_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportRotationThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportRotationThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportRotationThreshold_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Clothing" },
		{ "Comment", "/**\n\x09* Gets the teleportation rotation threshold.\n\x09* \n\x09* @return Threshold in degrees.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Gets the teleportation rotation threshold.\n\n@return Threshold in degrees." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportRotationThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetTeleportRotationThreshold", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportRotationThreshold_Statics::SkeletalMeshComponent_eventGetTeleportRotationThreshold_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportRotationThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportRotationThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportRotationThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportRotationThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportRotationThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportRotationThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics
	{
		struct SkeletalMeshComponent_eventGetTransformAttribute_Parms
		{
			FName BoneName;
			FName AttributeName;
			FTransform DefaultValue;
			FTransform OutValue;
			ECustomBoneAttributeLookup LookupType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LookupType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LookupType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetTransformAttribute_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetTransformAttribute_Parms, AttributeName), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::NewProp_AttributeName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetTransformAttribute_Parms, DefaultValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetTransformAttribute_Parms, OutValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::NewProp_LookupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::NewProp_LookupType = { "LookupType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetTransformAttribute_Parms, LookupType), Z_Construct_UEnum_Engine_ECustomBoneAttributeLookup, METADATA_PARAMS(nullptr, 0) }; // 2474496726
	void Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventGetTransformAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventGetTransformAttribute_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::NewProp_LookupType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::NewProp_LookupType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomAttributes" },
		{ "Comment", "/**\n\x09 * Get FTransform type attribute value.\n\n\x09 * @param BoneName Name of the bone to retrieve try and retrieve the attribute from\n\x09 * @param AttributeName Name of the attribute to retrieve\n\x09 * @param OutValue (reference) Retrieved attribute value if found, otherwise is set to DefaultValue\n\x09 * @param LookupType Determines how the attribute is retrieved from the specified BoneName (see ECustomBoneAttributeLookup)\n\x09 * @return Whether or not the atttribute was successfully retrieved\n\x09*/" },
		{ "CPP_Default_LookupType", "BoneOnly" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Get FTransform type attribute value.\n\n@param BoneName Name of the bone to retrieve try and retrieve the attribute from\n@param AttributeName Name of the attribute to retrieve\n@param OutValue (reference) Retrieved attribute value if found, otherwise is set to DefaultValue\n@param LookupType Determines how the attribute is retrieved from the specified BoneName (see ECustomBoneAttributeLookup)\n@return Whether or not the atttribute was successfully retrieved" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetTransformAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::SkeletalMeshComponent_eventGetTransformAttribute_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics
	{
		struct SkeletalMeshComponent_eventGetTransformAttribute_Ref_Parms
		{
			FName BoneName;
			FName AttributeName;
			FTransform OutValue;
			ECustomBoneAttributeLookup LookupType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LookupType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LookupType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetTransformAttribute_Ref_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetTransformAttribute_Ref_Parms, AttributeName), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::NewProp_AttributeName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetTransformAttribute_Ref_Parms, OutValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::NewProp_LookupType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::NewProp_LookupType = { "LookupType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventGetTransformAttribute_Ref_Parms, LookupType), Z_Construct_UEnum_Engine_ECustomBoneAttributeLookup, METADATA_PARAMS(nullptr, 0) }; // 2474496726
	void Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventGetTransformAttribute_Ref_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventGetTransformAttribute_Ref_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::NewProp_OutValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::NewProp_LookupType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::NewProp_LookupType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomAttributes" },
		{ "Comment", "/** \n\x09 * Get FTransform type attribute value.\n\n\x09 * @param BoneName Name of the bone to retrieve try and retrieve the attribute from\n\x09 * @param AttributeName Name of the attribute to retrieve\n     * @param OutValue (reference) Retrieved attribute value if found, otherwise is set to DefaultValue\n\x09 * @param LookupType Determines how the attribute is retrieved from the specified BoneName (see ECustomBoneAttributeLookup)\n\x09 * @return Whether or not the atttribute was successfully retrieved\n\x09*/" },
		{ "CPP_Default_LookupType", "BoneOnly" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Get FTransform type attribute value.\n\n@param BoneName Name of the bone to retrieve try and retrieve the attribute from\n@param AttributeName Name of the attribute to retrieve\n@param OutValue (reference) Retrieved attribute value if found, otherwise is set to DefaultValue\n@param LookupType Determines how the attribute is retrieved from the specified BoneName (see ECustomBoneAttributeLookup)\n@return Whether or not the atttribute was successfully retrieved" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "GetTransformAttribute_Ref", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::SkeletalMeshComponent_eventGetTransformAttribute_Ref_Parms), Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_HasValidAnimationInstance_Statics
	{
		struct SkeletalMeshComponent_eventHasValidAnimationInstance_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkeletalMeshComponent_HasValidAnimationInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventHasValidAnimationInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_HasValidAnimationInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventHasValidAnimationInstance_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_HasValidAnimationInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_HasValidAnimationInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_HasValidAnimationInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_HasValidAnimationInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "Comment", "/** \n\x09 * Returns whether there are any valid instances to run, currently this means whether we have\n\x09 * have an animation instance or a post process instance available to process.\n\x09 */" },
		{ "Keywords", "AnimBlueprint" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Returns whether there are any valid instances to run, currently this means whether we have\nhave an animation instance or a post process instance available to process." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_HasValidAnimationInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "HasValidAnimationInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_HasValidAnimationInstance_Statics::SkeletalMeshComponent_eventHasValidAnimationInstance_Parms), Z_Construct_UFunction_USkeletalMeshComponent_HasValidAnimationInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_HasValidAnimationInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_HasValidAnimationInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_HasValidAnimationInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_HasValidAnimationInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_HasValidAnimationInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_IsBodyGravityEnabled_Statics
	{
		struct SkeletalMeshComponent_eventIsBodyGravityEnabled_Parms
		{
			FName BoneName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_IsBodyGravityEnabled_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventIsBodyGravityEnabled_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_IsBodyGravityEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventIsBodyGravityEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_IsBodyGravityEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventIsBodyGravityEnabled_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_IsBodyGravityEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_IsBodyGravityEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_IsBodyGravityEnabled_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_IsBodyGravityEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_IsBodyGravityEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/**\n\x09 *\x09""Checks whether or not gravity is enabled on the given bone.\n\x09 *\x09NAME_None indicates the root body should be queried.\n\x09 *\x09If the bone name given is otherwise invalid, false is returned.\n\x09 *\n\x09 *\x09@param BoneName\x09The name of the bone to check.\n\x09 *\x09@return True if gravity is enabled on the bone.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Checks whether or not gravity is enabled on the given bone.\nNAME_None indicates the root body should be queried.\nIf the bone name given is otherwise invalid, false is returned.\n\n@param BoneName The name of the bone to check.\n@return True if gravity is enabled on the bone." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_IsBodyGravityEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "IsBodyGravityEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_IsBodyGravityEnabled_Statics::SkeletalMeshComponent_eventIsBodyGravityEnabled_Parms), Z_Construct_UFunction_USkeletalMeshComponent_IsBodyGravityEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_IsBodyGravityEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_IsBodyGravityEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_IsBodyGravityEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_IsBodyGravityEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_IsBodyGravityEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_IsClothingSimulationSuspended_Statics
	{
		struct SkeletalMeshComponent_eventIsClothingSimulationSuspended_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkeletalMeshComponent_IsClothingSimulationSuspended_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventIsClothingSimulationSuspended_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_IsClothingSimulationSuspended_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventIsClothingSimulationSuspended_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_IsClothingSimulationSuspended_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_IsClothingSimulationSuspended_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_IsClothingSimulationSuspended_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_IsClothingSimulationSuspended_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clothing" },
		{ "Comment", "/** Gets whether or not the clothing simulation is currently suspended */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Gets whether or not the clothing simulation is currently suspended" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_IsClothingSimulationSuspended_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "IsClothingSimulationSuspended", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_IsClothingSimulationSuspended_Statics::SkeletalMeshComponent_eventIsClothingSimulationSuspended_Parms), Z_Construct_UFunction_USkeletalMeshComponent_IsClothingSimulationSuspended_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_IsClothingSimulationSuspended_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_IsClothingSimulationSuspended_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_IsClothingSimulationSuspended_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_IsClothingSimulationSuspended()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_IsClothingSimulationSuspended_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_IsPlaying_Statics
	{
		struct SkeletalMeshComponent_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkeletalMeshComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventIsPlaying_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_IsPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Animation" },
		{ "Comment", "/* Animation play functions\n\x09*\n\x09* These changes status of animation instance, which is transient data, which means it won't serialize with this component\n\x09* Because of that reason, it is not safe to be used during construction script\n\x09* Please use OverrideAnimationData for construction script. That will override AnimationData to be serialized\n\x09*/" },
		{ "Keywords", "Animation" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Animation play functions\n      *\n      * These changes status of animation instance, which is transient data, which means it won't serialize with this component\n      * Because of that reason, it is not safe to be used during construction script\n      * Please use OverrideAnimationData for construction script. That will override AnimationData to be serialized" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "IsPlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_IsPlaying_Statics::SkeletalMeshComponent_eventIsPlaying_Parms), Z_Construct_UFunction_USkeletalMeshComponent_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics
	{
		struct SkeletalMeshComponent_eventK2_GetClosestPointOnPhysicsAsset_Parms
		{
			FVector WorldPosition;
			FVector ClosestWorldPosition;
			FVector Normal;
			FName BoneName;
			float Distance;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClosestWorldPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics::NewProp_WorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventK2_GetClosestPointOnPhysicsAsset_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics::NewProp_WorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics::NewProp_WorldPosition_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics::NewProp_ClosestWorldPosition = { "ClosestWorldPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventK2_GetClosestPointOnPhysicsAsset_Parms, ClosestWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventK2_GetClosestPointOnPhysicsAsset_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventK2_GetClosestPointOnPhysicsAsset_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventK2_GetClosestPointOnPhysicsAsset_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventK2_GetClosestPointOnPhysicsAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventK2_GetClosestPointOnPhysicsAsset_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics::NewProp_WorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics::NewProp_ClosestWorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "Comment", "/** \n\x09 *\x09Given a world position, find the closest point on the physics asset. Note that this is independent of collision and welding. This is based purely on animation position\n\x09 *  @param\x09WorldPosition\x09\x09\x09\x09The point we want the closest point to (i.e. for all bodies in the physics asset, find the one that has a point closest to WorldPosition)\n\x09 *  @param\x09""ClosestPointOnPhysicsAsset\x09The data associated with the closest point (position, normal, etc...)\n\x09 *  @return\x09true if we found a closest point\n\x09 */" },
		{ "DisplayName", "Get Closest Point On Physics Asset" },
		{ "Keywords", "closest point" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ScriptName", "GetClosestPointOnPhysicsAsset" },
		{ "ToolTip", "Given a world position, find the closest point on the physics asset. Note that this is independent of collision and welding. This is based purely on animation position\n@param      WorldPosition                           The point we want the closest point to (i.e. for all bodies in the physics asset, find the one that has a point closest to WorldPosition)\n@param      ClosestPointOnPhysicsAsset      The data associated with the closest point (position, normal, etc...)\n@return     true if we found a closest point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "K2_GetClosestPointOnPhysicsAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics::SkeletalMeshComponent_eventK2_GetClosestPointOnPhysicsAsset_Parms), Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimClassLayers_Statics
	{
		struct SkeletalMeshComponent_eventLinkAnimClassLayers_Parms
		{
			TSubclassOf<UAnimInstance>  InClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimClassLayers_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventLinkAnimClassLayers_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimClassLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimClassLayers_Statics::NewProp_InClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimClassLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh|Animation Blueprint Linking" },
		{ "Comment", "/** \n\x09 * Runs through all layer nodes, attempting to find layer nodes that are implemented by the specified class, then sets up a linked instance of the class for each.\n\x09 * Allocates one linked instance to run each of the groups specified in the class, so state is shared. If a layer is not grouped (ie. NAME_None), then state is not shared\n\x09 * and a separate linked instance is allocated for each layer node.\n\x09 * If InClass is null, then all layers are reset to their defaults.\n\x09 */" },
		{ "Keywords", "AnimBlueprint" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Runs through all layer nodes, attempting to find layer nodes that are implemented by the specified class, then sets up a linked instance of the class for each.\nAllocates one linked instance to run each of the groups specified in the class, so state is shared. If a layer is not grouped (ie. NAME_None), then state is not shared\nand a separate linked instance is allocated for each layer node.\nIf InClass is null, then all layers are reset to their defaults." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimClassLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "LinkAnimClassLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimClassLayers_Statics::SkeletalMeshComponent_eventLinkAnimClassLayers_Parms), Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimClassLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimClassLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimClassLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimClassLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimClassLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimClassLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimGraphByTag_Statics
	{
		struct SkeletalMeshComponent_eventLinkAnimGraphByTag_Parms
		{
			FName InTag;
			TSubclassOf<UAnimInstance>  InClass;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InTag;
		static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimGraphByTag_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventLinkAnimGraphByTag_Parms, InTag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimGraphByTag_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventLinkAnimGraphByTag_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimGraphByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimGraphByTag_Statics::NewProp_InTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimGraphByTag_Statics::NewProp_InClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimGraphByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh|Animation Blueprint Linking" },
		{ "Comment", "/** Runs through all nodes, attempting to find linked instance by name/tag, then sets the class of each node if the tag matches */" },
		{ "Keywords", "AnimBlueprint" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Runs through all nodes, attempting to find linked instance by name/tag, then sets the class of each node if the tag matches" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimGraphByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "LinkAnimGraphByTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimGraphByTag_Statics::SkeletalMeshComponent_eventLinkAnimGraphByTag_Parms), Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimGraphByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimGraphByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimGraphByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimGraphByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimGraphByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimGraphByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_OverrideAnimationData_Statics
	{
		struct SkeletalMeshComponent_eventOverrideAnimationData_Parms
		{
			UAnimationAsset* InAnimToPlay;
			bool bIsLooping;
			bool bIsPlaying;
			float Position;
			float PlayRate;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimToPlay;
		static void NewProp_bIsLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLooping;
		static void NewProp_bIsPlaying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlaying;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Position;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_OverrideAnimationData_Statics::NewProp_InAnimToPlay = { "InAnimToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventOverrideAnimationData_Parms, InAnimToPlay), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_OverrideAnimationData_Statics::NewProp_bIsLooping_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventOverrideAnimationData_Parms*)Obj)->bIsLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_OverrideAnimationData_Statics::NewProp_bIsLooping = { "bIsLooping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventOverrideAnimationData_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_OverrideAnimationData_Statics::NewProp_bIsLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_OverrideAnimationData_Statics::NewProp_bIsPlaying_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventOverrideAnimationData_Parms*)Obj)->bIsPlaying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_OverrideAnimationData_Statics::NewProp_bIsPlaying = { "bIsPlaying", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventOverrideAnimationData_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_OverrideAnimationData_Statics::NewProp_bIsPlaying_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_OverrideAnimationData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventOverrideAnimationData_Parms, Position), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_OverrideAnimationData_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventOverrideAnimationData_Parms, PlayRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_OverrideAnimationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_OverrideAnimationData_Statics::NewProp_InAnimToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_OverrideAnimationData_Statics::NewProp_bIsLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_OverrideAnimationData_Statics::NewProp_bIsPlaying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_OverrideAnimationData_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_OverrideAnimationData_Statics::NewProp_PlayRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_OverrideAnimationData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Animation" },
		{ "Comment", "/**\n\x09 * This overrides current AnimationData parameter in the SkeletalMeshComponent. This will serialize when the component serialize\n\x09 * so it can be used during construction script. However note that this will override current existing data\n\x09 * This can be useful if you'd like to make a blueprint with custom default animation per component\n\x09 * This sets single player mode, which means you can't use AnimBlueprint with it\n\x09 */" },
		{ "CPP_Default_bIsLooping", "true" },
		{ "CPP_Default_bIsPlaying", "true" },
		{ "CPP_Default_PlayRate", "1.000000" },
		{ "CPP_Default_Position", "0.000000" },
		{ "Keywords", "Animation" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "This overrides current AnimationData parameter in the SkeletalMeshComponent. This will serialize when the component serialize\nso it can be used during construction script. However note that this will override current existing data\nThis can be useful if you'd like to make a blueprint with custom default animation per component\nThis sets single player mode, which means you can't use AnimBlueprint with it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_OverrideAnimationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "OverrideAnimationData", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_OverrideAnimationData_Statics::SkeletalMeshComponent_eventOverrideAnimationData_Parms), Z_Construct_UFunction_USkeletalMeshComponent_OverrideAnimationData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_OverrideAnimationData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_OverrideAnimationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_OverrideAnimationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_OverrideAnimationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_OverrideAnimationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_Play_Statics
	{
		struct SkeletalMeshComponent_eventPlay_Parms
		{
			bool bLooping;
		};
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkeletalMeshComponent_Play_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventPlay_Parms*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_Play_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventPlay_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_Play_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_Play_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_Play_Statics::NewProp_bLooping,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Animation" },
		{ "Comment", "/* Animation play functions\n\x09*\n\x09* These changes status of animation instance, which is transient data, which means it won't serialize with this component\n\x09* Because of that reason, it is not safe to be used during construction script\n\x09* Please use OverrideAnimationData for construction script. That will override AnimationData to be serialized\n\x09*/" },
		{ "Keywords", "Animation" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Animation play functions\n      *\n      * These changes status of animation instance, which is transient data, which means it won't serialize with this component\n      * Because of that reason, it is not safe to be used during construction script\n      * Please use OverrideAnimationData for construction script. That will override AnimationData to be serialized" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "Play", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_Play_Statics::SkeletalMeshComponent_eventPlay_Parms), Z_Construct_UFunction_USkeletalMeshComponent_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_PlayAnimation_Statics
	{
		struct SkeletalMeshComponent_eventPlayAnimation_Parms
		{
			UAnimationAsset* NewAnimToPlay;
			bool bLooping;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAnimToPlay;
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_PlayAnimation_Statics::NewProp_NewAnimToPlay = { "NewAnimToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventPlayAnimation_Parms, NewAnimToPlay), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_PlayAnimation_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventPlayAnimation_Parms*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_PlayAnimation_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventPlayAnimation_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_PlayAnimation_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_PlayAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_PlayAnimation_Statics::NewProp_NewAnimToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_PlayAnimation_Statics::NewProp_bLooping,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_PlayAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Animation" },
		{ "Comment", "/* Animation play functions\n\x09 *\n\x09 * These changes status of animation instance, which is transient data, which means it won't serialize with this component\n\x09 * Because of that reason, it is not safe to be used during construction script\n\x09 * Please use OverrideAnimationData for construction script. That will override AnimationData to be serialized \n\x09 */" },
		{ "Keywords", "Animation" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Animation play functions\n       *\n       * These changes status of animation instance, which is transient data, which means it won't serialize with this component\n       * Because of that reason, it is not safe to be used during construction script\n       * Please use OverrideAnimationData for construction script. That will override AnimationData to be serialized" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_PlayAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "PlayAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_PlayAnimation_Statics::SkeletalMeshComponent_eventPlayAnimation_Parms), Z_Construct_UFunction_USkeletalMeshComponent_PlayAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_PlayAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_PlayAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_PlayAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_PlayAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_PlayAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_ResetAllBodiesSimulatePhysics_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_ResetAllBodiesSimulatePhysics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Allows you to reset bodies Simulate state based on where bUsePhysics is set to true in the BodySetup. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Allows you to reset bodies Simulate state based on where bUsePhysics is set to true in the BodySetup." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_ResetAllBodiesSimulatePhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "ResetAllBodiesSimulatePhysics", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_ResetAllBodiesSimulatePhysics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_ResetAllBodiesSimulatePhysics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_ResetAllBodiesSimulatePhysics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_ResetAllBodiesSimulatePhysics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_ResetAllowedAnimCurveEvaluation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_ResetAllowedAnimCurveEvaluation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "Comment", "/** By reset, it will allow all the curves to be evaluated */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "By reset, it will allow all the curves to be evaluated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_ResetAllowedAnimCurveEvaluation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "ResetAllowedAnimCurveEvaluation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_ResetAllowedAnimCurveEvaluation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_ResetAllowedAnimCurveEvaluation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_ResetAllowedAnimCurveEvaluation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_ResetAllowedAnimCurveEvaluation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_ResetAnimInstanceDynamics_Statics
	{
		struct SkeletalMeshComponent_eventResetAnimInstanceDynamics_Parms
		{
			ETeleportType InTeleportType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InTeleportType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InTeleportType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_ResetAnimInstanceDynamics_Statics::NewProp_InTeleportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_ResetAnimInstanceDynamics_Statics::NewProp_InTeleportType = { "InTeleportType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventResetAnimInstanceDynamics_Parms, InTeleportType), Z_Construct_UEnum_Engine_ETeleportType, METADATA_PARAMS(nullptr, 0) }; // 252955233
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_ResetAnimInstanceDynamics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_ResetAnimInstanceDynamics_Statics::NewProp_InTeleportType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_ResetAnimInstanceDynamics_Statics::NewProp_InTeleportType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_ResetAnimInstanceDynamics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "Comment", "/**\n\x09 * Informs any active anim instances (main instance, linked instances, post instance) that a dynamics reset is required\n\x09 * for example if a teleport occurs.\n\x09 */" },
		{ "CPP_Default_InTeleportType", "ResetPhysics" },
		{ "Keywords", "Dynamics,Physics" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Informs any active anim instances (main instance, linked instances, post instance) that a dynamics reset is required\nfor example if a teleport occurs." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_ResetAnimInstanceDynamics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "ResetAnimInstanceDynamics", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_ResetAnimInstanceDynamics_Statics::SkeletalMeshComponent_eventResetAnimInstanceDynamics_Parms), Z_Construct_UFunction_USkeletalMeshComponent_ResetAnimInstanceDynamics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_ResetAnimInstanceDynamics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_ResetAnimInstanceDynamics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_ResetAnimInstanceDynamics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_ResetAnimInstanceDynamics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_ResetAnimInstanceDynamics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_ResetClothTeleportMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_ResetClothTeleportMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clothing" },
		{ "Comment", "/**\n\x09 * Reset the teleport mode of a next update to 'Continuous'\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Reset the teleport mode of a next update to 'Continuous'" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_ResetClothTeleportMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "ResetClothTeleportMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_ResetClothTeleportMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_ResetClothTeleportMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_ResetClothTeleportMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_ResetClothTeleportMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_ResumeClothingSimulation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_ResumeClothingSimulation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clothing" },
		{ "Comment", "/** Resumes a previously suspended clothing simulation, teleporting the clothing on the next tick */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Resumes a previously suspended clothing simulation, teleporting the clothing on the next tick" },
		{ "UnsafeDuringActorConstruction", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_ResumeClothingSimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "ResumeClothingSimulation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_ResumeClothingSimulation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_ResumeClothingSimulation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_ResumeClothingSimulation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_ResumeClothingSimulation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowLinearVelocity_Statics
	{
		struct SkeletalMeshComponent_eventSetAllBodiesBelowLinearVelocity_Parms
		{
			FName InBoneName;
			FVector LinearVelocity;
			bool bIncludeSelf;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
		static void NewProp_bIncludeSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeSelf;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowLinearVelocity_Statics::NewProp_InBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowLinearVelocity_Statics::NewProp_InBoneName = { "InBoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetAllBodiesBelowLinearVelocity_Parms, InBoneName), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowLinearVelocity_Statics::NewProp_InBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowLinearVelocity_Statics::NewProp_InBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowLinearVelocity_Statics::NewProp_LinearVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowLinearVelocity_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetAllBodiesBelowLinearVelocity_Parms, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowLinearVelocity_Statics::NewProp_LinearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowLinearVelocity_Statics::NewProp_LinearVelocity_MetaData)) };
	void Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowLinearVelocity_Statics::NewProp_bIncludeSelf_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetAllBodiesBelowLinearVelocity_Parms*)Obj)->bIncludeSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowLinearVelocity_Statics::NewProp_bIncludeSelf = { "bIncludeSelf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetAllBodiesBelowLinearVelocity_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowLinearVelocity_Statics::NewProp_bIncludeSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowLinearVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowLinearVelocity_Statics::NewProp_InBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowLinearVelocity_Statics::NewProp_LinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowLinearVelocity_Statics::NewProp_bIncludeSelf,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowLinearVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** set the linear velocity of the child bodies to match that of the given parent bone */" },
		{ "CPP_Default_bIncludeSelf", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "set the linear velocity of the child bodies to match that of the given parent bone" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowLinearVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetAllBodiesBelowLinearVelocity", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowLinearVelocity_Statics::SkeletalMeshComponent_eventSetAllBodiesBelowLinearVelocity_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowLinearVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowLinearVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowLinearVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowLinearVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowLinearVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowLinearVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Statics
	{
		struct SkeletalMeshComponent_eventSetAllBodiesBelowPhysicsBlendWeight_Parms
		{
			FName InBoneName;
			float PhysicsBlendWeight;
			bool bSkipCustomPhysicsType;
			bool bIncludeSelf;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InBoneName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PhysicsBlendWeight;
		static void NewProp_bSkipCustomPhysicsType_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipCustomPhysicsType;
		static void NewProp_bIncludeSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeSelf;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Statics::NewProp_InBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Statics::NewProp_InBoneName = { "InBoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetAllBodiesBelowPhysicsBlendWeight_Parms, InBoneName), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Statics::NewProp_InBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Statics::NewProp_InBoneName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Statics::NewProp_PhysicsBlendWeight = { "PhysicsBlendWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetAllBodiesBelowPhysicsBlendWeight_Parms, PhysicsBlendWeight), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Statics::NewProp_bSkipCustomPhysicsType_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetAllBodiesBelowPhysicsBlendWeight_Parms*)Obj)->bSkipCustomPhysicsType = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Statics::NewProp_bSkipCustomPhysicsType = { "bSkipCustomPhysicsType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetAllBodiesBelowPhysicsBlendWeight_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Statics::NewProp_bSkipCustomPhysicsType_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Statics::NewProp_bIncludeSelf_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetAllBodiesBelowPhysicsBlendWeight_Parms*)Obj)->bIncludeSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Statics::NewProp_bIncludeSelf = { "bIncludeSelf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetAllBodiesBelowPhysicsBlendWeight_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Statics::NewProp_bIncludeSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Statics::NewProp_InBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Statics::NewProp_PhysicsBlendWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Statics::NewProp_bSkipCustomPhysicsType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Statics::NewProp_bIncludeSelf,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Set all of the bones below passed in bone to be simulated */" },
		{ "CPP_Default_bIncludeSelf", "true" },
		{ "CPP_Default_bSkipCustomPhysicsType", "false" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Set all of the bones below passed in bone to be simulated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetAllBodiesBelowPhysicsBlendWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Statics::SkeletalMeshComponent_eventSetAllBodiesBelowPhysicsBlendWeight_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsDisabled_Statics
	{
		struct SkeletalMeshComponent_eventSetAllBodiesBelowPhysicsDisabled_Parms
		{
			FName InBoneName;
			bool bDisabled;
			bool bIncludeSelf;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InBoneName;
		static void NewProp_bDisabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisabled;
		static void NewProp_bIncludeSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeSelf;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsDisabled_Statics::NewProp_InBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsDisabled_Statics::NewProp_InBoneName = { "InBoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetAllBodiesBelowPhysicsDisabled_Parms, InBoneName), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsDisabled_Statics::NewProp_InBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsDisabled_Statics::NewProp_InBoneName_MetaData)) };
	void Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsDisabled_Statics::NewProp_bDisabled_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetAllBodiesBelowPhysicsDisabled_Parms*)Obj)->bDisabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsDisabled_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetAllBodiesBelowPhysicsDisabled_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsDisabled_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsDisabled_Statics::NewProp_bIncludeSelf_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetAllBodiesBelowPhysicsDisabled_Parms*)Obj)->bIncludeSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsDisabled_Statics::NewProp_bIncludeSelf = { "bIncludeSelf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetAllBodiesBelowPhysicsDisabled_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsDisabled_Statics::NewProp_bIncludeSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsDisabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsDisabled_Statics::NewProp_InBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsDisabled_Statics::NewProp_bDisabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsDisabled_Statics::NewProp_bIncludeSelf,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsDisabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** [WARNING: Chaos Only] \n\x09* Set all of the bones below passed in bone to be disabled or not for the associated physics solver \n\x09* Bodies will not be colliding or be part of the physics simulation. \n\x09* This is different from SetAllBodiesBelowSimulatePhysics that changes bodies to Kinematic/simulated \x09\n\x09*/" },
		{ "CPP_Default_bIncludeSelf", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "[WARNING: Chaos Only]\nSet all of the bones below passed in bone to be disabled or not for the associated physics solver\nBodies will not be colliding or be part of the physics simulation.\nThis is different from SetAllBodiesBelowSimulatePhysics that changes bodies to Kinematic/simulated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetAllBodiesBelowPhysicsDisabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsDisabled_Statics::SkeletalMeshComponent_eventSetAllBodiesBelowPhysicsDisabled_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsDisabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Statics
	{
		struct SkeletalMeshComponent_eventSetAllBodiesBelowSimulatePhysics_Parms
		{
			FName InBoneName;
			bool bNewSimulate;
			bool bIncludeSelf;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InBoneName;
		static void NewProp_bNewSimulate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewSimulate;
		static void NewProp_bIncludeSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeSelf;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Statics::NewProp_InBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Statics::NewProp_InBoneName = { "InBoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetAllBodiesBelowSimulatePhysics_Parms, InBoneName), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Statics::NewProp_InBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Statics::NewProp_InBoneName_MetaData)) };
	void Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Statics::NewProp_bNewSimulate_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetAllBodiesBelowSimulatePhysics_Parms*)Obj)->bNewSimulate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Statics::NewProp_bNewSimulate = { "bNewSimulate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetAllBodiesBelowSimulatePhysics_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Statics::NewProp_bNewSimulate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Statics::NewProp_bIncludeSelf_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetAllBodiesBelowSimulatePhysics_Parms*)Obj)->bIncludeSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Statics::NewProp_bIncludeSelf = { "bIncludeSelf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetAllBodiesBelowSimulatePhysics_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Statics::NewProp_bIncludeSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Statics::NewProp_InBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Statics::NewProp_bNewSimulate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Statics::NewProp_bIncludeSelf,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Set all of the bones below passed in bone to be simulated */" },
		{ "CPP_Default_bIncludeSelf", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Set all of the bones below passed in bone to be simulated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetAllBodiesBelowSimulatePhysics", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Statics::SkeletalMeshComponent_eventSetAllBodiesBelowSimulatePhysics_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight_Statics
	{
		struct SkeletalMeshComponent_eventSetAllBodiesPhysicsBlendWeight_Parms
		{
			float PhysicsBlendWeight;
			bool bSkipCustomPhysicsType;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PhysicsBlendWeight;
		static void NewProp_bSkipCustomPhysicsType_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipCustomPhysicsType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight_Statics::NewProp_PhysicsBlendWeight = { "PhysicsBlendWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetAllBodiesPhysicsBlendWeight_Parms, PhysicsBlendWeight), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight_Statics::NewProp_bSkipCustomPhysicsType_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetAllBodiesPhysicsBlendWeight_Parms*)Obj)->bSkipCustomPhysicsType = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight_Statics::NewProp_bSkipCustomPhysicsType = { "bSkipCustomPhysicsType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetAllBodiesPhysicsBlendWeight_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight_Statics::NewProp_bSkipCustomPhysicsType_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight_Statics::NewProp_PhysicsBlendWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight_Statics::NewProp_bSkipCustomPhysicsType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "CPP_Default_bSkipCustomPhysicsType", "false" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetAllBodiesPhysicsBlendWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight_Statics::SkeletalMeshComponent_eventSetAllBodiesPhysicsBlendWeight_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesSimulatePhysics_Statics
	{
		struct SkeletalMeshComponent_eventSetAllBodiesSimulatePhysics_Parms
		{
			bool bNewSimulate;
		};
		static void NewProp_bNewSimulate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewSimulate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesSimulatePhysics_Statics::NewProp_bNewSimulate_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetAllBodiesSimulatePhysics_Parms*)Obj)->bNewSimulate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesSimulatePhysics_Statics::NewProp_bNewSimulate = { "bNewSimulate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetAllBodiesSimulatePhysics_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesSimulatePhysics_Statics::NewProp_bNewSimulate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesSimulatePhysics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesSimulatePhysics_Statics::NewProp_bNewSimulate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesSimulatePhysics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Set bSimulatePhysics to true for all bone bodies. Does not change the component bSimulatePhysics flag. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Set bSimulatePhysics to true for all bone bodies. Does not change the component bSimulatePhysics flag." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesSimulatePhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetAllBodiesSimulatePhysics", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesSimulatePhysics_Statics::SkeletalMeshComponent_eventSetAllBodiesSimulatePhysics_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesSimulatePhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesSimulatePhysics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesSimulatePhysics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesSimulatePhysics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesSimulatePhysics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesSimulatePhysics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularDriveParams_Statics
	{
		struct SkeletalMeshComponent_eventSetAllMotorsAngularDriveParams_Parms
		{
			float InSpring;
			float InDamping;
			float InForceLimit;
			bool bSkipCustomPhysicsType;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InSpring;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDamping;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InForceLimit;
		static void NewProp_bSkipCustomPhysicsType_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipCustomPhysicsType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularDriveParams_Statics::NewProp_InSpring = { "InSpring", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetAllMotorsAngularDriveParams_Parms, InSpring), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularDriveParams_Statics::NewProp_InDamping = { "InDamping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetAllMotorsAngularDriveParams_Parms, InDamping), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularDriveParams_Statics::NewProp_InForceLimit = { "InForceLimit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetAllMotorsAngularDriveParams_Parms, InForceLimit), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularDriveParams_Statics::NewProp_bSkipCustomPhysicsType_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetAllMotorsAngularDriveParams_Parms*)Obj)->bSkipCustomPhysicsType = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularDriveParams_Statics::NewProp_bSkipCustomPhysicsType = { "bSkipCustomPhysicsType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetAllMotorsAngularDriveParams_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularDriveParams_Statics::NewProp_bSkipCustomPhysicsType_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularDriveParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularDriveParams_Statics::NewProp_InSpring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularDriveParams_Statics::NewProp_InDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularDriveParams_Statics::NewProp_InForceLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularDriveParams_Statics::NewProp_bSkipCustomPhysicsType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularDriveParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Set Angular Drive motors params for all constraint instances */" },
		{ "CPP_Default_bSkipCustomPhysicsType", "false" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Set Angular Drive motors params for all constraint instances" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularDriveParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetAllMotorsAngularDriveParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularDriveParams_Statics::SkeletalMeshComponent_eventSetAllMotorsAngularDriveParams_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularDriveParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularDriveParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularDriveParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularDriveParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularDriveParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularDriveParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Statics
	{
		struct SkeletalMeshComponent_eventSetAllMotorsAngularPositionDrive_Parms
		{
			bool bEnableSwingDrive;
			bool bEnableTwistDrive;
			bool bSkipCustomPhysicsType;
		};
		static void NewProp_bEnableSwingDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSwingDrive;
		static void NewProp_bEnableTwistDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistDrive;
		static void NewProp_bSkipCustomPhysicsType_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipCustomPhysicsType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Statics::NewProp_bEnableSwingDrive_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetAllMotorsAngularPositionDrive_Parms*)Obj)->bEnableSwingDrive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Statics::NewProp_bEnableSwingDrive = { "bEnableSwingDrive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetAllMotorsAngularPositionDrive_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Statics::NewProp_bEnableSwingDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Statics::NewProp_bEnableTwistDrive_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetAllMotorsAngularPositionDrive_Parms*)Obj)->bEnableTwistDrive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Statics::NewProp_bEnableTwistDrive = { "bEnableTwistDrive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetAllMotorsAngularPositionDrive_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Statics::NewProp_bEnableTwistDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Statics::NewProp_bSkipCustomPhysicsType_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetAllMotorsAngularPositionDrive_Parms*)Obj)->bSkipCustomPhysicsType = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Statics::NewProp_bSkipCustomPhysicsType = { "bSkipCustomPhysicsType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetAllMotorsAngularPositionDrive_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Statics::NewProp_bSkipCustomPhysicsType_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Statics::NewProp_bEnableSwingDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Statics::NewProp_bEnableTwistDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Statics::NewProp_bSkipCustomPhysicsType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Enable or Disable AngularPositionDrive. If motor is in SLERP mode it will be turned on if either EnableSwingDrive OR EnableTwistDrive are enabled. In Twist and Swing mode the twist and the swing can be controlled individually.*/" },
		{ "CPP_Default_bSkipCustomPhysicsType", "false" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Enable or Disable AngularPositionDrive. If motor is in SLERP mode it will be turned on if either EnableSwingDrive OR EnableTwistDrive are enabled. In Twist and Swing mode the twist and the swing can be controlled individually." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetAllMotorsAngularPositionDrive", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Statics::SkeletalMeshComponent_eventSetAllMotorsAngularPositionDrive_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularPositionDrive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularPositionDrive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Statics
	{
		struct SkeletalMeshComponent_eventSetAllMotorsAngularVelocityDrive_Parms
		{
			bool bEnableSwingDrive;
			bool bEnableTwistDrive;
			bool bSkipCustomPhysicsType;
		};
		static void NewProp_bEnableSwingDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSwingDrive;
		static void NewProp_bEnableTwistDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistDrive;
		static void NewProp_bSkipCustomPhysicsType_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipCustomPhysicsType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Statics::NewProp_bEnableSwingDrive_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetAllMotorsAngularVelocityDrive_Parms*)Obj)->bEnableSwingDrive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Statics::NewProp_bEnableSwingDrive = { "bEnableSwingDrive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetAllMotorsAngularVelocityDrive_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Statics::NewProp_bEnableSwingDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Statics::NewProp_bEnableTwistDrive_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetAllMotorsAngularVelocityDrive_Parms*)Obj)->bEnableTwistDrive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Statics::NewProp_bEnableTwistDrive = { "bEnableTwistDrive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetAllMotorsAngularVelocityDrive_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Statics::NewProp_bEnableTwistDrive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Statics::NewProp_bSkipCustomPhysicsType_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetAllMotorsAngularVelocityDrive_Parms*)Obj)->bSkipCustomPhysicsType = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Statics::NewProp_bSkipCustomPhysicsType = { "bSkipCustomPhysicsType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetAllMotorsAngularVelocityDrive_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Statics::NewProp_bSkipCustomPhysicsType_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Statics::NewProp_bEnableSwingDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Statics::NewProp_bEnableTwistDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Statics::NewProp_bSkipCustomPhysicsType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Enable or Disable AngularVelocityDrive. If motor is in SLERP mode it will be turned on if either EnableSwingDrive OR EnableTwistDrive are enabled. In Twist and Swing mode the twist and the swing can be controlled individually.*/" },
		{ "CPP_Default_bSkipCustomPhysicsType", "false" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Enable or Disable AngularVelocityDrive. If motor is in SLERP mode it will be turned on if either EnableSwingDrive OR EnableTwistDrive are enabled. In Twist and Swing mode the twist and the swing can be controlled individually." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetAllMotorsAngularVelocityDrive", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Statics::SkeletalMeshComponent_eventSetAllMotorsAngularVelocityDrive_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetAllowAnimCurveEvaluation_Statics
	{
		struct SkeletalMeshComponent_eventSetAllowAnimCurveEvaluation_Parms
		{
			bool bInAllow;
		};
		static void NewProp_bInAllow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAllow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkeletalMeshComponent_SetAllowAnimCurveEvaluation_Statics::NewProp_bInAllow_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetAllowAnimCurveEvaluation_Parms*)Obj)->bInAllow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllowAnimCurveEvaluation_Statics::NewProp_bInAllow = { "bInAllow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetAllowAnimCurveEvaluation_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetAllowAnimCurveEvaluation_Statics::NewProp_bInAllow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetAllowAnimCurveEvaluation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllowAnimCurveEvaluation_Statics::NewProp_bInAllow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetAllowAnimCurveEvaluation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllowAnimCurveEvaluation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetAllowAnimCurveEvaluation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetAllowAnimCurveEvaluation_Statics::SkeletalMeshComponent_eventSetAllowAnimCurveEvaluation_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetAllowAnimCurveEvaluation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllowAnimCurveEvaluation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetAllowAnimCurveEvaluation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllowAnimCurveEvaluation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetAllowAnimCurveEvaluation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetAllowAnimCurveEvaluation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetAllowClothActors_Statics
	{
		struct SkeletalMeshComponent_eventSetAllowClothActors_Parms
		{
			bool bInAllow;
		};
		static void NewProp_bInAllow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAllow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkeletalMeshComponent_SetAllowClothActors_Statics::NewProp_bInAllow_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetAllowClothActors_Parms*)Obj)->bInAllow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllowClothActors_Statics::NewProp_bInAllow = { "bInAllow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetAllowClothActors_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetAllowClothActors_Statics::NewProp_bInAllow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetAllowClothActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllowClothActors_Statics::NewProp_bInAllow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetAllowClothActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "Comment", "/**\n\x09 * Sets whether cloth assets should be created/simulated in this component.\n\x09 * This will update the conditional flag and you will want to call RecreateClothingActors for it to take effect.\n\x09 * @param bInAllow Whether to allow the creation of cloth assets and simulation.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Sets whether cloth assets should be created/simulated in this component.\nThis will update the conditional flag and you will want to call RecreateClothingActors for it to take effect.\n@param bInAllow Whether to allow the creation of cloth assets and simulation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllowClothActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetAllowClothActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetAllowClothActors_Statics::SkeletalMeshComponent_eventSetAllowClothActors_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetAllowClothActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllowClothActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetAllowClothActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllowClothActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetAllowClothActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetAllowClothActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Statics
	{
		struct SkeletalMeshComponent_eventSetAllowedAnimCurvesEvaluation_Parms
		{
			TArray<FName> List;
			bool bAllow;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_List_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_List_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_List;
		static void NewProp_bAllow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Statics::NewProp_List_Inner = { "List", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Statics::NewProp_List_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Statics::NewProp_List = { "List", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetAllowedAnimCurvesEvaluation_Parms, List), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Statics::NewProp_List_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Statics::NewProp_List_MetaData)) };
	void Z_Construct_UFunction_USkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Statics::NewProp_bAllow_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetAllowedAnimCurvesEvaluation_Parms*)Obj)->bAllow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Statics::NewProp_bAllow = { "bAllow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetAllowedAnimCurvesEvaluation_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Statics::NewProp_bAllow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Statics::NewProp_List_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Statics::NewProp_List,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Statics::NewProp_bAllow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "Comment", "/** resets, and then only allow the following list to be allowed/disallowed */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "resets, and then only allow the following list to be allowed/disallowed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetAllowedAnimCurvesEvaluation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Statics::SkeletalMeshComponent_eventSetAllowedAnimCurvesEvaluation_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetAllowedAnimCurvesEvaluation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetAllowedAnimCurvesEvaluation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetAllowRigidBodyAnimNode_Statics
	{
		struct SkeletalMeshComponent_eventSetAllowRigidBodyAnimNode_Parms
		{
			bool bInAllow;
			bool bReinitAnim;
		};
		static void NewProp_bInAllow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAllow;
		static void NewProp_bReinitAnim_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReinitAnim;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkeletalMeshComponent_SetAllowRigidBodyAnimNode_Statics::NewProp_bInAllow_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetAllowRigidBodyAnimNode_Parms*)Obj)->bInAllow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllowRigidBodyAnimNode_Statics::NewProp_bInAllow = { "bInAllow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetAllowRigidBodyAnimNode_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetAllowRigidBodyAnimNode_Statics::NewProp_bInAllow_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_SetAllowRigidBodyAnimNode_Statics::NewProp_bReinitAnim_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetAllowRigidBodyAnimNode_Parms*)Obj)->bReinitAnim = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllowRigidBodyAnimNode_Statics::NewProp_bReinitAnim = { "bReinitAnim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetAllowRigidBodyAnimNode_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetAllowRigidBodyAnimNode_Statics::NewProp_bReinitAnim_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetAllowRigidBodyAnimNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllowRigidBodyAnimNode_Statics::NewProp_bInAllow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAllowRigidBodyAnimNode_Statics::NewProp_bReinitAnim,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetAllowRigidBodyAnimNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "Comment", "/**\n\x09 * Sets whether or not to allow rigid body animation nodes for this component\n\x09 */" },
		{ "CPP_Default_bReinitAnim", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Sets whether or not to allow rigid body animation nodes for this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetAllowRigidBodyAnimNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetAllowRigidBodyAnimNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetAllowRigidBodyAnimNode_Statics::SkeletalMeshComponent_eventSetAllowRigidBodyAnimNode_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetAllowRigidBodyAnimNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllowRigidBodyAnimNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetAllowRigidBodyAnimNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAllowRigidBodyAnimNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetAllowRigidBodyAnimNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetAllowRigidBodyAnimNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetAngularLimits_Statics
	{
		struct SkeletalMeshComponent_eventSetAngularLimits_Parms
		{
			FName InBoneName;
			float Swing1LimitAngle;
			float TwistLimitAngle;
			float Swing2LimitAngle;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InBoneName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Swing1LimitAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimitAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Swing2LimitAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAngularLimits_Statics::NewProp_InBoneName = { "InBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetAngularLimits_Parms, InBoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAngularLimits_Statics::NewProp_Swing1LimitAngle = { "Swing1LimitAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetAngularLimits_Parms, Swing1LimitAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAngularLimits_Statics::NewProp_TwistLimitAngle = { "TwistLimitAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetAngularLimits_Parms, TwistLimitAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAngularLimits_Statics::NewProp_Swing2LimitAngle = { "Swing2LimitAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetAngularLimits_Parms, Swing2LimitAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetAngularLimits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAngularLimits_Statics::NewProp_InBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAngularLimits_Statics::NewProp_Swing1LimitAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAngularLimits_Statics::NewProp_TwistLimitAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAngularLimits_Statics::NewProp_Swing2LimitAngle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetAngularLimits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Sets the Angular Motion Ranges for a named constraint\n\x09*  @param InBoneName  Name of bone to adjust constraint ranges for\n\x09*  @param Swing1LimitAngle\x09 Size of limit in degrees, 0 means locked, 180 means free\n\x09*  @param TwistLimitAngle\x09 Size of limit in degrees, 0 means locked, 180 means free\n\x09*  @param Swing2LimitAngle\x09 Size of limit in degrees, 0 means locked, 180 means free\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Sets the Angular Motion Ranges for a named constraint\n@param InBoneName  Name of bone to adjust constraint ranges for\n@param Swing1LimitAngle       Size of limit in degrees, 0 means locked, 180 means free\n@param TwistLimitAngle        Size of limit in degrees, 0 means locked, 180 means free\n@param Swing2LimitAngle       Size of limit in degrees, 0 means locked, 180 means free" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetAngularLimits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetAngularLimits", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetAngularLimits_Statics::SkeletalMeshComponent_eventSetAngularLimits_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetAngularLimits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAngularLimits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetAngularLimits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAngularLimits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetAngularLimits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetAngularLimits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetAnimation_Statics
	{
		struct SkeletalMeshComponent_eventSetAnimation_Parms
		{
			UAnimationAsset* NewAnimToPlay;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAnimToPlay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAnimation_Statics::NewProp_NewAnimToPlay = { "NewAnimToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetAnimation_Parms, NewAnimToPlay), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAnimation_Statics::NewProp_NewAnimToPlay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Animation" },
		{ "Comment", "/* Animation play functions\n\x09*\n\x09* These changes status of animation instance, which is transient data, which means it won't serialize with this component\n\x09* Because of that reason, it is not safe to be used during construction script\n\x09* Please use OverrideAnimationData for construction script. That will override AnimationData to be serialized\n\x09*/" },
		{ "Keywords", "Animation" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Animation play functions\n      *\n      * These changes status of animation instance, which is transient data, which means it won't serialize with this component\n      * Because of that reason, it is not safe to be used during construction script\n      * Please use OverrideAnimationData for construction script. That will override AnimationData to be serialized" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetAnimation_Statics::SkeletalMeshComponent_eventSetAnimation_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetAnimationMode_Statics
	{
		struct SkeletalMeshComponent_eventSetAnimationMode_Parms
		{
			TEnumAsByte<EAnimationMode::Type> InAnimationMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InAnimationMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAnimationMode_Statics::NewProp_InAnimationMode = { "InAnimationMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetAnimationMode_Parms, InAnimationMode), Z_Construct_UEnum_Engine_EAnimationMode, METADATA_PARAMS(nullptr, 0) }; // 4106539714
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetAnimationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAnimationMode_Statics::NewProp_InAnimationMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetAnimationMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Animation" },
		{ "Comment", "/** Below are the interface to control animation when animation mode, not blueprint mode **/" },
		{ "Keywords", "Animation" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Below are the interface to control animation when animation mode, not blueprint mode *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetAnimationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetAnimationMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetAnimationMode_Statics::SkeletalMeshComponent_eventSetAnimationMode_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetAnimationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAnimationMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetAnimationMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAnimationMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetAnimationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetAnimationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetAnimClass_Statics
	{
		struct SkeletalMeshComponent_eventSetAnimClass_Parms
		{
			UClass* NewClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetAnimClass_Statics::NewProp_NewClass = { "NewClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetAnimClass_Parms, NewClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetAnimClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetAnimClass_Statics::NewProp_NewClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetAnimClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "Comment", "/** Set the anim instance class. Clears and re-initializes the anim instance with the new class and sets animation mode to 'AnimationBlueprint' */" },
		{ "DisplayName", "Set Anim Instance Class" },
		{ "Keywords", "AnimBlueprint" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Set the anim instance class. Clears and re-initializes the anim instance with the new class and sets animation mode to 'AnimationBlueprint'" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetAnimClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetAnimClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetAnimClass_Statics::SkeletalMeshComponent_eventSetAnimClass_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetAnimClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAnimClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetAnimClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetAnimClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetAnimClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetAnimClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetBodyNotifyRigidBodyCollision_Statics
	{
		struct SkeletalMeshComponent_eventSetBodyNotifyRigidBodyCollision_Parms
		{
			bool bNewNotifyRigidBodyCollision;
			FName BoneName;
		};
		static void NewProp_bNewNotifyRigidBodyCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewNotifyRigidBodyCollision;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkeletalMeshComponent_SetBodyNotifyRigidBodyCollision_Statics::NewProp_bNewNotifyRigidBodyCollision_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetBodyNotifyRigidBodyCollision_Parms*)Obj)->bNewNotifyRigidBodyCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetBodyNotifyRigidBodyCollision_Statics::NewProp_bNewNotifyRigidBodyCollision = { "bNewNotifyRigidBodyCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetBodyNotifyRigidBodyCollision_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetBodyNotifyRigidBodyCollision_Statics::NewProp_bNewNotifyRigidBodyCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetBodyNotifyRigidBodyCollision_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetBodyNotifyRigidBodyCollision_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetBodyNotifyRigidBodyCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetBodyNotifyRigidBodyCollision_Statics::NewProp_bNewNotifyRigidBodyCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetBodyNotifyRigidBodyCollision_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetBodyNotifyRigidBodyCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Changes the value of bNotifyRigidBodyCollision for a given body\n\x09* @param bNewNotifyRigidBodyCollision\x09The value to assign to bNotifyRigidBodyCollision\n\x09* @param BoneName\x09\x09\x09\x09\x09\x09Name of the body to turn hit notifies on/off. None implies root body\n\x09*/" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Changes the value of bNotifyRigidBodyCollision for a given body\n@param bNewNotifyRigidBodyCollision   The value to assign to bNotifyRigidBodyCollision\n@param BoneName                                               Name of the body to turn hit notifies on/off. None implies root body" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetBodyNotifyRigidBodyCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetBodyNotifyRigidBodyCollision", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetBodyNotifyRigidBodyCollision_Statics::SkeletalMeshComponent_eventSetBodyNotifyRigidBodyCollision_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetBodyNotifyRigidBodyCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetBodyNotifyRigidBodyCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetBodyNotifyRigidBodyCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetBodyNotifyRigidBodyCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetBodyNotifyRigidBodyCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetBodyNotifyRigidBodyCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetClothMaxDistanceScale_Statics
	{
		struct SkeletalMeshComponent_eventSetClothMaxDistanceScale_Parms
		{
			float Scale;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetClothMaxDistanceScale_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetClothMaxDistanceScale_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetClothMaxDistanceScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetClothMaxDistanceScale_Statics::NewProp_Scale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetClothMaxDistanceScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clothing" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetClothMaxDistanceScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetClothMaxDistanceScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetClothMaxDistanceScale_Statics::SkeletalMeshComponent_eventSetClothMaxDistanceScale_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetClothMaxDistanceScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetClothMaxDistanceScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetClothMaxDistanceScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetClothMaxDistanceScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetClothMaxDistanceScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetClothMaxDistanceScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfile_Statics
	{
		struct SkeletalMeshComponent_eventSetConstraintProfile_Parms
		{
			FName JointName;
			FName ProfileName;
			bool bDefaultIfNotFound;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_JointName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProfileName;
		static void NewProp_bDefaultIfNotFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultIfNotFound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfile_Statics::NewProp_JointName = { "JointName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetConstraintProfile_Parms, JointName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfile_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetConstraintProfile_Parms, ProfileName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfile_Statics::NewProp_bDefaultIfNotFound_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetConstraintProfile_Parms*)Obj)->bDefaultIfNotFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfile_Statics::NewProp_bDefaultIfNotFound = { "bDefaultIfNotFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetConstraintProfile_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfile_Statics::NewProp_bDefaultIfNotFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfile_Statics::NewProp_JointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfile_Statics::NewProp_ProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfile_Statics::NewProp_bDefaultIfNotFound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Sets the constraint profile properties (limits, motors, etc...) to match the constraint profile as defined in the physics asset. If profile name is not found the joint is set to use the default constraint profile.*/" },
		{ "CPP_Default_bDefaultIfNotFound", "false" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Sets the constraint profile properties (limits, motors, etc...) to match the constraint profile as defined in the physics asset. If profile name is not found the joint is set to use the default constraint profile." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetConstraintProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfile_Statics::SkeletalMeshComponent_eventSetConstraintProfile_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfileForAll_Statics
	{
		struct SkeletalMeshComponent_eventSetConstraintProfileForAll_Parms
		{
			FName ProfileName;
			bool bDefaultIfNotFound;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProfileName;
		static void NewProp_bDefaultIfNotFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultIfNotFound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfileForAll_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetConstraintProfileForAll_Parms, ProfileName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfileForAll_Statics::NewProp_bDefaultIfNotFound_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetConstraintProfileForAll_Parms*)Obj)->bDefaultIfNotFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfileForAll_Statics::NewProp_bDefaultIfNotFound = { "bDefaultIfNotFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetConstraintProfileForAll_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfileForAll_Statics::NewProp_bDefaultIfNotFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfileForAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfileForAll_Statics::NewProp_ProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfileForAll_Statics::NewProp_bDefaultIfNotFound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfileForAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Sets the constraint profile properties (limits, motors, etc...) to match the constraint profile as defined in the physics asset for all constraints. If profile name is not found the joint is set to use the default constraint profile.*/" },
		{ "CPP_Default_bDefaultIfNotFound", "false" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Sets the constraint profile properties (limits, motors, etc...) to match the constraint profile as defined in the physics asset for all constraints. If profile name is not found the joint is set to use the default constraint profile." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfileForAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetConstraintProfileForAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfileForAll_Statics::SkeletalMeshComponent_eventSetConstraintProfileForAll_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfileForAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfileForAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfileForAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfileForAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfileForAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfileForAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetDefaultAnimatingRigOverride_Statics
	{
		struct SkeletalMeshComponent_eventSetDefaultAnimatingRigOverride_Parms
		{
			TSoftObjectPtr<UObject> InAnimatingRig;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InAnimatingRig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetDefaultAnimatingRigOverride_Statics::NewProp_InAnimatingRig = { "InAnimatingRig", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetDefaultAnimatingRigOverride_Parms, InAnimatingRig), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetDefaultAnimatingRigOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetDefaultAnimatingRigOverride_Statics::NewProp_InAnimatingRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetDefaultAnimatingRigOverride_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetDefaultAnimatingRigOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetDefaultAnimatingRigOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetDefaultAnimatingRigOverride_Statics::SkeletalMeshComponent_eventSetDefaultAnimatingRigOverride_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetDefaultAnimatingRigOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetDefaultAnimatingRigOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetDefaultAnimatingRigOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetDefaultAnimatingRigOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetDefaultAnimatingRigOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetDefaultAnimatingRigOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetDisableAnimCurves_Statics
	{
		struct SkeletalMeshComponent_eventSetDisableAnimCurves_Parms
		{
			bool bInDisableAnimCurves;
		};
		static void NewProp_bInDisableAnimCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInDisableAnimCurves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkeletalMeshComponent_SetDisableAnimCurves_Statics::NewProp_bInDisableAnimCurves_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetDisableAnimCurves_Parms*)Obj)->bInDisableAnimCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetDisableAnimCurves_Statics::NewProp_bInDisableAnimCurves = { "bInDisableAnimCurves", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetDisableAnimCurves_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetDisableAnimCurves_Statics::NewProp_bInDisableAnimCurves_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetDisableAnimCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetDisableAnimCurves_Statics::NewProp_bInDisableAnimCurves,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetDisableAnimCurves_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetDisableAnimCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetDisableAnimCurves", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetDisableAnimCurves_Statics::SkeletalMeshComponent_eventSetDisableAnimCurves_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetDisableAnimCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetDisableAnimCurves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetDisableAnimCurves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetDisableAnimCurves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetDisableAnimCurves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetDisableAnimCurves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetDisablePostProcessBlueprint_Statics
	{
		struct SkeletalMeshComponent_eventSetDisablePostProcessBlueprint_Parms
		{
			bool bInDisablePostProcess;
		};
		static void NewProp_bInDisablePostProcess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInDisablePostProcess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkeletalMeshComponent_SetDisablePostProcessBlueprint_Statics::NewProp_bInDisablePostProcess_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetDisablePostProcessBlueprint_Parms*)Obj)->bInDisablePostProcess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetDisablePostProcessBlueprint_Statics::NewProp_bInDisablePostProcess = { "bInDisablePostProcess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetDisablePostProcessBlueprint_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetDisablePostProcessBlueprint_Statics::NewProp_bInDisablePostProcess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetDisablePostProcessBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetDisablePostProcessBlueprint_Statics::NewProp_bInDisablePostProcess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetDisablePostProcessBlueprint_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/** Sets whether the post process blueprint is currently running for this component.\n\x09 *  If it is not currently running, and is set to run, the instance will be reinitialized\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Sets whether the post process blueprint is currently running for this component.\nIf it is not currently running, and is set to run, the instance will be reinitialized" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetDisablePostProcessBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetDisablePostProcessBlueprint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetDisablePostProcessBlueprint_Statics::SkeletalMeshComponent_eventSetDisablePostProcessBlueprint_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetDisablePostProcessBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetDisablePostProcessBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetDisablePostProcessBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetDisablePostProcessBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetDisablePostProcessBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetDisablePostProcessBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetEnableBodyGravity_Statics
	{
		struct SkeletalMeshComponent_eventSetEnableBodyGravity_Parms
		{
			bool bEnableGravity;
			FName BoneName;
		};
		static void NewProp_bEnableGravity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGravity;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkeletalMeshComponent_SetEnableBodyGravity_Statics::NewProp_bEnableGravity_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetEnableBodyGravity_Parms*)Obj)->bEnableGravity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetEnableBodyGravity_Statics::NewProp_bEnableGravity = { "bEnableGravity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetEnableBodyGravity_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetEnableBodyGravity_Statics::NewProp_bEnableGravity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetEnableBodyGravity_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetEnableBodyGravity_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetEnableBodyGravity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetEnableBodyGravity_Statics::NewProp_bEnableGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetEnableBodyGravity_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetEnableBodyGravity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/**\n\x09 *\x09""Enables or disables gravity for the given bone.\n\x09 *\x09NAME_None indicates the root body will be edited.\n\x09 *\x09If the bone name given is otherwise invalid, nothing happens.\n\x09 *\n\x09 *\x09@param bEnableGravity\x09Whether gravity should be enabled or disabled.\n\x09 *\x09@param BoneName\x09\x09\x09The name of the bone to modify.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Enables or disables gravity for the given bone.\nNAME_None indicates the root body will be edited.\nIf the bone name given is otherwise invalid, nothing happens.\n\n@param bEnableGravity   Whether gravity should be enabled or disabled.\n@param BoneName                 The name of the bone to modify." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetEnableBodyGravity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetEnableBodyGravity", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetEnableBodyGravity_Statics::SkeletalMeshComponent_eventSetEnableBodyGravity_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetEnableBodyGravity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetEnableBodyGravity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetEnableBodyGravity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetEnableBodyGravity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetEnableBodyGravity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetEnableBodyGravity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow_Statics
	{
		struct SkeletalMeshComponent_eventSetEnableGravityOnAllBodiesBelow_Parms
		{
			bool bEnableGravity;
			FName BoneName;
			bool bIncludeSelf;
		};
		static void NewProp_bEnableGravity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGravity;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static void NewProp_bIncludeSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeSelf;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow_Statics::NewProp_bEnableGravity_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetEnableGravityOnAllBodiesBelow_Parms*)Obj)->bEnableGravity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow_Statics::NewProp_bEnableGravity = { "bEnableGravity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetEnableGravityOnAllBodiesBelow_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow_Statics::NewProp_bEnableGravity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetEnableGravityOnAllBodiesBelow_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow_Statics::NewProp_bIncludeSelf_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetEnableGravityOnAllBodiesBelow_Parms*)Obj)->bIncludeSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow_Statics::NewProp_bIncludeSelf = { "bIncludeSelf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetEnableGravityOnAllBodiesBelow_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow_Statics::NewProp_bIncludeSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow_Statics::NewProp_bEnableGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow_Statics::NewProp_bIncludeSelf,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/**\n\x09*\x09""Enables or disables gravity to all bodies below the given bone.\n\x09*   NAME_None indicates all bodies will be edited.\n\x09*\x09In that case, consider using UPrimitiveComponent::EnableGravity.\n\x09*\n\x09*\x09@param bEnableGravity\x09Whether gravity should be enabled or disabled.\n\x09*\x09@param BoneName\x09\x09\x09The name of the top most bone.\n\x09*\x09@param bIncludeSelf\x09\x09Whether the bone specified should be edited.\n\x09*/" },
		{ "CPP_Default_bIncludeSelf", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Enables or disables gravity to all bodies below the given bone.\nNAME_None indicates all bodies will be edited.\nIn that case, consider using UPrimitiveComponent::EnableGravity.\n\n@param bEnableGravity   Whether gravity should be enabled or disabled.\n@param BoneName                 The name of the top most bone.\n@param bIncludeSelf             Whether the bone specified should be edited." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetEnableGravityOnAllBodiesBelow", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow_Statics::SkeletalMeshComponent_eventSetEnableGravityOnAllBodiesBelow_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetEnablePhysicsBlending_Statics
	{
		struct SkeletalMeshComponent_eventSetEnablePhysicsBlending_Parms
		{
			bool bNewBlendPhysics;
		};
		static void NewProp_bNewBlendPhysics_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewBlendPhysics;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkeletalMeshComponent_SetEnablePhysicsBlending_Statics::NewProp_bNewBlendPhysics_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetEnablePhysicsBlending_Parms*)Obj)->bNewBlendPhysics = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetEnablePhysicsBlending_Statics::NewProp_bNewBlendPhysics = { "bNewBlendPhysics", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetEnablePhysicsBlending_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetEnablePhysicsBlending_Statics::NewProp_bNewBlendPhysics_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetEnablePhysicsBlending_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetEnablePhysicsBlending_Statics::NewProp_bNewBlendPhysics,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetEnablePhysicsBlending_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Disable physics blending of bones **/" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Disable physics blending of bones *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetEnablePhysicsBlending_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetEnablePhysicsBlending", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetEnablePhysicsBlending_Statics::SkeletalMeshComponent_eventSetEnablePhysicsBlending_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetEnablePhysicsBlending_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetEnablePhysicsBlending_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetEnablePhysicsBlending_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetEnablePhysicsBlending_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetEnablePhysicsBlending()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetEnablePhysicsBlending_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetMorphTarget_Statics
	{
		struct SkeletalMeshComponent_eventSetMorphTarget_Parms
		{
			FName MorphTargetName;
			float Value;
			bool bRemoveZeroWeight;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_MorphTargetName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_bRemoveZeroWeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveZeroWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetMorphTarget_Statics::NewProp_MorphTargetName = { "MorphTargetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetMorphTarget_Parms, MorphTargetName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetMorphTarget_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetMorphTarget_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_SetMorphTarget_Statics::NewProp_bRemoveZeroWeight_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetMorphTarget_Parms*)Obj)->bRemoveZeroWeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetMorphTarget_Statics::NewProp_bRemoveZeroWeight = { "bRemoveZeroWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetMorphTarget_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetMorphTarget_Statics::NewProp_bRemoveZeroWeight_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetMorphTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetMorphTarget_Statics::NewProp_MorphTargetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetMorphTarget_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetMorphTarget_Statics::NewProp_bRemoveZeroWeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetMorphTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "Comment", "/**\n\x09 * Set Morph Target with Name and Value(0-1)\n\x09 *\n\x09 * @param bRemoveZeroWeight : Used by editor code when it should stay in the active list with zero weight\n\x09 */" },
		{ "CPP_Default_bRemoveZeroWeight", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Set Morph Target with Name and Value(0-1)\n\n@param bRemoveZeroWeight : Used by editor code when it should stay in the active list with zero weight" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetMorphTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetMorphTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetMorphTarget_Statics::SkeletalMeshComponent_eventSetMorphTarget_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetMorphTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetMorphTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetMorphTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetMorphTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetMorphTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetMorphTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow_Statics
	{
		struct SkeletalMeshComponent_eventSetNotifyRigidBodyCollisionBelow_Parms
		{
			bool bNewNotifyRigidBodyCollision;
			FName BoneName;
			bool bIncludeSelf;
		};
		static void NewProp_bNewNotifyRigidBodyCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewNotifyRigidBodyCollision;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static void NewProp_bIncludeSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeSelf;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow_Statics::NewProp_bNewNotifyRigidBodyCollision_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetNotifyRigidBodyCollisionBelow_Parms*)Obj)->bNewNotifyRigidBodyCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow_Statics::NewProp_bNewNotifyRigidBodyCollision = { "bNewNotifyRigidBodyCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetNotifyRigidBodyCollisionBelow_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow_Statics::NewProp_bNewNotifyRigidBodyCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetNotifyRigidBodyCollisionBelow_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow_Statics::NewProp_bIncludeSelf_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetNotifyRigidBodyCollisionBelow_Parms*)Obj)->bIncludeSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow_Statics::NewProp_bIncludeSelf = { "bIncludeSelf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetNotifyRigidBodyCollisionBelow_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow_Statics::NewProp_bIncludeSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow_Statics::NewProp_bNewNotifyRigidBodyCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow_Statics::NewProp_bIncludeSelf,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Changes the value of bNotifyRigidBodyCollision on all bodies below a given bone\n\x09* @param bNewNotifyRigidBodyCollision\x09The value to assign to bNotifyRigidBodyCollision\n\x09* @param BoneName\x09\x09\x09\x09\x09\x09Name of the body to turn hit notifies on (and below)\n\x09* @param bIncludeSelf\x09\x09\x09\x09\x09Whether to modify the given body (useful for roots with multiple children)\n\x09*/" },
		{ "CPP_Default_bIncludeSelf", "true" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Changes the value of bNotifyRigidBodyCollision on all bodies below a given bone\n@param bNewNotifyRigidBodyCollision   The value to assign to bNotifyRigidBodyCollision\n@param BoneName                                               Name of the body to turn hit notifies on (and below)\n@param bIncludeSelf                                   Whether to modify the given body (useful for roots with multiple children)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetNotifyRigidBodyCollisionBelow", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow_Statics::SkeletalMeshComponent_eventSetNotifyRigidBodyCollisionBelow_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetPhysicsBlendWeight_Statics
	{
		struct SkeletalMeshComponent_eventSetPhysicsBlendWeight_Parms
		{
			float PhysicsBlendWeight;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PhysicsBlendWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetPhysicsBlendWeight_Statics::NewProp_PhysicsBlendWeight = { "PhysicsBlendWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetPhysicsBlendWeight_Parms, PhysicsBlendWeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetPhysicsBlendWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetPhysicsBlendWeight_Statics::NewProp_PhysicsBlendWeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetPhysicsBlendWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** This is global set up for setting physics blend weight\n\x09 * This does multiple things automatically\n\x09 * If PhysicsBlendWeight == 1.f, it will enable Simulation, and if PhysicsBlendWeight == 0.f, it will disable Simulation. \n\x09 * Also it will respect each body's setup, so if the body is fixed, it won't simulate. Vice versa\n\x09 * So if you'd like all bodies to change manually, do not use this function, but SetAllBodiesPhysicsBlendWeight\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "This is global set up for setting physics blend weight\nThis does multiple things automatically\nIf PhysicsBlendWeight == 1.f, it will enable Simulation, and if PhysicsBlendWeight == 0.f, it will disable Simulation.\nAlso it will respect each body's setup, so if the body is fixed, it won't simulate. Vice versa\nSo if you'd like all bodies to change manually, do not use this function, but SetAllBodiesPhysicsBlendWeight" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetPhysicsBlendWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetPhysicsBlendWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetPhysicsBlendWeight_Statics::SkeletalMeshComponent_eventSetPhysicsBlendWeight_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetPhysicsBlendWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetPhysicsBlendWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetPhysicsBlendWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetPhysicsBlendWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetPhysicsBlendWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetPhysicsBlendWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetPlayRate_Statics
	{
		struct SkeletalMeshComponent_eventSetPlayRate_Parms
		{
			float Rate;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetPlayRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetPlayRate_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetPlayRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetPlayRate_Statics::NewProp_Rate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Animation" },
		{ "Comment", "/* Animation play functions\n\x09*\n\x09* These changes status of animation instance, which is transient data, which means it won't serialize with this component\n\x09* Because of that reason, it is not safe to be used during construction script\n\x09* Please use OverrideAnimationData for construction script. That will override AnimationData to be serialized\n\x09*/" },
		{ "Keywords", "Animation" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Animation play functions\n      *\n      * These changes status of animation instance, which is transient data, which means it won't serialize with this component\n      * Because of that reason, it is not safe to be used during construction script\n      * Please use OverrideAnimationData for construction script. That will override AnimationData to be serialized" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetPlayRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetPlayRate_Statics::SkeletalMeshComponent_eventSetPlayRate_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetPlayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetPlayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetPosition_Statics
	{
		struct SkeletalMeshComponent_eventSetPosition_Parms
		{
			float InPos;
			bool bFireNotifies;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPos;
		static void NewProp_bFireNotifies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireNotifies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetPosition_Statics::NewProp_InPos = { "InPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetPosition_Parms, InPos), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMeshComponent_SetPosition_Statics::NewProp_bFireNotifies_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetPosition_Parms*)Obj)->bFireNotifies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetPosition_Statics::NewProp_bFireNotifies = { "bFireNotifies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetPosition_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetPosition_Statics::NewProp_bFireNotifies_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetPosition_Statics::NewProp_InPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetPosition_Statics::NewProp_bFireNotifies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Animation" },
		{ "Comment", "/* Animation play functions\n\x09*\n\x09* These changes status of animation instance, which is transient data, which means it won't serialize with this component\n\x09* Because of that reason, it is not safe to be used during construction script\n\x09* Please use OverrideAnimationData for construction script. That will override AnimationData to be serialized\n\x09*/" },
		{ "CPP_Default_bFireNotifies", "true" },
		{ "Keywords", "Animation" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Animation play functions\n      *\n      * These changes status of animation instance, which is transient data, which means it won't serialize with this component\n      * Because of that reason, it is not safe to be used during construction script\n      * Please use OverrideAnimationData for construction script. That will override AnimationData to be serialized" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetPosition_Statics::SkeletalMeshComponent_eventSetPosition_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetSkeletalMeshAsset_Statics
	{
		struct SkeletalMeshComponent_eventSetSkeletalMeshAsset_Parms
		{
			USkeletalMesh* NewMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetSkeletalMeshAsset_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetSkeletalMeshAsset_Parms, NewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetSkeletalMeshAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetSkeletalMeshAsset_Statics::NewProp_NewMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetSkeletalMeshAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "Comment", "/**\n\x09 * Set the SkeletalMesh rendered for this mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Set the SkeletalMesh rendered for this mesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetSkeletalMeshAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetSkeletalMeshAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetSkeletalMeshAsset_Statics::SkeletalMeshComponent_eventSetSkeletalMeshAsset_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetSkeletalMeshAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetSkeletalMeshAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetSkeletalMeshAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetSkeletalMeshAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetSkeletalMeshAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetSkeletalMeshAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportDistanceThreshold_Statics
	{
		struct SkeletalMeshComponent_eventSetTeleportDistanceThreshold_Parms
		{
			float Threshold;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportDistanceThreshold_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetTeleportDistanceThreshold_Parms, Threshold), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportDistanceThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportDistanceThreshold_Statics::NewProp_Threshold,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportDistanceThreshold_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Clothing" },
		{ "Comment", "/**\n\x09* Sets the teleportation distance threshold.\n\x09* \n\x09* @param threshold Threshold value.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Sets the teleportation distance threshold.\n\n@param threshold Threshold value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportDistanceThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetTeleportDistanceThreshold", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportDistanceThreshold_Statics::SkeletalMeshComponent_eventSetTeleportDistanceThreshold_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportDistanceThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportDistanceThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportDistanceThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportDistanceThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportDistanceThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportDistanceThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportRotationThreshold_Statics
	{
		struct SkeletalMeshComponent_eventSetTeleportRotationThreshold_Parms
		{
			float Threshold;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportRotationThreshold_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSetTeleportRotationThreshold_Parms, Threshold), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportRotationThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportRotationThreshold_Statics::NewProp_Threshold,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportRotationThreshold_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Clothing" },
		{ "Comment", "/**\n\x09* Sets the teleportation rotation threshold.\n\x09* \n\x09* @param threshold Threshold in degrees.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Sets the teleportation rotation threshold.\n\n@param threshold Threshold in degrees." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportRotationThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetTeleportRotationThreshold", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportRotationThreshold_Statics::SkeletalMeshComponent_eventSetTeleportRotationThreshold_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportRotationThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportRotationThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportRotationThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportRotationThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportRotationThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportRotationThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateAnimationInEditor_Statics
	{
		struct SkeletalMeshComponent_eventSetUpdateAnimationInEditor_Parms
		{
			bool NewUpdateState;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewUpdateState_MetaData[];
#endif
		static void NewProp_NewUpdateState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewUpdateState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateAnimationInEditor_Statics::NewProp_NewUpdateState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateAnimationInEditor_Statics::NewProp_NewUpdateState_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetUpdateAnimationInEditor_Parms*)Obj)->NewUpdateState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateAnimationInEditor_Statics::NewProp_NewUpdateState = { "NewUpdateState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetUpdateAnimationInEditor_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateAnimationInEditor_Statics::NewProp_NewUpdateState_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateAnimationInEditor_Statics::NewProp_NewUpdateState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateAnimationInEditor_Statics::NewProp_NewUpdateState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateAnimationInEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateAnimationInEditor_Statics::NewProp_NewUpdateState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateAnimationInEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "Comment", "/**\n\x09* Sets whether or not to force tick component in order to update animation and refresh transform for this component\n\x09* This is supported only in the editor\n\x09*/" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Sets whether or not to force tick component in order to update animation and refresh transform for this component\nThis is supported only in the editor" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateAnimationInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetUpdateAnimationInEditor", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateAnimationInEditor_Statics::SkeletalMeshComponent_eventSetUpdateAnimationInEditor_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateAnimationInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateAnimationInEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateAnimationInEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateAnimationInEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateAnimationInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateAnimationInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateClothInEditor_Statics
	{
		struct SkeletalMeshComponent_eventSetUpdateClothInEditor_Parms
		{
			bool NewUpdateState;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewUpdateState_MetaData[];
#endif
		static void NewProp_NewUpdateState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewUpdateState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateClothInEditor_Statics::NewProp_NewUpdateState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateClothInEditor_Statics::NewProp_NewUpdateState_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventSetUpdateClothInEditor_Parms*)Obj)->NewUpdateState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateClothInEditor_Statics::NewProp_NewUpdateState = { "NewUpdateState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventSetUpdateClothInEditor_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateClothInEditor_Statics::NewProp_NewUpdateState_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateClothInEditor_Statics::NewProp_NewUpdateState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateClothInEditor_Statics::NewProp_NewUpdateState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateClothInEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateClothInEditor_Statics::NewProp_NewUpdateState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateClothInEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "Comment", "/**\n\x09* Sets whether or not to animate cloth in the editor. Requires Update Animation In Editor to also be true.\n\x09* This is supported only in the editor\n\x09*/" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Sets whether or not to animate cloth in the editor. Requires Update Animation In Editor to also be true.\nThis is supported only in the editor" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateClothInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SetUpdateClothInEditor", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateClothInEditor_Statics::SkeletalMeshComponent_eventSetUpdateClothInEditor_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateClothInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateClothInEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateClothInEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateClothInEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateClothInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateClothInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SnapshotPose_Statics
	{
		struct SkeletalMeshComponent_eventSnapshotPose_Parms
		{
			FPoseSnapshot Snapshot;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Snapshot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_SnapshotPose_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventSnapshotPose_Parms, Snapshot), Z_Construct_UScriptStruct_FPoseSnapshot, METADATA_PARAMS(nullptr, 0) }; // 2909787229
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_SnapshotPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_SnapshotPose_Statics::NewProp_Snapshot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SnapshotPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "Comment", "/**\n\x09 * Takes a snapshot of this skeletal mesh component's pose and saves it to the specified snapshot.\n\x09 * The snapshot is taken at the current LOD, so if for example you took the snapshot at LOD1 \n\x09 * and then used it at LOD0 any bones not in LOD1 will use the reference pose \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Takes a snapshot of this skeletal mesh component's pose and saves it to the specified snapshot.\nThe snapshot is taken at the current LOD, so if for example you took the snapshot at LOD1\nand then used it at LOD0 any bones not in LOD1 will use the reference pose" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SnapshotPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SnapshotPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_SnapshotPose_Statics::SkeletalMeshComponent_eventSnapshotPose_Parms), Z_Construct_UFunction_USkeletalMeshComponent_SnapshotPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SnapshotPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SnapshotPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SnapshotPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SnapshotPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SnapshotPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Animation" },
		{ "Comment", "/* Animation play functions\n\x09*\n\x09* These changes status of animation instance, which is transient data, which means it won't serialize with this component\n\x09* Because of that reason, it is not safe to be used during construction script\n\x09* Please use OverrideAnimationData for construction script. That will override AnimationData to be serialized\n\x09*/" },
		{ "Keywords", "Animation" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Animation play functions\n      *\n      * These changes status of animation instance, which is transient data, which means it won't serialize with this component\n      * Because of that reason, it is not safe to be used during construction script\n      * Please use OverrideAnimationData for construction script. That will override AnimationData to be serialized" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_SuspendClothingSimulation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_SuspendClothingSimulation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clothing" },
		{ "Comment", "/** Stops simulating clothing, but does not show clothing ref pose. Keeps the last known simulation state */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Stops simulating clothing, but does not show clothing ref pose. Keeps the last known simulation state" },
		{ "UnsafeDuringActorConstruction", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_SuspendClothingSimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "SuspendClothingSimulation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_SuspendClothingSimulation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_SuspendClothingSimulation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_SuspendClothingSimulation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_SuspendClothingSimulation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_TermBodiesBelow_Statics
	{
		struct SkeletalMeshComponent_eventTermBodiesBelow_Parms
		{
			FName ParentBoneName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParentBoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMeshComponent_TermBodiesBelow_Statics::NewProp_ParentBoneName = { "ParentBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventTermBodiesBelow_Parms, ParentBoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_TermBodiesBelow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_TermBodiesBelow_Statics::NewProp_ParentBoneName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_TermBodiesBelow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Terminate physics on all bodies below the named bone, effectively disabling collision forever. If you terminate, you won't be able to re-init later. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Terminate physics on all bodies below the named bone, effectively disabling collision forever. If you terminate, you won't be able to re-init later." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_TermBodiesBelow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "TermBodiesBelow", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_TermBodiesBelow_Statics::SkeletalMeshComponent_eventTermBodiesBelow_Parms), Z_Construct_UFunction_USkeletalMeshComponent_TermBodiesBelow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_TermBodiesBelow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_TermBodiesBelow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_TermBodiesBelow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_TermBodiesBelow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_TermBodiesBelow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_ToggleDisablePostProcessBlueprint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_ToggleDisablePostProcessBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "Comment", "/** Toggles whether the post process blueprint will run for this component */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Toggles whether the post process blueprint will run for this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_ToggleDisablePostProcessBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "ToggleDisablePostProcessBlueprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_ToggleDisablePostProcessBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_ToggleDisablePostProcessBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_ToggleDisablePostProcessBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_ToggleDisablePostProcessBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_UnbindClothFromLeaderPoseComponent_Statics
	{
		struct SkeletalMeshComponent_eventUnbindClothFromLeaderPoseComponent_Parms
		{
			bool bRestoreSimulationSpace;
		};
		static void NewProp_bRestoreSimulationSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestoreSimulationSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkeletalMeshComponent_UnbindClothFromLeaderPoseComponent_Statics::NewProp_bRestoreSimulationSpace_SetBit(void* Obj)
	{
		((SkeletalMeshComponent_eventUnbindClothFromLeaderPoseComponent_Parms*)Obj)->bRestoreSimulationSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_UnbindClothFromLeaderPoseComponent_Statics::NewProp_bRestoreSimulationSpace = { "bRestoreSimulationSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponent_eventUnbindClothFromLeaderPoseComponent_Parms), &Z_Construct_UFunction_USkeletalMeshComponent_UnbindClothFromLeaderPoseComponent_Statics::NewProp_bRestoreSimulationSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_UnbindClothFromLeaderPoseComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_UnbindClothFromLeaderPoseComponent_Statics::NewProp_bRestoreSimulationSpace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_UnbindClothFromLeaderPoseComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clothing" },
		{ "Comment", "/** \n\x09 * If this component has a valid LeaderPoseComponent and has previously had its cloth bound to the\n\x09 * MCP, this function will unbind the cloth and resume simulation.\n\x09 * @param bRestoreSimulationSpace if true and the leader pose cloth was originally simulating in world\n\x09 * space, we will restore this setting. This will cause the leader component to reset which may be\n\x09 * undesirable.\n\x09 */" },
		{ "CPP_Default_bRestoreSimulationSpace", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "If this component has a valid LeaderPoseComponent and has previously had its cloth bound to the\nMCP, this function will unbind the cloth and resume simulation.\n@param bRestoreSimulationSpace if true and the leader pose cloth was originally simulating in world\nspace, we will restore this setting. This will cause the leader component to reset which may be\nundesirable." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_UnbindClothFromLeaderPoseComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "UnbindClothFromLeaderPoseComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_UnbindClothFromLeaderPoseComponent_Statics::SkeletalMeshComponent_eventUnbindClothFromLeaderPoseComponent_Parms), Z_Construct_UFunction_USkeletalMeshComponent_UnbindClothFromLeaderPoseComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_UnbindClothFromLeaderPoseComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_UnbindClothFromLeaderPoseComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_UnbindClothFromLeaderPoseComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_UnbindClothFromLeaderPoseComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_UnbindClothFromLeaderPoseComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshComponent_UnlinkAnimClassLayers_Statics
	{
		struct SkeletalMeshComponent_eventUnlinkAnimClassLayers_Parms
		{
			TSubclassOf<UAnimInstance>  InClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USkeletalMeshComponent_UnlinkAnimClassLayers_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshComponent_eventUnlinkAnimClassLayers_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponent_UnlinkAnimClassLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponent_UnlinkAnimClassLayers_Statics::NewProp_InClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponent_UnlinkAnimClassLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh|Animation Blueprint Linking" },
		{ "Comment", "/** \n\x09 * Runs through all layer nodes, attempting to find layer nodes that are currently running the specified class, then resets each to its default value.\n\x09 * State sharing rules are as with SetLayerOverlay.\n\x09 * If InClass is null, does nothing.\n\x09 */" },
		{ "Keywords", "AnimBlueprint" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Runs through all layer nodes, attempting to find layer nodes that are currently running the specified class, then resets each to its default value.\nState sharing rules are as with SetLayerOverlay.\nIf InClass is null, does nothing." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponent_UnlinkAnimClassLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponent, nullptr, "UnlinkAnimClassLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponent_UnlinkAnimClassLayers_Statics::SkeletalMeshComponent_eventUnlinkAnimClassLayers_Parms), Z_Construct_UFunction_USkeletalMeshComponent_UnlinkAnimClassLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_UnlinkAnimClassLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponent_UnlinkAnimClassLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponent_UnlinkAnimClassLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponent_UnlinkAnimClassLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponent_UnlinkAnimClassLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshComponent);
	UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister()
	{
		return USkeletalMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMeshAsset;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimationBlueprint;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimBlueprintGeneratedClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_AnimBlueprintGeneratedClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AnimClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimScriptInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimScriptInstance;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubInstances;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessAnimInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PostProcessAnimInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootBoneTranslation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootBoneTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineCheckBoundsScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineCheckBoundsScale;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LinkedInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LinkedInstances;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedBoneSpaceTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedBoneSpaceTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedBoneSpaceTransforms;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedComponentSpaceTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedComponentSpaceTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedComponentSpaceTransforms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalAnimRateScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalAnimRateScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KinematicBonesUpdateType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_KinematicBonesUpdateType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsTransformUpdateMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PhysicsTransformUpdateMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisablePostProcessBlueprint_MetaData[];
#endif
		static void NewProp_bDisablePostProcessBlueprint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisablePostProcessBlueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateOverlapsOnAnimationFinalize_MetaData[];
#endif
		static void NewProp_bUpdateOverlapsOnAnimationFinalize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlapsOnAnimationFinalize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasValidBodies_MetaData[];
#endif
		static void NewProp_bHasValidBodies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasValidBodies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBlendPhysics_MetaData[];
#endif
		static void NewProp_bBlendPhysics_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendPhysics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePhysicsOnDedicatedServer_MetaData[];
#endif
		static void NewProp_bEnablePhysicsOnDedicatedServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePhysicsOnDedicatedServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateMeshWhenKinematic_MetaData[];
#endif
		static void NewProp_bUpdateMeshWhenKinematic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateMeshWhenKinematic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateJointsFromAnimation_MetaData[];
#endif
		static void NewProp_bUpdateJointsFromAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateJointsFromAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowClothActors_MetaData[];
#endif
		static void NewProp_bAllowClothActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowClothActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableClothSimulation_MetaData[];
#endif
		static void NewProp_bDisableClothSimulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableClothSimulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableRigidBodyAnimNode_MetaData[];
#endif
		static void NewProp_bDisableRigidBodyAnimNode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableRigidBodyAnimNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowAnimCurveEvaluation_MetaData[];
#endif
		static void NewProp_bAllowAnimCurveEvaluation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowAnimCurveEvaluation;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableAnimCurves_MetaData[];
#endif
		static void NewProp_bDisableAnimCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableAnimCurves;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCollideWithEnvironment_MetaData[];
#endif
		static void NewProp_bCollideWithEnvironment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollideWithEnvironment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCollideWithAttachedChildren_MetaData[];
#endif
		static void NewProp_bCollideWithAttachedChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollideWithAttachedChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceCollisionUpdate_MetaData[];
#endif
		static void NewProp_bForceCollisionUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceCollisionUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocalSpaceSimulation_MetaData[];
#endif
		static void NewProp_bLocalSpaceSimulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalSpaceSimulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetAfterTeleport_MetaData[];
#endif
		static void NewProp_bResetAfterTeleport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetAfterTeleport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeferKinematicBoneUpdate_MetaData[];
#endif
		static void NewProp_bDeferKinematicBoneUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferKinematicBoneUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoSkeletonUpdate_MetaData[];
#endif
		static void NewProp_bNoSkeletonUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoSkeletonUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPauseAnims_MetaData[];
#endif
		static void NewProp_bPauseAnims_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPauseAnims;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRefPoseOnInitAnim_MetaData[];
#endif
		static void NewProp_bUseRefPoseOnInitAnim_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRefPoseOnInitAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePerPolyCollision_MetaData[];
#endif
		static void NewProp_bEnablePerPolyCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePerPolyCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceRefpose_MetaData[];
#endif
		static void NewProp_bForceRefpose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRefpose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyAllowAutonomousTickPose_MetaData[];
#endif
		static void NewProp_bOnlyAllowAutonomousTickPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyAllowAutonomousTickPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAutonomousTickPose_MetaData[];
#endif
		static void NewProp_bIsAutonomousTickPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAutonomousTickPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOldForceRefPose_MetaData[];
#endif
		static void NewProp_bOldForceRefPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOldForceRefPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowPrePhysBones_MetaData[];
#endif
		static void NewProp_bShowPrePhysBones_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPrePhysBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiredBonesUpToDate_MetaData[];
#endif
		static void NewProp_bRequiredBonesUpToDate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiredBonesUpToDate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAnimTreeInitialised_MetaData[];
#endif
		static void NewProp_bAnimTreeInitialised_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimTreeInitialised;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeComponentLocationIntoBounds_MetaData[];
#endif
		static void NewProp_bIncludeComponentLocationIntoBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeComponentLocationIntoBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLineCheckWithBounds_MetaData[];
#endif
		static void NewProp_bEnableLineCheckWithBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLineCheckWithBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateCurvesToFollowers_MetaData[];
#endif
		static void NewProp_bPropagateCurvesToFollowers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateCurvesToFollowers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipKinematicUpdateWhenInterpolating_MetaData[];
#endif
		static void NewProp_bSkipKinematicUpdateWhenInterpolating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipKinematicUpdateWhenInterpolating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipBoundsUpdateWhenInterpolating_MetaData[];
#endif
		static void NewProp_bSkipBoundsUpdateWhenInterpolating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipBoundsUpdateWhenInterpolating;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateAnimationInEditor_MetaData[];
#endif
		static void NewProp_bUpdateAnimationInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateAnimationInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateClothInEditor_MetaData[];
#endif
		static void NewProp_bUpdateClothInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateClothInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultAnimatingRig_MetaData[];
#endif
		static void NewProp_bOverrideDefaultAnimatingRig_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultAnimatingRig;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNeedsQueuedAnimEventsDispatched_MetaData[];
#endif
		static void NewProp_bNeedsQueuedAnimEventsDispatched_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsQueuedAnimEventsDispatched;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedAnimCurveUidVersion_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_CachedAnimCurveUidVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothBlendWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClothBlendWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForParallelClothTask_MetaData[];
#endif
		static void NewProp_bWaitForParallelClothTask_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForParallelClothTask;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DisallowedAnimCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisallowedAnimCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DisallowedAnimCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BodySetup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothMaxDistanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClothMaxDistanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConstraintBroken_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConstraintBroken;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlasticDeformation_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlasticDeformation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothingSimulationFactory_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClothingSimulationFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportDistanceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportDistanceThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportRotationThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportRotationThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastPoseTickFrame_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_LastPoseTickFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothingInteractor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClothingInteractor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAnimInitialized_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnimInitialized;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceToPlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SequenceToPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimToPlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimToPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultLooping_MetaData[];
#endif
		static void NewProp_bDefaultLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultPlaying_MetaData[];
#endif
		static void NewProp_bDefaultPlaying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultPlaying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAnimatingRigOverride_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultAnimatingRigOverride;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkinnedMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkeletalMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkeletalMeshComponent_AccumulateAllBodiesBelowPhysicsBlendWeight, "AccumulateAllBodiesBelowPhysicsBlendWeight" }, // 2769572947
		{ &Z_Construct_UFunction_USkeletalMeshComponent_AddForceToAllBodiesBelow, "AddForceToAllBodiesBelow" }, // 2267197449
		{ &Z_Construct_UFunction_USkeletalMeshComponent_AddImpulseToAllBodiesBelow, "AddImpulseToAllBodiesBelow" }, // 715390598
		{ &Z_Construct_UFunction_USkeletalMeshComponent_AllowAnimCurveEvaluation, "AllowAnimCurveEvaluation" }, // 2603947856
		{ &Z_Construct_UFunction_USkeletalMeshComponent_BindClothToLeaderPoseComponent, "BindClothToLeaderPoseComponent" }, // 2767334090
		{ &Z_Construct_UFunction_USkeletalMeshComponent_BreakConstraint, "BreakConstraint" }, // 192213279
		{ &Z_Construct_UFunction_USkeletalMeshComponent_ClearMorphTargets, "ClearMorphTargets" }, // 4168299625
		{ &Z_Construct_UFunction_USkeletalMeshComponent_FindConstraintBoneName, "FindConstraintBoneName" }, // 4045776256
		{ &Z_Construct_UFunction_USkeletalMeshComponent_ForceClothNextUpdateTeleport, "ForceClothNextUpdateTeleport" }, // 1214209148
		{ &Z_Construct_UFunction_USkeletalMeshComponent_ForceClothNextUpdateTeleportAndReset, "ForceClothNextUpdateTeleportAndReset" }, // 2477851862
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetAllowClothActors, "GetAllowClothActors" }, // 680107349
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetAllowedAnimCurveEvaluate, "GetAllowedAnimCurveEvaluate" }, // 3725466577
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetAllowRigidBodyAnimNode, "GetAllowRigidBodyAnimNode" }, // 135834523
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetAnimationMode, "GetAnimationMode" }, // 3987248541
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetAnimClass, "GetAnimClass" }, // 2194359143
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetAnimInstance, "GetAnimInstance" }, // 705282755
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetBoneLinearVelocity, "GetBoneLinearVelocity" }, // 2151906990
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetBoneMass, "GetBoneMass" }, // 3256851622
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetClothingSimulationInteractor, "GetClothingSimulationInteractor" }, // 1114839877
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetClothMaxDistanceScale, "GetClothMaxDistanceScale" }, // 496409208
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintByName, "GetConstraintByName" }, // 1949357923
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetConstraints, "GetConstraints" }, // 1628923610
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetConstraintsFromBody, "GetConstraintsFromBody" }, // 1622958418
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetCurrentJointAngles, "GetCurrentJointAngles" }, // 2774140058
#if WITH_EDITOR
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRig, "GetDefaultAnimatingRig" }, // 1080018148
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetDefaultAnimatingRigOverride, "GetDefaultAnimatingRigOverride" }, // 3372551985
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetDisableAnimCurves, "GetDisableAnimCurves" }, // 2341625646
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetDisablePostProcessBlueprint, "GetDisablePostProcessBlueprint" }, // 1526375114
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute, "GetFloatAttribute" }, // 2670303383
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetFloatAttribute_Ref, "GetFloatAttribute_Ref" }, // 3981663519
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute, "GetIntegerAttribute" }, // 1823779529
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetIntegerAttribute_Ref, "GetIntegerAttribute_Ref" }, // 3608667490
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstanceByTag, "GetLinkedAnimGraphInstanceByTag" }, // 3940211449
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimGraphInstancesByTag, "GetLinkedAnimGraphInstancesByTag" }, // 3739205953
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByClass, "GetLinkedAnimLayerInstanceByClass" }, // 3323802915
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetLinkedAnimLayerInstanceByGroup, "GetLinkedAnimLayerInstanceByGroup" }, // 1898189855
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetMorphTarget, "GetMorphTarget" }, // 4100944995
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetPlayRate, "GetPlayRate" }, // 2924201280
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetPosition, "GetPosition" }, // 3495091663
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetPostProcessInstance, "GetPostProcessInstance" }, // 3781791121
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalCenterOfMass, "GetSkeletalCenterOfMass" }, // 2788420595
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetSkeletalMeshAsset, "GetSkeletalMeshAsset" }, // 1516105993
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute, "GetStringAttribute" }, // 787525890
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetStringAttribute_Ref, "GetStringAttribute_Ref" }, // 2819941461
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportDistanceThreshold, "GetTeleportDistanceThreshold" }, // 2043471866
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetTeleportRotationThreshold, "GetTeleportRotationThreshold" }, // 3413006290
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute, "GetTransformAttribute" }, // 2562721794
		{ &Z_Construct_UFunction_USkeletalMeshComponent_GetTransformAttribute_Ref, "GetTransformAttribute_Ref" }, // 1088004077
		{ &Z_Construct_UFunction_USkeletalMeshComponent_HasValidAnimationInstance, "HasValidAnimationInstance" }, // 3270969782
		{ &Z_Construct_UFunction_USkeletalMeshComponent_IsBodyGravityEnabled, "IsBodyGravityEnabled" }, // 3209057536
		{ &Z_Construct_UFunction_USkeletalMeshComponent_IsClothingSimulationSuspended, "IsClothingSimulationSuspended" }, // 1585932079
		{ &Z_Construct_UFunction_USkeletalMeshComponent_IsPlaying, "IsPlaying" }, // 2218247101
		{ &Z_Construct_UFunction_USkeletalMeshComponent_K2_GetClosestPointOnPhysicsAsset, "K2_GetClosestPointOnPhysicsAsset" }, // 2333161884
		{ &Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimClassLayers, "LinkAnimClassLayers" }, // 3240814714
		{ &Z_Construct_UFunction_USkeletalMeshComponent_LinkAnimGraphByTag, "LinkAnimGraphByTag" }, // 309497700
		{ &Z_Construct_UFunction_USkeletalMeshComponent_OverrideAnimationData, "OverrideAnimationData" }, // 3316348389
		{ &Z_Construct_UFunction_USkeletalMeshComponent_Play, "Play" }, // 2347003181
		{ &Z_Construct_UFunction_USkeletalMeshComponent_PlayAnimation, "PlayAnimation" }, // 504524350
		{ &Z_Construct_UFunction_USkeletalMeshComponent_ResetAllBodiesSimulatePhysics, "ResetAllBodiesSimulatePhysics" }, // 35869070
		{ &Z_Construct_UFunction_USkeletalMeshComponent_ResetAllowedAnimCurveEvaluation, "ResetAllowedAnimCurveEvaluation" }, // 2611821822
		{ &Z_Construct_UFunction_USkeletalMeshComponent_ResetAnimInstanceDynamics, "ResetAnimInstanceDynamics" }, // 2436962965
		{ &Z_Construct_UFunction_USkeletalMeshComponent_ResetClothTeleportMode, "ResetClothTeleportMode" }, // 3817316418
		{ &Z_Construct_UFunction_USkeletalMeshComponent_ResumeClothingSimulation, "ResumeClothingSimulation" }, // 2338358585
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowLinearVelocity, "SetAllBodiesBelowLinearVelocity" }, // 208047437
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsBlendWeight, "SetAllBodiesBelowPhysicsBlendWeight" }, // 2444104251
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowPhysicsDisabled, "SetAllBodiesBelowPhysicsDisabled" }, // 1064251350
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesBelowSimulatePhysics, "SetAllBodiesBelowSimulatePhysics" }, // 2355768151
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesPhysicsBlendWeight, "SetAllBodiesPhysicsBlendWeight" }, // 925873891
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetAllBodiesSimulatePhysics, "SetAllBodiesSimulatePhysics" }, // 855280248
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularDriveParams, "SetAllMotorsAngularDriveParams" }, // 3929234182
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularPositionDrive, "SetAllMotorsAngularPositionDrive" }, // 1407269530
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetAllMotorsAngularVelocityDrive, "SetAllMotorsAngularVelocityDrive" }, // 1084316624
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetAllowAnimCurveEvaluation, "SetAllowAnimCurveEvaluation" }, // 2074189913
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetAllowClothActors, "SetAllowClothActors" }, // 753065014
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetAllowedAnimCurvesEvaluation, "SetAllowedAnimCurvesEvaluation" }, // 1766518166
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetAllowRigidBodyAnimNode, "SetAllowRigidBodyAnimNode" }, // 1627659116
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetAngularLimits, "SetAngularLimits" }, // 4104704929
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetAnimation, "SetAnimation" }, // 2697084274
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetAnimationMode, "SetAnimationMode" }, // 265102268
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetAnimClass, "SetAnimClass" }, // 946733488
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetBodyNotifyRigidBodyCollision, "SetBodyNotifyRigidBodyCollision" }, // 2054788851
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetClothMaxDistanceScale, "SetClothMaxDistanceScale" }, // 4073927852
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfile, "SetConstraintProfile" }, // 2864573112
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetConstraintProfileForAll, "SetConstraintProfileForAll" }, // 1961909476
#if WITH_EDITOR
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetDefaultAnimatingRigOverride, "SetDefaultAnimatingRigOverride" }, // 2929020323
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetDisableAnimCurves, "SetDisableAnimCurves" }, // 1045472287
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetDisablePostProcessBlueprint, "SetDisablePostProcessBlueprint" }, // 1847807893
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetEnableBodyGravity, "SetEnableBodyGravity" }, // 311460957
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetEnableGravityOnAllBodiesBelow, "SetEnableGravityOnAllBodiesBelow" }, // 2938552721
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetEnablePhysicsBlending, "SetEnablePhysicsBlending" }, // 1280017872
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetMorphTarget, "SetMorphTarget" }, // 3720287515
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetNotifyRigidBodyCollisionBelow, "SetNotifyRigidBodyCollisionBelow" }, // 1572693679
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetPhysicsBlendWeight, "SetPhysicsBlendWeight" }, // 2246457897
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetPlayRate, "SetPlayRate" }, // 609478105
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetPosition, "SetPosition" }, // 3975060441
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetSkeletalMeshAsset, "SetSkeletalMeshAsset" }, // 527264787
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportDistanceThreshold, "SetTeleportDistanceThreshold" }, // 4220327957
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetTeleportRotationThreshold, "SetTeleportRotationThreshold" }, // 1756038892
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateAnimationInEditor, "SetUpdateAnimationInEditor" }, // 1981100169
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SetUpdateClothInEditor, "SetUpdateClothInEditor" }, // 1494936248
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SnapshotPose, "SnapshotPose" }, // 2887602094
		{ &Z_Construct_UFunction_USkeletalMeshComponent_Stop, "Stop" }, // 698832516
		{ &Z_Construct_UFunction_USkeletalMeshComponent_SuspendClothingSimulation, "SuspendClothingSimulation" }, // 724392782
		{ &Z_Construct_UFunction_USkeletalMeshComponent_TermBodiesBelow, "TermBodiesBelow" }, // 3295252534
		{ &Z_Construct_UFunction_USkeletalMeshComponent_ToggleDisablePostProcessBlueprint, "ToggleDisablePostProcessBlueprint" }, // 2081436429
		{ &Z_Construct_UFunction_USkeletalMeshComponent_UnbindClothFromLeaderPoseComponent, "UnbindClothFromLeaderPoseComponent" }, // 2005497422
		{ &Z_Construct_UFunction_USkeletalMeshComponent_UnlinkAnimClassLayers, "UnlinkAnimClassLayers" }, // 654977051
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering Common" },
		{ "Comment", "/**\n * SkeletalMeshComponent is used to create an instance of an animated SkeletalMesh asset.\n *\n * @see https://docs.unrealengine.com/latest/INT/Engine/Content/Types/SkeletalMeshes/\n * @see USkeletalMesh\n */" },
		{ "HideCategories", "Object Mesh|SkeletalAsset Object Mobility Trigger" },
		{ "IncludePath", "Components/SkeletalMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "SkeletalMeshComponent is used to create an instance of an animated SkeletalMesh asset.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Content/Types/SkeletalMeshes/\n@see USkeletalMesh" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_SkeletalMeshAsset_MetaData[] = {
		{ "BlueprintGetter", "GetSkeletalMeshAsset" },
		{ "BlueprintSetter", "SetSkeletalMeshAsset" },
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_SkeletalMeshAsset = { "SkeletalMeshAsset", nullptr, (EPropertyFlags)0x0044000000002005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, &USkeletalMeshComponent::SetSkeletalMeshAsset_WrapperImpl, &USkeletalMeshComponent::GetSkeletalMeshAsset_WrapperImpl, STRUCT_OFFSET(USkeletalMeshComponent, SkeletalMeshAsset), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_SkeletalMeshAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_SkeletalMeshAsset_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimationBlueprint_MetaData[] = {
		{ "Comment", "/** The blueprint for creating an AnimationScript. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "The blueprint for creating an AnimationScript." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimationBlueprint = { "AnimationBlueprint", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, AnimationBlueprint_DEPRECATED), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimationBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimationBlueprint_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimBlueprintGeneratedClass_MetaData[] = {
		{ "Category", "Animation" },
		{ "DeprecationMessage", "This property is deprecated. Please use AnimClass instead" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimBlueprintGeneratedClass = { "AnimBlueprintGeneratedClass", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, AnimBlueprintGeneratedClass), Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimBlueprintGeneratedClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimBlueprintGeneratedClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimClass_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/* The AnimBlueprint class to use. Use 'SetAnimInstanceClass' to change at runtime. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "The AnimBlueprint class to use. Use 'SetAnimInstanceClass' to change at runtime." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimClass = { "AnimClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, AnimClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimScriptInstance_MetaData[] = {
		{ "Comment", "/** The active animation graph program instance. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "The active animation graph program instance." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimScriptInstance = { "AnimScriptInstance", nullptr, (EPropertyFlags)0x0014000400002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, AnimScriptInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimScriptInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimScriptInstance_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_SubInstances_Inner = { "SubInstances", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_SubInstances_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_SubInstances = { "SubInstances", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, SubInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_SubInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_SubInstances_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_PostProcessAnimInstance_MetaData[] = {
		{ "Comment", "/** An instance created from the PostPhysicsBlueprint property of the skeletal mesh we're using,\n\x09 *  Runs after (and receives pose from) the main anim instance.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "An instance created from the PostPhysicsBlueprint property of the skeletal mesh we're using,\nRuns after (and receives pose from) the main anim instance." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_PostProcessAnimInstance = { "PostProcessAnimInstance", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, PostProcessAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_PostProcessAnimInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_PostProcessAnimInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimationData_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimationData = { "AnimationData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, AnimationData), Z_Construct_UScriptStruct_FSingleAnimationPlayData, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimationData_MetaData)) }; // 4210081968
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_RootBoneTranslation_MetaData[] = {
		{ "Comment", "/** Offset of the root bone from the reference pose. Used to offset bounding box. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Offset of the root bone from the reference pose. Used to offset bounding box." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_RootBoneTranslation = { "RootBoneTranslation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, RootBoneTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_RootBoneTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_RootBoneTranslation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_LineCheckBoundsScale_MetaData[] = {
		{ "Comment", "/** If bEnableLineCheckWithBounds is true, scale the bounds by this value before doing line check. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "If bEnableLineCheckWithBounds is true, scale the bounds by this value before doing line check." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_LineCheckBoundsScale = { "LineCheckBoundsScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, LineCheckBoundsScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_LineCheckBoundsScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_LineCheckBoundsScale_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_LinkedInstances_Inner = { "LinkedInstances", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_LinkedInstances_MetaData[] = {
		{ "Comment", "/** Any running linked anim instances */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Any running linked anim instances" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_LinkedInstances = { "LinkedInstances", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, LinkedInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_LinkedInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_LinkedInstances_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_CachedBoneSpaceTransforms_Inner = { "CachedBoneSpaceTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_CachedBoneSpaceTransforms_MetaData[] = {
		{ "Comment", "/** Cached BoneSpaceTransforms for Update Rate optimization. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Cached BoneSpaceTransforms for Update Rate optimization." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_CachedBoneSpaceTransforms = { "CachedBoneSpaceTransforms", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, CachedBoneSpaceTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_CachedBoneSpaceTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_CachedBoneSpaceTransforms_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_CachedComponentSpaceTransforms_Inner = { "CachedComponentSpaceTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_CachedComponentSpaceTransforms_MetaData[] = {
		{ "Comment", "/** Cached SpaceBases for Update Rate optimization. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Cached SpaceBases for Update Rate optimization." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_CachedComponentSpaceTransforms = { "CachedComponentSpaceTransforms", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, CachedComponentSpaceTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_CachedComponentSpaceTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_CachedComponentSpaceTransforms_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_GlobalAnimRateScale_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Used to scale speed of all animations on this skeletal mesh. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Used to scale speed of all animations on this skeletal mesh." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_GlobalAnimRateScale = { "GlobalAnimRateScale", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, GlobalAnimRateScale), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_GlobalAnimRateScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_GlobalAnimRateScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_KinematicBonesUpdateType_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** If we are running physics, should we update non-simulated bones based on the animation bone positions. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "If we are running physics, should we update non-simulated bones based on the animation bone positions." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_KinematicBonesUpdateType = { "KinematicBonesUpdateType", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, KinematicBonesUpdateType), Z_Construct_UEnum_Engine_EKinematicBonesUpdateToPhysics, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_KinematicBonesUpdateType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_KinematicBonesUpdateType_MetaData)) }; // 591405881
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_PhysicsTransformUpdateMode_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Whether physics simulation updates component transform. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Whether physics simulation updates component transform." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_PhysicsTransformUpdateMode = { "PhysicsTransformUpdateMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, PhysicsTransformUpdateMode), Z_Construct_UEnum_Engine_EPhysicsTransformUpdateMode, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_PhysicsTransformUpdateMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_PhysicsTransformUpdateMode_MetaData)) }; // 3005969211
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimationMode_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Whether to use Animation Blueprint or play Single Animation Asset. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Whether to use Animation Blueprint or play Single Animation Asset." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimationMode = { "AnimationMode", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, AnimationMode), Z_Construct_UEnum_Engine_EAnimationMode, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimationMode_MetaData)) }; // 4106539714
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisablePostProcessBlueprint_MetaData[] = {
		{ "BlueprintGetter", "GetDisablePostProcessBlueprint" },
		{ "BlueprintSetter", "SetDisablePostProcessBlueprint" },
		{ "Category", "Animation" },
		{ "Comment", "/** Controls whether or not this component will evaluate its post process instance. The post-process\n\x09 *  Instance is dictated by the skeletal mesh so this is used for per-instance control.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Controls whether or not this component will evaluate its post process instance. The post-process\nInstance is dictated by the skeletal mesh so this is used for per-instance control." },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisablePostProcessBlueprint_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bDisablePostProcessBlueprint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisablePostProcessBlueprint = { "bDisablePostProcessBlueprint", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisablePostProcessBlueprint_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisablePostProcessBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisablePostProcessBlueprint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateOverlapsOnAnimationFinalize_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Controls whether blending in physics bones will refresh overlaps on this component, defaults to true but can be disabled in cases where we know anim->physics blending doesn't meaningfully change overlaps */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Controls whether blending in physics bones will refresh overlaps on this component, defaults to true but can be disabled in cases where we know anim->physics blending doesn't meaningfully change overlaps" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateOverlapsOnAnimationFinalize_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bUpdateOverlapsOnAnimationFinalize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateOverlapsOnAnimationFinalize = { "bUpdateOverlapsOnAnimationFinalize", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateOverlapsOnAnimationFinalize_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateOverlapsOnAnimationFinalize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateOverlapsOnAnimationFinalize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bHasValidBodies_MetaData[] = {
		{ "Comment", "/** If true, there is at least one body in the current PhysicsAsset with a valid bone in the current SkeletalMesh */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "If true, there is at least one body in the current PhysicsAsset with a valid bone in the current SkeletalMesh" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bHasValidBodies_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bHasValidBodies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bHasValidBodies = { "bHasValidBodies", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bHasValidBodies_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bHasValidBodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bHasValidBodies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bBlendPhysics_MetaData[] = {
		{ "Comment", "/** Enables blending in of physics bodies whether Simulate or not*/" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Enables blending in of physics bodies whether Simulate or not" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bBlendPhysics_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bBlendPhysics = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bBlendPhysics = { "bBlendPhysics", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bBlendPhysics_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bBlendPhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bBlendPhysics_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bEnablePhysicsOnDedicatedServer_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/**\n\x09 *  If true, simulate physics for this component on a dedicated server.\n\x09 *  This should be set if simulating physics and replicating with a dedicated server.\n\x09 *\x09Note: This property cannot be changed at runtime.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "If true, simulate physics for this component on a dedicated server.\nThis should be set if simulating physics and replicating with a dedicated server.\n    Note: This property cannot be changed at runtime." },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bEnablePhysicsOnDedicatedServer_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bEnablePhysicsOnDedicatedServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bEnablePhysicsOnDedicatedServer = { "bEnablePhysicsOnDedicatedServer", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bEnablePhysicsOnDedicatedServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bEnablePhysicsOnDedicatedServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bEnablePhysicsOnDedicatedServer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateMeshWhenKinematic_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** \n\x09 * If true, then the physics bodies will be used to drive the skeletal mesh even when they are\n\x09 * kinematic (not simulating), otherwise the skeletal mesh will be driven by the animation input \n\x09 * when the bodies are kinematic\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "If true, then the physics bodies will be used to drive the skeletal mesh even when they are\nkinematic (not simulating), otherwise the skeletal mesh will be driven by the animation input\nwhen the bodies are kinematic" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateMeshWhenKinematic_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bUpdateMeshWhenKinematic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateMeshWhenKinematic = { "bUpdateMeshWhenKinematic", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateMeshWhenKinematic_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateMeshWhenKinematic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateMeshWhenKinematic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateJointsFromAnimation_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/**\n\x09 *\x09If we should pass joint position to joints each frame, so that they can be used by motorized joints to drive the\n\x09 *\x09ragdoll based on the animation.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "If we should pass joint position to joints each frame, so that they can be used by motorized joints to drive the\nragdoll based on the animation." },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateJointsFromAnimation_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bUpdateJointsFromAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateJointsFromAnimation = { "bUpdateJointsFromAnimation", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateJointsFromAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateJointsFromAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateJointsFromAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bAllowClothActors_MetaData[] = {
		{ "Category", "Clothing" },
		{ "Comment", "/**\n\x09 * Toggles creation of cloth simulation. Distinct from the simulation toggle below in that, if off, avoids allocating\n\x09 * the actors entirely instead of just skipping the simulation step.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Toggles creation of cloth simulation. Distinct from the simulation toggle below in that, if off, avoids allocating\nthe actors entirely instead of just skipping the simulation step." },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bAllowClothActors_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bAllowClothActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bAllowClothActors = { "bAllowClothActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bAllowClothActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bAllowClothActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bAllowClothActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisableClothSimulation_MetaData[] = {
		{ "Category", "Clothing" },
		{ "Comment", "/** Disable cloth simulation and play original animation without simulation */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Disable cloth simulation and play original animation without simulation" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisableClothSimulation_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bDisableClothSimulation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisableClothSimulation = { "bDisableClothSimulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisableClothSimulation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisableClothSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisableClothSimulation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisableRigidBodyAnimNode_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Disable rigid body animation nodes and play original animation without simulation */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Disable rigid body animation nodes and play original animation without simulation" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisableRigidBodyAnimNode_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bDisableRigidBodyAnimNode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisableRigidBodyAnimNode = { "bDisableRigidBodyAnimNode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisableRigidBodyAnimNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisableRigidBodyAnimNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisableRigidBodyAnimNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bAllowAnimCurveEvaluation_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** Disable animation curves for this component. If this is set true, no curves will be processed */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Disable animation curves for this component. If this is set true, no curves will be processed" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bAllowAnimCurveEvaluation_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bAllowAnimCurveEvaluation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bAllowAnimCurveEvaluation = { "bAllowAnimCurveEvaluation", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bAllowAnimCurveEvaluation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bAllowAnimCurveEvaluation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bAllowAnimCurveEvaluation_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisableAnimCurves_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisableAnimCurves_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bDisableAnimCurves_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisableAnimCurves = { "bDisableAnimCurves", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisableAnimCurves_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisableAnimCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisableAnimCurves_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bCollideWithEnvironment_MetaData[] = {
		{ "Category", "Clothing" },
		{ "Comment", "/** can't collide with part of environment if total collision volumes exceed 16 capsules or 32 planes per convex */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "can't collide with part of environment if total collision volumes exceed 16 capsules or 32 planes per convex" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bCollideWithEnvironment_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bCollideWithEnvironment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bCollideWithEnvironment = { "bCollideWithEnvironment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bCollideWithEnvironment_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bCollideWithEnvironment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bCollideWithEnvironment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bCollideWithAttachedChildren_MetaData[] = {
		{ "Category", "Clothing" },
		{ "Comment", "/** can't collide with part of attached children if total collision volumes exceed 16 capsules or 32 planes per convex */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "can't collide with part of attached children if total collision volumes exceed 16 capsules or 32 planes per convex" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bCollideWithAttachedChildren_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bCollideWithAttachedChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bCollideWithAttachedChildren = { "bCollideWithAttachedChildren", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bCollideWithAttachedChildren_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bCollideWithAttachedChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bCollideWithAttachedChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bForceCollisionUpdate_MetaData[] = {
		{ "Category", "Clothing" },
		{ "Comment", "/**\n\x09 * Forces the cloth simulation to constantly update its external collisions, at the expense of performance.\n\x09 * This will help to prevent missed collisions if the cloth's skeletal mesh component isn't moving,\n\x09 * and when instead, wind or other moving objects are causing new collision shapes to come into the cloth's vicinity.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Forces the cloth simulation to constantly update its external collisions, at the expense of performance.\nThis will help to prevent missed collisions if the cloth's skeletal mesh component isn't moving,\nand when instead, wind or other moving objects are causing new collision shapes to come into the cloth's vicinity." },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bForceCollisionUpdate_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bForceCollisionUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bForceCollisionUpdate = { "bForceCollisionUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bForceCollisionUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bForceCollisionUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bForceCollisionUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bLocalSpaceSimulation_MetaData[] = {
		{ "Category", "Clothing" },
		{ "DeprecationMessage", "This property is deprecated. Cloth simulation always happens in local space." },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bLocalSpaceSimulation_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bLocalSpaceSimulation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bLocalSpaceSimulation = { "bLocalSpaceSimulation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bLocalSpaceSimulation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bLocalSpaceSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bLocalSpaceSimulation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bResetAfterTeleport_MetaData[] = {
		{ "Category", "Clothing" },
		{ "Comment", "/** reset the clothing after moving the clothing position (called teleport) */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "reset the clothing after moving the clothing position (called teleport)" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bResetAfterTeleport_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bResetAfterTeleport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bResetAfterTeleport = { "bResetAfterTeleport", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bResetAfterTeleport_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bResetAfterTeleport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bResetAfterTeleport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDeferKinematicBoneUpdate_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** Whether animation and world transform updates are deferred. If this is on, the kinematic bodies (scene query data) will not update until the next time the physics simulation is run */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Whether animation and world transform updates are deferred. If this is on, the kinematic bodies (scene query data) will not update until the next time the physics simulation is run" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDeferKinematicBoneUpdate_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bDeferKinematicBoneUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDeferKinematicBoneUpdate = { "bDeferKinematicBoneUpdate", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDeferKinematicBoneUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDeferKinematicBoneUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDeferKinematicBoneUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bNoSkeletonUpdate_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** Skips Ticking and Bone Refresh. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Skips Ticking and Bone Refresh." },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bNoSkeletonUpdate_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bNoSkeletonUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bNoSkeletonUpdate = { "bNoSkeletonUpdate", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bNoSkeletonUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bNoSkeletonUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bNoSkeletonUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bPauseAnims_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** pauses this component's animations (doesn't tick them, but still refreshes bones) */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "pauses this component's animations (doesn't tick them, but still refreshes bones)" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bPauseAnims_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bPauseAnims = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bPauseAnims = { "bPauseAnims", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bPauseAnims_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bPauseAnims_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bPauseAnims_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUseRefPoseOnInitAnim_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** On InitAnim should we set to ref pose (if false use first tick of animation data). If enabled, takes precedence over UAnimationSettings::bTickAnimationOnSkeletalMeshInit*/" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "On InitAnim should we set to ref pose (if false use first tick of animation data). If enabled, takes precedence over UAnimationSettings::bTickAnimationOnSkeletalMeshInit" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUseRefPoseOnInitAnim_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bUseRefPoseOnInitAnim = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUseRefPoseOnInitAnim = { "bUseRefPoseOnInitAnim", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUseRefPoseOnInitAnim_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUseRefPoseOnInitAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUseRefPoseOnInitAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bEnablePerPolyCollision_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/**\n\x09* Uses skinned data for collision data.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Uses skinned data for collision data." },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bEnablePerPolyCollision_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bEnablePerPolyCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bEnablePerPolyCollision = { "bEnablePerPolyCollision", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bEnablePerPolyCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bEnablePerPolyCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bEnablePerPolyCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bForceRefpose_MetaData[] = {
		{ "Comment", "/** If true, force the mesh into the reference pose - is an optimization. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "If true, force the mesh into the reference pose - is an optimization." },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bForceRefpose_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bForceRefpose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bForceRefpose = { "bForceRefpose", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bForceRefpose_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bForceRefpose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bForceRefpose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bOnlyAllowAutonomousTickPose_MetaData[] = {
		{ "Comment", "/** If true TickPose() will not be called from the Component's TickComponent function.\n\x09* It will instead be called from Autonomous networking updates. See ACharacter. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "If true TickPose() will not be called from the Component's TickComponent function.\nIt will instead be called from Autonomous networking updates. See ACharacter." },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bOnlyAllowAutonomousTickPose_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bOnlyAllowAutonomousTickPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bOnlyAllowAutonomousTickPose = { "bOnlyAllowAutonomousTickPose", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bOnlyAllowAutonomousTickPose_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bOnlyAllowAutonomousTickPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bOnlyAllowAutonomousTickPose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bIsAutonomousTickPose_MetaData[] = {
		{ "Comment", "/** True if calling TickPose() from Autonomous networking updates. See ACharacter. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "True if calling TickPose() from Autonomous networking updates. See ACharacter." },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bIsAutonomousTickPose_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bIsAutonomousTickPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bIsAutonomousTickPose = { "bIsAutonomousTickPose", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bIsAutonomousTickPose_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bIsAutonomousTickPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bIsAutonomousTickPose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bOldForceRefPose_MetaData[] = {
		{ "Comment", "/** If bForceRefPose was set last tick. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "If bForceRefPose was set last tick." },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bOldForceRefPose_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bOldForceRefPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bOldForceRefPose = { "bOldForceRefPose", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bOldForceRefPose_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bOldForceRefPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bOldForceRefPose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bShowPrePhysBones_MetaData[] = {
		{ "Comment", "/** Bool that enables debug drawing of the skeleton before it is passed to the physics. Useful for debugging animation-driven physics. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Bool that enables debug drawing of the skeleton before it is passed to the physics. Useful for debugging animation-driven physics." },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bShowPrePhysBones_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bShowPrePhysBones = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bShowPrePhysBones = { "bShowPrePhysBones", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bShowPrePhysBones_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bShowPrePhysBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bShowPrePhysBones_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bRequiredBonesUpToDate_MetaData[] = {
		{ "Comment", "/** If false, indicates that on the next call to UpdateSkelPose the RequiredBones array should be recalculated. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "If false, indicates that on the next call to UpdateSkelPose the RequiredBones array should be recalculated." },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bRequiredBonesUpToDate_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bRequiredBonesUpToDate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bRequiredBonesUpToDate = { "bRequiredBonesUpToDate", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bRequiredBonesUpToDate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bRequiredBonesUpToDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bRequiredBonesUpToDate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bAnimTreeInitialised_MetaData[] = {
		{ "Comment", "/** If true, AnimTree has been initialised. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "If true, AnimTree has been initialised." },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bAnimTreeInitialised_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bAnimTreeInitialised = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bAnimTreeInitialised = { "bAnimTreeInitialised", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bAnimTreeInitialised_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bAnimTreeInitialised_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bAnimTreeInitialised_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bIncludeComponentLocationIntoBounds_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** If true, the Location of this Component will be included into its bounds calculation\n\x09* (this can be useful when using SMU_OnlyTickPoseWhenRendered on a character that moves away from the root and no bones are left near the origin of the component) */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "If true, the Location of this Component will be included into its bounds calculation\n(this can be useful when using SMU_OnlyTickPoseWhenRendered on a character that moves away from the root and no bones are left near the origin of the component)" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bIncludeComponentLocationIntoBounds_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bIncludeComponentLocationIntoBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bIncludeComponentLocationIntoBounds = { "bIncludeComponentLocationIntoBounds", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bIncludeComponentLocationIntoBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bIncludeComponentLocationIntoBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bIncludeComponentLocationIntoBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bEnableLineCheckWithBounds_MetaData[] = {
		{ "Comment", "/** If true, line checks will test against the bounding box of this skeletal mesh component and return a hit if there is a collision. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "If true, line checks will test against the bounding box of this skeletal mesh component and return a hit if there is a collision." },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bEnableLineCheckWithBounds_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bEnableLineCheckWithBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bEnableLineCheckWithBounds = { "bEnableLineCheckWithBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bEnableLineCheckWithBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bEnableLineCheckWithBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bEnableLineCheckWithBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bPropagateCurvesToFollowers_MetaData[] = {
		{ "Category", "LeaderPoseComponent" },
		{ "Comment", "/** If true, propagates calls to ApplyAnimationCurvesToComponent for follower components, only needed if follower components do not tick themselves */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "If true, propagates calls to ApplyAnimationCurvesToComponent for follower components, only needed if follower components do not tick themselves" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bPropagateCurvesToFollowers_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bPropagateCurvesToFollowers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bPropagateCurvesToFollowers = { "bPropagateCurvesToFollowers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bPropagateCurvesToFollowers_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bPropagateCurvesToFollowers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bPropagateCurvesToFollowers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bSkipKinematicUpdateWhenInterpolating_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/** Whether to skip UpdateKinematicBonesToAnim() when interpolating. Kinematic bones are updated to the target interpolation pose only on ticks when they are evaluated. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Whether to skip UpdateKinematicBonesToAnim() when interpolating. Kinematic bones are updated to the target interpolation pose only on ticks when they are evaluated." },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bSkipKinematicUpdateWhenInterpolating_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bSkipKinematicUpdateWhenInterpolating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bSkipKinematicUpdateWhenInterpolating = { "bSkipKinematicUpdateWhenInterpolating", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bSkipKinematicUpdateWhenInterpolating_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bSkipKinematicUpdateWhenInterpolating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bSkipKinematicUpdateWhenInterpolating_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bSkipBoundsUpdateWhenInterpolating_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/** Whether to skip bounds update when interpolating. Bounds are updated to the target interpolation pose only on ticks when they are evaluated. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Whether to skip bounds update when interpolating. Bounds are updated to the target interpolation pose only on ticks when they are evaluated." },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bSkipBoundsUpdateWhenInterpolating_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bSkipBoundsUpdateWhenInterpolating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bSkipBoundsUpdateWhenInterpolating = { "bSkipBoundsUpdateWhenInterpolating", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bSkipBoundsUpdateWhenInterpolating_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bSkipBoundsUpdateWhenInterpolating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bSkipBoundsUpdateWhenInterpolating_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateAnimationInEditor_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** If true, this will Tick until disabled */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "If true, this will Tick until disabled" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateAnimationInEditor_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bUpdateAnimationInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateAnimationInEditor = { "bUpdateAnimationInEditor", nullptr, (EPropertyFlags)0x00200c0800002801, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateAnimationInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateAnimationInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateAnimationInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateClothInEditor_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** If true, will play cloth in editor */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "If true, will play cloth in editor" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateClothInEditor_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bUpdateClothInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateClothInEditor = { "bUpdateClothInEditor", nullptr, (EPropertyFlags)0x00200c0800002801, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateClothInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateClothInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateClothInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bOverrideDefaultAnimatingRig_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** If true, DefaultAnimatingRigOverride will be used. If false, use the DefaultAnimatingRig in the SkeletalMesh */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "If true, DefaultAnimatingRigOverride will be used. If false, use the DefaultAnimatingRig in the SkeletalMesh" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bOverrideDefaultAnimatingRig_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bOverrideDefaultAnimatingRig = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bOverrideDefaultAnimatingRig = { "bOverrideDefaultAnimatingRig", nullptr, (EPropertyFlags)0x00200c0800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bOverrideDefaultAnimatingRig_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bOverrideDefaultAnimatingRig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bOverrideDefaultAnimatingRig_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bNeedsQueuedAnimEventsDispatched_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bNeedsQueuedAnimEventsDispatched_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bNeedsQueuedAnimEventsDispatched = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bNeedsQueuedAnimEventsDispatched = { "bNeedsQueuedAnimEventsDispatched", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bNeedsQueuedAnimEventsDispatched_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bNeedsQueuedAnimEventsDispatched_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bNeedsQueuedAnimEventsDispatched_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_CachedAnimCurveUidVersion_MetaData[] = {
		{ "Comment", "/** Cache AnimCurveUidVersion from Skeleton and this will be used to identify if it needs to be updated */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Cache AnimCurveUidVersion from Skeleton and this will be used to identify if it needs to be updated" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_CachedAnimCurveUidVersion = { "CachedAnimCurveUidVersion", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, CachedAnimCurveUidVersion), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_CachedAnimCurveUidVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_CachedAnimCurveUidVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_ClothBlendWeight_MetaData[] = {
		{ "Category", "Clothing" },
		{ "Comment", "/**\n\x09 * weight to blend between simulated results and key-framed positions\n\x09 * if weight is 1.0, shows only cloth simulation results and 0.0 will show only skinned results\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "weight to blend between simulated results and key-framed positions\nif weight is 1.0, shows only cloth simulation results and 0.0 will show only skinned results" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_ClothBlendWeight = { "ClothBlendWeight", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, ClothBlendWeight), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_ClothBlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_ClothBlendWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bWaitForParallelClothTask_MetaData[] = {
		{ "Category", "Clothing" },
		{ "Comment", "/** Whether we should stall the Cloth tick task until the cloth simulation is complete. This is required if we want up-to-date\n\x09 * cloth data on the game thread, for example if we want to generate particles at cloth vertices.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Whether we should stall the Cloth tick task until the cloth simulation is complete. This is required if we want up-to-date\ncloth data on the game thread, for example if we want to generate particles at cloth vertices." },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bWaitForParallelClothTask_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bWaitForParallelClothTask = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bWaitForParallelClothTask = { "bWaitForParallelClothTask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bWaitForParallelClothTask_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bWaitForParallelClothTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bWaitForParallelClothTask_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_DisallowedAnimCurves_Inner = { "DisallowedAnimCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_DisallowedAnimCurves_MetaData[] = {
		{ "Comment", "/** You can choose to disable certain curves if you prefer. \n\x09 * This is transient curves that will be ignored by animation system if you choose this */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "You can choose to disable certain curves if you prefer.\nThis is transient curves that will be ignored by animation system if you choose this" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_DisallowedAnimCurves = { "DisallowedAnimCurves", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, DisallowedAnimCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_DisallowedAnimCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_DisallowedAnimCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_BodySetup_MetaData[] = {
		{ "Comment", "/**\n\x09* Used for per poly collision. In 99% of cases you will be better off using a Physics Asset.\n\x09* This BodySetup is per instance because all modification of vertices is done in place */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Used for per poly collision. In 99% of cases you will be better off using a Physics Asset.\nThis BodySetup is per instance because all modification of vertices is done in place" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_BodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_BodySetup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_ClothMaxDistanceScale_MetaData[] = {
		{ "Category", "Clothing" },
		{ "ClampMax", "10000.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "UIMax", "10.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_ClothMaxDistanceScale = { "ClothMaxDistanceScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, ClothMaxDistanceScale), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_ClothMaxDistanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_ClothMaxDistanceScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_OnConstraintBroken_MetaData[] = {
		{ "Comment", "/** Notification when constraint is broken. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Notification when constraint is broken." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_OnConstraintBroken = { "OnConstraintBroken", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, OnConstraintBroken), Z_Construct_UDelegateFunction_Engine_ConstraintBrokenSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_OnConstraintBroken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_OnConstraintBroken_MetaData)) }; // 3136559594
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_OnPlasticDeformation_MetaData[] = {
		{ "Comment", "/** Notification when constraint plasticity drive target changes. */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Notification when constraint plasticity drive target changes." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_OnPlasticDeformation = { "OnPlasticDeformation", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, OnPlasticDeformation), Z_Construct_UDelegateFunction_Engine_PlasticDeformationEventSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_OnPlasticDeformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_OnPlasticDeformation_MetaData)) }; // 3957684391
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_ClothingSimulationFactory_MetaData[] = {
		{ "Category", "Clothing" },
		{ "Comment", "/** Class of the object responsible for  */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Class of the object responsible for" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_ClothingSimulationFactory = { "ClothingSimulationFactory", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, ClothingSimulationFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_UClothingSimulationFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_ClothingSimulationFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_ClothingSimulationFactory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_TeleportDistanceThreshold_MetaData[] = {
		{ "BlueprintGetter", "GetTeleportDistanceThreshold" },
		{ "BlueprintSetter", "SetTeleportDistanceThreshold" },
		{ "Category", "Clothing" },
		{ "Comment", "/**\n\x09* Conduct teleportation if the character's movement is greater than this threshold in 1 frame.\n\x09* Zero or negative values will skip the check.\n\x09* You can also do force teleport manually using ForceNextUpdateTeleport() / ForceNextUpdateTeleportAndReset().\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Conduct teleportation if the character's movement is greater than this threshold in 1 frame.\nZero or negative values will skip the check.\nYou can also do force teleport manually using ForceNextUpdateTeleport() / ForceNextUpdateTeleportAndReset()." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_TeleportDistanceThreshold = { "TeleportDistanceThreshold", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, TeleportDistanceThreshold), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_TeleportDistanceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_TeleportDistanceThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_TeleportRotationThreshold_MetaData[] = {
		{ "BlueprintGetter", "GetTeleportRotationThreshold" },
		{ "BlueprintSetter", "SetTeleportRotationThreshold" },
		{ "Category", "Clothing" },
		{ "Comment", "/**\n\x09* Rotation threshold in degrees, ranging from 0 to 180.\n\x09* Conduct teleportation if the character's rotation is greater than this threshold in 1 frame.\n\x09* Zero or negative values will skip the check.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Rotation threshold in degrees, ranging from 0 to 180.\nConduct teleportation if the character's rotation is greater than this threshold in 1 frame.\nZero or negative values will skip the check." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_TeleportRotationThreshold = { "TeleportRotationThreshold", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, TeleportRotationThreshold), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_TeleportRotationThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_TeleportRotationThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_LastPoseTickFrame_MetaData[] = {
		{ "Comment", "// Can't rely on time value, because those may be affected by dilation and whether or not\n// the game is paused.\n// Also can't just rely on a flag as other components (like CharacterMovementComponent) may tick\n// the pose and we can't guarantee tick order.\n" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Can't rely on time value, because those may be affected by dilation and whether or not\nthe game is paused.\nAlso can't just rely on a flag as other components (like CharacterMovementComponent) may tick\nthe pose and we can't guarantee tick order." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_LastPoseTickFrame = { "LastPoseTickFrame", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, LastPoseTickFrame), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_LastPoseTickFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_LastPoseTickFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_ClothingInteractor_MetaData[] = {
		{ "Comment", "/** \n\x09 * Object responsible for interacting with the clothing simulation.\n\x09 * Blueprints and code can call/set data on this from the game thread and the next time\n\x09 * it is safe to do so the interactor will sync to the simulation context\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Object responsible for interacting with the clothing simulation.\nBlueprints and code can call/set data on this from the game thread and the next time\nit is safe to do so the interactor will sync to the simulation context" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_ClothingInteractor = { "ClothingInteractor", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, ClothingInteractor), Z_Construct_UClass_UClothingSimulationInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_ClothingInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_ClothingInteractor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_OnAnimInitialized_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "// Broadcast when the components anim instance is initialized\n" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Broadcast when the components anim instance is initialized" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_OnAnimInitialized = { "OnAnimInitialized", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, OnAnimInitialized), Z_Construct_UDelegateFunction_Engine_OnAnimInitialized__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_OnAnimInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_OnAnimInitialized_MetaData)) }; // 3167079263
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_SequenceToPlay_MetaData[] = {
		{ "Comment", "// these are deprecated variables from removing SingleAnimSkeletalComponent\n// remove if this version goes away : VER_UE4_REMOVE_SINGLENODEINSTANCE\n// deprecated variable to be re-save\n" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "these are deprecated variables from removing SingleAnimSkeletalComponent\nremove if this version goes away : VER_UE4_REMOVE_SINGLENODEINSTANCE\ndeprecated variable to be re-save" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_SequenceToPlay = { "SequenceToPlay", nullptr, (EPropertyFlags)0x0044000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, SequenceToPlay_DEPRECATED), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_SequenceToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_SequenceToPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimToPlay_MetaData[] = {
		{ "Comment", "// The default sequence to play on this skeletal mesh\n" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "The default sequence to play on this skeletal mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimToPlay = { "AnimToPlay", nullptr, (EPropertyFlags)0x0044000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, AnimToPlay_DEPRECATED), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimToPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDefaultLooping_MetaData[] = {
		{ "Comment", "// Default setting for looping for SequenceToPlay. This is not current state of looping.\n" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Default setting for looping for SequenceToPlay. This is not current state of looping." },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDefaultLooping_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bDefaultLooping_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDefaultLooping = { "bDefaultLooping", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDefaultLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDefaultLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDefaultLooping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDefaultPlaying_MetaData[] = {
		{ "Comment", "// Default setting for playing for SequenceToPlay. This is not current state of playing.\n" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Default setting for playing for SequenceToPlay. This is not current state of playing." },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDefaultPlaying_SetBit(void* Obj)
	{
		((USkeletalMeshComponent*)Obj)->bDefaultPlaying_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDefaultPlaying = { "bDefaultPlaying", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponent), &Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDefaultPlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDefaultPlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDefaultPlaying_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_DefaultPosition_MetaData[] = {
		{ "Comment", "// Default setting for position of SequenceToPlay to play. \n" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Default setting for position of SequenceToPlay to play." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_DefaultPosition = { "DefaultPosition", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, DefaultPosition_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_DefaultPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_DefaultPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_DefaultPlayRate_MetaData[] = {
		{ "Comment", "// Default setting for playrate of SequenceToPlay to play. \n" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Default setting for playrate of SequenceToPlay to play." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_DefaultPlayRate = { "DefaultPlayRate", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, DefaultPlayRate_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_DefaultPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_DefaultPlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_DefaultAnimatingRigOverride_MetaData[] = {
		{ "AllowedClasses", "/Script/ControlRigDeveloper.ControlRigBlueprint" },
		{ "BlueprintGetter", "GetDefaultAnimatingRigOverride" },
		{ "BlueprintSetter", "SetDefaultAnimatingRigOverride" },
		{ "Category", "AnimationRig" },
		{ "Comment", "/** Default Animating Rig to Use if bOverrideDefaultAnimatingRig is true */" },
		{ "editcondition", "bOverrideDefaultAnimatingRig" },
		{ "ModuleRelativePath", "Classes/Components/SkeletalMeshComponent.h" },
		{ "ToolTip", "Default Animating Rig to Use if bOverrideDefaultAnimatingRig is true" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_DefaultAnimatingRigOverride = { "DefaultAnimatingRigOverride", nullptr, (EPropertyFlags)0x0044000800000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshComponent, DefaultAnimatingRigOverride), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_DefaultAnimatingRigOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_DefaultAnimatingRigOverride_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkeletalMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_SkeletalMeshAsset,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimationBlueprint,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimBlueprintGeneratedClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimScriptInstance,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_SubInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_SubInstances,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_PostProcessAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimationData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_RootBoneTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_LineCheckBoundsScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_LinkedInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_LinkedInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_CachedBoneSpaceTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_CachedBoneSpaceTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_CachedComponentSpaceTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_CachedComponentSpaceTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_GlobalAnimRateScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_KinematicBonesUpdateType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_PhysicsTransformUpdateMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisablePostProcessBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateOverlapsOnAnimationFinalize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bHasValidBodies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bBlendPhysics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bEnablePhysicsOnDedicatedServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateMeshWhenKinematic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateJointsFromAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bAllowClothActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisableClothSimulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisableRigidBodyAnimNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bAllowAnimCurveEvaluation,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDisableAnimCurves,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bCollideWithEnvironment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bCollideWithAttachedChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bForceCollisionUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bLocalSpaceSimulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bResetAfterTeleport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDeferKinematicBoneUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bNoSkeletonUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bPauseAnims,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUseRefPoseOnInitAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bEnablePerPolyCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bForceRefpose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bOnlyAllowAutonomousTickPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bIsAutonomousTickPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bOldForceRefPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bShowPrePhysBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bRequiredBonesUpToDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bAnimTreeInitialised,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bIncludeComponentLocationIntoBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bEnableLineCheckWithBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bPropagateCurvesToFollowers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bSkipKinematicUpdateWhenInterpolating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bSkipBoundsUpdateWhenInterpolating,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateAnimationInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bUpdateClothInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bOverrideDefaultAnimatingRig,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bNeedsQueuedAnimEventsDispatched,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_CachedAnimCurveUidVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_ClothBlendWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bWaitForParallelClothTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_DisallowedAnimCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_DisallowedAnimCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_BodySetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_ClothMaxDistanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_OnConstraintBroken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_OnPlasticDeformation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_ClothingSimulationFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_TeleportDistanceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_TeleportRotationThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_LastPoseTickFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_ClothingInteractor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_OnAnimInitialized,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_SequenceToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_AnimToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDefaultLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_bDefaultPlaying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_DefaultPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_DefaultPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponent_Statics::NewProp_DefaultAnimatingRigOverride,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USkeletalMeshComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(USkeletalMeshComponent, IInterface_CollisionDataProvider), false },  // 1866130202
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshComponent_Statics::ClassParams = {
		&USkeletalMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USkeletalMeshComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMeshComponent()
	{
		if (!Z_Registration_Info_UClass_USkeletalMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshComponent.OuterSingleton, Z_Construct_UClass_USkeletalMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletalMeshComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USkeletalMeshComponent>()
	{
		return USkeletalMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshComponent);
	USkeletalMeshComponent::~USkeletalMeshComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMeshComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_Statics::EnumInfo[] = {
		{ ECustomBoneAttributeLookup_StaticEnum, TEXT("ECustomBoneAttributeLookup"), &Z_Registration_Info_UEnum_ECustomBoneAttributeLookup, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2474496726U) },
		{ EKinematicBonesUpdateToPhysics_StaticEnum, TEXT("EKinematicBonesUpdateToPhysics"), &Z_Registration_Info_UEnum_EKinematicBonesUpdateToPhysics, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 591405881U) },
		{ EAnimationMode_StaticEnum, TEXT("EAnimationMode"), &Z_Registration_Info_UEnum_EAnimationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4106539714U) },
		{ EPhysicsTransformUpdateMode_StaticEnum, TEXT("EPhysicsTransformUpdateMode"), &Z_Registration_Info_UEnum_EPhysicsTransformUpdateMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3005969211U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_Statics::ScriptStructInfo[] = {
		{ FSkeletalMeshComponentEndPhysicsTickFunction::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunction_Statics::NewStructOps, TEXT("SkeletalMeshComponentEndPhysicsTickFunction"), &Z_Registration_Info_UScriptStruct_SkeletalMeshComponentEndPhysicsTickFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshComponentEndPhysicsTickFunction), 576362052U) },
		{ FSkeletalMeshComponentClothTickFunction::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshComponentClothTickFunction_Statics::NewStructOps, TEXT("SkeletalMeshComponentClothTickFunction"), &Z_Registration_Info_UScriptStruct_SkeletalMeshComponentClothTickFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshComponentClothTickFunction), 275748533U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalMeshComponent, USkeletalMeshComponent::StaticClass, TEXT("USkeletalMeshComponent"), &Z_Registration_Info_UClass_USkeletalMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshComponent), 2840878385U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_2309802650(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkeletalMeshComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
