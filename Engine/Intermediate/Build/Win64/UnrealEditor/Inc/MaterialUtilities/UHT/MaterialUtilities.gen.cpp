// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialUtilities() {}
// Cross Module References
	MATERIALUTILITIES_API UEnum* Z_Construct_UEnum_MaterialUtilities_EFlattenMaterialProperties();
	UPackage* Z_Construct_UPackage__Script_MaterialUtilities();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFlattenMaterialProperties;
	static UEnum* EFlattenMaterialProperties_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFlattenMaterialProperties.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFlattenMaterialProperties.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MaterialUtilities_EFlattenMaterialProperties, (UObject*)Z_Construct_UPackage__Script_MaterialUtilities(), TEXT("EFlattenMaterialProperties"));
		}
		return Z_Registration_Info_UEnum_EFlattenMaterialProperties.OuterSingleton;
	}
	template<> MATERIALUTILITIES_API UEnum* StaticEnum<EFlattenMaterialProperties>()
	{
		return EFlattenMaterialProperties_StaticEnum();
	}
	struct Z_Construct_UEnum_MaterialUtilities_EFlattenMaterialProperties_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MaterialUtilities_EFlattenMaterialProperties_Statics::Enumerators[] = {
		{ "EFlattenMaterialProperties::Diffuse", (int64)EFlattenMaterialProperties::Diffuse },
		{ "EFlattenMaterialProperties::Metallic", (int64)EFlattenMaterialProperties::Metallic },
		{ "EFlattenMaterialProperties::Specular", (int64)EFlattenMaterialProperties::Specular },
		{ "EFlattenMaterialProperties::Roughness", (int64)EFlattenMaterialProperties::Roughness },
		{ "EFlattenMaterialProperties::Anisotropy", (int64)EFlattenMaterialProperties::Anisotropy },
		{ "EFlattenMaterialProperties::Normal", (int64)EFlattenMaterialProperties::Normal },
		{ "EFlattenMaterialProperties::Tangent", (int64)EFlattenMaterialProperties::Tangent },
		{ "EFlattenMaterialProperties::Opacity", (int64)EFlattenMaterialProperties::Opacity },
		{ "EFlattenMaterialProperties::Emissive", (int64)EFlattenMaterialProperties::Emissive },
		{ "EFlattenMaterialProperties::SubSurface", (int64)EFlattenMaterialProperties::SubSurface },
		{ "EFlattenMaterialProperties::OpacityMask", (int64)EFlattenMaterialProperties::OpacityMask },
		{ "EFlattenMaterialProperties::AmbientOcclusion", (int64)EFlattenMaterialProperties::AmbientOcclusion },
		{ "EFlattenMaterialProperties::NumFlattenMaterialProperties", (int64)EFlattenMaterialProperties::NumFlattenMaterialProperties },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MaterialUtilities_EFlattenMaterialProperties_Statics::Enum_MetaDataParams[] = {
		{ "AmbientOcclusion.Name", "EFlattenMaterialProperties::AmbientOcclusion" },
		{ "Anisotropy.Name", "EFlattenMaterialProperties::Anisotropy" },
		{ "Comment", "/* TODO replace this with rendering property enum when extending the system */" },
		{ "Diffuse.Name", "EFlattenMaterialProperties::Diffuse" },
		{ "Emissive.Name", "EFlattenMaterialProperties::Emissive" },
		{ "Metallic.Name", "EFlattenMaterialProperties::Metallic" },
		{ "ModuleRelativePath", "Public/MaterialUtilities.h" },
		{ "Normal.Name", "EFlattenMaterialProperties::Normal" },
		{ "NumFlattenMaterialProperties.Name", "EFlattenMaterialProperties::NumFlattenMaterialProperties" },
		{ "Opacity.Name", "EFlattenMaterialProperties::Opacity" },
		{ "OpacityMask.Name", "EFlattenMaterialProperties::OpacityMask" },
		{ "Roughness.Name", "EFlattenMaterialProperties::Roughness" },
		{ "Specular.Name", "EFlattenMaterialProperties::Specular" },
		{ "SubSurface.Name", "EFlattenMaterialProperties::SubSurface" },
		{ "Tangent.Name", "EFlattenMaterialProperties::Tangent" },
		{ "ToolTip", "TODO replace this with rendering property enum when extending the system" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MaterialUtilities_EFlattenMaterialProperties_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MaterialUtilities,
		nullptr,
		"EFlattenMaterialProperties",
		"EFlattenMaterialProperties",
		Z_Construct_UEnum_MaterialUtilities_EFlattenMaterialProperties_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MaterialUtilities_EFlattenMaterialProperties_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MaterialUtilities_EFlattenMaterialProperties_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MaterialUtilities_EFlattenMaterialProperties_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MaterialUtilities_EFlattenMaterialProperties()
	{
		if (!Z_Registration_Info_UEnum_EFlattenMaterialProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFlattenMaterialProperties.InnerSingleton, Z_Construct_UEnum_MaterialUtilities_EFlattenMaterialProperties_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFlattenMaterialProperties.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_MaterialUtilities_Public_MaterialUtilities_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_MaterialUtilities_Public_MaterialUtilities_h_Statics::EnumInfo[] = {
		{ EFlattenMaterialProperties_StaticEnum, TEXT("EFlattenMaterialProperties"), &Z_Registration_Info_UEnum_EFlattenMaterialProperties, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2690631551U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_MaterialUtilities_Public_MaterialUtilities_h_4213374483(TEXT("/Script/MaterialUtilities"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_MaterialUtilities_Public_MaterialUtilities_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_MaterialUtilities_Public_MaterialUtilities_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
