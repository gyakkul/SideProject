// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Editor/UnrealEdTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealEdTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEdTypes();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEdTypes_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EDestructiveAssetActions();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ELevelViewportType();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassBooleanParameterValue();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassParameterValue();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassScalarParameterValue();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LightmassParameterValue;
class UScriptStruct* FLightmassParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LightmassParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LightmassParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightmassParameterValue, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("LightmassParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_LightmassParameterValue.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FLightmassParameterValue>()
{
	return FLightmassParameterValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLightmassParameterValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MetaData[];
#endif
		static void NewProp_bOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Base LightmassParameterValue class */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
		{ "ToolTip", "Base LightmassParameterValue class" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightmassParameterValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::NewProp_bOverride_MetaData[] = {
		{ "Category", "LightmassParameterValue" },
		{ "Comment", "/** If true, override the given parameter with the given settings */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
		{ "ToolTip", "If true, override the given parameter with the given settings" },
	};
#endif
	void Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::NewProp_bOverride_SetBit(void* Obj)
	{
		((FLightmassParameterValue*)Obj)->bOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::NewProp_bOverride = { "bOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FLightmassParameterValue), &Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::NewProp_bOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::NewProp_bOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::NewProp_bOverride_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::NewProp_bOverride,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"LightmassParameterValue",
		sizeof(FLightmassParameterValue),
		alignof(FLightmassParameterValue),
		Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLightmassParameterValue()
	{
		if (!Z_Registration_Info_UScriptStruct_LightmassParameterValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LightmassParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LightmassParameterValue.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLightmassBooleanParameterValue>() == std::is_polymorphic<FLightmassParameterValue>(), "USTRUCT FLightmassBooleanParameterValue cannot be polymorphic unless super FLightmassParameterValue is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LightmassBooleanParameterValue;
class UScriptStruct* FLightmassBooleanParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LightmassBooleanParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LightmassBooleanParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightmassBooleanParameterValue, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("LightmassBooleanParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_LightmassBooleanParameterValue.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FLightmassBooleanParameterValue>()
{
	return FLightmassBooleanParameterValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static void NewProp_ParameterValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ParameterValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Boolean parameter value */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
		{ "ToolTip", "Boolean parameter value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightmassBooleanParameterValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "LightmassBooleanParameterValue" },
		{ "Comment", "/** The boolean value to override the parent value with */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
		{ "ToolTip", "The boolean value to override the parent value with" },
	};
#endif
	void Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::NewProp_ParameterValue_SetBit(void* Obj)
	{
		((FLightmassBooleanParameterValue*)Obj)->ParameterValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FLightmassBooleanParameterValue), &Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::NewProp_ParameterValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::NewProp_ParameterValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FLightmassParameterValue,
		&NewStructOps,
		"LightmassBooleanParameterValue",
		sizeof(FLightmassBooleanParameterValue),
		alignof(FLightmassBooleanParameterValue),
		Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLightmassBooleanParameterValue()
	{
		if (!Z_Registration_Info_UScriptStruct_LightmassBooleanParameterValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LightmassBooleanParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LightmassBooleanParameterValue.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLightmassScalarParameterValue>() == std::is_polymorphic<FLightmassParameterValue>(), "USTRUCT FLightmassScalarParameterValue cannot be polymorphic unless super FLightmassParameterValue is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LightmassScalarParameterValue;
class UScriptStruct* FLightmassScalarParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LightmassScalarParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LightmassScalarParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightmassScalarParameterValue, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("LightmassScalarParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_LightmassScalarParameterValue.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FLightmassScalarParameterValue>()
{
	return FLightmassScalarParameterValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParameterValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Scalar parameter value */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
		{ "ToolTip", "Scalar parameter value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightmassScalarParameterValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "LightmassScalarParameterValue" },
		{ "Comment", "/** The scalar value to override the parent value with */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
		{ "ToolTip", "The scalar value to override the parent value with" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightmassScalarParameterValue, ParameterValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::NewProp_ParameterValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		Z_Construct_UScriptStruct_FLightmassParameterValue,
		&NewStructOps,
		"LightmassScalarParameterValue",
		sizeof(FLightmassScalarParameterValue),
		alignof(FLightmassScalarParameterValue),
		Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLightmassScalarParameterValue()
	{
		if (!Z_Registration_Info_UScriptStruct_LightmassScalarParameterValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LightmassScalarParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LightmassScalarParameterValue.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LightmassParameterizedMaterialSettings;
class UScriptStruct* FLightmassParameterizedMaterialSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LightmassParameterizedMaterialSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LightmassParameterizedMaterialSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("LightmassParameterizedMaterialSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LightmassParameterizedMaterialSettings.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FLightmassParameterizedMaterialSettings>()
{
	return FLightmassParameterizedMaterialSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastShadowAsMasked_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CastShadowAsMasked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmissiveBoost_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmissiveBoost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiffuseBoost_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DiffuseBoost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportResolutionScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExportResolutionScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure for 'parameterized' Lightmass settings */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
		{ "ToolTip", "Structure for 'parameterized' Lightmass settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightmassParameterizedMaterialSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_CastShadowAsMasked_MetaData[] = {
		{ "Category", "LightmassParameterizedMaterialSettings" },
		{ "Comment", "/** If true, forces translucency to cast static shadows as if the material were masked. */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
		{ "ToolTip", "If true, forces translucency to cast static shadows as if the material were masked." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_CastShadowAsMasked = { "CastShadowAsMasked", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightmassParameterizedMaterialSettings, CastShadowAsMasked), Z_Construct_UScriptStruct_FLightmassBooleanParameterValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_CastShadowAsMasked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_CastShadowAsMasked_MetaData)) }; // 3853773511
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_EmissiveBoost_MetaData[] = {
		{ "Category", "LightmassParameterizedMaterialSettings" },
		{ "Comment", "/** Scales the emissive contribution of this material to static lighting. */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
		{ "ToolTip", "Scales the emissive contribution of this material to static lighting." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_EmissiveBoost = { "EmissiveBoost", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightmassParameterizedMaterialSettings, EmissiveBoost), Z_Construct_UScriptStruct_FLightmassScalarParameterValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_EmissiveBoost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_EmissiveBoost_MetaData)) }; // 1089707985
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_DiffuseBoost_MetaData[] = {
		{ "Category", "LightmassParameterizedMaterialSettings" },
		{ "Comment", "/** Scales the diffuse contribution of this material to static lighting. */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
		{ "ToolTip", "Scales the diffuse contribution of this material to static lighting." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_DiffuseBoost = { "DiffuseBoost", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightmassParameterizedMaterialSettings, DiffuseBoost), Z_Construct_UScriptStruct_FLightmassScalarParameterValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_DiffuseBoost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_DiffuseBoost_MetaData)) }; // 1089707985
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_ExportResolutionScale_MetaData[] = {
		{ "Category", "LightmassParameterizedMaterialSettings" },
		{ "Comment", "/** \n\x09 * Scales the resolution that this material's attributes were exported at. \n\x09 * This is useful for increasing material resolution when details are needed.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
		{ "ToolTip", "Scales the resolution that this material's attributes were exported at.\nThis is useful for increasing material resolution when details are needed." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_ExportResolutionScale = { "ExportResolutionScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightmassParameterizedMaterialSettings, ExportResolutionScale), Z_Construct_UScriptStruct_FLightmassScalarParameterValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_ExportResolutionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_ExportResolutionScale_MetaData)) }; // 1089707985
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_CastShadowAsMasked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_EmissiveBoost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_DiffuseBoost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewProp_ExportResolutionScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"LightmassParameterizedMaterialSettings",
		sizeof(FLightmassParameterizedMaterialSettings),
		alignof(FLightmassParameterizedMaterialSettings),
		Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LightmassParameterizedMaterialSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LightmassParameterizedMaterialSettings.InnerSingleton, Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LightmassParameterizedMaterialSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELevelViewportType;
	static UEnum* ELevelViewportType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELevelViewportType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELevelViewportType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ELevelViewportType, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ELevelViewportType"));
		}
		return Z_Registration_Info_UEnum_ELevelViewportType.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ELevelViewportType>()
	{
		return ELevelViewportType_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_ELevelViewportType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_ELevelViewportType_Statics::Enumerators[] = {
		{ "LVT_OrthoXY", (int64)LVT_OrthoXY },
		{ "LVT_OrthoXZ", (int64)LVT_OrthoXZ },
		{ "LVT_OrthoYZ", (int64)LVT_OrthoYZ },
		{ "LVT_Perspective", (int64)LVT_Perspective },
		{ "LVT_OrthoFreelook", (int64)LVT_OrthoFreelook },
		{ "LVT_OrthoNegativeXY", (int64)LVT_OrthoNegativeXY },
		{ "LVT_OrthoNegativeXZ", (int64)LVT_OrthoNegativeXZ },
		{ "LVT_OrthoNegativeYZ", (int64)LVT_OrthoNegativeYZ },
		{ "LVT_MAX", (int64)LVT_MAX },
		{ "LVT_None", (int64)LVT_None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_ELevelViewportType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//\n//\x09""ELevelViewportType\n//\n" },
		{ "LVT_MAX.Name", "LVT_MAX" },
		{ "LVT_None.Name", "LVT_None" },
		{ "LVT_OrthoFreelook.Name", "LVT_OrthoFreelook" },
		{ "LVT_OrthoNegativeXY.Comment", "/** Bottom */" },
		{ "LVT_OrthoNegativeXY.Name", "LVT_OrthoNegativeXY" },
		{ "LVT_OrthoNegativeXY.ToolTip", "Bottom" },
		{ "LVT_OrthoNegativeXZ.Comment", "/** Back */" },
		{ "LVT_OrthoNegativeXZ.Name", "LVT_OrthoNegativeXZ" },
		{ "LVT_OrthoNegativeXZ.ToolTip", "Back" },
		{ "LVT_OrthoNegativeYZ.Comment", "/** Right */" },
		{ "LVT_OrthoNegativeYZ.Name", "LVT_OrthoNegativeYZ" },
		{ "LVT_OrthoNegativeYZ.ToolTip", "Right" },
		{ "LVT_OrthoXY.Comment", "/** Top */" },
		{ "LVT_OrthoXY.Name", "LVT_OrthoXY" },
		{ "LVT_OrthoXY.ToolTip", "Top" },
		{ "LVT_OrthoXZ.Comment", "/** Front */" },
		{ "LVT_OrthoXZ.Name", "LVT_OrthoXZ" },
		{ "LVT_OrthoXZ.ToolTip", "Front" },
		{ "LVT_OrthoYZ.Comment", "/** Left */" },
		{ "LVT_OrthoYZ.Name", "LVT_OrthoYZ" },
		{ "LVT_OrthoYZ.ToolTip", "Left" },
		{ "LVT_Perspective.Name", "LVT_Perspective" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
		{ "ToolTip", "ELevelViewportType" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_ELevelViewportType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"ELevelViewportType",
		"ELevelViewportType",
		Z_Construct_UEnum_UnrealEd_ELevelViewportType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ELevelViewportType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_ELevelViewportType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ELevelViewportType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_ELevelViewportType()
	{
		if (!Z_Registration_Info_UEnum_ELevelViewportType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELevelViewportType.InnerSingleton, Z_Construct_UEnum_UnrealEd_ELevelViewportType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELevelViewportType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDestructiveAssetActions;
	static UEnum* EDestructiveAssetActions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDestructiveAssetActions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDestructiveAssetActions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EDestructiveAssetActions, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EDestructiveAssetActions"));
		}
		return Z_Registration_Info_UEnum_EDestructiveAssetActions.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EDestructiveAssetActions>()
	{
		return EDestructiveAssetActions_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EDestructiveAssetActions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EDestructiveAssetActions_Statics::Enumerators[] = {
		{ "AssetDelete", (int64)AssetDelete },
		{ "AssetRename", (int64)AssetRename },
		{ "AssetMove", (int64)AssetMove },
		{ "AssetPrivatize", (int64)AssetPrivatize },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EDestructiveAssetActions_Statics::Enum_MetaDataParams[] = {
		{ "AssetDelete.Name", "AssetDelete" },
		{ "AssetMove.Name", "AssetMove" },
		{ "AssetPrivatize.Name", "AssetPrivatize" },
		{ "AssetRename.Name", "AssetRename" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EDestructiveAssetActions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EDestructiveAssetActions",
		"EDestructiveAssetActions",
		Z_Construct_UEnum_UnrealEd_EDestructiveAssetActions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EDestructiveAssetActions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EDestructiveAssetActions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EDestructiveAssetActions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EDestructiveAssetActions()
	{
		if (!Z_Registration_Info_UEnum_EDestructiveAssetActions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDestructiveAssetActions.InnerSingleton, Z_Construct_UEnum_UnrealEd_EDestructiveAssetActions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDestructiveAssetActions.InnerSingleton;
	}
	void UUnrealEdTypes::StaticRegisterNativesUUnrealEdTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnrealEdTypes);
	UClass* Z_Construct_UClass_UUnrealEdTypes_NoRegister()
	{
		return UUnrealEdTypes::StaticClass();
	}
	struct Z_Construct_UClass_UUnrealEdTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnrealEdTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Editor/UnrealEdTypes.h" },
		{ "ModuleRelativePath", "Classes/Editor/UnrealEdTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnrealEdTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealEdTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnrealEdTypes_Statics::ClassParams = {
		&UUnrealEdTypes::StaticClass,
		"UnrealEd",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUnrealEdTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEdTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnrealEdTypes()
	{
		if (!Z_Registration_Info_UClass_UUnrealEdTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnrealEdTypes.OuterSingleton, Z_Construct_UClass_UUnrealEdTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnrealEdTypes.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UUnrealEdTypes>()
	{
		return UUnrealEdTypes::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealEdTypes);
	UUnrealEdTypes::~UUnrealEdTypes() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_Statics::EnumInfo[] = {
		{ ELevelViewportType_StaticEnum, TEXT("ELevelViewportType"), &Z_Registration_Info_UEnum_ELevelViewportType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 159852840U) },
		{ EDestructiveAssetActions_StaticEnum, TEXT("EDestructiveAssetActions"), &Z_Registration_Info_UEnum_EDestructiveAssetActions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 637395727U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_Statics::ScriptStructInfo[] = {
		{ FLightmassParameterValue::StaticStruct, Z_Construct_UScriptStruct_FLightmassParameterValue_Statics::NewStructOps, TEXT("LightmassParameterValue"), &Z_Registration_Info_UScriptStruct_LightmassParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLightmassParameterValue), 986545617U) },
		{ FLightmassBooleanParameterValue::StaticStruct, Z_Construct_UScriptStruct_FLightmassBooleanParameterValue_Statics::NewStructOps, TEXT("LightmassBooleanParameterValue"), &Z_Registration_Info_UScriptStruct_LightmassBooleanParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLightmassBooleanParameterValue), 3853773511U) },
		{ FLightmassScalarParameterValue::StaticStruct, Z_Construct_UScriptStruct_FLightmassScalarParameterValue_Statics::NewStructOps, TEXT("LightmassScalarParameterValue"), &Z_Registration_Info_UScriptStruct_LightmassScalarParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLightmassScalarParameterValue), 1089707985U) },
		{ FLightmassParameterizedMaterialSettings::StaticStruct, Z_Construct_UScriptStruct_FLightmassParameterizedMaterialSettings_Statics::NewStructOps, TEXT("LightmassParameterizedMaterialSettings"), &Z_Registration_Info_UScriptStruct_LightmassParameterizedMaterialSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLightmassParameterizedMaterialSettings), 514503608U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUnrealEdTypes, UUnrealEdTypes::StaticClass, TEXT("UUnrealEdTypes"), &Z_Registration_Info_UClass_UUnrealEdTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnrealEdTypes), 4106600312U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_3301630577(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_UnrealEdTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
