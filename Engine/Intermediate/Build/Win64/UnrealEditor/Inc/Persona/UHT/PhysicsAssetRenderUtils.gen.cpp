// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsAssetRenderUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsAssetRenderUtils() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EConstraintTransformComponentFlags();
	PERSONA_API UClass* Z_Construct_UClass_UPhysicsAssetRenderUtilities();
	PERSONA_API UClass* Z_Construct_UClass_UPhysicsAssetRenderUtilities_NoRegister();
	PERSONA_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorCollisionViewMode();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorConstraintViewMode();
	UPackage* Z_Construct_UPackage__Script_Persona();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsAssetRenderSettings;
class UScriptStruct* FPhysicsAssetRenderSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsAssetRenderSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsAssetRenderSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings, (UObject*)Z_Construct_UPackage__Script_Persona(), TEXT("PhysicsAssetRenderSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsAssetRenderSettings.OuterSingleton;
}
template<> PERSONA_API UScriptStruct* StaticStruct<FPhysicsAssetRenderSettings>()
{
	return FPhysicsAssetRenderSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConstraintViewportManipulationFlags_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintViewportManipulationFlags_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConstraintViewportManipulationFlags;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConstraintTransformComponentDisplayRelativeToDefaultFlags_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintTransformComponentDisplayRelativeToDefaultFlags_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConstraintTransformComponentDisplayRelativeToDefaultFlags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintDrawSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstraintDrawSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsBlend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PhysicsBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideKinematicBodies_MetaData[];
#endif
		static void NewProp_bHideKinematicBodies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideKinematicBodies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideSimulatedBodies_MetaData[];
#endif
		static void NewProp_bHideSimulatedBodies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideSimulatedBodies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderOnlySelectedConstraints_MetaData[];
#endif
		static void NewProp_bRenderOnlySelectedConstraints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderOnlySelectedConstraints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowCOM_MetaData[];
#endif
		static void NewProp_bShowCOM_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCOM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowConstraintsAsPoints_MetaData[];
#endif
		static void NewProp_bShowConstraintsAsPoints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowConstraintsAsPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneUnselectedColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneUnselectedColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoCollisionColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoCollisionColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_COMRenderColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_COMRenderColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_COMRenderSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_COMRenderSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfluenceLineLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InfluenceLineLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneUnselectedMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoneUnselectedMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNoCollisionMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoneNoCollisionMaterial;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HiddenBodies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HiddenBodies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HiddenBodies;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HiddenConstraints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HiddenConstraints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HiddenConstraints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n\x09Per Physics Asset parameters that determine how debug draw functions \n\x09should render that asset in an editor viewport.\n\x09\n\x09These parameters are used across different editor modes to ensure the \n\x09""debug draw is consistent. This makes it easier to create or debug \n\x09physics assets whilst switching between editor modes.\n*/" },
		{ "ModuleRelativePath", "Public/PhysicsAssetRenderUtils.h" },
		{ "ToolTip", "Per Physics Asset parameters that determine how debug draw functions\nshould render that asset in an editor viewport.\n\nThese parameters are used across different editor modes to ensure the\ndebug draw is consistent. This makes it easier to create or debug\nphysics assets whilst switching between editor modes." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsAssetRenderSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_CollisionViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_CollisionViewMode_MetaData[] = {
		{ "Comment", "// Physics Asset Editor Viewport Options\n" },
		{ "ModuleRelativePath", "Public/PhysicsAssetRenderUtils.h" },
		{ "ToolTip", "Physics Asset Editor Viewport Options" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_CollisionViewMode = { "CollisionViewMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsAssetRenderSettings, CollisionViewMode), Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorCollisionViewMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_CollisionViewMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_CollisionViewMode_MetaData)) }; // 1838436077
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_ConstraintViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_ConstraintViewMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicsAssetRenderUtils.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_ConstraintViewMode = { "ConstraintViewMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsAssetRenderSettings, ConstraintViewMode), Z_Construct_UEnum_UnrealEd_EPhysicsAssetEditorConstraintViewMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_ConstraintViewMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_ConstraintViewMode_MetaData)) }; // 778463392
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_ConstraintViewportManipulationFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_ConstraintViewportManipulationFlags_MetaData[] = {
		{ "Comment", "// Flags that determine which parts of the constraints transforms (parent frame, child frame, position and rotation) are currently begin manipulated in the viewport.\n" },
		{ "ModuleRelativePath", "Public/PhysicsAssetRenderUtils.h" },
		{ "ToolTip", "Flags that determine which parts of the constraints transforms (parent frame, child frame, position and rotation) are currently begin manipulated in the viewport." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_ConstraintViewportManipulationFlags = { "ConstraintViewportManipulationFlags", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsAssetRenderSettings, ConstraintViewportManipulationFlags), Z_Construct_UEnum_Engine_EConstraintTransformComponentFlags, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_ConstraintViewportManipulationFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_ConstraintViewportManipulationFlags_MetaData)) }; // 3406363569
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_ConstraintTransformComponentDisplayRelativeToDefaultFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_ConstraintTransformComponentDisplayRelativeToDefaultFlags_MetaData[] = {
		{ "Comment", "// Flags that determine which parts of the constraints transforms (parent/child position/rotation) should be displayed as an offset from the default (snapped) transforms.\n" },
		{ "ModuleRelativePath", "Public/PhysicsAssetRenderUtils.h" },
		{ "ToolTip", "Flags that determine which parts of the constraints transforms (parent/child position/rotation) should be displayed as an offset from the default (snapped) transforms." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_ConstraintTransformComponentDisplayRelativeToDefaultFlags = { "ConstraintTransformComponentDisplayRelativeToDefaultFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsAssetRenderSettings, ConstraintTransformComponentDisplayRelativeToDefaultFlags), Z_Construct_UEnum_Engine_EConstraintTransformComponentFlags, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_ConstraintTransformComponentDisplayRelativeToDefaultFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_ConstraintTransformComponentDisplayRelativeToDefaultFlags_MetaData)) }; // 3406363569
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_ConstraintDrawSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicsAssetRenderUtils.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_ConstraintDrawSize = { "ConstraintDrawSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsAssetRenderSettings, ConstraintDrawSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_ConstraintDrawSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_ConstraintDrawSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_PhysicsBlend_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicsAssetRenderUtils.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_PhysicsBlend = { "PhysicsBlend", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsAssetRenderSettings, PhysicsBlend), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_PhysicsBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_PhysicsBlend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bHideKinematicBodies_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicsAssetRenderUtils.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bHideKinematicBodies_SetBit(void* Obj)
	{
		((FPhysicsAssetRenderSettings*)Obj)->bHideKinematicBodies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bHideKinematicBodies = { "bHideKinematicBodies", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPhysicsAssetRenderSettings), &Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bHideKinematicBodies_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bHideKinematicBodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bHideKinematicBodies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bHideSimulatedBodies_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicsAssetRenderUtils.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bHideSimulatedBodies_SetBit(void* Obj)
	{
		((FPhysicsAssetRenderSettings*)Obj)->bHideSimulatedBodies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bHideSimulatedBodies = { "bHideSimulatedBodies", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPhysicsAssetRenderSettings), &Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bHideSimulatedBodies_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bHideSimulatedBodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bHideSimulatedBodies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bRenderOnlySelectedConstraints_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicsAssetRenderUtils.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bRenderOnlySelectedConstraints_SetBit(void* Obj)
	{
		((FPhysicsAssetRenderSettings*)Obj)->bRenderOnlySelectedConstraints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bRenderOnlySelectedConstraints = { "bRenderOnlySelectedConstraints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPhysicsAssetRenderSettings), &Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bRenderOnlySelectedConstraints_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bRenderOnlySelectedConstraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bRenderOnlySelectedConstraints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bShowCOM_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicsAssetRenderUtils.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bShowCOM_SetBit(void* Obj)
	{
		((FPhysicsAssetRenderSettings*)Obj)->bShowCOM = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bShowCOM = { "bShowCOM", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPhysicsAssetRenderSettings), &Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bShowCOM_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bShowCOM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bShowCOM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bShowConstraintsAsPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicsAssetRenderUtils.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bShowConstraintsAsPoints_SetBit(void* Obj)
	{
		((FPhysicsAssetRenderSettings*)Obj)->bShowConstraintsAsPoints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bShowConstraintsAsPoints = { "bShowConstraintsAsPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPhysicsAssetRenderSettings), &Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bShowConstraintsAsPoints_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bShowConstraintsAsPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bShowConstraintsAsPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_BoneUnselectedColor_MetaData[] = {
		{ "Comment", "// Draw colors\n" },
		{ "ModuleRelativePath", "Public/PhysicsAssetRenderUtils.h" },
		{ "ToolTip", "Draw colors" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_BoneUnselectedColor = { "BoneUnselectedColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsAssetRenderSettings, BoneUnselectedColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_BoneUnselectedColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_BoneUnselectedColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_NoCollisionColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicsAssetRenderUtils.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_NoCollisionColor = { "NoCollisionColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsAssetRenderSettings, NoCollisionColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_NoCollisionColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_NoCollisionColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_COMRenderColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicsAssetRenderUtils.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_COMRenderColor = { "COMRenderColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsAssetRenderSettings, COMRenderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_COMRenderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_COMRenderColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_COMRenderSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicsAssetRenderUtils.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_COMRenderSize = { "COMRenderSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsAssetRenderSettings, COMRenderSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_COMRenderSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_COMRenderSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_InfluenceLineLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicsAssetRenderUtils.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_InfluenceLineLength = { "InfluenceLineLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsAssetRenderSettings, InfluenceLineLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_InfluenceLineLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_InfluenceLineLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_BoneUnselectedMaterial_MetaData[] = {
		{ "Comment", "// Materials\n" },
		{ "ModuleRelativePath", "Public/PhysicsAssetRenderUtils.h" },
		{ "ToolTip", "Materials" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_BoneUnselectedMaterial = { "BoneUnselectedMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsAssetRenderSettings, BoneUnselectedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_BoneUnselectedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_BoneUnselectedMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_BoneNoCollisionMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicsAssetRenderUtils.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_BoneNoCollisionMaterial = { "BoneNoCollisionMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsAssetRenderSettings, BoneNoCollisionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_BoneNoCollisionMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_BoneNoCollisionMaterial_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_HiddenBodies_Inner = { "HiddenBodies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_HiddenBodies_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicsAssetRenderUtils.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_HiddenBodies = { "HiddenBodies", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsAssetRenderSettings, HiddenBodies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_HiddenBodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_HiddenBodies_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_HiddenConstraints_Inner = { "HiddenConstraints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_HiddenConstraints_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicsAssetRenderUtils.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_HiddenConstraints = { "HiddenConstraints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsAssetRenderSettings, HiddenConstraints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_HiddenConstraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_HiddenConstraints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_CollisionViewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_CollisionViewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_ConstraintViewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_ConstraintViewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_ConstraintViewportManipulationFlags_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_ConstraintViewportManipulationFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_ConstraintTransformComponentDisplayRelativeToDefaultFlags_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_ConstraintTransformComponentDisplayRelativeToDefaultFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_ConstraintDrawSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_PhysicsBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bHideKinematicBodies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bHideSimulatedBodies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bRenderOnlySelectedConstraints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bShowCOM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_bShowConstraintsAsPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_BoneUnselectedColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_NoCollisionColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_COMRenderColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_COMRenderSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_InfluenceLineLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_BoneUnselectedMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_BoneNoCollisionMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_HiddenBodies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_HiddenBodies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_HiddenConstraints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewProp_HiddenConstraints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
		nullptr,
		&NewStructOps,
		"PhysicsAssetRenderSettings",
		sizeof(FPhysicsAssetRenderSettings),
		alignof(FPhysicsAssetRenderSettings),
		Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PhysicsAssetRenderSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsAssetRenderSettings.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhysicsAssetRenderSettings.InnerSingleton;
	}
	void UPhysicsAssetRenderUtilities::StaticRegisterNativesUPhysicsAssetRenderUtilities()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsAssetRenderUtilities);
	UClass* Z_Construct_UClass_UPhysicsAssetRenderUtilities_NoRegister()
	{
		return UPhysicsAssetRenderUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IdToSettingsMap_ValueProp;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_IdToSettingsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdToSettingsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_IdToSettingsMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneUnselectedMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoneUnselectedMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNoCollisionMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoneNoCollisionMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Factory class for FPhysicsAssetRenderSettings. */" },
		{ "IncludePath", "PhysicsAssetRenderUtils.h" },
		{ "ModuleRelativePath", "Public/PhysicsAssetRenderUtils.h" },
		{ "ToolTip", "Factory class for FPhysicsAssetRenderSettings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::NewProp_IdToSettingsMap_ValueProp = { "IdToSettingsMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings, METADATA_PARAMS(nullptr, 0) }; // 3835397972
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::NewProp_IdToSettingsMap_Key_KeyProp = { "IdToSettingsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::NewProp_IdToSettingsMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicsAssetRenderUtils.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::NewProp_IdToSettingsMap = { "IdToSettingsMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetRenderUtilities, IdToSettingsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::NewProp_IdToSettingsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::NewProp_IdToSettingsMap_MetaData)) }; // 3835397972
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::NewProp_BoneUnselectedMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicsAssetRenderUtils.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::NewProp_BoneUnselectedMaterial = { "BoneUnselectedMaterial", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetRenderUtilities, BoneUnselectedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::NewProp_BoneUnselectedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::NewProp_BoneUnselectedMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::NewProp_BoneNoCollisionMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhysicsAssetRenderUtils.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::NewProp_BoneNoCollisionMaterial = { "BoneNoCollisionMaterial", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetRenderUtilities, BoneNoCollisionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::NewProp_BoneNoCollisionMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::NewProp_BoneNoCollisionMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::NewProp_IdToSettingsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::NewProp_IdToSettingsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::NewProp_IdToSettingsMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::NewProp_BoneUnselectedMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::NewProp_BoneNoCollisionMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsAssetRenderUtilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::ClassParams = {
		&UPhysicsAssetRenderUtilities::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsAssetRenderUtilities()
	{
		if (!Z_Registration_Info_UClass_UPhysicsAssetRenderUtilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsAssetRenderUtilities.OuterSingleton, Z_Construct_UClass_UPhysicsAssetRenderUtilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsAssetRenderUtilities.OuterSingleton;
	}
	template<> PERSONA_API UClass* StaticClass<UPhysicsAssetRenderUtilities>()
	{
		return UPhysicsAssetRenderUtilities::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsAssetRenderUtilities);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_PhysicsAssetRenderUtils_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_PhysicsAssetRenderUtils_h_Statics::ScriptStructInfo[] = {
		{ FPhysicsAssetRenderSettings::StaticStruct, Z_Construct_UScriptStruct_FPhysicsAssetRenderSettings_Statics::NewStructOps, TEXT("PhysicsAssetRenderSettings"), &Z_Registration_Info_UScriptStruct_PhysicsAssetRenderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsAssetRenderSettings), 3835397972U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_PhysicsAssetRenderUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsAssetRenderUtilities, UPhysicsAssetRenderUtilities::StaticClass, TEXT("UPhysicsAssetRenderUtilities"), &Z_Registration_Info_UClass_UPhysicsAssetRenderUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsAssetRenderUtilities), 1464278758U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_PhysicsAssetRenderUtils_h_2473544501(TEXT("/Script/Persona"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_PhysicsAssetRenderUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_PhysicsAssetRenderUtils_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_PhysicsAssetRenderUtils_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_PhysicsAssetRenderUtils_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
