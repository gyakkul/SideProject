// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleOrbit() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrbit();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrbit_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrbitBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EOrbitChainMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FOrbitOptions();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOrbitChainMode;
	static UEnum* EOrbitChainMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOrbitChainMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOrbitChainMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EOrbitChainMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EOrbitChainMode"));
		}
		return Z_Registration_Info_UEnum_EOrbitChainMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EOrbitChainMode>()
	{
		return EOrbitChainMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EOrbitChainMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EOrbitChainMode_Statics::Enumerators[] = {
		{ "EOChainMode_Add", (int64)EOChainMode_Add },
		{ "EOChainMode_Scale", (int64)EOChainMode_Scale },
		{ "EOChainMode_Link", (int64)EOChainMode_Link },
		{ "EOChainMode_MAX", (int64)EOChainMode_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EOrbitChainMode_Statics::Enum_MetaDataParams[] = {
		{ "EOChainMode_Add.Comment", "/** Add the module values to the previous results\x09\x09\x09\x09\x09\x09*/" },
		{ "EOChainMode_Add.DisplayName", "Add" },
		{ "EOChainMode_Add.Name", "EOChainMode_Add" },
		{ "EOChainMode_Add.ToolTip", "Add the module values to the previous results" },
		{ "EOChainMode_Link.Comment", "/**\x09'Break' the chain and apply the values from the\x09previous results\x09*/" },
		{ "EOChainMode_Link.DisplayName", "Link" },
		{ "EOChainMode_Link.Name", "EOChainMode_Link" },
		{ "EOChainMode_Link.ToolTip", "'Break' the chain and apply the values from the previous results" },
		{ "EOChainMode_MAX.Name", "EOChainMode_MAX" },
		{ "EOChainMode_Scale.Comment", "/**\x09Multiply the module values by the previous results\x09\x09\x09\x09\x09*/" },
		{ "EOChainMode_Scale.DisplayName", "Scale" },
		{ "EOChainMode_Scale.Name", "EOChainMode_Scale" },
		{ "EOChainMode_Scale.ToolTip", "Multiply the module values by the previous results" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EOrbitChainMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EOrbitChainMode",
		"EOrbitChainMode",
		Z_Construct_UEnum_Engine_EOrbitChainMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EOrbitChainMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EOrbitChainMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EOrbitChainMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EOrbitChainMode()
	{
		if (!Z_Registration_Info_UEnum_EOrbitChainMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOrbitChainMode.InnerSingleton, Z_Construct_UEnum_Engine_EOrbitChainMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOrbitChainMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OrbitOptions;
class UScriptStruct* FOrbitOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OrbitOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OrbitOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOrbitOptions, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("OrbitOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OrbitOptions.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FOrbitOptions>()
{
	return FOrbitOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOrbitOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProcessDuringSpawn_MetaData[];
#endif
		static void NewProp_bProcessDuringSpawn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProcessDuringSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProcessDuringUpdate_MetaData[];
#endif
		static void NewProp_bProcessDuringUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProcessDuringUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseEmitterTime_MetaData[];
#endif
		static void NewProp_bUseEmitterTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseEmitterTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrbitOptions_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Container struct for holding options on the data updating for the module.\n */" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
		{ "ToolTip", "Container struct for holding options on the data updating for the module." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOrbitOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bProcessDuringSpawn_MetaData[] = {
		{ "Category", "OrbitOptions" },
		{ "Comment", "/**\n\x09 *\x09Whether to process the data during spawning.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
		{ "ToolTip", "Whether to process the data during spawning." },
	};
#endif
	void Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bProcessDuringSpawn_SetBit(void* Obj)
	{
		((FOrbitOptions*)Obj)->bProcessDuringSpawn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bProcessDuringSpawn = { "bProcessDuringSpawn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FOrbitOptions), &Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bProcessDuringSpawn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bProcessDuringSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bProcessDuringSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bProcessDuringUpdate_MetaData[] = {
		{ "Category", "OrbitOptions" },
		{ "Comment", "/**\n\x09 *\x09Whether to process the data during updating.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
		{ "ToolTip", "Whether to process the data during updating." },
	};
#endif
	void Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bProcessDuringUpdate_SetBit(void* Obj)
	{
		((FOrbitOptions*)Obj)->bProcessDuringUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bProcessDuringUpdate = { "bProcessDuringUpdate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FOrbitOptions), &Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bProcessDuringUpdate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bProcessDuringUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bProcessDuringUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bUseEmitterTime_MetaData[] = {
		{ "Category", "OrbitOptions" },
		{ "Comment", "/**\n\x09 *\x09Whether to use emitter time during data retrieval.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
		{ "ToolTip", "Whether to use emitter time during data retrieval." },
	};
#endif
	void Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bUseEmitterTime_SetBit(void* Obj)
	{
		((FOrbitOptions*)Obj)->bUseEmitterTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bUseEmitterTime = { "bUseEmitterTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FOrbitOptions), &Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bUseEmitterTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bUseEmitterTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bUseEmitterTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOrbitOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bProcessDuringSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bProcessDuringUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bUseEmitterTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOrbitOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"OrbitOptions",
		sizeof(FOrbitOptions),
		alignof(FOrbitOptions),
		Z_Construct_UScriptStruct_FOrbitOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrbitOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOrbitOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrbitOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOrbitOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_OrbitOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OrbitOptions.InnerSingleton, Z_Construct_UScriptStruct_FOrbitOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OrbitOptions.InnerSingleton;
	}
	void UParticleModuleOrbit::StaticRegisterNativesUParticleModuleOrbit()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleOrbit);
	UClass* Z_Construct_UClass_UParticleModuleOrbit_NoRegister()
	{
		return UParticleModuleOrbit::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleOrbit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChainMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetAmount_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAmount_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationRateAmount_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationRateAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationRateOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationRateOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleOrbit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleOrbitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleOrbit_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Orbit" },
		{ "HideCategories", "Object Orbit Object Object" },
		{ "IncludePath", "Particles/Orbit/ParticleModuleOrbit.h" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_ChainMode_MetaData[] = {
		{ "Category", "Chaining" },
		{ "Comment", "/**\n\x09 *\x09Orbit modules will chain together in the order they appear in the module stack.\n\x09 *\x09The combination of a module with the one prior to it is defined by using one\n\x09 *\x09of the following enumerations:\n\x09 *\x09\x09""EOChainMode_Add\x09\x09""Add the values to the previous results\n\x09 *\x09\x09""EOChainMode_Scale\x09Multiply the values by the previous results\n\x09 *\x09\x09""EOChainMode_Link\x09'Break' the chain and apply the values from the\x09previous results\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
		{ "ToolTip", "Orbit modules will chain together in the order they appear in the module stack.\nThe combination of a module with the one prior to it is defined by using one\nof the following enumerations:\n        EOChainMode_Add         Add the values to the previous results\n        EOChainMode_Scale       Multiply the values by the previous results\n        EOChainMode_Link        'Break' the chain and apply the values from the previous results" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_ChainMode = { "ChainMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleOrbit, ChainMode), Z_Construct_UEnum_Engine_EOrbitChainMode, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_ChainMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_ChainMode_MetaData)) }; // 3847122489
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_OffsetAmount_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** The amount to offset the sprite from the particle position. */" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
		{ "ToolTip", "The amount to offset the sprite from the particle position." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_OffsetAmount = { "OffsetAmount", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleOrbit, OffsetAmount), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_OffsetAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_OffsetAmount_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_OffsetOptions_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** The options associated with the OffsetAmount look-up. */" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
		{ "ToolTip", "The options associated with the OffsetAmount look-up." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_OffsetOptions = { "OffsetOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleOrbit, OffsetOptions), Z_Construct_UScriptStruct_FOrbitOptions, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_OffsetOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_OffsetOptions_MetaData)) }; // 2828960359
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationAmount_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/**\n\x09 *\x09The amount (in 'turns') to rotate the offset about the particle position.\n\x09 *\x09\x09""0.0 = no rotation\n\x09 *\x09\x09""0.5\x09= 180 degree rotation\n\x09 *\x09\x09""1.0 = 360 degree rotation\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
		{ "ToolTip", "The amount (in 'turns') to rotate the offset about the particle position.\n        0.0 = no rotation\n        0.5     = 180 degree rotation\n        1.0 = 360 degree rotation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationAmount = { "RotationAmount", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleOrbit, RotationAmount), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationAmount_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationOptions_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** The options associated with the RotationAmount look-up. */" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
		{ "ToolTip", "The options associated with the RotationAmount look-up." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationOptions = { "RotationOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleOrbit, RotationOptions), Z_Construct_UScriptStruct_FOrbitOptions, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationOptions_MetaData)) }; // 2828960359
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationRateAmount_MetaData[] = {
		{ "Category", "RotationRate" },
		{ "Comment", "/**\n\x09 *\x09The rate (in 'turns') at which to rotate the offset about the particle positon.\n\x09 *\x09\x09""0.0 = no rotation\n\x09 *\x09\x09""0.5\x09= 180 degree rotation\n\x09 *\x09\x09""1.0 = 360 degree rotation\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
		{ "ToolTip", "The rate (in 'turns') at which to rotate the offset about the particle positon.\n        0.0 = no rotation\n        0.5     = 180 degree rotation\n        1.0 = 360 degree rotation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationRateAmount = { "RotationRateAmount", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleOrbit, RotationRateAmount), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationRateAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationRateAmount_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationRateOptions_MetaData[] = {
		{ "Category", "RotationRate" },
		{ "Comment", "/** The options associated with the RotationRateAmount look-up. */" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
		{ "ToolTip", "The options associated with the RotationRateAmount look-up." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationRateOptions = { "RotationRateOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleOrbit, RotationRateOptions), Z_Construct_UScriptStruct_FOrbitOptions, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationRateOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationRateOptions_MetaData)) }; // 2828960359
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleOrbit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_ChainMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_OffsetAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_OffsetOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationRateAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationRateOptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleOrbit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleOrbit>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleOrbit_Statics::ClassParams = {
		&UParticleModuleOrbit::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleOrbit_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrbit_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleOrbit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrbit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleOrbit()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleOrbit.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleOrbit.OuterSingleton, Z_Construct_UClass_UParticleModuleOrbit_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleOrbit.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleOrbit>()
	{
		return UParticleModuleOrbit::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleOrbit);
	UParticleModuleOrbit::~UParticleModuleOrbit() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_Statics::EnumInfo[] = {
		{ EOrbitChainMode_StaticEnum, TEXT("EOrbitChainMode"), &Z_Registration_Info_UEnum_EOrbitChainMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3847122489U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_Statics::ScriptStructInfo[] = {
		{ FOrbitOptions::StaticStruct, Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewStructOps, TEXT("OrbitOptions"), &Z_Registration_Info_UScriptStruct_OrbitOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOrbitOptions), 2828960359U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleOrbit, UParticleModuleOrbit::StaticClass, TEXT("UParticleModuleOrbit"), &Z_Registration_Info_UClass_UParticleModuleOrbit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleOrbit), 3293871281U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_1884517765(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
