// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Beam/ParticleModuleBeamTarget.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleBeamTarget() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamTarget();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamTarget_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_Beam2SourceTargetMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleBeamTarget::StaticRegisterNativesUParticleModuleBeamTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleBeamTarget);
	UClass* Z_Construct_UClass_UParticleModuleBeamTarget_NoRegister()
	{
		return UParticleModuleBeamTarget::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleBeamTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTargetAbsolute_MetaData[];
#endif
		static void NewProp_bTargetAbsolute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTargetAbsolute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockTarget_MetaData[];
#endif
		static void NewProp_bLockTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetTangentMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetTangentMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetTangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockTargetTangent_MetaData[];
#endif
		static void NewProp_bLockTargetTangent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockTargetTangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetStrength_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockTargetStength_MetaData[];
#endif
		static void NewProp_bLockTargetStength_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockTargetStength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LockRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleBeamTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleBeamBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamTarget_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Target" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Beam/ParticleModuleBeamTarget.h" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamTarget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetMethod_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "/** The method flag. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamTarget.h" },
		{ "ToolTip", "The method flag." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetMethod = { "TargetMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleBeamTarget, TargetMethod), Z_Construct_UEnum_Engine_Beam2SourceTargetMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetMethod_MetaData)) }; // 213918748
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetName_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "/** The target point sources of each beam, when using the end point method. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamTarget.h" },
		{ "ToolTip", "The target point sources of each beam, when using the end point method." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetName = { "TargetName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleBeamTarget, TargetName), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "/** Default target-point information to use if the beam method is endpoint. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamTarget.h" },
		{ "ToolTip", "Default target-point information to use if the beam method is endpoint." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleBeamTarget, Target), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_Target_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bTargetAbsolute_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "/** Whether to treat the as an absolute position in world space. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamTarget.h" },
		{ "ToolTip", "Whether to treat the as an absolute position in world space." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bTargetAbsolute_SetBit(void* Obj)
	{
		((UParticleModuleBeamTarget*)Obj)->bTargetAbsolute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bTargetAbsolute = { "bTargetAbsolute", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleBeamTarget), &Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bTargetAbsolute_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bTargetAbsolute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bTargetAbsolute_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTarget_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "/** Whether to lock the Target to the life of the particle. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamTarget.h" },
		{ "ToolTip", "Whether to lock the Target to the life of the particle." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTarget_SetBit(void* Obj)
	{
		((UParticleModuleBeamTarget*)Obj)->bLockTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTarget = { "bLockTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleBeamTarget), &Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetTangentMethod_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "/** The method to use for the Target tangent. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamTarget.h" },
		{ "ToolTip", "The method to use for the Target tangent." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetTangentMethod = { "TargetTangentMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleBeamTarget, TargetTangentMethod), Z_Construct_UEnum_Engine_Beam2SourceTargetTangentMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetTangentMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetTangentMethod_MetaData)) }; // 954749106
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetTangent_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "/** The tangent for the Target point for each beam. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamTarget.h" },
		{ "ToolTip", "The tangent for the Target point for each beam." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetTangent = { "TargetTangent", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleBeamTarget, TargetTangent), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetTangent_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetTangent_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "/** Whether to lock the Target to the life of the particle. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamTarget.h" },
		{ "ToolTip", "Whether to lock the Target to the life of the particle." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetTangent_SetBit(void* Obj)
	{
		((UParticleModuleBeamTarget*)Obj)->bLockTargetTangent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetTangent = { "bLockTargetTangent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleBeamTarget), &Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetTangent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetTangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetStrength_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "/** The strength of the tangent from the Target point for each beam. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamTarget.h" },
		{ "ToolTip", "The strength of the tangent from the Target point for each beam." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetStrength = { "TargetStrength", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleBeamTarget, TargetStrength), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetStrength_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetStength_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "/** Whether to lock the Target to the life of the particle. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamTarget.h" },
		{ "ToolTip", "Whether to lock the Target to the life of the particle." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetStength_SetBit(void* Obj)
	{
		((UParticleModuleBeamTarget*)Obj)->bLockTargetStength = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetStength = { "bLockTargetStength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleBeamTarget), &Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetStength_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetStength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetStength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_LockRadius_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "/** Default target-point information to use if the beam method is endpoint. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamTarget.h" },
		{ "ToolTip", "Default target-point information to use if the beam method is endpoint." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_LockRadius = { "LockRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleBeamTarget, LockRadius), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_LockRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_LockRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleBeamTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bTargetAbsolute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetTangentMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_TargetStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_bLockTargetStength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamTarget_Statics::NewProp_LockRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleBeamTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleBeamTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleBeamTarget_Statics::ClassParams = {
		&UParticleModuleBeamTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleBeamTarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleBeamTarget()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleBeamTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleBeamTarget.OuterSingleton, Z_Construct_UClass_UParticleModuleBeamTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleBeamTarget.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleBeamTarget>()
	{
		return UParticleModuleBeamTarget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleBeamTarget);
	UParticleModuleBeamTarget::~UParticleModuleBeamTarget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleBeamTarget, UParticleModuleBeamTarget::StaticClass, TEXT("UParticleModuleBeamTarget"), &Z_Registration_Info_UClass_UParticleModuleBeamTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleBeamTarget), 572477167U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamTarget_h_2967218038(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
