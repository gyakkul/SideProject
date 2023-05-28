// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Parameter/ParticleModuleParameterDynamic.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleParameterDynamic() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleParameterBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleParameterDynamic();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleParameterDynamic_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEmitterDynamicParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEmitterDynamicParameterValue;
	static UEnum* EEmitterDynamicParameterValue_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEmitterDynamicParameterValue.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEmitterDynamicParameterValue.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EEmitterDynamicParameterValue"));
		}
		return Z_Registration_Info_UEnum_EEmitterDynamicParameterValue.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EEmitterDynamicParameterValue>()
	{
		return EEmitterDynamicParameterValue_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue_Statics::Enumerators[] = {
		{ "EDPV_UserSet", (int64)EDPV_UserSet },
		{ "EDPV_AutoSet", (int64)EDPV_AutoSet },
		{ "EDPV_VelocityX", (int64)EDPV_VelocityX },
		{ "EDPV_VelocityY", (int64)EDPV_VelocityY },
		{ "EDPV_VelocityZ", (int64)EDPV_VelocityZ },
		{ "EDPV_VelocityMag", (int64)EDPV_VelocityMag },
		{ "EDPV_MAX", (int64)EDPV_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""EmitterDynamicParameterValue\n *\x09""Enumeration indicating the way a dynamic parameter should be set.\n */" },
		{ "EDPV_AutoSet.Comment", "/** AutoSet - ignore values set in the distribution, another module will handle this data */" },
		{ "EDPV_AutoSet.Name", "EDPV_AutoSet" },
		{ "EDPV_AutoSet.ToolTip", "AutoSet - ignore values set in the distribution, another module will handle this data" },
		{ "EDPV_MAX.Name", "EDPV_MAX" },
		{ "EDPV_UserSet.Comment", "/** UserSet - use the user set values in the distribution (the default) */" },
		{ "EDPV_UserSet.Name", "EDPV_UserSet" },
		{ "EDPV_UserSet.ToolTip", "UserSet - use the user set values in the distribution (the default)" },
		{ "EDPV_VelocityMag.Comment", "/** VelocityMag - pass the particle velocity magnitude thru */" },
		{ "EDPV_VelocityMag.Name", "EDPV_VelocityMag" },
		{ "EDPV_VelocityMag.ToolTip", "VelocityMag - pass the particle velocity magnitude thru" },
		{ "EDPV_VelocityX.Comment", "/** VelocityX - pass the particle velocity along the X-axis thru */" },
		{ "EDPV_VelocityX.Name", "EDPV_VelocityX" },
		{ "EDPV_VelocityX.ToolTip", "VelocityX - pass the particle velocity along the X-axis thru" },
		{ "EDPV_VelocityY.Comment", "/** VelocityY - pass the particle velocity along the Y-axis thru */" },
		{ "EDPV_VelocityY.Name", "EDPV_VelocityY" },
		{ "EDPV_VelocityY.ToolTip", "VelocityY - pass the particle velocity along the Y-axis thru" },
		{ "EDPV_VelocityZ.Comment", "/** VelocityZ - pass the particle velocity along the Z-axis thru */" },
		{ "EDPV_VelocityZ.Name", "EDPV_VelocityZ" },
		{ "EDPV_VelocityZ.ToolTip", "VelocityZ - pass the particle velocity along the Z-axis thru" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "EmitterDynamicParameterValue\nEnumeration indicating the way a dynamic parameter should be set." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EEmitterDynamicParameterValue",
		"EEmitterDynamicParameterValue",
		Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue()
	{
		if (!Z_Registration_Info_UEnum_EEmitterDynamicParameterValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEmitterDynamicParameterValue.InnerSingleton, Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEmitterDynamicParameterValue.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EmitterDynamicParameter;
class UScriptStruct* FEmitterDynamicParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EmitterDynamicParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EmitterDynamicParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEmitterDynamicParameter, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EmitterDynamicParameter"));
	}
	return Z_Registration_Info_UScriptStruct_EmitterDynamicParameter.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEmitterDynamicParameter>()
{
	return FEmitterDynamicParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseEmitterTime_MetaData[];
#endif
		static void NewProp_bUseEmitterTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseEmitterTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnTimeOnly_MetaData[];
#endif
		static void NewProp_bSpawnTimeOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnTimeOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ValueMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleVelocityByParamValue_MetaData[];
#endif
		static void NewProp_bScaleVelocityByParamValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleVelocityByParamValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParamValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Helper structure for displaying the parameter. */" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "Helper structure for displaying the parameter." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEmitterDynamicParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ParamName_MetaData[] = {
		{ "Category", "EmitterDynamicParameter" },
		{ "Comment", "/** The parameter name - from the material DynamicParameter expression. READ-ONLY */" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "The parameter name - from the material DynamicParameter expression. READ-ONLY" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEmitterDynamicParameter, ParamName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ParamName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bUseEmitterTime_MetaData[] = {
		{ "Category", "EmitterDynamicParameter" },
		{ "Comment", "/** If true, use the EmitterTime to retrieve the value, otherwise use Particle RelativeTime. */" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "If true, use the EmitterTime to retrieve the value, otherwise use Particle RelativeTime." },
	};
#endif
	void Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bUseEmitterTime_SetBit(void* Obj)
	{
		((FEmitterDynamicParameter*)Obj)->bUseEmitterTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bUseEmitterTime = { "bUseEmitterTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FEmitterDynamicParameter), &Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bUseEmitterTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bUseEmitterTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bUseEmitterTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bSpawnTimeOnly_MetaData[] = {
		{ "Category", "EmitterDynamicParameter" },
		{ "Comment", "/** If true, only set the value at spawn time of the particle, otherwise update each frame. */" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "If true, only set the value at spawn time of the particle, otherwise update each frame." },
	};
#endif
	void Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bSpawnTimeOnly_SetBit(void* Obj)
	{
		((FEmitterDynamicParameter*)Obj)->bSpawnTimeOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bSpawnTimeOnly = { "bSpawnTimeOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FEmitterDynamicParameter), &Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bSpawnTimeOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bSpawnTimeOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bSpawnTimeOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ValueMethod_MetaData[] = {
		{ "Category", "EmitterDynamicParameter" },
		{ "Comment", "/** Where to get the parameter value from. */" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "Where to get the parameter value from." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ValueMethod = { "ValueMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEmitterDynamicParameter, ValueMethod), Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ValueMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ValueMethod_MetaData)) }; // 425666039
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bScaleVelocityByParamValue_MetaData[] = {
		{ "Category", "EmitterDynamicParameter" },
		{ "Comment", "/** If true, scale the velocity value selected in ValueMethod by the evaluated ParamValue. */" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "If true, scale the velocity value selected in ValueMethod by the evaluated ParamValue." },
	};
#endif
	void Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bScaleVelocityByParamValue_SetBit(void* Obj)
	{
		((FEmitterDynamicParameter*)Obj)->bScaleVelocityByParamValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bScaleVelocityByParamValue = { "bScaleVelocityByParamValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FEmitterDynamicParameter), &Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bScaleVelocityByParamValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bScaleVelocityByParamValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bScaleVelocityByParamValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ParamValue_MetaData[] = {
		{ "Category", "EmitterDynamicParameter" },
		{ "Comment", "/** The distriubtion for the parameter value. */" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "The distriubtion for the parameter value." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ParamValue = { "ParamValue", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEmitterDynamicParameter, ParamValue), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ParamValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ParamValue_MetaData)) }; // 2827880765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bUseEmitterTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bSpawnTimeOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ValueMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bScaleVelocityByParamValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ParamValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EmitterDynamicParameter",
		sizeof(FEmitterDynamicParameter),
		alignof(FEmitterDynamicParameter),
		Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEmitterDynamicParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_EmitterDynamicParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EmitterDynamicParameter.InnerSingleton, Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EmitterDynamicParameter.InnerSingleton;
	}
	void UParticleModuleParameterDynamic::StaticRegisterNativesUParticleModuleParameterDynamic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleParameterDynamic);
	UClass* Z_Construct_UClass_UParticleModuleParameterDynamic_NoRegister()
	{
		return UParticleModuleParameterDynamic::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleParameterDynamic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicParams_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicParams_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynamicParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateFlags_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UpdateFlags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsesVelocity_MetaData[];
#endif
		static void NewProp_bUsesVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleParameterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Dynamic" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_DynamicParams_Inner = { "DynamicParams", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEmitterDynamicParameter, METADATA_PARAMS(nullptr, 0) }; // 536681626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_DynamicParams_MetaData[] = {
		{ "Category", "ParticleModuleParameterDynamic" },
		{ "Comment", "/** The dynamic parameters this module uses. */" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "The dynamic parameters this module uses." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_DynamicParams = { "DynamicParams", nullptr, (EPropertyFlags)0x0010008000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleParameterDynamic, DynamicParams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_DynamicParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_DynamicParams_MetaData)) }; // 536681626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_UpdateFlags_MetaData[] = {
		{ "Comment", "/** Flags for optimizing update */" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "Flags for optimizing update" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_UpdateFlags = { "UpdateFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleParameterDynamic, UpdateFlags), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_UpdateFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_UpdateFlags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_bUsesVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_bUsesVelocity_SetBit(void* Obj)
	{
		((UParticleModuleParameterDynamic*)Obj)->bUsesVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_bUsesVelocity = { "bUsesVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleParameterDynamic), &Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_bUsesVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_bUsesVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_bUsesVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_DynamicParams_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_DynamicParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_UpdateFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_bUsesVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleParameterDynamic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::ClassParams = {
		&UParticleModuleParameterDynamic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleParameterDynamic()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleParameterDynamic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleParameterDynamic.OuterSingleton, Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleParameterDynamic.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleParameterDynamic>()
	{
		return UParticleModuleParameterDynamic::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleParameterDynamic);
	UParticleModuleParameterDynamic::~UParticleModuleParameterDynamic() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_Statics::EnumInfo[] = {
		{ EEmitterDynamicParameterValue_StaticEnum, TEXT("EEmitterDynamicParameterValue"), &Z_Registration_Info_UEnum_EEmitterDynamicParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 425666039U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_Statics::ScriptStructInfo[] = {
		{ FEmitterDynamicParameter::StaticStruct, Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewStructOps, TEXT("EmitterDynamicParameter"), &Z_Registration_Info_UScriptStruct_EmitterDynamicParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEmitterDynamicParameter), 536681626U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleParameterDynamic, UParticleModuleParameterDynamic::StaticClass, TEXT("UParticleModuleParameterDynamic"), &Z_Registration_Info_UClass_UParticleModuleParameterDynamic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleParameterDynamic), 1241222557U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_276818872(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
