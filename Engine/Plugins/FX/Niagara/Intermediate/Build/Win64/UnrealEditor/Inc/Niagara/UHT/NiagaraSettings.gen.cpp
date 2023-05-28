// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraSettings.h"
#include "../Classes/NiagaraPlatformSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSettings();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSettings_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererMotionVectorSetting();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDISkelMesh_GpuMaxInfluences;
	static UEnum* ENDISkelMesh_GpuMaxInfluences_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENDISkelMesh_GpuMaxInfluences.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENDISkelMesh_GpuMaxInfluences.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDISkelMesh_GpuMaxInfluences"));
		}
		return Z_Registration_Info_UEnum_ENDISkelMesh_GpuMaxInfluences.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENDISkelMesh_GpuMaxInfluences::Type>()
	{
		return ENDISkelMesh_GpuMaxInfluences_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences_Statics::Enumerators[] = {
		{ "ENDISkelMesh_GpuMaxInfluences::AllowMax4", (int64)ENDISkelMesh_GpuMaxInfluences::AllowMax4 },
		{ "ENDISkelMesh_GpuMaxInfluences::AllowMax8", (int64)ENDISkelMesh_GpuMaxInfluences::AllowMax8 },
		{ "ENDISkelMesh_GpuMaxInfluences::Unlimited", (int64)ENDISkelMesh_GpuMaxInfluences::Unlimited },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences_Statics::Enum_MetaDataParams[] = {
		{ "AllowMax4.Comment", "/** Allow up to 4 bones to be sampled. */" },
		{ "AllowMax4.Name", "ENDISkelMesh_GpuMaxInfluences::AllowMax4" },
		{ "AllowMax4.ToolTip", "Allow up to 4 bones to be sampled." },
		{ "AllowMax8.Comment", "/** Allow up to 8 bones to be sampled. */" },
		{ "AllowMax8.Name", "ENDISkelMesh_GpuMaxInfluences::AllowMax8" },
		{ "AllowMax8.ToolTip", "Allow up to 8 bones to be sampled." },
		{ "Comment", "// This enum must match the order in NiagaraDataInterfaceSkeletalMesh.ush\n" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "This enum must match the order in NiagaraDataInterfaceSkeletalMesh.ush" },
		{ "Unlimited.Comment", "/** Allow an unlimited amount of bones to be sampled. */" },
		{ "Unlimited.Name", "ENDISkelMesh_GpuMaxInfluences::Unlimited" },
		{ "Unlimited.ToolTip", "Allow an unlimited amount of bones to be sampled." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENDISkelMesh_GpuMaxInfluences",
		"ENDISkelMesh_GpuMaxInfluences::Type",
		Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences()
	{
		if (!Z_Registration_Info_UEnum_ENDISkelMesh_GpuMaxInfluences.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDISkelMesh_GpuMaxInfluences.InnerSingleton, Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENDISkelMesh_GpuMaxInfluences.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDISkelMesh_GpuUniformSamplingFormat;
	static UEnum* ENDISkelMesh_GpuUniformSamplingFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENDISkelMesh_GpuUniformSamplingFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENDISkelMesh_GpuUniformSamplingFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDISkelMesh_GpuUniformSamplingFormat"));
		}
		return Z_Registration_Info_UEnum_ENDISkelMesh_GpuUniformSamplingFormat.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENDISkelMesh_GpuUniformSamplingFormat::Type>()
	{
		return ENDISkelMesh_GpuUniformSamplingFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat_Statics::Enumerators[] = {
		{ "ENDISkelMesh_GpuUniformSamplingFormat::Full", (int64)ENDISkelMesh_GpuUniformSamplingFormat::Full },
		{ "ENDISkelMesh_GpuUniformSamplingFormat::Limited_24_8", (int64)ENDISkelMesh_GpuUniformSamplingFormat::Limited_24_8 },
		{ "ENDISkelMesh_GpuUniformSamplingFormat::Limited_23_9", (int64)ENDISkelMesh_GpuUniformSamplingFormat::Limited_23_9 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// This enum must match the order in NiagaraDataInterfaceSkeletalMesh.ush\n" },
		{ "Full.Comment", "/** 64 bits per entry. Allow for the full int32 range of triangles (2 billion). */" },
		{ "Full.Name", "ENDISkelMesh_GpuUniformSamplingFormat::Full" },
		{ "Full.ToolTip", "64 bits per entry. Allow for the full int32 range of triangles (2 billion)." },
		{ "Limited_23_9.Comment", "/** 32 bits per entry. Allow for ~8.4 millions triangles and 9 bits of probability precision. */" },
		{ "Limited_23_9.Name", "ENDISkelMesh_GpuUniformSamplingFormat::Limited_23_9" },
		{ "Limited_23_9.ToolTip", "32 bits per entry. Allow for ~8.4 millions triangles and 9 bits of probability precision." },
		{ "Limited_24_8.Comment", "/** 32 bits per entry. Allow for ~16.7 million triangles and 8 bits of probability precision. */" },
		{ "Limited_24_8.Name", "ENDISkelMesh_GpuUniformSamplingFormat::Limited_24_8" },
		{ "Limited_24_8.ToolTip", "32 bits per entry. Allow for ~16.7 million triangles and 8 bits of probability precision." },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "This enum must match the order in NiagaraDataInterfaceSkeletalMesh.ush" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENDISkelMesh_GpuUniformSamplingFormat",
		"ENDISkelMesh_GpuUniformSamplingFormat::Type",
		Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat()
	{
		if (!Z_Registration_Info_UEnum_ENDISkelMesh_GpuUniformSamplingFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDISkelMesh_GpuUniformSamplingFormat.InnerSingleton, Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENDISkelMesh_GpuUniformSamplingFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDISkelMesh_AdjacencyTriangleIndexFormat;
	static UEnum* ENDISkelMesh_AdjacencyTriangleIndexFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENDISkelMesh_AdjacencyTriangleIndexFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENDISkelMesh_AdjacencyTriangleIndexFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDISkelMesh_AdjacencyTriangleIndexFormat"));
		}
		return Z_Registration_Info_UEnum_ENDISkelMesh_AdjacencyTriangleIndexFormat.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENDISkelMesh_AdjacencyTriangleIndexFormat::Type>()
	{
		return ENDISkelMesh_AdjacencyTriangleIndexFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat_Statics::Enumerators[] = {
		{ "ENDISkelMesh_AdjacencyTriangleIndexFormat::Full", (int64)ENDISkelMesh_AdjacencyTriangleIndexFormat::Full },
		{ "ENDISkelMesh_AdjacencyTriangleIndexFormat::Half", (int64)ENDISkelMesh_AdjacencyTriangleIndexFormat::Half },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// This enum must match the order in NiagaraDataInterfaceSkeletalMesh.ush\n" },
		{ "Full.Comment", "/** 32 bits per entry. Allow for the full int32 range of triangles (2 billion). */" },
		{ "Full.Name", "ENDISkelMesh_AdjacencyTriangleIndexFormat::Full" },
		{ "Full.ToolTip", "32 bits per entry. Allow for the full int32 range of triangles (2 billion)." },
		{ "Half.Comment", "/** 16 bits per entry. Allow for half (int16) range of triangles (64k). */" },
		{ "Half.Name", "ENDISkelMesh_AdjacencyTriangleIndexFormat::Half" },
		{ "Half.ToolTip", "16 bits per entry. Allow for half (int16) range of triangles (64k)." },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "This enum must match the order in NiagaraDataInterfaceSkeletalMesh.ush" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENDISkelMesh_AdjacencyTriangleIndexFormat",
		"ENDISkelMesh_AdjacencyTriangleIndexFormat::Type",
		Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat()
	{
		if (!Z_Registration_Info_UEnum_ENDISkelMesh_AdjacencyTriangleIndexFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDISkelMesh_AdjacencyTriangleIndexFormat.InnerSingleton, Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENDISkelMesh_AdjacencyTriangleIndexFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraDefaultRendererPixelCoverageMode;
	static UEnum* ENiagaraDefaultRendererPixelCoverageMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDefaultRendererPixelCoverageMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraDefaultRendererPixelCoverageMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDefaultRendererPixelCoverageMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraDefaultRendererPixelCoverageMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDefaultRendererPixelCoverageMode>()
	{
		return ENiagaraDefaultRendererPixelCoverageMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode_Statics::Enumerators[] = {
		{ "ENiagaraDefaultRendererPixelCoverageMode::Enabled", (int64)ENiagaraDefaultRendererPixelCoverageMode::Enabled },
		{ "ENiagaraDefaultRendererPixelCoverageMode::Disabled", (int64)ENiagaraDefaultRendererPixelCoverageMode::Disabled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode_Statics::Enum_MetaDataParams[] = {
		{ "Disabled.Comment", "/** When renderer is set to automatic mode pixel coverage is disabled. */" },
		{ "Disabled.Name", "ENiagaraDefaultRendererPixelCoverageMode::Disabled" },
		{ "Disabled.ToolTip", "When renderer is set to automatic mode pixel coverage is disabled." },
		{ "Enabled.Comment", "/** When renderer is set to automatic mode pixel coverage is enabled. */" },
		{ "Enabled.Name", "ENiagaraDefaultRendererPixelCoverageMode::Enabled" },
		{ "Enabled.ToolTip", "When renderer is set to automatic mode pixel coverage is enabled." },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraDefaultRendererPixelCoverageMode",
		"ENiagaraDefaultRendererPixelCoverageMode",
		Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDefaultRendererPixelCoverageMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraDefaultRendererPixelCoverageMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraDefaultRendererPixelCoverageMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraDefaultSortPrecision;
	static UEnum* ENiagaraDefaultSortPrecision_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDefaultSortPrecision.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraDefaultSortPrecision.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDefaultSortPrecision"));
		}
		return Z_Registration_Info_UEnum_ENiagaraDefaultSortPrecision.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDefaultSortPrecision>()
	{
		return ENiagaraDefaultSortPrecision_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision_Statics::Enumerators[] = {
		{ "ENiagaraDefaultSortPrecision::Low", (int64)ENiagaraDefaultSortPrecision::Low },
		{ "ENiagaraDefaultSortPrecision::High", (int64)ENiagaraDefaultSortPrecision::High },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision_Statics::Enum_MetaDataParams[] = {
		{ "High.Comment", "/** High precision sorting, float (fp32) precision, slower but may fix sorting artifacts. */" },
		{ "High.Name", "ENiagaraDefaultSortPrecision::High" },
		{ "High.ToolTip", "High precision sorting, float (fp32) precision, slower but may fix sorting artifacts." },
		{ "Low.Comment", "/** Low precision sorting, half float (fp16) precision, faster and adequate for most cases. */" },
		{ "Low.Name", "ENiagaraDefaultSortPrecision::Low" },
		{ "Low.ToolTip", "Low precision sorting, half float (fp16) precision, faster and adequate for most cases." },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraDefaultSortPrecision",
		"ENiagaraDefaultSortPrecision",
		Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDefaultSortPrecision.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraDefaultSortPrecision.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraDefaultSortPrecision.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraDefaultGpuTranslucentLatency;
	static UEnum* ENiagaraDefaultGpuTranslucentLatency_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDefaultGpuTranslucentLatency.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraDefaultGpuTranslucentLatency.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDefaultGpuTranslucentLatency"));
		}
		return Z_Registration_Info_UEnum_ENiagaraDefaultGpuTranslucentLatency.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDefaultGpuTranslucentLatency>()
	{
		return ENiagaraDefaultGpuTranslucentLatency_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency_Statics::Enumerators[] = {
		{ "ENiagaraDefaultGpuTranslucentLatency::Immediate", (int64)ENiagaraDefaultGpuTranslucentLatency::Immediate },
		{ "ENiagaraDefaultGpuTranslucentLatency::Latent", (int64)ENiagaraDefaultGpuTranslucentLatency::Latent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency_Statics::Enum_MetaDataParams[] = {
		{ "Immediate.Comment", "/** Gpu simulations will always read this frames data for translucent materials. */" },
		{ "Immediate.Name", "ENiagaraDefaultGpuTranslucentLatency::Immediate" },
		{ "Immediate.ToolTip", "Gpu simulations will always read this frames data for translucent materials." },
		{ "Latent.Comment", "/** Gpu simulations will read the previous frames data if the simulation has to run in PostRenderOpaque. */" },
		{ "Latent.Name", "ENiagaraDefaultGpuTranslucentLatency::Latent" },
		{ "Latent.ToolTip", "Gpu simulations will read the previous frames data if the simulation has to run in PostRenderOpaque." },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraDefaultGpuTranslucentLatency",
		"ENiagaraDefaultGpuTranslucentLatency",
		Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDefaultGpuTranslucentLatency.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraDefaultGpuTranslucentLatency.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraDefaultGpuTranslucentLatency.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDICollisionQuery_AsyncGpuTraceProvider;
	static UEnum* ENDICollisionQuery_AsyncGpuTraceProvider_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENDICollisionQuery_AsyncGpuTraceProvider.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENDICollisionQuery_AsyncGpuTraceProvider.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDICollisionQuery_AsyncGpuTraceProvider"));
		}
		return Z_Registration_Info_UEnum_ENDICollisionQuery_AsyncGpuTraceProvider.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENDICollisionQuery_AsyncGpuTraceProvider::Type>()
	{
		return ENDICollisionQuery_AsyncGpuTraceProvider_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider_Statics::Enumerators[] = {
		{ "ENDICollisionQuery_AsyncGpuTraceProvider::Default", (int64)ENDICollisionQuery_AsyncGpuTraceProvider::Default },
		{ "ENDICollisionQuery_AsyncGpuTraceProvider::HWRT", (int64)ENDICollisionQuery_AsyncGpuTraceProvider::HWRT },
		{ "ENDICollisionQuery_AsyncGpuTraceProvider::GSDF", (int64)ENDICollisionQuery_AsyncGpuTraceProvider::GSDF },
		{ "ENDICollisionQuery_AsyncGpuTraceProvider::None", (int64)ENDICollisionQuery_AsyncGpuTraceProvider::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider_Statics::Enum_MetaDataParams[] = {
		{ "Default.DisplayName", "Project Default" },
		{ "Default.Name", "ENDICollisionQuery_AsyncGpuTraceProvider::Default" },
		{ "GSDF.DisplayName", "Global Signed Distance Fields" },
		{ "GSDF.Name", "ENDICollisionQuery_AsyncGpuTraceProvider::GSDF" },
		{ "HWRT.DisplayName", "HW Ray Tracing" },
		{ "HWRT.Name", "ENDICollisionQuery_AsyncGpuTraceProvider::HWRT" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "None.DisplayName", "Disabled" },
		{ "None.Name", "ENDICollisionQuery_AsyncGpuTraceProvider::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENDICollisionQuery_AsyncGpuTraceProvider",
		"ENDICollisionQuery_AsyncGpuTraceProvider::Type",
		Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider()
	{
		if (!Z_Registration_Info_UEnum_ENDICollisionQuery_AsyncGpuTraceProvider.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDICollisionQuery_AsyncGpuTraceProvider.InnerSingleton, Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENDICollisionQuery_AsyncGpuTraceProvider.InnerSingleton;
	}
	void UNiagaraSettings::StaticRegisterNativesUNiagaraSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSettings);
	UClass* Z_Construct_UClass_UNiagaraSettings_NoRegister()
	{
		return UNiagaraSettings::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalParameterTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalParameterTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalParameterTypes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalPayloadTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalPayloadTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalPayloadTypes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalParameterEnums_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalParameterEnums_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalParameterEnums;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSystemViewportInOrbitMode_MetaData[];
#endif
		static void NewProp_bSystemViewportInOrbitMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSystemViewportInOrbitMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowConvertibleInputsInStack_MetaData[];
#endif
		static void NewProp_bShowConvertibleInputsInStack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowConvertibleInputsInStack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuickSimCacheCaptureFrameCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QuickSimCacheCaptureFrameCount;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSystemsSupportLargeWorldCoordinates_MetaData[];
#endif
		static void NewProp_bSystemsSupportLargeWorldCoordinates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSystemsSupportLargeWorldCoordinates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnforceStrictStackTypes_MetaData[];
#endif
		static void NewProp_bEnforceStrictStackTypes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnforceStrictStackTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExperimentalVMEnabled_MetaData[];
#endif
		static void NewProp_bExperimentalVMEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExperimentalVMEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultEffectType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultEffectType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionPinTypeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionPinTypeColor;
		static const UECodeGen_Private::FTextPropertyParams NewProp_QualityLevels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QualityLevels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QualityLevels;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ComponentRendererWarningsPerClass_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ComponentRendererWarningsPerClass_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentRendererWarningsPerClass_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ComponentRendererWarningsPerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRenderTargetFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultRenderTargetFormat;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultGridFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGridFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultGridFormat;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DefaultRendererMotionVectorSetting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRendererMotionVectorSetting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultRendererMotionVectorSetting;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultPixelCoverageMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPixelCoverageMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultPixelCoverageMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultSortPrecision_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSortPrecision_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultSortPrecision;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultGpuTranslucentLatency_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGpuTranslucentLatency_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultGpuTranslucentLatency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLightInverseExposureBlend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultLightInverseExposureBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NDISkelMesh_GpuMaxInfluences_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NDISkelMesh_GpuMaxInfluences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NDISkelMesh_GpuUniformSamplingFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NDISkelMesh_GpuUniformSamplingFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NDISkelMesh_AdjacencyTriangleIndexFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NDISkelMesh_AdjacencyTriangleIndexFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NDIStaticMesh_AllowDistanceFields_MetaData[];
#endif
		static void NewProp_NDIStaticMesh_AllowDistanceFields_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NDIStaticMesh_AllowDistanceFields;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NDICollisionQuery_AsyncGpuTraceProviderOrder_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NDICollisionQuery_AsyncGpuTraceProviderOrder_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NDICollisionQuery_AsyncGpuTraceProviderOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimCacheAuxiliaryFileBasePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SimCacheAuxiliaryFileBasePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimCacheMaxCPUMemoryVolumetrics_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_SimCacheMaxCPUMemoryVolumetrics;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformSetRedirects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformSetRedirects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlatformSetRedirects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Niagara" },
		{ "IncludePath", "NiagaraSettings.h" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterTypes_Inner = { "AdditionalParameterTypes", nullptr, (EPropertyFlags)0x0000000800004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterTypes_MetaData[] = {
		{ "AllowedClasses", "/Script/CoreUObject.ScriptStruct" },
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterTypes = { "AdditionalParameterTypes", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSettings, AdditionalParameterTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterTypes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalPayloadTypes_Inner = { "AdditionalPayloadTypes", nullptr, (EPropertyFlags)0x0000000800004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalPayloadTypes_MetaData[] = {
		{ "AllowedClasses", "/Script/CoreUObject.ScriptStruct" },
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalPayloadTypes = { "AdditionalPayloadTypes", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSettings, AdditionalPayloadTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalPayloadTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalPayloadTypes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterEnums_Inner = { "AdditionalParameterEnums", nullptr, (EPropertyFlags)0x0000000800004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterEnums_MetaData[] = {
		{ "AllowedClasses", "/Script/CoreUObject.Enum" },
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterEnums = { "AdditionalParameterEnums", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSettings, AdditionalParameterEnums), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterEnums_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterEnums_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemViewportInOrbitMode_MetaData[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/** Sets the default navigation behavior for the system preview viewport. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Sets the default navigation behavior for the system preview viewport." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemViewportInOrbitMode_SetBit(void* Obj)
	{
		((UNiagaraSettings*)Obj)->bSystemViewportInOrbitMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemViewportInOrbitMode = { "bSystemViewportInOrbitMode", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSettings), &Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemViewportInOrbitMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemViewportInOrbitMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemViewportInOrbitMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bShowConvertibleInputsInStack_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** If true then the \"link input\" menu will also show variables of different types, as long as there is a conversion script for them. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "If true then the \"link input\" menu will also show variables of different types, as long as there is a conversion script for them." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bShowConvertibleInputsInStack_SetBit(void* Obj)
	{
		((UNiagaraSettings*)Obj)->bShowConvertibleInputsInStack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bShowConvertibleInputsInStack = { "bShowConvertibleInputsInStack", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSettings), &Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bShowConvertibleInputsInStack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bShowConvertibleInputsInStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bShowConvertibleInputsInStack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QuickSimCacheCaptureFrameCount_MetaData[] = {
		{ "Category", "SimulationCaching" },
		{ "Comment", "/** The number of frames to capture when capturing a Sim Cache from the Niagara Component Details Panel. **/" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "The number of frames to capture when capturing a Sim Cache from the Niagara Component Details Panel. *" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QuickSimCacheCaptureFrameCount = { "QuickSimCacheCaptureFrameCount", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSettings, QuickSimCacheCaptureFrameCount), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QuickSimCacheCaptureFrameCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QuickSimCacheCaptureFrameCount_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemsSupportLargeWorldCoordinates_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** If true then active effects rebase the simulation positions to not lose precision. Can be turned off if not needed to skip unnecessary rebasing calculations. */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "If true then active effects rebase the simulation positions to not lose precision. Can be turned off if not needed to skip unnecessary rebasing calculations." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemsSupportLargeWorldCoordinates_SetBit(void* Obj)
	{
		((UNiagaraSettings*)Obj)->bSystemsSupportLargeWorldCoordinates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemsSupportLargeWorldCoordinates = { "bSystemsSupportLargeWorldCoordinates", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSettings), &Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemsSupportLargeWorldCoordinates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemsSupportLargeWorldCoordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemsSupportLargeWorldCoordinates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bEnforceStrictStackTypes_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/**\n\x09 If set to true, types like positions and vectors cannot be assigned to each other without an explicit conversion step.\n\x09 If false, type checks are loosened and some types can be implicitly converted into each other.\n\x09 It is recommended to not disable this when working with large world coordinates. */" },
		{ "DisplayName", "Enforce strict type checks in the graph" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "If set to true, types like positions and vectors cannot be assigned to each other without an explicit conversion step.\nIf false, type checks are loosened and some types can be implicitly converted into each other.\nIt is recommended to not disable this when working with large world coordinates." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bEnforceStrictStackTypes_SetBit(void* Obj)
	{
		((UNiagaraSettings*)Obj)->bEnforceStrictStackTypes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bEnforceStrictStackTypes = { "bEnforceStrictStackTypes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSettings), &Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bEnforceStrictStackTypes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bEnforceStrictStackTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bEnforceStrictStackTypes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bExperimentalVMEnabled_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/**\n\x09 True indicates that we will generate byte code for the new experimental VM.  Control over whether the new VM will\n\x09 be used when executing NiagaraScripts will also take into account the overrides on the system (bDisableExperimentalVM) and\n\x09 the cvars fx.NiagaraScript.StripByteCodeOnLoad and fx.ForceExecVMPath.\n\x09*/" },
		{ "DisplayName", "Enable building data for Experimental VM" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "True indicates that we will generate byte code for the new experimental VM.  Control over whether the new VM will\nbe used when executing NiagaraScripts will also take into account the overrides on the system (bDisableExperimentalVM) and\nthe cvars fx.NiagaraScript.StripByteCodeOnLoad and fx.ForceExecVMPath." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bExperimentalVMEnabled_SetBit(void* Obj)
	{
		((UNiagaraSettings*)Obj)->bExperimentalVMEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bExperimentalVMEnabled = { "bExperimentalVMEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSettings), &Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bExperimentalVMEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bExperimentalVMEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bExperimentalVMEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectType_MetaData[] = {
		{ "AllowedClasses", "/Script/Niagara.NiagaraEffectType" },
		{ "Category", "Niagara" },
		{ "Comment", "/** Default effect type to use for effects that don't define their own. Can be null. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Default effect type to use for effects that don't define their own. Can be null." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectType = { "DefaultEffectType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSettings, DefaultEffectType), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_PositionPinTypeColor_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Position pin type color. The other pin colors are defined in the general editor settings. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Position pin type color. The other pin colors are defined in the general editor settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_PositionPinTypeColor = { "PositionPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSettings, PositionPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_PositionPinTypeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_PositionPinTypeColor_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QualityLevels_Inner = { "QualityLevels", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QualityLevels_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** The quality levels Niagara uses. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "The quality levels Niagara uses." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QualityLevels = { "QualityLevels", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSettings, QualityLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QualityLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QualityLevels_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ComponentRendererWarningsPerClass_ValueProp = { "ComponentRendererWarningsPerClass", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ComponentRendererWarningsPerClass_Key_KeyProp = { "ComponentRendererWarningsPerClass_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ComponentRendererWarningsPerClass_MetaData[] = {
		{ "Category", "Renderer" },
		{ "Comment", "/** Info texts that the component renderer shows the user depending on the selected component class. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Info texts that the component renderer shows the user depending on the selected component class." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ComponentRendererWarningsPerClass = { "ComponentRendererWarningsPerClass", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSettings, ComponentRendererWarningsPerClass), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ComponentRendererWarningsPerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ComponentRendererWarningsPerClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRenderTargetFormat_MetaData[] = {
		{ "Category", "Renderer" },
		{ "Comment", "/** The default render target format used by all Niagara Render Target Data Interfaces unless overridden. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "The default render target format used by all Niagara Render Target Data Interfaces unless overridden." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRenderTargetFormat = { "DefaultRenderTargetFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSettings, DefaultRenderTargetFormat), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRenderTargetFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRenderTargetFormat_MetaData)) }; // 1004718673
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGridFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGridFormat_MetaData[] = {
		{ "Category", "Renderer" },
		{ "Comment", "/** The default buffer format used by all Niagara Grid Data Interfaces unless overridden. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "The default buffer format used by all Niagara Grid Data Interfaces unless overridden." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGridFormat = { "DefaultGridFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSettings, DefaultGridFormat), Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGridFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGridFormat_MetaData)) }; // 2870428067
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRendererMotionVectorSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRendererMotionVectorSetting_MetaData[] = {
		{ "Category", "Renderer" },
		{ "Comment", "/** The default setting for motion vectors in Niagara renderers */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "The default setting for motion vectors in Niagara renderers" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRendererMotionVectorSetting = { "DefaultRendererMotionVectorSetting", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSettings, DefaultRendererMotionVectorSetting), Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererMotionVectorSetting, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRendererMotionVectorSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRendererMotionVectorSetting_MetaData)) }; // 966593994
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultPixelCoverageMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultPixelCoverageMode_MetaData[] = {
		{ "Category", "Renderer" },
		{ "Comment", "/** The default setting for pixel coverage mode when automatic is set on the Niagara Renderer. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "The default setting for pixel coverage mode when automatic is set on the Niagara Renderer." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultPixelCoverageMode = { "DefaultPixelCoverageMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSettings, DefaultPixelCoverageMode), Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultPixelCoverageMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultPixelCoverageMode_MetaData)) }; // 2949914596
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultSortPrecision_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultSortPrecision_MetaData[] = {
		{ "Category", "Renderer" },
		{ "Comment", "/** The default setting for sorting precision when automatic is set on the Niagara Renderer. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "The default setting for sorting precision when automatic is set on the Niagara Renderer." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultSortPrecision = { "DefaultSortPrecision", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSettings, DefaultSortPrecision), Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultSortPrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultSortPrecision_MetaData)) }; // 350224185
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGpuTranslucentLatency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGpuTranslucentLatency_MetaData[] = {
		{ "Category", "Renderer" },
		{ "Comment", "/** The default setting for Gpu simulation translucent draw latency. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "The default setting for Gpu simulation translucent draw latency." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGpuTranslucentLatency = { "DefaultGpuTranslucentLatency", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSettings, DefaultGpuTranslucentLatency), Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGpuTranslucentLatency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGpuTranslucentLatency_MetaData)) }; // 479209870
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultLightInverseExposureBlend_MetaData[] = {
		{ "Category", "LightRenderer" },
		{ "Comment", "/** The default InverseExposureBlend used for the light renderer. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "The default InverseExposureBlend used for the light renderer." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultLightInverseExposureBlend = { "DefaultLightInverseExposureBlend", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSettings, DefaultLightInverseExposureBlend), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultLightInverseExposureBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultLightInverseExposureBlend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_GpuMaxInfluences_MetaData[] = {
		{ "Category", "SkeletalMeshDI" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Gpu Max Bone Influences" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Controls the maximum number of influences we allow the Skeletal Mesh Data Interface to use on the GPU.  Changing this setting requires restarting the editor." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_GpuMaxInfluences = { "NDISkelMesh_GpuMaxInfluences", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSettings, NDISkelMesh_GpuMaxInfluences), Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_GpuMaxInfluences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_GpuMaxInfluences_MetaData)) }; // 2102352909
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_GpuUniformSamplingFormat_MetaData[] = {
		{ "Category", "SkeletalMeshDI" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Gpu Uniform Sampling Format" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Controls the format used for uniform sampling on the GPU.  Changing this setting requires restarting the editor." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_GpuUniformSamplingFormat = { "NDISkelMesh_GpuUniformSamplingFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSettings, NDISkelMesh_GpuUniformSamplingFormat), Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_GpuUniformSamplingFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_GpuUniformSamplingFormat_MetaData)) }; // 93632270
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_AdjacencyTriangleIndexFormat_MetaData[] = {
		{ "Category", "SkeletalMeshDI" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Adjacency Triangle Index Format" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Controls the format used for specifying triangle indexes in adjacency buffers.  Changing this setting requires restarting the editor." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_AdjacencyTriangleIndexFormat = { "NDISkelMesh_AdjacencyTriangleIndexFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSettings, NDISkelMesh_AdjacencyTriangleIndexFormat), Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_AdjacencyTriangleIndexFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_AdjacencyTriangleIndexFormat_MetaData)) }; // 1971674208
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDIStaticMesh_AllowDistanceFields_MetaData[] = {
		{ "Category", "StaticMeshDI" },
		{ "Comment", "/**\n\x09When enabled the static mesh data interface is allowed to sample from the distance field data (if present) on the GPU.\n\x09""Enabling this feature will move all systems that contain static mesh samples into PostRenderOpaque tick group regardless of the features used.\n\x09""Changing this setting requires restarting the editor.\n\x09*/" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Allow Distance Fields (Experimental)" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "When enabled the static mesh data interface is allowed to sample from the distance field data (if present) on the GPU.\nEnabling this feature will move all systems that contain static mesh samples into PostRenderOpaque tick group regardless of the features used.\nChanging this setting requires restarting the editor." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDIStaticMesh_AllowDistanceFields_SetBit(void* Obj)
	{
		((UNiagaraSettings*)Obj)->NDIStaticMesh_AllowDistanceFields = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDIStaticMesh_AllowDistanceFields = { "NDIStaticMesh_AllowDistanceFields", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSettings), &Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDIStaticMesh_AllowDistanceFields_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDIStaticMesh_AllowDistanceFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDIStaticMesh_AllowDistanceFields_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDICollisionQuery_AsyncGpuTraceProviderOrder_Inner = { "NDICollisionQuery_AsyncGpuTraceProviderOrder", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider, METADATA_PARAMS(nullptr, 0) }; // 2583400824
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDICollisionQuery_AsyncGpuTraceProviderOrder_MetaData[] = {
		{ "Category", "AsyncGpuTraceDI" },
		{ "Comment", "/** \n\x09""Defines how traces tagged as 'Project Default' will be interpreted when using the AsyncGpuTrace data interface.\n\x09The system will go through (starting at element 0) to find the first provider that is available.\n\x09*/" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Trace Provider Priorities (Experimental)" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Defines how traces tagged as 'Project Default' will be interpreted when using the AsyncGpuTrace data interface.\nThe system will go through (starting at element 0) to find the first provider that is available." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDICollisionQuery_AsyncGpuTraceProviderOrder = { "NDICollisionQuery_AsyncGpuTraceProviderOrder", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSettings, NDICollisionQuery_AsyncGpuTraceProviderOrder), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDICollisionQuery_AsyncGpuTraceProviderOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDICollisionQuery_AsyncGpuTraceProviderOrder_MetaData)) }; // 2583400824
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_SimCacheAuxiliaryFileBasePath_MetaData[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/**\n\x09""Base path for auxiliary files written out during the generation of a Niagara Sim Cache (ie: volume files).\n\x09*/" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "DisplayName", "Sim Cache Auxiliary File Base Path" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Base path for auxiliary files written out during the generation of a Niagara Sim Cache (ie: volume files)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_SimCacheAuxiliaryFileBasePath = { "SimCacheAuxiliaryFileBasePath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSettings, SimCacheAuxiliaryFileBasePath), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_SimCacheAuxiliaryFileBasePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_SimCacheAuxiliaryFileBasePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_SimCacheMaxCPUMemoryVolumetrics_MetaData[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/**\n\x09Max memory in megabytes for total CPU memory for cached volumetric data\n\x09*/" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "DisplayName", "Sim Cache Max CPU Memory For Volumetrics" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Max memory in megabytes for total CPU memory for cached volumetric data" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_SimCacheMaxCPUMemoryVolumetrics = { "SimCacheMaxCPUMemoryVolumetrics", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSettings, SimCacheMaxCPUMemoryVolumetrics), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_SimCacheMaxCPUMemoryVolumetrics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_SimCacheMaxCPUMemoryVolumetrics_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_PlatformSetRedirects_Inner = { "PlatformSetRedirects", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect, METADATA_PARAMS(nullptr, 0) }; // 1639586480
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_PlatformSetRedirects_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_PlatformSetRedirects = { "PlatformSetRedirects", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSettings, PlatformSetRedirects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_PlatformSetRedirects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_PlatformSetRedirects_MetaData)) }; // 1639586480
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraSettings_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalPayloadTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalPayloadTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterEnums_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterEnums,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemViewportInOrbitMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bShowConvertibleInputsInStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QuickSimCacheCaptureFrameCount,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemsSupportLargeWorldCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bEnforceStrictStackTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bExperimentalVMEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_PositionPinTypeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QualityLevels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QualityLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ComponentRendererWarningsPerClass_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ComponentRendererWarningsPerClass_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ComponentRendererWarningsPerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRenderTargetFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGridFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGridFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRendererMotionVectorSetting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRendererMotionVectorSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultPixelCoverageMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultPixelCoverageMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultSortPrecision_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultSortPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGpuTranslucentLatency_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGpuTranslucentLatency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultLightInverseExposureBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_GpuMaxInfluences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_GpuUniformSamplingFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_AdjacencyTriangleIndexFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDIStaticMesh_AllowDistanceFields,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDICollisionQuery_AsyncGpuTraceProviderOrder_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDICollisionQuery_AsyncGpuTraceProviderOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_SimCacheAuxiliaryFileBasePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_SimCacheMaxCPUMemoryVolumetrics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_PlatformSetRedirects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_PlatformSetRedirects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSettings_Statics::ClassParams = {
		&UNiagaraSettings::StaticClass,
		"Niagara",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraSettings()
	{
		if (!Z_Registration_Info_UClass_UNiagaraSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSettings.OuterSingleton, Z_Construct_UClass_UNiagaraSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraSettings.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraSettings>()
	{
		return UNiagaraSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSettings);
	UNiagaraSettings::~UNiagaraSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_Statics::EnumInfo[] = {
		{ ENDISkelMesh_GpuMaxInfluences_StaticEnum, TEXT("ENDISkelMesh_GpuMaxInfluences"), &Z_Registration_Info_UEnum_ENDISkelMesh_GpuMaxInfluences, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2102352909U) },
		{ ENDISkelMesh_GpuUniformSamplingFormat_StaticEnum, TEXT("ENDISkelMesh_GpuUniformSamplingFormat"), &Z_Registration_Info_UEnum_ENDISkelMesh_GpuUniformSamplingFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 93632270U) },
		{ ENDISkelMesh_AdjacencyTriangleIndexFormat_StaticEnum, TEXT("ENDISkelMesh_AdjacencyTriangleIndexFormat"), &Z_Registration_Info_UEnum_ENDISkelMesh_AdjacencyTriangleIndexFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1971674208U) },
		{ ENiagaraDefaultRendererPixelCoverageMode_StaticEnum, TEXT("ENiagaraDefaultRendererPixelCoverageMode"), &Z_Registration_Info_UEnum_ENiagaraDefaultRendererPixelCoverageMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2949914596U) },
		{ ENiagaraDefaultSortPrecision_StaticEnum, TEXT("ENiagaraDefaultSortPrecision"), &Z_Registration_Info_UEnum_ENiagaraDefaultSortPrecision, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 350224185U) },
		{ ENiagaraDefaultGpuTranslucentLatency_StaticEnum, TEXT("ENiagaraDefaultGpuTranslucentLatency"), &Z_Registration_Info_UEnum_ENiagaraDefaultGpuTranslucentLatency, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 479209870U) },
		{ ENDICollisionQuery_AsyncGpuTraceProvider_StaticEnum, TEXT("ENDICollisionQuery_AsyncGpuTraceProvider"), &Z_Registration_Info_UEnum_ENDICollisionQuery_AsyncGpuTraceProvider, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2583400824U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraSettings, UNiagaraSettings::StaticClass, TEXT("UNiagaraSettings"), &Z_Registration_Info_UClass_UNiagaraSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSettings), 3462163799U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_2013312524(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
