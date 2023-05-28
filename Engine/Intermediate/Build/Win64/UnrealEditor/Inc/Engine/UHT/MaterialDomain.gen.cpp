// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/MaterialDomain.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialDomain() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialDomain();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialDomain;
	static UEnum* EMaterialDomain_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMaterialDomain.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMaterialDomain.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialDomain, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialDomain"));
		}
		return Z_Registration_Info_UEnum_EMaterialDomain.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMaterialDomain>()
	{
		return EMaterialDomain_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMaterialDomain_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMaterialDomain_Statics::Enumerators[] = {
		{ "MD_Surface", (int64)MD_Surface },
		{ "MD_DeferredDecal", (int64)MD_DeferredDecal },
		{ "MD_LightFunction", (int64)MD_LightFunction },
		{ "MD_Volume", (int64)MD_Volume },
		{ "MD_PostProcess", (int64)MD_PostProcess },
		{ "MD_UI", (int64)MD_UI },
		{ "MD_RuntimeVirtualTexture", (int64)MD_RuntimeVirtualTexture },
		{ "MD_MAX", (int64)MD_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMaterialDomain_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines the domain of a material. */" },
		{ "MD_DeferredDecal.Comment", "/** The material's attributes describe a deferred decal, and will be mapped onto the decal's frustum. */" },
		{ "MD_DeferredDecal.DisplayName", "Deferred Decal" },
		{ "MD_DeferredDecal.Name", "MD_DeferredDecal" },
		{ "MD_DeferredDecal.ToolTip", "The material's attributes describe a deferred decal, and will be mapped onto the decal's frustum." },
		{ "MD_LightFunction.Comment", "/** The material's attributes describe a light's distribution. */" },
		{ "MD_LightFunction.DisplayName", "Light Function" },
		{ "MD_LightFunction.Name", "MD_LightFunction" },
		{ "MD_LightFunction.ToolTip", "The material's attributes describe a light's distribution." },
		{ "MD_MAX.Name", "MD_MAX" },
		{ "MD_PostProcess.Comment", "/** The material will be used in a custom post process pass. */" },
		{ "MD_PostProcess.DisplayName", "Post Process" },
		{ "MD_PostProcess.Name", "MD_PostProcess" },
		{ "MD_PostProcess.ToolTip", "The material will be used in a custom post process pass." },
		{ "MD_RuntimeVirtualTexture.Comment", "/** The material will be used for runtime virtual texture (Deprecated). */" },
		{ "MD_RuntimeVirtualTexture.Hidden", "" },
		{ "MD_RuntimeVirtualTexture.Name", "MD_RuntimeVirtualTexture" },
		{ "MD_RuntimeVirtualTexture.ToolTip", "The material will be used for runtime virtual texture (Deprecated)." },
		{ "MD_Surface.Comment", "/** The material's attributes describe a 3d surface. */" },
		{ "MD_Surface.DisplayName", "Surface" },
		{ "MD_Surface.Name", "MD_Surface" },
		{ "MD_Surface.ToolTip", "The material's attributes describe a 3d surface." },
		{ "MD_UI.Comment", "/** The material will be used for UMG or Slate UI */" },
		{ "MD_UI.DisplayName", "User Interface" },
		{ "MD_UI.Name", "MD_UI" },
		{ "MD_UI.ToolTip", "The material will be used for UMG or Slate UI" },
		{ "MD_Volume.Comment", "/** The material's attributes describe a 3d volume. */" },
		{ "MD_Volume.DisplayName", "Volume" },
		{ "MD_Volume.Name", "MD_Volume" },
		{ "MD_Volume.ToolTip", "The material's attributes describe a 3d volume." },
		{ "ModuleRelativePath", "Public/MaterialDomain.h" },
		{ "ToolTip", "Defines the domain of a material." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMaterialDomain_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMaterialDomain",
		"EMaterialDomain",
		Z_Construct_UEnum_Engine_EMaterialDomain_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialDomain_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMaterialDomain_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialDomain_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMaterialDomain()
	{
		if (!Z_Registration_Info_UEnum_EMaterialDomain.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialDomain.InnerSingleton, Z_Construct_UEnum_Engine_EMaterialDomain_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMaterialDomain.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialDomain_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialDomain_h_Statics::EnumInfo[] = {
		{ EMaterialDomain_StaticEnum, TEXT("EMaterialDomain"), &Z_Registration_Info_UEnum_EMaterialDomain, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2598528090U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialDomain_h_565754056(TEXT("/Script/Engine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialDomain_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialDomain_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
