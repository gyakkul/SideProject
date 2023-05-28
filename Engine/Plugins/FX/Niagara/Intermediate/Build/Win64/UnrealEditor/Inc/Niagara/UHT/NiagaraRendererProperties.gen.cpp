// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraRendererProperties.h"
#include "../Classes/NiagaraPlatformSet.h"
#include "../Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraRendererProperties() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererGpuTranslucentLatency();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererMotionVectorSetting();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererSortPrecision();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSet();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding();
	NIAGARACORE_API UClass* Z_Construct_UClass_UNiagaraMergeable();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraRendererSortPrecision;
	static UEnum* ENiagaraRendererSortPrecision_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraRendererSortPrecision.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraRendererSortPrecision.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRendererSortPrecision, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraRendererSortPrecision"));
		}
		return Z_Registration_Info_UEnum_ENiagaraRendererSortPrecision.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraRendererSortPrecision>()
	{
		return ENiagaraRendererSortPrecision_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraRendererSortPrecision_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraRendererSortPrecision_Statics::Enumerators[] = {
		{ "ENiagaraRendererSortPrecision::Default", (int64)ENiagaraRendererSortPrecision::Default },
		{ "ENiagaraRendererSortPrecision::Low", (int64)ENiagaraRendererSortPrecision::Low },
		{ "ENiagaraRendererSortPrecision::High", (int64)ENiagaraRendererSortPrecision::High },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraRendererSortPrecision_Statics::Enum_MetaDataParams[] = {
		{ "Default.Comment", "/** Uses the project settings value. */" },
		{ "Default.Name", "ENiagaraRendererSortPrecision::Default" },
		{ "Default.ToolTip", "Uses the project settings value." },
		{ "High.Comment", "/** High precision sorting, float (fp32) precision, slower but may fix sorting artifacts. */" },
		{ "High.Name", "ENiagaraRendererSortPrecision::High" },
		{ "High.ToolTip", "High precision sorting, float (fp32) precision, slower but may fix sorting artifacts." },
		{ "Low.Comment", "/** Low precision sorting, half float (fp16) precision, faster and adequate for most cases. */" },
		{ "Low.Name", "ENiagaraRendererSortPrecision::Low" },
		{ "Low.ToolTip", "Low precision sorting, half float (fp16) precision, faster and adequate for most cases." },
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraRendererSortPrecision_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraRendererSortPrecision",
		"ENiagaraRendererSortPrecision",
		Z_Construct_UEnum_Niagara_ENiagaraRendererSortPrecision_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraRendererSortPrecision_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraRendererSortPrecision_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraRendererSortPrecision_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererSortPrecision()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraRendererSortPrecision.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraRendererSortPrecision.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraRendererSortPrecision_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraRendererSortPrecision.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraRendererGpuTranslucentLatency;
	static UEnum* ENiagaraRendererGpuTranslucentLatency_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraRendererGpuTranslucentLatency.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraRendererGpuTranslucentLatency.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRendererGpuTranslucentLatency, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraRendererGpuTranslucentLatency"));
		}
		return Z_Registration_Info_UEnum_ENiagaraRendererGpuTranslucentLatency.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraRendererGpuTranslucentLatency>()
	{
		return ENiagaraRendererGpuTranslucentLatency_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraRendererGpuTranslucentLatency_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraRendererGpuTranslucentLatency_Statics::Enumerators[] = {
		{ "ENiagaraRendererGpuTranslucentLatency::ProjectDefault", (int64)ENiagaraRendererGpuTranslucentLatency::ProjectDefault },
		{ "ENiagaraRendererGpuTranslucentLatency::Immediate", (int64)ENiagaraRendererGpuTranslucentLatency::Immediate },
		{ "ENiagaraRendererGpuTranslucentLatency::Latent", (int64)ENiagaraRendererGpuTranslucentLatency::Latent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraRendererGpuTranslucentLatency_Statics::Enum_MetaDataParams[] = {
		{ "Immediate.Comment", "/** Gpu simulations will always read this frames data for translucent materials. */" },
		{ "Immediate.Name", "ENiagaraRendererGpuTranslucentLatency::Immediate" },
		{ "Immediate.ToolTip", "Gpu simulations will always read this frames data for translucent materials." },
		{ "Latent.Comment", "/** Gpu simulations will read the previous frames data if the simulation has to run in PostRenderOpaque. */" },
		{ "Latent.Name", "ENiagaraRendererGpuTranslucentLatency::Latent" },
		{ "Latent.ToolTip", "Gpu simulations will read the previous frames data if the simulation has to run in PostRenderOpaque." },
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
		{ "ProjectDefault.Comment", "/** Uses the project default value. */" },
		{ "ProjectDefault.Name", "ENiagaraRendererGpuTranslucentLatency::ProjectDefault" },
		{ "ProjectDefault.ToolTip", "Uses the project default value." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraRendererGpuTranslucentLatency_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraRendererGpuTranslucentLatency",
		"ENiagaraRendererGpuTranslucentLatency",
		Z_Construct_UEnum_Niagara_ENiagaraRendererGpuTranslucentLatency_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraRendererGpuTranslucentLatency_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraRendererGpuTranslucentLatency_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraRendererGpuTranslucentLatency_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererGpuTranslucentLatency()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraRendererGpuTranslucentLatency.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraRendererGpuTranslucentLatency.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraRendererGpuTranslucentLatency_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraRendererGpuTranslucentLatency.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialScalarParameter;
class UScriptStruct* FNiagaraRendererMaterialScalarParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialScalarParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialScalarParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraRendererMaterialScalarParameter"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialScalarParameter.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraRendererMaterialScalarParameter>()
{
	return FNiagaraRendererMaterialScalarParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraRendererMaterialScalarParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter_Statics::NewProp_MaterialParameterName_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter_Statics::NewProp_MaterialParameterName = { "MaterialParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraRendererMaterialScalarParameter, MaterialParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter_Statics::NewProp_MaterialParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter_Statics::NewProp_MaterialParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraRendererMaterialScalarParameter, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter_Statics::NewProp_MaterialParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraRendererMaterialScalarParameter",
		sizeof(FNiagaraRendererMaterialScalarParameter),
		alignof(FNiagaraRendererMaterialScalarParameter),
		Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialScalarParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialScalarParameter.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialScalarParameter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialVectorParameter;
class UScriptStruct* FNiagaraRendererMaterialVectorParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialVectorParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialVectorParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraRendererMaterialVectorParameter"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialVectorParameter.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraRendererMaterialVectorParameter>()
{
	return FNiagaraRendererMaterialVectorParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraRendererMaterialVectorParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter_Statics::NewProp_MaterialParameterName_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter_Statics::NewProp_MaterialParameterName = { "MaterialParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraRendererMaterialVectorParameter, MaterialParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter_Statics::NewProp_MaterialParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter_Statics::NewProp_MaterialParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraRendererMaterialVectorParameter, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter_Statics::NewProp_MaterialParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraRendererMaterialVectorParameter",
		sizeof(FNiagaraRendererMaterialVectorParameter),
		alignof(FNiagaraRendererMaterialVectorParameter),
		Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialVectorParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialVectorParameter.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialVectorParameter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialTextureParameter;
class UScriptStruct* FNiagaraRendererMaterialTextureParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialTextureParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialTextureParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraRendererMaterialTextureParameter"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialTextureParameter.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraRendererMaterialTextureParameter>()
{
	return FNiagaraRendererMaterialTextureParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraRendererMaterialTextureParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter_Statics::NewProp_MaterialParameterName_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter_Statics::NewProp_MaterialParameterName = { "MaterialParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraRendererMaterialTextureParameter, MaterialParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter_Statics::NewProp_MaterialParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter_Statics::NewProp_MaterialParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraRendererMaterialTextureParameter, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter_Statics::NewProp_Texture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter_Statics::NewProp_MaterialParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter_Statics::NewProp_Texture,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraRendererMaterialTextureParameter",
		sizeof(FNiagaraRendererMaterialTextureParameter),
		alignof(FNiagaraRendererMaterialTextureParameter),
		Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialTextureParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialTextureParameter.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialTextureParameter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialStaticBoolParameter;
class UScriptStruct* FNiagaraRendererMaterialStaticBoolParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialStaticBoolParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialStaticBoolParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraRendererMaterialStaticBoolParameter"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialStaticBoolParameter.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraRendererMaterialStaticBoolParameter>()
{
	return FNiagaraRendererMaterialStaticBoolParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StaticVariableName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraRendererMaterialStaticBoolParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter_Statics::NewProp_MaterialParameterName_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter_Statics::NewProp_MaterialParameterName = { "MaterialParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraRendererMaterialStaticBoolParameter, MaterialParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter_Statics::NewProp_MaterialParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter_Statics::NewProp_MaterialParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter_Statics::NewProp_StaticVariableName_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter_Statics::NewProp_StaticVariableName = { "StaticVariableName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraRendererMaterialStaticBoolParameter, StaticVariableName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter_Statics::NewProp_StaticVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter_Statics::NewProp_StaticVariableName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter_Statics::NewProp_MaterialParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter_Statics::NewProp_StaticVariableName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraRendererMaterialStaticBoolParameter",
		sizeof(FNiagaraRendererMaterialStaticBoolParameter),
		alignof(FNiagaraRendererMaterialStaticBoolParameter),
		Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialStaticBoolParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialStaticBoolParameter.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialStaticBoolParameter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialParameters;
class UScriptStruct* FNiagaraRendererMaterialParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraRendererMaterialParameters"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialParameters.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraRendererMaterialParameters>()
{
	return FNiagaraRendererMaterialParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeBindings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalarParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticBoolParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticBoolParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticBoolParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Parameters to apply to the material, these are both constant and dynamic bindings\n* Having any bindings set will cause a MID to be generated\n*/" },
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
		{ "ToolTip", "Parameters to apply to the material, these are both constant and dynamic bindings\nHaving any bindings set will cause a MID to be generated" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraRendererMaterialParameters>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_AttributeBindings_Inner = { "AttributeBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding, METADATA_PARAMS(nullptr, 0) }; // 3175080182
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_AttributeBindings_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_AttributeBindings = { "AttributeBindings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraRendererMaterialParameters, AttributeBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_AttributeBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_AttributeBindings_MetaData)) }; // 3175080182
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_ScalarParameters_Inner = { "ScalarParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter, METADATA_PARAMS(nullptr, 0) }; // 4115857244
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_ScalarParameters_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_ScalarParameters = { "ScalarParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraRendererMaterialParameters, ScalarParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_ScalarParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_ScalarParameters_MetaData)) }; // 4115857244
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_VectorParameters_Inner = { "VectorParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter, METADATA_PARAMS(nullptr, 0) }; // 3124629625
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_VectorParameters_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_VectorParameters = { "VectorParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraRendererMaterialParameters, VectorParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_VectorParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_VectorParameters_MetaData)) }; // 3124629625
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_TextureParameters_Inner = { "TextureParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter, METADATA_PARAMS(nullptr, 0) }; // 2983207113
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_TextureParameters_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_TextureParameters = { "TextureParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraRendererMaterialParameters, TextureParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_TextureParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_TextureParameters_MetaData)) }; // 2983207113
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_StaticBoolParameters_Inner = { "StaticBoolParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter, METADATA_PARAMS(nullptr, 0) }; // 3058336710
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_StaticBoolParameters_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_StaticBoolParameters = { "StaticBoolParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraRendererMaterialParameters, StaticBoolParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_StaticBoolParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_StaticBoolParameters_MetaData)) }; // 3058336710
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_AttributeBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_AttributeBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_ScalarParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_ScalarParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_VectorParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_VectorParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_TextureParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_TextureParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_StaticBoolParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewProp_StaticBoolParameters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraRendererMaterialParameters",
		sizeof(FNiagaraRendererMaterialParameters),
		alignof(FNiagaraRendererMaterialParameters),
		Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialParameters.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialParameters.InnerSingleton;
	}
	void UNiagaraRendererProperties::StaticRegisterNativesUNiagaraRendererProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraRendererProperties);
	UClass* Z_Construct_UClass_UNiagaraRendererProperties_NoRegister()
	{
		return UNiagaraRendererProperties::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraRendererProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Platforms_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Platforms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortOrderHint_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SortOrderHint;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MotionVectorSetting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionVectorSetting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MotionVectorSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererEnabledBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RendererEnabledBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInCullProxies_MetaData[];
#endif
		static void NewProp_bAllowInCullProxies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInCullProxies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterEmitterVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OuterEmitterVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMotionBlurEnabled_MetaData[];
#endif
		static void NewProp_bMotionBlurEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMotionBlurEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraRendererProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraMergeable,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRendererProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Emitter properties base class\n* Each EmitterRenderer derives from this with its own class, and returns it in GetProperties; a copy\n* of those specific properties is stored on UNiagaraEmitter (on the System) for serialization\n* and handed back to the System renderer on load.\n*/" },
		{ "IncludePath", "NiagaraRendererProperties.h" },
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
		{ "ToolTip", "Emitter properties base class\nEach EmitterRenderer derives from this with its own class, and returns it in GetProperties; a copy\nof those specific properties is stored on UNiagaraEmitter (on the System) for serialization\nand handed back to the System renderer on load." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_Platforms_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** Platforms on which this renderer is enabled. */" },
		{ "DisplayInScalabilityContext", "" },
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
		{ "ToolTip", "Platforms on which this renderer is enabled." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_Platforms = { "Platforms", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraRendererProperties, Platforms), Z_Construct_UScriptStruct_FNiagaraPlatformSet, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_Platforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_Platforms_MetaData)) }; // 2116815752
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_SortOrderHint_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** By default, emitters are drawn in the order that they are added to the system. This value will allow you to control the order in a more fine-grained manner.\n\x09Materials of the same type (i.e. Transparent) will draw in order from lowest to highest within the system. The default value is 0.*/" },
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
		{ "ToolTip", "By default, emitters are drawn in the order that they are added to the system. This value will allow you to control the order in a more fine-grained manner.\n      Materials of the same type (i.e. Transparent) will draw in order from lowest to highest within the system. The default value is 0." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_SortOrderHint = { "SortOrderHint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraRendererProperties, SortOrderHint), METADATA_PARAMS(Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_SortOrderHint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_SortOrderHint_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_MotionVectorSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_MotionVectorSetting_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Hint about how to generate motion (velocity) vectors for this renderer. */" },
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
		{ "ToolTip", "Hint about how to generate motion (velocity) vectors for this renderer." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_MotionVectorSetting = { "MotionVectorSetting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraRendererProperties, MotionVectorSetting), Z_Construct_UEnum_Niagara_ENiagaraRendererMotionVectorSetting, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_MotionVectorSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_MotionVectorSetting_MetaData)) }; // 4146911906
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_RendererEnabledBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/**\n\x09""Binding to control if the renderer is enabled or disabled.\n\x09When disabled the renderer does not generate or render any particle data.\n\x09When disabled via a static bool the renderer will be removed in cooked content.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
		{ "ToolTip", "Binding to control if the renderer is enabled or disabled.\nWhen disabled the renderer does not generate or render any particle data.\nWhen disabled via a static bool the renderer will be removed in cooked content." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_RendererEnabledBinding = { "RendererEnabledBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraRendererProperties, RendererEnabledBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_RendererEnabledBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_RendererEnabledBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((UNiagaraRendererProperties*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraRendererProperties), &Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bAllowInCullProxies_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bAllowInCullProxies_SetBit(void* Obj)
	{
		((UNiagaraRendererProperties*)Obj)->bAllowInCullProxies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bAllowInCullProxies = { "bAllowInCullProxies", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraRendererProperties), &Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bAllowInCullProxies_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bAllowInCullProxies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bAllowInCullProxies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_OuterEmitterVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_OuterEmitterVersion = { "OuterEmitterVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraRendererProperties, OuterEmitterVersion), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_OuterEmitterVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_OuterEmitterVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bMotionBlurEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraRendererProperties.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bMotionBlurEnabled_SetBit(void* Obj)
	{
		((UNiagaraRendererProperties*)Obj)->bMotionBlurEnabled_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bMotionBlurEnabled = { "bMotionBlurEnabled", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraRendererProperties), &Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bMotionBlurEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bMotionBlurEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bMotionBlurEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraRendererProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_Platforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_SortOrderHint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_MotionVectorSetting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_MotionVectorSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_RendererEnabledBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bAllowInCullProxies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_OuterEmitterVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRendererProperties_Statics::NewProp_bMotionBlurEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraRendererProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraRendererProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraRendererProperties_Statics::ClassParams = {
		&UNiagaraRendererProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraRendererProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRendererProperties_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraRendererProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRendererProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraRendererProperties()
	{
		if (!Z_Registration_Info_UClass_UNiagaraRendererProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraRendererProperties.OuterSingleton, Z_Construct_UClass_UNiagaraRendererProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraRendererProperties.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraRendererProperties>()
	{
		return UNiagaraRendererProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraRendererProperties);
	UNiagaraRendererProperties::~UNiagaraRendererProperties() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_Statics::EnumInfo[] = {
		{ ENiagaraRendererSortPrecision_StaticEnum, TEXT("ENiagaraRendererSortPrecision"), &Z_Registration_Info_UEnum_ENiagaraRendererSortPrecision, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2353398334U) },
		{ ENiagaraRendererGpuTranslucentLatency_StaticEnum, TEXT("ENiagaraRendererGpuTranslucentLatency"), &Z_Registration_Info_UEnum_ENiagaraRendererGpuTranslucentLatency, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1258925171U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraRendererMaterialScalarParameter::StaticStruct, Z_Construct_UScriptStruct_FNiagaraRendererMaterialScalarParameter_Statics::NewStructOps, TEXT("NiagaraRendererMaterialScalarParameter"), &Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialScalarParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraRendererMaterialScalarParameter), 4115857244U) },
		{ FNiagaraRendererMaterialVectorParameter::StaticStruct, Z_Construct_UScriptStruct_FNiagaraRendererMaterialVectorParameter_Statics::NewStructOps, TEXT("NiagaraRendererMaterialVectorParameter"), &Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialVectorParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraRendererMaterialVectorParameter), 3124629625U) },
		{ FNiagaraRendererMaterialTextureParameter::StaticStruct, Z_Construct_UScriptStruct_FNiagaraRendererMaterialTextureParameter_Statics::NewStructOps, TEXT("NiagaraRendererMaterialTextureParameter"), &Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialTextureParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraRendererMaterialTextureParameter), 2983207113U) },
		{ FNiagaraRendererMaterialStaticBoolParameter::StaticStruct, Z_Construct_UScriptStruct_FNiagaraRendererMaterialStaticBoolParameter_Statics::NewStructOps, TEXT("NiagaraRendererMaterialStaticBoolParameter"), &Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialStaticBoolParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraRendererMaterialStaticBoolParameter), 3058336710U) },
		{ FNiagaraRendererMaterialParameters::StaticStruct, Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters_Statics::NewStructOps, TEXT("NiagaraRendererMaterialParameters"), &Z_Registration_Info_UScriptStruct_NiagaraRendererMaterialParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraRendererMaterialParameters), 2971467554U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraRendererProperties, UNiagaraRendererProperties::StaticClass, TEXT("UNiagaraRendererProperties"), &Z_Registration_Info_UClass_UNiagaraRendererProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraRendererProperties), 2930826761U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_2112595008(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRendererProperties_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
