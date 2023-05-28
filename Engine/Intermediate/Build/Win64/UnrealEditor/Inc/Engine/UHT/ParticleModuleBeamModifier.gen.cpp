// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Beam/ParticleModuleBeamModifier.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleBeamModifier() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamModifier();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamModifier_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_BeamModifierType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBeamModifierOptions();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_BeamModifierType;
	static UEnum* BeamModifierType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_BeamModifierType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_BeamModifierType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_BeamModifierType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BeamModifierType"));
		}
		return Z_Registration_Info_UEnum_BeamModifierType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<BeamModifierType>()
	{
		return BeamModifierType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_BeamModifierType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_BeamModifierType_Statics::Enumerators[] = {
		{ "PEB2MT_Source", (int64)PEB2MT_Source },
		{ "PEB2MT_Target", (int64)PEB2MT_Target },
		{ "PEB2MT_MAX", (int64)PEB2MT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_BeamModifierType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\x09What to modify. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "PEB2MT_MAX.Name", "PEB2MT_MAX" },
		{ "PEB2MT_Source.Comment", "/** Modify the source of the beam.\x09\x09\x09\x09*/" },
		{ "PEB2MT_Source.DisplayName", "Source" },
		{ "PEB2MT_Source.Name", "PEB2MT_Source" },
		{ "PEB2MT_Source.ToolTip", "Modify the source of the beam." },
		{ "PEB2MT_Target.Comment", "/** Modify the target of the beam.\x09\x09\x09\x09*/" },
		{ "PEB2MT_Target.DisplayName", "Target" },
		{ "PEB2MT_Target.Name", "PEB2MT_Target" },
		{ "PEB2MT_Target.ToolTip", "Modify the target of the beam." },
		{ "ToolTip", "What to modify." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_BeamModifierType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"BeamModifierType",
		"BeamModifierType",
		Z_Construct_UEnum_Engine_BeamModifierType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_BeamModifierType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_BeamModifierType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_BeamModifierType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_BeamModifierType()
	{
		if (!Z_Registration_Info_UEnum_BeamModifierType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_BeamModifierType.InnerSingleton, Z_Construct_UEnum_Engine_BeamModifierType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_BeamModifierType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BeamModifierOptions;
class UScriptStruct* FBeamModifierOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BeamModifierOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BeamModifierOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBeamModifierOptions, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BeamModifierOptions"));
	}
	return Z_Registration_Info_UScriptStruct_BeamModifierOptions.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBeamModifierOptions>()
{
	return FBeamModifierOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBeamModifierOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bModify_MetaData[];
#endif
		static void NewProp_bModify_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bModify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScale_MetaData[];
#endif
		static void NewProp_bScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLock_MetaData[];
#endif
		static void NewProp_bLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBeamModifierOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bModify_MetaData[] = {
		{ "Category", "BeamModifierOptions" },
		{ "Comment", "/** If true, modify the value associated with this grouping.\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "If true, modify the value associated with this grouping." },
	};
#endif
	void Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bModify_SetBit(void* Obj)
	{
		((FBeamModifierOptions*)Obj)->bModify = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bModify = { "bModify", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FBeamModifierOptions), &Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bModify_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bModify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bModify_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bScale_MetaData[] = {
		{ "Category", "BeamModifierOptions" },
		{ "Comment", "/** If true, scale the associated value by the given value.\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "If true, scale the associated value by the given value." },
	};
#endif
	void Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bScale_SetBit(void* Obj)
	{
		((FBeamModifierOptions*)Obj)->bScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bScale = { "bScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FBeamModifierOptions), &Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bLock_MetaData[] = {
		{ "Category", "BeamModifierOptions" },
		{ "Comment", "/** If true, lock the modifier to the life of the particle.\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "If true, lock the modifier to the life of the particle." },
	};
#endif
	void Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bLock_SetBit(void* Obj)
	{
		((FBeamModifierOptions*)Obj)->bLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bLock = { "bLock", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FBeamModifierOptions), &Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bLock_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bLock_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bModify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewProp_bLock,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BeamModifierOptions",
		sizeof(FBeamModifierOptions),
		alignof(FBeamModifierOptions),
		Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBeamModifierOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_BeamModifierOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BeamModifierOptions.InnerSingleton, Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BeamModifierOptions.InnerSingleton;
	}
	void UParticleModuleBeamModifier::StaticRegisterNativesUParticleModuleBeamModifier()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleBeamModifier);
	UClass* Z_Construct_UClass_UParticleModuleBeamModifier_NoRegister()
	{
		return UParticleModuleBeamModifier::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleBeamModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifierType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModifierType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TangentOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TangentOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteTangent_MetaData[];
#endif
		static void NewProp_bAbsoluteTangent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteTangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrengthOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StrengthOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Strength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleBeamModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleBeamBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamModifier_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Beam Modifier" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_ModifierType_MetaData[] = {
		{ "Category", "Modifier" },
		{ "Comment", "/**\x09Whether this module modifies the Source or the Target. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "Whether this module modifies the Source or the Target." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_ModifierType = { "ModifierType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleBeamModifier, ModifierType), Z_Construct_UEnum_Engine_BeamModifierType, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_ModifierType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_ModifierType_MetaData)) }; // 1210205130
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_PositionOptions_MetaData[] = {
		{ "Category", "Position" },
		{ "Comment", "/** The options associated with the position.\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "The options associated with the position." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_PositionOptions = { "PositionOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleBeamModifier, PositionOptions), Z_Construct_UScriptStruct_FBeamModifierOptions, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_PositionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_PositionOptions_MetaData)) }; // 22171521
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Position" },
		{ "Comment", "/** The value to use when modifying the position.\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "The value to use when modifying the position." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleBeamModifier, Position), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Position_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_TangentOptions_MetaData[] = {
		{ "Category", "Tangent" },
		{ "Comment", "/** The options associated with the Tangent.\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "The options associated with the Tangent." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_TangentOptions = { "TangentOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleBeamModifier, TangentOptions), Z_Construct_UScriptStruct_FBeamModifierOptions, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_TangentOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_TangentOptions_MetaData)) }; // 22171521
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Tangent_MetaData[] = {
		{ "Category", "Tangent" },
		{ "Comment", "/** The value to use when modifying the Tangent.\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "The value to use when modifying the Tangent." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleBeamModifier, Tangent), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Tangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Tangent_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_bAbsoluteTangent_MetaData[] = {
		{ "Category", "Tangent" },
		{ "Comment", "/** If true, don't transform the tangent modifier into the tangent basis.\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "If true, don't transform the tangent modifier into the tangent basis." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_bAbsoluteTangent_SetBit(void* Obj)
	{
		((UParticleModuleBeamModifier*)Obj)->bAbsoluteTangent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_bAbsoluteTangent = { "bAbsoluteTangent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleBeamModifier), &Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_bAbsoluteTangent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_bAbsoluteTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_bAbsoluteTangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_StrengthOptions_MetaData[] = {
		{ "Category", "Strength" },
		{ "Comment", "/** The options associated with the Strength.\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "The options associated with the Strength." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_StrengthOptions = { "StrengthOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleBeamModifier, StrengthOptions), Z_Construct_UScriptStruct_FBeamModifierOptions, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_StrengthOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_StrengthOptions_MetaData)) }; // 22171521
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "Strength" },
		{ "Comment", "/** The value to use when modifying the Strength.\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamModifier.h" },
		{ "ToolTip", "The value to use when modifying the Strength." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleBeamModifier, Strength), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Strength_MetaData)) }; // 2827880765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleBeamModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_ModifierType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_PositionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_TangentOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Tangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_bAbsoluteTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_StrengthOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamModifier_Statics::NewProp_Strength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleBeamModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleBeamModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleBeamModifier_Statics::ClassParams = {
		&UParticleModuleBeamModifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleBeamModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleBeamModifier()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleBeamModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleBeamModifier.OuterSingleton, Z_Construct_UClass_UParticleModuleBeamModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleBeamModifier.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleBeamModifier>()
	{
		return UParticleModuleBeamModifier::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleBeamModifier);
	UParticleModuleBeamModifier::~UParticleModuleBeamModifier() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_Statics::EnumInfo[] = {
		{ BeamModifierType_StaticEnum, TEXT("BeamModifierType"), &Z_Registration_Info_UEnum_BeamModifierType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1210205130U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_Statics::ScriptStructInfo[] = {
		{ FBeamModifierOptions::StaticStruct, Z_Construct_UScriptStruct_FBeamModifierOptions_Statics::NewStructOps, TEXT("BeamModifierOptions"), &Z_Registration_Info_UScriptStruct_BeamModifierOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBeamModifierOptions), 22171521U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleBeamModifier, UParticleModuleBeamModifier::StaticClass, TEXT("UParticleModuleBeamModifier"), &Z_Registration_Info_UClass_UParticleModuleBeamModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleBeamModifier), 561475025U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_1906155164(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamModifier_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
