// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Attractor/ParticleModuleAttractorPoint.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleAttractorPoint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorPoint();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleAttractorPoint_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleAttractorPoint::StaticRegisterNativesUParticleModuleAttractorPoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleAttractorPoint);
	UClass* Z_Construct_UClass_UParticleModuleAttractorPoint_NoRegister()
	{
		return UParticleModuleAttractorPoint::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleAttractorPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrengthByDistance_MetaData[];
#endif
		static void NewProp_StrengthByDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StrengthByDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectBaseVelocity_MetaData[];
#endif
		static void NewProp_bAffectBaseVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectBaseVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideVelocity_MetaData[];
#endif
		static void NewProp_bOverrideVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseWorldSpacePosition_MetaData[];
#endif
		static void NewProp_bUseWorldSpacePosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWorldSpacePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Positive_X_MetaData[];
#endif
		static void NewProp_Positive_X_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Positive_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Positive_Y_MetaData[];
#endif
		static void NewProp_Positive_Y_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Positive_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Positive_Z_MetaData[];
#endif
		static void NewProp_Positive_Z_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Positive_Z;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Negative_X_MetaData[];
#endif
		static void NewProp_Negative_X_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Negative_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Negative_Y_MetaData[];
#endif
		static void NewProp_Negative_Y_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Negative_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Negative_Z_MetaData[];
#endif
		static void NewProp_Negative_Z_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Negative_Z;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleAttractorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Point Attractor" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\x09The position of the point attractor from the source of the emitter.\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ToolTip", "The position of the point attractor from the source of the emitter." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleAttractorPoint, Position), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Position_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\x09The radial range of the attractor.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ToolTip", "The radial range of the attractor." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleAttractorPoint, Range), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Range_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\x09The strength of the point attractor.\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ToolTip", "The strength of the point attractor." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleAttractorPoint, Strength), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Strength_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_StrengthByDistance_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\x09The strength curve is a function of distance or of time.\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ToolTip", "The strength curve is a function of distance or of time." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_StrengthByDistance_SetBit(void* Obj)
	{
		((UParticleModuleAttractorPoint*)Obj)->StrengthByDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_StrengthByDistance = { "StrengthByDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleAttractorPoint), &Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_StrengthByDistance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_StrengthByDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_StrengthByDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bAffectBaseVelocity_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\x09If true, the velocity adjustment will be applied to the base velocity.\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ToolTip", "If true, the velocity adjustment will be applied to the base velocity." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bAffectBaseVelocity_SetBit(void* Obj)
	{
		((UParticleModuleAttractorPoint*)Obj)->bAffectBaseVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bAffectBaseVelocity = { "bAffectBaseVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleAttractorPoint), &Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bAffectBaseVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bAffectBaseVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bAffectBaseVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bOverrideVelocity_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\x09If true, set the velocity.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ToolTip", "If true, set the velocity." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bOverrideVelocity_SetBit(void* Obj)
	{
		((UParticleModuleAttractorPoint*)Obj)->bOverrideVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bOverrideVelocity = { "bOverrideVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleAttractorPoint), &Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bOverrideVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bOverrideVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bOverrideVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bUseWorldSpacePosition_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/**\x09If true, treat the position as world space.  So don't transform the the point to localspace. */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ToolTip", "If true, treat the position as world space.  So don't transform the the point to localspace." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bUseWorldSpacePosition_SetBit(void* Obj)
	{
		((UParticleModuleAttractorPoint*)Obj)->bUseWorldSpacePosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bUseWorldSpacePosition = { "bUseWorldSpacePosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleAttractorPoint), &Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bUseWorldSpacePosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bUseWorldSpacePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bUseWorldSpacePosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_X_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/** Whether particles can move along the positive X axis. */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ToolTip", "Whether particles can move along the positive X axis." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_X_SetBit(void* Obj)
	{
		((UParticleModuleAttractorPoint*)Obj)->Positive_X = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_X = { "Positive_X", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleAttractorPoint), &Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_X_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_Y_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/** Whether particles can move along the positive Y axis. */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ToolTip", "Whether particles can move along the positive Y axis." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_Y_SetBit(void* Obj)
	{
		((UParticleModuleAttractorPoint*)Obj)->Positive_Y = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_Y = { "Positive_Y", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleAttractorPoint), &Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_Y_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_Z_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/** Whether particles can move along the positive Z axis. */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ToolTip", "Whether particles can move along the positive Z axis." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_Z_SetBit(void* Obj)
	{
		((UParticleModuleAttractorPoint*)Obj)->Positive_Z = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_Z = { "Positive_Z", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleAttractorPoint), &Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_Z_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_Z_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_X_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/** Whether particles can move along the negative X axis. */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ToolTip", "Whether particles can move along the negative X axis." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_X_SetBit(void* Obj)
	{
		((UParticleModuleAttractorPoint*)Obj)->Negative_X = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_X = { "Negative_X", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleAttractorPoint), &Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_X_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_Y_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/** Whether particles can move along the negative Y axis. */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ToolTip", "Whether particles can move along the negative Y axis." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_Y_SetBit(void* Obj)
	{
		((UParticleModuleAttractorPoint*)Obj)->Negative_Y = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_Y = { "Negative_Y", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleAttractorPoint), &Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_Y_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_Z_MetaData[] = {
		{ "Category", "Attractor" },
		{ "Comment", "/** Whether particles can move along the negative Z axis. */" },
		{ "ModuleRelativePath", "Classes/Particles/Attractor/ParticleModuleAttractorPoint.h" },
		{ "ToolTip", "Whether particles can move along the negative Z axis." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_Z_SetBit(void* Obj)
	{
		((UParticleModuleAttractorPoint*)Obj)->Negative_Z = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_Z = { "Negative_Z", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleAttractorPoint), &Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_Z_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_Z_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_StrengthByDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bAffectBaseVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bOverrideVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_bUseWorldSpacePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Positive_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::NewProp_Negative_Z,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleAttractorPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::ClassParams = {
		&UParticleModuleAttractorPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleAttractorPoint()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleAttractorPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleAttractorPoint.OuterSingleton, Z_Construct_UClass_UParticleModuleAttractorPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleAttractorPoint.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleAttractorPoint>()
	{
		return UParticleModuleAttractorPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleAttractorPoint);
	UParticleModuleAttractorPoint::~UParticleModuleAttractorPoint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleAttractorPoint, UParticleModuleAttractorPoint::StaticClass, TEXT("UParticleModuleAttractorPoint"), &Z_Registration_Info_UClass_UParticleModuleAttractorPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleAttractorPoint), 3365467490U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPoint_h_3724276898(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Attractor_ParticleModuleAttractorPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
