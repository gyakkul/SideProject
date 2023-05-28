// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatingPawnMovement() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UFloatingPawnMovement::StaticRegisterNativesUFloatingPawnMovement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloatingPawnMovement);
	UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister()
	{
		return UFloatingPawnMovement::StaticClass();
	}
	struct Z_Construct_UClass_UFloatingPawnMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Deceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Deceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurningBoost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurningBoost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPositionCorrected_MetaData[];
#endif
		static void NewProp_bPositionCorrected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPositionCorrected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloatingPawnMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatingPawnMovement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Movement" },
		{ "Comment", "/**\n * FloatingPawnMovement is a movement component that provides simple movement for any Pawn class.\n * Limits on speed and acceleration are provided, while gravity is not implemented.\n *\n * Normally the root component of the owning actor is moved, however another component may be selected (see SetUpdatedComponent()).\n * During swept (non-teleporting) movement only collision of UpdatedComponent is considered, attached components will teleport to the end location ignoring collision.\n */" },
		{ "IncludePath", "GameFramework/FloatingPawnMovement.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/FloatingPawnMovement.h" },
		{ "ToolTip", "FloatingPawnMovement is a movement component that provides simple movement for any Pawn class.\nLimits on speed and acceleration are provided, while gravity is not implemented.\n\nNormally the root component of the owning actor is moved, however another component may be selected (see SetUpdatedComponent()).\nDuring swept (non-teleporting) movement only collision of UpdatedComponent is considered, attached components will teleport to the end location ignoring collision." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "FloatingPawnMovement" },
		{ "Comment", "/** Maximum velocity magnitude allowed for the controlled Pawn. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/FloatingPawnMovement.h" },
		{ "ToolTip", "Maximum velocity magnitude allowed for the controlled Pawn." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFloatingPawnMovement, MaxSpeed), METADATA_PARAMS(Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "FloatingPawnMovement" },
		{ "Comment", "/** Acceleration applied by input (rate of change of velocity) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/FloatingPawnMovement.h" },
		{ "ToolTip", "Acceleration applied by input (rate of change of velocity)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFloatingPawnMovement, Acceleration), METADATA_PARAMS(Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_Acceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_Deceleration_MetaData[] = {
		{ "Category", "FloatingPawnMovement" },
		{ "Comment", "/** Deceleration applied when there is no input (rate of change of velocity) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/FloatingPawnMovement.h" },
		{ "ToolTip", "Deceleration applied when there is no input (rate of change of velocity)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_Deceleration = { "Deceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFloatingPawnMovement, Deceleration), METADATA_PARAMS(Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_Deceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_Deceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_TurningBoost_MetaData[] = {
		{ "Category", "FloatingPawnMovement" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Setting affecting extra force applied when changing direction, making turns have less drift and become more responsive.\n\x09 * Velocity magnitude is not allowed to increase, that only happens due to normal acceleration. It may decrease with large direction changes.\n\x09 * Larger values apply extra force to reach the target direction more quickly, while a zero value disables any extra turn force.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/FloatingPawnMovement.h" },
		{ "ToolTip", "Setting affecting extra force applied when changing direction, making turns have less drift and become more responsive.\nVelocity magnitude is not allowed to increase, that only happens due to normal acceleration. It may decrease with large direction changes.\nLarger values apply extra force to reach the target direction more quickly, while a zero value disables any extra turn force." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_TurningBoost = { "TurningBoost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFloatingPawnMovement, TurningBoost), METADATA_PARAMS(Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_TurningBoost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_TurningBoost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_bPositionCorrected_MetaData[] = {
		{ "Comment", "/** Set to true when a position correction is applied. Used to avoid recalculating velocity when this occurs. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/FloatingPawnMovement.h" },
		{ "ToolTip", "Set to true when a position correction is applied. Used to avoid recalculating velocity when this occurs." },
	};
#endif
	void Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_bPositionCorrected_SetBit(void* Obj)
	{
		((UFloatingPawnMovement*)Obj)->bPositionCorrected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_bPositionCorrected = { "bPositionCorrected", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFloatingPawnMovement), &Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_bPositionCorrected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_bPositionCorrected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_bPositionCorrected_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFloatingPawnMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_MaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_Acceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_Deceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_TurningBoost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatingPawnMovement_Statics::NewProp_bPositionCorrected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloatingPawnMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatingPawnMovement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloatingPawnMovement_Statics::ClassParams = {
		&UFloatingPawnMovement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFloatingPawnMovement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFloatingPawnMovement_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFloatingPawnMovement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFloatingPawnMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloatingPawnMovement()
	{
		if (!Z_Registration_Info_UClass_UFloatingPawnMovement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloatingPawnMovement.OuterSingleton, Z_Construct_UClass_UFloatingPawnMovement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFloatingPawnMovement.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UFloatingPawnMovement>()
	{
		return UFloatingPawnMovement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatingPawnMovement);
	UFloatingPawnMovement::~UFloatingPawnMovement() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_FloatingPawnMovement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_FloatingPawnMovement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFloatingPawnMovement, UFloatingPawnMovement::StaticClass, TEXT("UFloatingPawnMovement"), &Z_Registration_Info_UClass_UFloatingPawnMovement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloatingPawnMovement), 3885960393U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_FloatingPawnMovement_h_3710877129(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_FloatingPawnMovement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_FloatingPawnMovement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
