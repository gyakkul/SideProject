// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraGenerateMips.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraGenerateMips() {}
// Cross Module References
	NIAGARASHADER_API UEnum* Z_Construct_UEnum_NiagaraShader_ENiagaraMipMapGenerationType();
	UPackage* Z_Construct_UPackage__Script_NiagaraShader();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraMipMapGenerationType;
	static UEnum* ENiagaraMipMapGenerationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraMipMapGenerationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraMipMapGenerationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraShader_ENiagaraMipMapGenerationType, (UObject*)Z_Construct_UPackage__Script_NiagaraShader(), TEXT("ENiagaraMipMapGenerationType"));
		}
		return Z_Registration_Info_UEnum_ENiagaraMipMapGenerationType.OuterSingleton;
	}
	template<> NIAGARASHADER_API UEnum* StaticEnum<ENiagaraMipMapGenerationType>()
	{
		return ENiagaraMipMapGenerationType_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraShader_ENiagaraMipMapGenerationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraShader_ENiagaraMipMapGenerationType_Statics::Enumerators[] = {
		{ "ENiagaraMipMapGenerationType::Unfiltered", (int64)ENiagaraMipMapGenerationType::Unfiltered },
		{ "ENiagaraMipMapGenerationType::Linear", (int64)ENiagaraMipMapGenerationType::Linear },
		{ "ENiagaraMipMapGenerationType::Blur1", (int64)ENiagaraMipMapGenerationType::Blur1 },
		{ "ENiagaraMipMapGenerationType::Blur2", (int64)ENiagaraMipMapGenerationType::Blur2 },
		{ "ENiagaraMipMapGenerationType::Blur3", (int64)ENiagaraMipMapGenerationType::Blur3 },
		{ "ENiagaraMipMapGenerationType::Blur4", (int64)ENiagaraMipMapGenerationType::Blur4 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraShader_ENiagaraMipMapGenerationType_Statics::Enum_MetaDataParams[] = {
		{ "Blur1.Comment", "/** A blur filter across a 3x3 (or 3x3x3) region of texels. */" },
		{ "Blur1.DisplayName", "Gaussian 3 texel filter" },
		{ "Blur1.Name", "ENiagaraMipMapGenerationType::Blur1" },
		{ "Blur1.ToolTip", "A blur filter across a 3x3 (or 3x3x3) region of texels." },
		{ "Blur2.Comment", "/** A blur filter across a 5x5 (or 5x5x5) region of texels. */" },
		{ "Blur2.DisplayName", "Gaussian 5 texel filter" },
		{ "Blur2.Name", "ENiagaraMipMapGenerationType::Blur2" },
		{ "Blur2.ToolTip", "A blur filter across a 5x5 (or 5x5x5) region of texels." },
		{ "Blur3.Comment", "/** A blur filter across a 7x7 (or 7x7x7) region of texels. */" },
		{ "Blur3.DisplayName", "Gaussian 7 texel filter" },
		{ "Blur3.Name", "ENiagaraMipMapGenerationType::Blur3" },
		{ "Blur3.ToolTip", "A blur filter across a 7x7 (or 7x7x7) region of texels." },
		{ "Blur4.Comment", "/** A blur filter across a 9x9 (or 9x9x9) region of texels. */" },
		{ "Blur4.DisplayName", "Gaussian 9 texel filter" },
		{ "Blur4.Name", "ENiagaraMipMapGenerationType::Blur4" },
		{ "Blur4.ToolTip", "A blur filter across a 9x9 (or 9x9x9) region of texels." },
		{ "Linear.Comment", "/** Linear blending is performed between a 2x2 (or 2x2x2) region of texels, aka Bilinear / Trilinear. */" },
		{ "Linear.Name", "ENiagaraMipMapGenerationType::Linear" },
		{ "Linear.ToolTip", "Linear blending is performed between a 2x2 (or 2x2x2) region of texels, aka Bilinear / Trilinear." },
		{ "ModuleRelativePath", "Public/NiagaraGenerateMips.h" },
		{ "Unfiltered.Comment", "/** Result is taken from whatever texel the sample lies on, aka Point Sampling. */" },
		{ "Unfiltered.Name", "ENiagaraMipMapGenerationType::Unfiltered" },
		{ "Unfiltered.ToolTip", "Result is taken from whatever texel the sample lies on, aka Point Sampling." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraShader_ENiagaraMipMapGenerationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraShader,
		nullptr,
		"ENiagaraMipMapGenerationType",
		"ENiagaraMipMapGenerationType",
		Z_Construct_UEnum_NiagaraShader_ENiagaraMipMapGenerationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraShader_ENiagaraMipMapGenerationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NiagaraShader_ENiagaraMipMapGenerationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraShader_ENiagaraMipMapGenerationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NiagaraShader_ENiagaraMipMapGenerationType()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraMipMapGenerationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraMipMapGenerationType.InnerSingleton, Z_Construct_UEnum_NiagaraShader_ENiagaraMipMapGenerationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraMipMapGenerationType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraGenerateMips_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraGenerateMips_h_Statics::EnumInfo[] = {
		{ ENiagaraMipMapGenerationType_StaticEnum, TEXT("ENiagaraMipMapGenerationType"), &Z_Registration_Info_UEnum_ENiagaraMipMapGenerationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4124762644U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraGenerateMips_h_574318084(TEXT("/Script/NiagaraShader"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraGenerateMips_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraGenerateMips_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
