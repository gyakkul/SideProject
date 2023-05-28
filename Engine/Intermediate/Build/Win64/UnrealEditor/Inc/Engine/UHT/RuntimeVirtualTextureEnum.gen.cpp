// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeVirtualTextureEnum() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMaterialType();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERuntimeVirtualTextureMaterialType;
	static UEnum* ERuntimeVirtualTextureMaterialType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERuntimeVirtualTextureMaterialType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERuntimeVirtualTextureMaterialType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMaterialType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ERuntimeVirtualTextureMaterialType"));
		}
		return Z_Registration_Info_UEnum_ERuntimeVirtualTextureMaterialType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERuntimeVirtualTextureMaterialType>()
	{
		return ERuntimeVirtualTextureMaterialType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMaterialType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMaterialType_Statics::Enumerators[] = {
		{ "ERuntimeVirtualTextureMaterialType::BaseColor", (int64)ERuntimeVirtualTextureMaterialType::BaseColor },
		{ "ERuntimeVirtualTextureMaterialType::BaseColor_Normal_DEPRECATED", (int64)ERuntimeVirtualTextureMaterialType::BaseColor_Normal_DEPRECATED },
		{ "ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Roughness", (int64)ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Roughness },
		{ "ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular", (int64)ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular },
		{ "ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular_YCoCg", (int64)ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular_YCoCg },
		{ "ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular_Mask_YCoCg", (int64)ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular_Mask_YCoCg },
		{ "ERuntimeVirtualTextureMaterialType::WorldHeight", (int64)ERuntimeVirtualTextureMaterialType::WorldHeight },
		{ "ERuntimeVirtualTextureMaterialType::Count", (int64)ERuntimeVirtualTextureMaterialType::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMaterialType_Statics::Enum_MetaDataParams[] = {
		{ "BaseColor.DisplayName", "Base Color" },
		{ "BaseColor.Name", "ERuntimeVirtualTextureMaterialType::BaseColor" },
		{ "BaseColor_Normal_DEPRECATED.Hidden", "" },
		{ "BaseColor_Normal_DEPRECATED.Name", "ERuntimeVirtualTextureMaterialType::BaseColor_Normal_DEPRECATED" },
		{ "BaseColor_Normal_Roughness.DisplayName", "Base Color, Normal, Roughness" },
		{ "BaseColor_Normal_Roughness.Name", "ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Roughness" },
		{ "BaseColor_Normal_Roughness.ToolTip", "Local space Normal. Requires less memory than 'Base Color, Normal, Roughness, Specular'. Supports LQ compression." },
		{ "BaseColor_Normal_Specular.DisplayName", "Base Color, Normal, Roughness, Specular" },
		{ "BaseColor_Normal_Specular.Name", "ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular" },
		{ "BaseColor_Normal_Specular_Mask_YCoCg.DisplayName", "YCoCg Base Color, Normal, Roughness, Specular, Mask" },
		{ "BaseColor_Normal_Specular_Mask_YCoCg.Name", "ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular_Mask_YCoCg" },
		{ "BaseColor_Normal_Specular_Mask_YCoCg.ToolTip", "Base Color is stored in YCoCg space. This requires more memory but may provide better quality." },
		{ "BaseColor_Normal_Specular_YCoCg.DisplayName", "YCoCg Base Color, Normal, Roughness, Specular" },
		{ "BaseColor_Normal_Specular_YCoCg.Name", "ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular_YCoCg" },
		{ "BaseColor_Normal_Specular_YCoCg.ToolTip", "Base Color is stored in YCoCg space. This requires more memory but may provide better quality." },
		{ "Comment", "/** \n * Enumeration of virtual texture stack layouts to support. \n * Extend this enumeration with other layouts as required. For example we will probably want to add a displacement texture option.\n * This \"fixed function\" approach will probably break down if we end up needing to support some complex set of attribute combinations but it is OK to begin with.\n */" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ERuntimeVirtualTextureMaterialType::Count" },
		{ "ModuleRelativePath", "Public/VT/RuntimeVirtualTextureEnum.h" },
		{ "ToolTip", "Enumeration of virtual texture stack layouts to support.\nExtend this enumeration with other layouts as required. For example we will probably want to add a displacement texture option.\nThis \"fixed function\" approach will probably break down if we end up needing to support some complex set of attribute combinations but it is OK to begin with." },
		{ "WorldHeight.DisplayName", "World Height" },
		{ "WorldHeight.Name", "ERuntimeVirtualTextureMaterialType::WorldHeight" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMaterialType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ERuntimeVirtualTextureMaterialType",
		"ERuntimeVirtualTextureMaterialType",
		Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMaterialType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMaterialType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMaterialType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMaterialType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMaterialType()
	{
		if (!Z_Registration_Info_UEnum_ERuntimeVirtualTextureMaterialType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERuntimeVirtualTextureMaterialType.InnerSingleton, Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMaterialType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERuntimeVirtualTextureMaterialType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERuntimeVirtualTextureMainPassType;
	static UEnum* ERuntimeVirtualTextureMainPassType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERuntimeVirtualTextureMainPassType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERuntimeVirtualTextureMainPassType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ERuntimeVirtualTextureMainPassType"));
		}
		return Z_Registration_Info_UEnum_ERuntimeVirtualTextureMainPassType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERuntimeVirtualTextureMainPassType>()
	{
		return ERuntimeVirtualTextureMainPassType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType_Statics::Enumerators[] = {
		{ "ERuntimeVirtualTextureMainPassType::Never", (int64)ERuntimeVirtualTextureMainPassType::Never },
		{ "ERuntimeVirtualTextureMainPassType::Exclusive", (int64)ERuntimeVirtualTextureMainPassType::Exclusive },
		{ "ERuntimeVirtualTextureMainPassType::Always", (int64)ERuntimeVirtualTextureMainPassType::Always },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType_Statics::Enum_MetaDataParams[] = {
		{ "Always.Comment", "/** \n\x09 * Always render to the main pass. \n\x09 * Use this for items that both read from and write to a Runtime Virtual Texture.\n\x09 */" },
		{ "Always.DisplayName", "Always" },
		{ "Always.Name", "ERuntimeVirtualTextureMainPassType::Always" },
		{ "Always.ToolTip", "Always render to the main pass.\nUse this for items that both read from and write to a Runtime Virtual Texture." },
		{ "Comment", "/** Enumeration of main pass behaviors when rendering to a runtime virtual texture. */" },
		{ "Exclusive.Comment", "/** \n\x09 * Render to the main pass if no associated Runtime Virtual Texture Volumes are set to 'Hide Primitives'.\n\x09 * This will render to the main pass if there is no matching Runtime Virtual Texture Volume placed in the scene. \n\x09 */" },
		{ "Exclusive.DisplayName", "From Virtual Texture" },
		{ "Exclusive.Name", "ERuntimeVirtualTextureMainPassType::Exclusive" },
		{ "Exclusive.ToolTip", "Render to the main pass if no associated Runtime Virtual Texture Volumes are set to 'Hide Primitives'.\nThis will render to the main pass if there is no matching Runtime Virtual Texture Volume placed in the scene." },
		{ "ModuleRelativePath", "Public/VT/RuntimeVirtualTextureEnum.h" },
		{ "Never.Comment", "/** \n\x09 * Never render to the main pass. \n\x09 * Use this for primitives that only render to Runtime Virtual Texture and can be missing if there is no virtual texture support. \n\x09 */" },
		{ "Never.DisplayName", "Never" },
		{ "Never.Name", "ERuntimeVirtualTextureMainPassType::Never" },
		{ "Never.ToolTip", "Never render to the main pass.\nUse this for primitives that only render to Runtime Virtual Texture and can be missing if there is no virtual texture support." },
		{ "ToolTip", "Enumeration of main pass behaviors when rendering to a runtime virtual texture." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ERuntimeVirtualTextureMainPassType",
		"ERuntimeVirtualTextureMainPassType",
		Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType()
	{
		if (!Z_Registration_Info_UEnum_ERuntimeVirtualTextureMainPassType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERuntimeVirtualTextureMainPassType.InnerSingleton, Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERuntimeVirtualTextureMainPassType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_VT_RuntimeVirtualTextureEnum_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_VT_RuntimeVirtualTextureEnum_h_Statics::EnumInfo[] = {
		{ ERuntimeVirtualTextureMaterialType_StaticEnum, TEXT("ERuntimeVirtualTextureMaterialType"), &Z_Registration_Info_UEnum_ERuntimeVirtualTextureMaterialType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 993014544U) },
		{ ERuntimeVirtualTextureMainPassType_StaticEnum, TEXT("ERuntimeVirtualTextureMainPassType"), &Z_Registration_Info_UEnum_ERuntimeVirtualTextureMainPassType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 439338851U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_VT_RuntimeVirtualTextureEnum_h_2738159157(TEXT("/Script/Engine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_VT_RuntimeVirtualTextureEnum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_VT_RuntimeVirtualTextureEnum_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
