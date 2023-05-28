// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TextureDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureDefines() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECompositeTextureMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureChromaticAdaptationMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureClass();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureColorSpace();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureCompressionQuality();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureDownscaleOptions();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureEncodeSpeed();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureMipCount();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureMipLoadOptions();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETexturePowerOfTwoSetting();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureSamplerFilter();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureSourceCompressionFormat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureSourceEncoding();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureSourceFormat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureCompressionSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureCookPlatformTilingSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureGroup();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureMipGenSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_TextureGroup;
	static UEnum* TextureGroup_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_TextureGroup.OuterSingleton)
		{
			Z_Registration_Info_UEnum_TextureGroup.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_TextureGroup, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TextureGroup"));
		}
		return Z_Registration_Info_UEnum_TextureGroup.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<TextureGroup>()
	{
		return TextureGroup_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_TextureGroup_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_TextureGroup_Statics::Enumerators[] = {
		{ "TEXTUREGROUP_World", (int64)TEXTUREGROUP_World },
		{ "TEXTUREGROUP_WorldNormalMap", (int64)TEXTUREGROUP_WorldNormalMap },
		{ "TEXTUREGROUP_WorldSpecular", (int64)TEXTUREGROUP_WorldSpecular },
		{ "TEXTUREGROUP_Character", (int64)TEXTUREGROUP_Character },
		{ "TEXTUREGROUP_CharacterNormalMap", (int64)TEXTUREGROUP_CharacterNormalMap },
		{ "TEXTUREGROUP_CharacterSpecular", (int64)TEXTUREGROUP_CharacterSpecular },
		{ "TEXTUREGROUP_Weapon", (int64)TEXTUREGROUP_Weapon },
		{ "TEXTUREGROUP_WeaponNormalMap", (int64)TEXTUREGROUP_WeaponNormalMap },
		{ "TEXTUREGROUP_WeaponSpecular", (int64)TEXTUREGROUP_WeaponSpecular },
		{ "TEXTUREGROUP_Vehicle", (int64)TEXTUREGROUP_Vehicle },
		{ "TEXTUREGROUP_VehicleNormalMap", (int64)TEXTUREGROUP_VehicleNormalMap },
		{ "TEXTUREGROUP_VehicleSpecular", (int64)TEXTUREGROUP_VehicleSpecular },
		{ "TEXTUREGROUP_Cinematic", (int64)TEXTUREGROUP_Cinematic },
		{ "TEXTUREGROUP_Effects", (int64)TEXTUREGROUP_Effects },
		{ "TEXTUREGROUP_EffectsNotFiltered", (int64)TEXTUREGROUP_EffectsNotFiltered },
		{ "TEXTUREGROUP_Skybox", (int64)TEXTUREGROUP_Skybox },
		{ "TEXTUREGROUP_UI", (int64)TEXTUREGROUP_UI },
		{ "TEXTUREGROUP_Lightmap", (int64)TEXTUREGROUP_Lightmap },
		{ "TEXTUREGROUP_RenderTarget", (int64)TEXTUREGROUP_RenderTarget },
		{ "TEXTUREGROUP_MobileFlattened", (int64)TEXTUREGROUP_MobileFlattened },
		{ "TEXTUREGROUP_ProcBuilding_Face", (int64)TEXTUREGROUP_ProcBuilding_Face },
		{ "TEXTUREGROUP_ProcBuilding_LightMap", (int64)TEXTUREGROUP_ProcBuilding_LightMap },
		{ "TEXTUREGROUP_Shadowmap", (int64)TEXTUREGROUP_Shadowmap },
		{ "TEXTUREGROUP_ColorLookupTable", (int64)TEXTUREGROUP_ColorLookupTable },
		{ "TEXTUREGROUP_Terrain_Heightmap", (int64)TEXTUREGROUP_Terrain_Heightmap },
		{ "TEXTUREGROUP_Terrain_Weightmap", (int64)TEXTUREGROUP_Terrain_Weightmap },
		{ "TEXTUREGROUP_Bokeh", (int64)TEXTUREGROUP_Bokeh },
		{ "TEXTUREGROUP_IESLightProfile", (int64)TEXTUREGROUP_IESLightProfile },
		{ "TEXTUREGROUP_Pixels2D", (int64)TEXTUREGROUP_Pixels2D },
		{ "TEXTUREGROUP_HierarchicalLOD", (int64)TEXTUREGROUP_HierarchicalLOD },
		{ "TEXTUREGROUP_Impostor", (int64)TEXTUREGROUP_Impostor },
		{ "TEXTUREGROUP_ImpostorNormalDepth", (int64)TEXTUREGROUP_ImpostorNormalDepth },
		{ "TEXTUREGROUP_8BitData", (int64)TEXTUREGROUP_8BitData },
		{ "TEXTUREGROUP_16BitData", (int64)TEXTUREGROUP_16BitData },
		{ "TEXTUREGROUP_Project01", (int64)TEXTUREGROUP_Project01 },
		{ "TEXTUREGROUP_Project02", (int64)TEXTUREGROUP_Project02 },
		{ "TEXTUREGROUP_Project03", (int64)TEXTUREGROUP_Project03 },
		{ "TEXTUREGROUP_Project04", (int64)TEXTUREGROUP_Project04 },
		{ "TEXTUREGROUP_Project05", (int64)TEXTUREGROUP_Project05 },
		{ "TEXTUREGROUP_Project06", (int64)TEXTUREGROUP_Project06 },
		{ "TEXTUREGROUP_Project07", (int64)TEXTUREGROUP_Project07 },
		{ "TEXTUREGROUP_Project08", (int64)TEXTUREGROUP_Project08 },
		{ "TEXTUREGROUP_Project09", (int64)TEXTUREGROUP_Project09 },
		{ "TEXTUREGROUP_Project10", (int64)TEXTUREGROUP_Project10 },
		{ "TEXTUREGROUP_Project11", (int64)TEXTUREGROUP_Project11 },
		{ "TEXTUREGROUP_Project12", (int64)TEXTUREGROUP_Project12 },
		{ "TEXTUREGROUP_Project13", (int64)TEXTUREGROUP_Project13 },
		{ "TEXTUREGROUP_Project14", (int64)TEXTUREGROUP_Project14 },
		{ "TEXTUREGROUP_Project15", (int64)TEXTUREGROUP_Project15 },
		{ "TEXTUREGROUP_Project16", (int64)TEXTUREGROUP_Project16 },
		{ "TEXTUREGROUP_Project17", (int64)TEXTUREGROUP_Project17 },
		{ "TEXTUREGROUP_Project18", (int64)TEXTUREGROUP_Project18 },
		{ "TEXTUREGROUP_MAX", (int64)TEXTUREGROUP_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_TextureGroup_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * @warning: if this is changed:\n *     update BaseEngine.ini [SystemSettings]\n *     you might have to update the update Game's DefaultEngine.ini [SystemSettings]\n *     order and actual name can never change (order is important!)\n *\n * TEXTUREGROUP_Cinematic: should be used for Cinematics which will be baked out\n *                         and want to have the highest settings\n */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureDefines.h" },
		{ "TEXTUREGROUP_16BitData.Comment", "/** 16 bit data stored in textures */" },
		{ "TEXTUREGROUP_16BitData.DisplayName", "ini:16 Bit Data" },
		{ "TEXTUREGROUP_16BitData.Name", "TEXTUREGROUP_16BitData" },
		{ "TEXTUREGROUP_16BitData.ToolTip", "16 bit data stored in textures" },
		{ "TEXTUREGROUP_8BitData.Comment", "/** 8 bit data stored in textures */" },
		{ "TEXTUREGROUP_8BitData.DisplayName", "ini:8 Bit Data" },
		{ "TEXTUREGROUP_8BitData.Name", "TEXTUREGROUP_8BitData" },
		{ "TEXTUREGROUP_8BitData.ToolTip", "8 bit data stored in textures" },
		{ "TEXTUREGROUP_Bokeh.Comment", "/** Using this TextureGroup triggers special mip map generation code only useful for the BokehDOF post process. */" },
		{ "TEXTUREGROUP_Bokeh.DisplayName", "ini:Bokeh" },
		{ "TEXTUREGROUP_Bokeh.Name", "TEXTUREGROUP_Bokeh" },
		{ "TEXTUREGROUP_Bokeh.ToolTip", "Using this TextureGroup triggers special mip map generation code only useful for the BokehDOF post process." },
		{ "TEXTUREGROUP_Character.DisplayName", "ini:Character" },
		{ "TEXTUREGROUP_Character.Name", "TEXTUREGROUP_Character" },
		{ "TEXTUREGROUP_CharacterNormalMap.DisplayName", "ini:CharacterNormalMap" },
		{ "TEXTUREGROUP_CharacterNormalMap.Name", "TEXTUREGROUP_CharacterNormalMap" },
		{ "TEXTUREGROUP_CharacterSpecular.DisplayName", "ini:CharacterSpecular" },
		{ "TEXTUREGROUP_CharacterSpecular.Name", "TEXTUREGROUP_CharacterSpecular" },
		{ "TEXTUREGROUP_Cinematic.DisplayName", "ini:Cinematic" },
		{ "TEXTUREGROUP_Cinematic.Name", "TEXTUREGROUP_Cinematic" },
		{ "TEXTUREGROUP_ColorLookupTable.Comment", "/** No compression, no mips. */" },
		{ "TEXTUREGROUP_ColorLookupTable.DisplayName", "ini:ColorLookupTable" },
		{ "TEXTUREGROUP_ColorLookupTable.Name", "TEXTUREGROUP_ColorLookupTable" },
		{ "TEXTUREGROUP_ColorLookupTable.ToolTip", "No compression, no mips." },
		{ "TEXTUREGROUP_Effects.DisplayName", "ini:Effects" },
		{ "TEXTUREGROUP_Effects.Name", "TEXTUREGROUP_Effects" },
		{ "TEXTUREGROUP_EffectsNotFiltered.DisplayName", "ini:EffectsNotFiltered" },
		{ "TEXTUREGROUP_EffectsNotFiltered.Name", "TEXTUREGROUP_EffectsNotFiltered" },
		{ "TEXTUREGROUP_HierarchicalLOD.Comment", "/** Hierarchical LOD generated textures*/" },
		{ "TEXTUREGROUP_HierarchicalLOD.DisplayName", "ini:Hierarchical LOD" },
		{ "TEXTUREGROUP_HierarchicalLOD.Name", "TEXTUREGROUP_HierarchicalLOD" },
		{ "TEXTUREGROUP_HierarchicalLOD.ToolTip", "Hierarchical LOD generated textures" },
		{ "TEXTUREGROUP_IESLightProfile.Comment", "/** No compression, created on import of a .IES file. */" },
		{ "TEXTUREGROUP_IESLightProfile.DisplayName", "ini:IESLightProfile" },
		{ "TEXTUREGROUP_IESLightProfile.Name", "TEXTUREGROUP_IESLightProfile" },
		{ "TEXTUREGROUP_IESLightProfile.ToolTip", "No compression, created on import of a .IES file." },
		{ "TEXTUREGROUP_Impostor.Comment", "/** Impostor Color Textures*/" },
		{ "TEXTUREGROUP_Impostor.DisplayName", "ini:Impostor Color" },
		{ "TEXTUREGROUP_Impostor.Name", "TEXTUREGROUP_Impostor" },
		{ "TEXTUREGROUP_Impostor.ToolTip", "Impostor Color Textures" },
		{ "TEXTUREGROUP_ImpostorNormalDepth.Comment", "/** Impostor Normal and Depth, use default compression*/" },
		{ "TEXTUREGROUP_ImpostorNormalDepth.DisplayName", "ini:Impostor Normal and Depth" },
		{ "TEXTUREGROUP_ImpostorNormalDepth.Name", "TEXTUREGROUP_ImpostorNormalDepth" },
		{ "TEXTUREGROUP_ImpostorNormalDepth.ToolTip", "Impostor Normal and Depth, use default compression" },
		{ "TEXTUREGROUP_Lightmap.DisplayName", "ini:Lightmap" },
		{ "TEXTUREGROUP_Lightmap.Name", "TEXTUREGROUP_Lightmap" },
		{ "TEXTUREGROUP_MAX.Name", "TEXTUREGROUP_MAX" },
		{ "TEXTUREGROUP_MobileFlattened.DisplayName", "ini:MobileFlattened" },
		{ "TEXTUREGROUP_MobileFlattened.Name", "TEXTUREGROUP_MobileFlattened" },
		{ "TEXTUREGROUP_Pixels2D.Comment", "/** Non-filtered, useful for 2D rendering. */" },
		{ "TEXTUREGROUP_Pixels2D.DisplayName", "ini:2D Pixels (unfiltered)" },
		{ "TEXTUREGROUP_Pixels2D.Name", "TEXTUREGROUP_Pixels2D" },
		{ "TEXTUREGROUP_Pixels2D.ToolTip", "Non-filtered, useful for 2D rendering." },
		{ "TEXTUREGROUP_ProcBuilding_Face.Comment", "/** Obsolete - kept for backwards compatibility. */" },
		{ "TEXTUREGROUP_ProcBuilding_Face.DisplayName", "ini:ProcBuilding_Face" },
		{ "TEXTUREGROUP_ProcBuilding_Face.Name", "TEXTUREGROUP_ProcBuilding_Face" },
		{ "TEXTUREGROUP_ProcBuilding_Face.ToolTip", "Obsolete - kept for backwards compatibility." },
		{ "TEXTUREGROUP_ProcBuilding_LightMap.Comment", "/** Obsolete - kept for backwards compatibility. */" },
		{ "TEXTUREGROUP_ProcBuilding_LightMap.DisplayName", "ini:ProcBuilding_LightMap" },
		{ "TEXTUREGROUP_ProcBuilding_LightMap.Name", "TEXTUREGROUP_ProcBuilding_LightMap" },
		{ "TEXTUREGROUP_ProcBuilding_LightMap.ToolTip", "Obsolete - kept for backwards compatibility." },
		{ "TEXTUREGROUP_Project01.Comment", "/** Project specific group, rename in Engine.ini, [EnumRemap] TEXTUREGROUP_Project**.DisplayName=My Fun Group */" },
		{ "TEXTUREGROUP_Project01.DisplayName", "ini:Project Group 01" },
		{ "TEXTUREGROUP_Project01.Name", "TEXTUREGROUP_Project01" },
		{ "TEXTUREGROUP_Project01.ToolTip", "Project specific group, rename in Engine.ini, [EnumRemap] TEXTUREGROUP_Project**.DisplayName=My Fun Group" },
		{ "TEXTUREGROUP_Project02.DisplayName", "ini:Project Group 02" },
		{ "TEXTUREGROUP_Project02.Name", "TEXTUREGROUP_Project02" },
		{ "TEXTUREGROUP_Project03.DisplayName", "ini:Project Group 03" },
		{ "TEXTUREGROUP_Project03.Name", "TEXTUREGROUP_Project03" },
		{ "TEXTUREGROUP_Project04.DisplayName", "ini:Project Group 04" },
		{ "TEXTUREGROUP_Project04.Name", "TEXTUREGROUP_Project04" },
		{ "TEXTUREGROUP_Project05.DisplayName", "ini:Project Group 05" },
		{ "TEXTUREGROUP_Project05.Name", "TEXTUREGROUP_Project05" },
		{ "TEXTUREGROUP_Project06.DisplayName", "ini:Project Group 06" },
		{ "TEXTUREGROUP_Project06.Name", "TEXTUREGROUP_Project06" },
		{ "TEXTUREGROUP_Project07.DisplayName", "ini:Project Group 07" },
		{ "TEXTUREGROUP_Project07.Name", "TEXTUREGROUP_Project07" },
		{ "TEXTUREGROUP_Project08.DisplayName", "ini:Project Group 08" },
		{ "TEXTUREGROUP_Project08.Name", "TEXTUREGROUP_Project08" },
		{ "TEXTUREGROUP_Project09.DisplayName", "ini:Project Group 09" },
		{ "TEXTUREGROUP_Project09.Name", "TEXTUREGROUP_Project09" },
		{ "TEXTUREGROUP_Project10.DisplayName", "ini:Project Group 10" },
		{ "TEXTUREGROUP_Project10.Name", "TEXTUREGROUP_Project10" },
		{ "TEXTUREGROUP_Project11.DisplayName", "ini:Project Group 11" },
		{ "TEXTUREGROUP_Project11.Name", "TEXTUREGROUP_Project11" },
		{ "TEXTUREGROUP_Project12.DisplayName", "ini:Project Group 12" },
		{ "TEXTUREGROUP_Project12.Name", "TEXTUREGROUP_Project12" },
		{ "TEXTUREGROUP_Project13.DisplayName", "ini:Project Group 13" },
		{ "TEXTUREGROUP_Project13.Name", "TEXTUREGROUP_Project13" },
		{ "TEXTUREGROUP_Project14.DisplayName", "ini:Project Group 14" },
		{ "TEXTUREGROUP_Project14.Name", "TEXTUREGROUP_Project14" },
		{ "TEXTUREGROUP_Project15.DisplayName", "ini:Project Group 15" },
		{ "TEXTUREGROUP_Project15.Name", "TEXTUREGROUP_Project15" },
		{ "TEXTUREGROUP_Project16.DisplayName", "ini:Project Group 16" },
		{ "TEXTUREGROUP_Project16.Name", "TEXTUREGROUP_Project16" },
		{ "TEXTUREGROUP_Project17.DisplayName", "ini:Project Group 17" },
		{ "TEXTUREGROUP_Project17.Name", "TEXTUREGROUP_Project17" },
		{ "TEXTUREGROUP_Project18.DisplayName", "ini:Project Group 18" },
		{ "TEXTUREGROUP_Project18.Name", "TEXTUREGROUP_Project18" },
		{ "TEXTUREGROUP_RenderTarget.DisplayName", "ini:RenderTarget" },
		{ "TEXTUREGROUP_RenderTarget.Name", "TEXTUREGROUP_RenderTarget" },
		{ "TEXTUREGROUP_Shadowmap.DisplayName", "ini:Shadowmap" },
		{ "TEXTUREGROUP_Shadowmap.Name", "TEXTUREGROUP_Shadowmap" },
		{ "TEXTUREGROUP_Skybox.DisplayName", "ini:Skybox" },
		{ "TEXTUREGROUP_Skybox.Name", "TEXTUREGROUP_Skybox" },
		{ "TEXTUREGROUP_Terrain_Heightmap.DisplayName", "ini:Terrain_Heightmap" },
		{ "TEXTUREGROUP_Terrain_Heightmap.Name", "TEXTUREGROUP_Terrain_Heightmap" },
		{ "TEXTUREGROUP_Terrain_Weightmap.DisplayName", "ini:Terrain_Weightmap" },
		{ "TEXTUREGROUP_Terrain_Weightmap.Name", "TEXTUREGROUP_Terrain_Weightmap" },
		{ "TEXTUREGROUP_UI.DisplayName", "ini:UI" },
		{ "TEXTUREGROUP_UI.Name", "TEXTUREGROUP_UI" },
		{ "TEXTUREGROUP_Vehicle.DisplayName", "ini:Vehicle" },
		{ "TEXTUREGROUP_Vehicle.Name", "TEXTUREGROUP_Vehicle" },
		{ "TEXTUREGROUP_VehicleNormalMap.DisplayName", "ini:VehicleNormalMap" },
		{ "TEXTUREGROUP_VehicleNormalMap.Name", "TEXTUREGROUP_VehicleNormalMap" },
		{ "TEXTUREGROUP_VehicleSpecular.DisplayName", "ini:VehicleSpecular" },
		{ "TEXTUREGROUP_VehicleSpecular.Name", "TEXTUREGROUP_VehicleSpecular" },
		{ "TEXTUREGROUP_Weapon.DisplayName", "ini:Weapon" },
		{ "TEXTUREGROUP_Weapon.Name", "TEXTUREGROUP_Weapon" },
		{ "TEXTUREGROUP_WeaponNormalMap.DisplayName", "ini:WeaponNormalMap" },
		{ "TEXTUREGROUP_WeaponNormalMap.Name", "TEXTUREGROUP_WeaponNormalMap" },
		{ "TEXTUREGROUP_WeaponSpecular.DisplayName", "ini:WeaponSpecular" },
		{ "TEXTUREGROUP_WeaponSpecular.Name", "TEXTUREGROUP_WeaponSpecular" },
		{ "TEXTUREGROUP_World.DisplayName", "ini:World" },
		{ "TEXTUREGROUP_World.Name", "TEXTUREGROUP_World" },
		{ "TEXTUREGROUP_WorldNormalMap.DisplayName", "ini:WorldNormalMap" },
		{ "TEXTUREGROUP_WorldNormalMap.Name", "TEXTUREGROUP_WorldNormalMap" },
		{ "TEXTUREGROUP_WorldSpecular.DisplayName", "ini:WorldSpecular" },
		{ "TEXTUREGROUP_WorldSpecular.Name", "TEXTUREGROUP_WorldSpecular" },
		{ "ToolTip", "@warning: if this is changed:\n    update BaseEngine.ini [SystemSettings]\n    you might have to update the update Game's DefaultEngine.ini [SystemSettings]\n    order and actual name can never change (order is important!)\n\nTEXTUREGROUP_Cinematic: should be used for Cinematics which will be baked out\n                        and want to have the highest settings" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_TextureGroup_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"TextureGroup",
		"TextureGroup",
		Z_Construct_UEnum_Engine_TextureGroup_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_TextureGroup_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_TextureGroup_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_TextureGroup_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_TextureGroup()
	{
		if (!Z_Registration_Info_UEnum_TextureGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_TextureGroup.InnerSingleton, Z_Construct_UEnum_Engine_TextureGroup_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_TextureGroup.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_TextureMipGenSettings;
	static UEnum* TextureMipGenSettings_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_TextureMipGenSettings.OuterSingleton)
		{
			Z_Registration_Info_UEnum_TextureMipGenSettings.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_TextureMipGenSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TextureMipGenSettings"));
		}
		return Z_Registration_Info_UEnum_TextureMipGenSettings.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<TextureMipGenSettings>()
	{
		return TextureMipGenSettings_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_TextureMipGenSettings_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_TextureMipGenSettings_Statics::Enumerators[] = {
		{ "TMGS_FromTextureGroup", (int64)TMGS_FromTextureGroup },
		{ "TMGS_SimpleAverage", (int64)TMGS_SimpleAverage },
		{ "TMGS_Sharpen0", (int64)TMGS_Sharpen0 },
		{ "TMGS_Sharpen1", (int64)TMGS_Sharpen1 },
		{ "TMGS_Sharpen2", (int64)TMGS_Sharpen2 },
		{ "TMGS_Sharpen3", (int64)TMGS_Sharpen3 },
		{ "TMGS_Sharpen4", (int64)TMGS_Sharpen4 },
		{ "TMGS_Sharpen5", (int64)TMGS_Sharpen5 },
		{ "TMGS_Sharpen6", (int64)TMGS_Sharpen6 },
		{ "TMGS_Sharpen7", (int64)TMGS_Sharpen7 },
		{ "TMGS_Sharpen8", (int64)TMGS_Sharpen8 },
		{ "TMGS_Sharpen9", (int64)TMGS_Sharpen9 },
		{ "TMGS_Sharpen10", (int64)TMGS_Sharpen10 },
		{ "TMGS_NoMipmaps", (int64)TMGS_NoMipmaps },
		{ "TMGS_LeaveExistingMips", (int64)TMGS_LeaveExistingMips },
		{ "TMGS_Blur1", (int64)TMGS_Blur1 },
		{ "TMGS_Blur2", (int64)TMGS_Blur2 },
		{ "TMGS_Blur3", (int64)TMGS_Blur3 },
		{ "TMGS_Blur4", (int64)TMGS_Blur4 },
		{ "TMGS_Blur5", (int64)TMGS_Blur5 },
		{ "TMGS_Unfiltered", (int64)TMGS_Unfiltered },
		{ "TMGS_Angular", (int64)TMGS_Angular },
		{ "TMGS_MAX", (int64)TMGS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_TextureMipGenSettings_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureDefines.h" },
		{ "TMGS_Angular.Comment", "/** Introduce significant amount of blur using angular filtering (only applies to cubemaps, useful for ambient lighting). */" },
		{ "TMGS_Angular.DisplayName", "Angular" },
		{ "TMGS_Angular.Name", "TMGS_Angular" },
		{ "TMGS_Angular.ToolTip", "Introduce significant amount of blur using angular filtering (only applies to cubemaps, useful for ambient lighting)." },
		{ "TMGS_Blur1.Comment", "/** Blur further (useful for image based reflections). */" },
		{ "TMGS_Blur1.DisplayName", "Blur1" },
		{ "TMGS_Blur1.Name", "TMGS_Blur1" },
		{ "TMGS_Blur1.ToolTip", "Blur further (useful for image based reflections)." },
		{ "TMGS_Blur2.DisplayName", "Blur2" },
		{ "TMGS_Blur2.Name", "TMGS_Blur2" },
		{ "TMGS_Blur3.DisplayName", "Blur3" },
		{ "TMGS_Blur3.Name", "TMGS_Blur3" },
		{ "TMGS_Blur4.DisplayName", "Blur4" },
		{ "TMGS_Blur4.Name", "TMGS_Blur4" },
		{ "TMGS_Blur5.DisplayName", "Blur5" },
		{ "TMGS_Blur5.Name", "TMGS_Blur5" },
		{ "TMGS_FromTextureGroup.Comment", "/** Default for the \"texture\". */" },
		{ "TMGS_FromTextureGroup.DisplayName", "FromTextureGroup" },
		{ "TMGS_FromTextureGroup.Name", "TMGS_FromTextureGroup" },
		{ "TMGS_FromTextureGroup.ToolTip", "Default for the \"texture\"." },
		{ "TMGS_LeaveExistingMips.Comment", "/** Do not touch existing mip chain as it contains generated data. */" },
		{ "TMGS_LeaveExistingMips.DisplayName", "LeaveExistingMips" },
		{ "TMGS_LeaveExistingMips.Name", "TMGS_LeaveExistingMips" },
		{ "TMGS_LeaveExistingMips.ToolTip", "Do not touch existing mip chain as it contains generated data." },
		{ "TMGS_MAX.Name", "TMGS_MAX" },
		{ "TMGS_NoMipmaps.DisplayName", "NoMipmaps" },
		{ "TMGS_NoMipmaps.Name", "TMGS_NoMipmaps" },
		{ "TMGS_Sharpen0.Comment", "/** 8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme. */" },
		{ "TMGS_Sharpen0.DisplayName", "Sharpen0" },
		{ "TMGS_Sharpen0.Name", "TMGS_Sharpen0" },
		{ "TMGS_Sharpen0.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
		{ "TMGS_Sharpen1.Comment", "/** 8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme. */" },
		{ "TMGS_Sharpen1.DisplayName", "Sharpen1" },
		{ "TMGS_Sharpen1.Name", "TMGS_Sharpen1" },
		{ "TMGS_Sharpen1.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
		{ "TMGS_Sharpen10.Comment", "/** 8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme. */" },
		{ "TMGS_Sharpen10.DisplayName", "Sharpen10" },
		{ "TMGS_Sharpen10.Name", "TMGS_Sharpen10" },
		{ "TMGS_Sharpen10.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
		{ "TMGS_Sharpen2.Comment", "/** 8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme. */" },
		{ "TMGS_Sharpen2.DisplayName", "Sharpen2" },
		{ "TMGS_Sharpen2.Name", "TMGS_Sharpen2" },
		{ "TMGS_Sharpen2.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
		{ "TMGS_Sharpen3.Comment", "/** 8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme. */" },
		{ "TMGS_Sharpen3.DisplayName", "Sharpen3" },
		{ "TMGS_Sharpen3.Name", "TMGS_Sharpen3" },
		{ "TMGS_Sharpen3.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
		{ "TMGS_Sharpen4.Comment", "/** 8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme. */" },
		{ "TMGS_Sharpen4.DisplayName", "Sharpen4" },
		{ "TMGS_Sharpen4.Name", "TMGS_Sharpen4" },
		{ "TMGS_Sharpen4.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
		{ "TMGS_Sharpen5.Comment", "/** 8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme. */" },
		{ "TMGS_Sharpen5.DisplayName", "Sharpen5" },
		{ "TMGS_Sharpen5.Name", "TMGS_Sharpen5" },
		{ "TMGS_Sharpen5.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
		{ "TMGS_Sharpen6.Comment", "/** 8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme. */" },
		{ "TMGS_Sharpen6.DisplayName", "Sharpen6" },
		{ "TMGS_Sharpen6.Name", "TMGS_Sharpen6" },
		{ "TMGS_Sharpen6.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
		{ "TMGS_Sharpen7.Comment", "/** 8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme. */" },
		{ "TMGS_Sharpen7.DisplayName", "Sharpen7" },
		{ "TMGS_Sharpen7.Name", "TMGS_Sharpen7" },
		{ "TMGS_Sharpen7.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
		{ "TMGS_Sharpen8.Comment", "/** 8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme. */" },
		{ "TMGS_Sharpen8.DisplayName", "Sharpen8" },
		{ "TMGS_Sharpen8.Name", "TMGS_Sharpen8" },
		{ "TMGS_Sharpen8.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
		{ "TMGS_Sharpen9.Comment", "/** 8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme. */" },
		{ "TMGS_Sharpen9.DisplayName", "Sharpen9" },
		{ "TMGS_Sharpen9.Name", "TMGS_Sharpen9" },
		{ "TMGS_Sharpen9.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
		{ "TMGS_SimpleAverage.Comment", "/** 2x2 average, default for the \"texture group\". */" },
		{ "TMGS_SimpleAverage.DisplayName", "SimpleAverage" },
		{ "TMGS_SimpleAverage.Name", "TMGS_SimpleAverage" },
		{ "TMGS_SimpleAverage.ToolTip", "2x2 average, default for the \"texture group\"." },
		{ "TMGS_Unfiltered.Comment", "/** Use the first texel of each 2x2 (or 2x2x2) group. */" },
		{ "TMGS_Unfiltered.DisplayName", "Unfiltered" },
		{ "TMGS_Unfiltered.Name", "TMGS_Unfiltered" },
		{ "TMGS_Unfiltered.ToolTip", "Use the first texel of each 2x2 (or 2x2x2) group." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_TextureMipGenSettings_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"TextureMipGenSettings",
		"TextureMipGenSettings",
		Z_Construct_UEnum_Engine_TextureMipGenSettings_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_TextureMipGenSettings_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_TextureMipGenSettings_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_TextureMipGenSettings_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_TextureMipGenSettings()
	{
		if (!Z_Registration_Info_UEnum_TextureMipGenSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_TextureMipGenSettings.InnerSingleton, Z_Construct_UEnum_Engine_TextureMipGenSettings_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_TextureMipGenSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETexturePowerOfTwoSetting;
	static UEnum* ETexturePowerOfTwoSetting_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETexturePowerOfTwoSetting.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETexturePowerOfTwoSetting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETexturePowerOfTwoSetting, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETexturePowerOfTwoSetting"));
		}
		return Z_Registration_Info_UEnum_ETexturePowerOfTwoSetting.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETexturePowerOfTwoSetting::Type>()
	{
		return ETexturePowerOfTwoSetting_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETexturePowerOfTwoSetting_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETexturePowerOfTwoSetting_Statics::Enumerators[] = {
		{ "ETexturePowerOfTwoSetting::None", (int64)ETexturePowerOfTwoSetting::None },
		{ "ETexturePowerOfTwoSetting::PadToPowerOfTwo", (int64)ETexturePowerOfTwoSetting::PadToPowerOfTwo },
		{ "ETexturePowerOfTwoSetting::PadToSquarePowerOfTwo", (int64)ETexturePowerOfTwoSetting::PadToSquarePowerOfTwo },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETexturePowerOfTwoSetting_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Options for texture padding mode. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureDefines.h" },
		{ "None.Comment", "/** Do not modify the texture dimensions. */" },
		{ "None.Name", "ETexturePowerOfTwoSetting::None" },
		{ "None.ToolTip", "Do not modify the texture dimensions." },
		{ "PadToPowerOfTwo.Comment", "/** Pad the texture to the nearest power of two size. */" },
		{ "PadToPowerOfTwo.Name", "ETexturePowerOfTwoSetting::PadToPowerOfTwo" },
		{ "PadToPowerOfTwo.ToolTip", "Pad the texture to the nearest power of two size." },
		{ "PadToSquarePowerOfTwo.Comment", "/** Pad the texture to the nearest square power of two size. */" },
		{ "PadToSquarePowerOfTwo.Name", "ETexturePowerOfTwoSetting::PadToSquarePowerOfTwo" },
		{ "PadToSquarePowerOfTwo.ToolTip", "Pad the texture to the nearest square power of two size." },
		{ "ToolTip", "Options for texture padding mode." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETexturePowerOfTwoSetting_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETexturePowerOfTwoSetting",
		"ETexturePowerOfTwoSetting::Type",
		Z_Construct_UEnum_Engine_ETexturePowerOfTwoSetting_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETexturePowerOfTwoSetting_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETexturePowerOfTwoSetting_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETexturePowerOfTwoSetting_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETexturePowerOfTwoSetting()
	{
		if (!Z_Registration_Info_UEnum_ETexturePowerOfTwoSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETexturePowerOfTwoSetting.InnerSingleton, Z_Construct_UEnum_Engine_ETexturePowerOfTwoSetting_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETexturePowerOfTwoSetting.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureSamplerFilter;
	static UEnum* ETextureSamplerFilter_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureSamplerFilter.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureSamplerFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureSamplerFilter, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextureSamplerFilter"));
		}
		return Z_Registration_Info_UEnum_ETextureSamplerFilter.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureSamplerFilter>()
	{
		return ETextureSamplerFilter_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETextureSamplerFilter_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETextureSamplerFilter_Statics::Enumerators[] = {
		{ "ETextureSamplerFilter::Point", (int64)ETextureSamplerFilter::Point },
		{ "ETextureSamplerFilter::Bilinear", (int64)ETextureSamplerFilter::Bilinear },
		{ "ETextureSamplerFilter::Trilinear", (int64)ETextureSamplerFilter::Trilinear },
		{ "ETextureSamplerFilter::AnisotropicPoint", (int64)ETextureSamplerFilter::AnisotropicPoint },
		{ "ETextureSamplerFilter::AnisotropicLinear", (int64)ETextureSamplerFilter::AnisotropicLinear },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETextureSamplerFilter_Statics::Enum_MetaDataParams[] = {
		{ "AnisotropicLinear.Name", "ETextureSamplerFilter::AnisotropicLinear" },
		{ "AnisotropicPoint.Name", "ETextureSamplerFilter::AnisotropicPoint" },
		{ "Bilinear.Name", "ETextureSamplerFilter::Bilinear" },
		{ "Comment", "// Must match enum ESamplerFilter in RHIDefinitions.h\n" },
		{ "ModuleRelativePath", "Classes/Engine/TextureDefines.h" },
		{ "Point.Name", "ETextureSamplerFilter::Point" },
		{ "ToolTip", "Must match enum ESamplerFilter in RHIDefinitions.h" },
		{ "Trilinear.Name", "ETextureSamplerFilter::Trilinear" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureSamplerFilter_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETextureSamplerFilter",
		"ETextureSamplerFilter",
		Z_Construct_UEnum_Engine_ETextureSamplerFilter_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureSamplerFilter_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETextureSamplerFilter_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureSamplerFilter_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETextureSamplerFilter()
	{
		if (!Z_Registration_Info_UEnum_ETextureSamplerFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureSamplerFilter.InnerSingleton, Z_Construct_UEnum_Engine_ETextureSamplerFilter_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureSamplerFilter.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureMipLoadOptions;
	static UEnum* ETextureMipLoadOptions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureMipLoadOptions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureMipLoadOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureMipLoadOptions, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextureMipLoadOptions"));
		}
		return Z_Registration_Info_UEnum_ETextureMipLoadOptions.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureMipLoadOptions>()
	{
		return ETextureMipLoadOptions_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETextureMipLoadOptions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETextureMipLoadOptions_Statics::Enumerators[] = {
		{ "ETextureMipLoadOptions::Default", (int64)ETextureMipLoadOptions::Default },
		{ "ETextureMipLoadOptions::AllMips", (int64)ETextureMipLoadOptions::AllMips },
		{ "ETextureMipLoadOptions::OnlyFirstMip", (int64)ETextureMipLoadOptions::OnlyFirstMip },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETextureMipLoadOptions_Statics::Enum_MetaDataParams[] = {
		{ "AllMips.Comment", "// Load all mips.\n" },
		{ "AllMips.Name", "ETextureMipLoadOptions::AllMips" },
		{ "AllMips.ToolTip", "Load all mips." },
		{ "Default.Comment", "// Fallback to the LODGroup settings\n" },
		{ "Default.Name", "ETextureMipLoadOptions::Default" },
		{ "Default.ToolTip", "Fallback to the LODGroup settings" },
		{ "ModuleRelativePath", "Classes/Engine/TextureDefines.h" },
		{ "OnlyFirstMip.Comment", "// Load only the first mip.\n" },
		{ "OnlyFirstMip.Name", "ETextureMipLoadOptions::OnlyFirstMip" },
		{ "OnlyFirstMip.ToolTip", "Load only the first mip." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureMipLoadOptions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETextureMipLoadOptions",
		"ETextureMipLoadOptions",
		Z_Construct_UEnum_Engine_ETextureMipLoadOptions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureMipLoadOptions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETextureMipLoadOptions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureMipLoadOptions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETextureMipLoadOptions()
	{
		if (!Z_Registration_Info_UEnum_ETextureMipLoadOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureMipLoadOptions.InnerSingleton, Z_Construct_UEnum_Engine_ETextureMipLoadOptions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureMipLoadOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureDownscaleOptions;
	static UEnum* ETextureDownscaleOptions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureDownscaleOptions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureDownscaleOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureDownscaleOptions, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextureDownscaleOptions"));
		}
		return Z_Registration_Info_UEnum_ETextureDownscaleOptions.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureDownscaleOptions>()
	{
		return ETextureDownscaleOptions_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETextureDownscaleOptions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETextureDownscaleOptions_Statics::Enumerators[] = {
		{ "ETextureDownscaleOptions::Default", (int64)ETextureDownscaleOptions::Default },
		{ "ETextureDownscaleOptions::Unfiltered", (int64)ETextureDownscaleOptions::Unfiltered },
		{ "ETextureDownscaleOptions::SimpleAverage", (int64)ETextureDownscaleOptions::SimpleAverage },
		{ "ETextureDownscaleOptions::Sharpen0", (int64)ETextureDownscaleOptions::Sharpen0 },
		{ "ETextureDownscaleOptions::Sharpen1", (int64)ETextureDownscaleOptions::Sharpen1 },
		{ "ETextureDownscaleOptions::Sharpen2", (int64)ETextureDownscaleOptions::Sharpen2 },
		{ "ETextureDownscaleOptions::Sharpen3", (int64)ETextureDownscaleOptions::Sharpen3 },
		{ "ETextureDownscaleOptions::Sharpen4", (int64)ETextureDownscaleOptions::Sharpen4 },
		{ "ETextureDownscaleOptions::Sharpen5", (int64)ETextureDownscaleOptions::Sharpen5 },
		{ "ETextureDownscaleOptions::Sharpen6", (int64)ETextureDownscaleOptions::Sharpen6 },
		{ "ETextureDownscaleOptions::Sharpen7", (int64)ETextureDownscaleOptions::Sharpen7 },
		{ "ETextureDownscaleOptions::Sharpen8", (int64)ETextureDownscaleOptions::Sharpen8 },
		{ "ETextureDownscaleOptions::Sharpen9", (int64)ETextureDownscaleOptions::Sharpen9 },
		{ "ETextureDownscaleOptions::Sharpen10", (int64)ETextureDownscaleOptions::Sharpen10 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETextureDownscaleOptions_Statics::Enum_MetaDataParams[] = {
		{ "Default.Comment", "/** Fallback to the \"texture group\" settings */" },
		{ "Default.Name", "ETextureDownscaleOptions::Default" },
		{ "Default.ToolTip", "Fallback to the \"texture group\" settings" },
		{ "ModuleRelativePath", "Classes/Engine/TextureDefines.h" },
		{ "Sharpen0.Comment", "/** 8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme. */" },
		{ "Sharpen0.Name", "ETextureDownscaleOptions::Sharpen0" },
		{ "Sharpen0.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
		{ "Sharpen1.Comment", "/** 8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme. */" },
		{ "Sharpen1.Name", "ETextureDownscaleOptions::Sharpen1" },
		{ "Sharpen1.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
		{ "Sharpen10.Comment", "/** 8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme. */" },
		{ "Sharpen10.Name", "ETextureDownscaleOptions::Sharpen10" },
		{ "Sharpen10.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
		{ "Sharpen2.Comment", "/** 8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme. */" },
		{ "Sharpen2.Name", "ETextureDownscaleOptions::Sharpen2" },
		{ "Sharpen2.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
		{ "Sharpen3.Comment", "/** 8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme. */" },
		{ "Sharpen3.Name", "ETextureDownscaleOptions::Sharpen3" },
		{ "Sharpen3.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
		{ "Sharpen4.Comment", "/** 8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme. */" },
		{ "Sharpen4.Name", "ETextureDownscaleOptions::Sharpen4" },
		{ "Sharpen4.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
		{ "Sharpen5.Comment", "/** 8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme. */" },
		{ "Sharpen5.Name", "ETextureDownscaleOptions::Sharpen5" },
		{ "Sharpen5.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
		{ "Sharpen6.Comment", "/** 8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme. */" },
		{ "Sharpen6.Name", "ETextureDownscaleOptions::Sharpen6" },
		{ "Sharpen6.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
		{ "Sharpen7.Comment", "/** 8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme. */" },
		{ "Sharpen7.Name", "ETextureDownscaleOptions::Sharpen7" },
		{ "Sharpen7.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
		{ "Sharpen8.Comment", "/** 8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme. */" },
		{ "Sharpen8.Name", "ETextureDownscaleOptions::Sharpen8" },
		{ "Sharpen8.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
		{ "Sharpen9.Comment", "/** 8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme. */" },
		{ "Sharpen9.Name", "ETextureDownscaleOptions::Sharpen9" },
		{ "Sharpen9.ToolTip", "8x8 with sharpening: 0=no sharpening but better quality which is softer, 1=little, 5=medium, 10=extreme." },
		{ "SimpleAverage.Comment", "/** Average, default for the \"texture group\" */" },
		{ "SimpleAverage.Name", "ETextureDownscaleOptions::SimpleAverage" },
		{ "SimpleAverage.ToolTip", "Average, default for the \"texture group\"" },
		{ "Unfiltered.Comment", "/** Unfiltered */" },
		{ "Unfiltered.Name", "ETextureDownscaleOptions::Unfiltered" },
		{ "Unfiltered.ToolTip", "Unfiltered" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureDownscaleOptions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETextureDownscaleOptions",
		"ETextureDownscaleOptions",
		Z_Construct_UEnum_Engine_ETextureDownscaleOptions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureDownscaleOptions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETextureDownscaleOptions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureDownscaleOptions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETextureDownscaleOptions()
	{
		if (!Z_Registration_Info_UEnum_ETextureDownscaleOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureDownscaleOptions.InnerSingleton, Z_Construct_UEnum_Engine_ETextureDownscaleOptions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureDownscaleOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureLossyCompressionAmount;
	static UEnum* ETextureLossyCompressionAmount_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureLossyCompressionAmount.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureLossyCompressionAmount.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextureLossyCompressionAmount"));
		}
		return Z_Registration_Info_UEnum_ETextureLossyCompressionAmount.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureLossyCompressionAmount>()
	{
		return ETextureLossyCompressionAmount_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount_Statics::Enumerators[] = {
		{ "TLCA_Default", (int64)TLCA_Default },
		{ "TLCA_None", (int64)TLCA_None },
		{ "TLCA_Lowest", (int64)TLCA_Lowest },
		{ "TLCA_Low", (int64)TLCA_Low },
		{ "TLCA_Medium", (int64)TLCA_Medium },
		{ "TLCA_High", (int64)TLCA_High },
		{ "TLCA_Highest", (int64)TLCA_Highest },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureDefines.h" },
		{ "TLCA_Default.DisplayName", "Default" },
		{ "TLCA_Default.Name", "TLCA_Default" },
		{ "TLCA_High.DisplayName", "High (Oodle RDO 30)" },
		{ "TLCA_High.Name", "TLCA_High" },
		{ "TLCA_Highest.DisplayName", "Highest (Worst image quality, smallest filesize) (Oodle RDO 40)" },
		{ "TLCA_Highest.Name", "TLCA_Highest" },
		{ "TLCA_Low.DisplayName", "Low (Oodle RDO 10)" },
		{ "TLCA_Low.Name", "TLCA_Low" },
		{ "TLCA_Lowest.DisplayName", "Lowest (Best image quality, largest filesize) (Oodle RDO 1)" },
		{ "TLCA_Lowest.Name", "TLCA_Lowest" },
		{ "TLCA_Medium.DisplayName", "Medium (Oodle RDO 20)" },
		{ "TLCA_Medium.Name", "TLCA_Medium" },
		{ "TLCA_None.DisplayName", "No lossy compression (Oodle RDO disabled)" },
		{ "TLCA_None.Name", "TLCA_None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETextureLossyCompressionAmount",
		"ETextureLossyCompressionAmount",
		Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount()
	{
		if (!Z_Registration_Info_UEnum_ETextureLossyCompressionAmount.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureLossyCompressionAmount.InnerSingleton, Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureLossyCompressionAmount.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureEncodeSpeed;
	static UEnum* ETextureEncodeSpeed_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureEncodeSpeed.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureEncodeSpeed.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureEncodeSpeed, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextureEncodeSpeed"));
		}
		return Z_Registration_Info_UEnum_ETextureEncodeSpeed.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureEncodeSpeed>()
	{
		return ETextureEncodeSpeed_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETextureEncodeSpeed_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETextureEncodeSpeed_Statics::Enumerators[] = {
		{ "ETextureEncodeSpeed::Final", (int64)ETextureEncodeSpeed::Final },
		{ "ETextureEncodeSpeed::FinalIfAvailable", (int64)ETextureEncodeSpeed::FinalIfAvailable },
		{ "ETextureEncodeSpeed::Fast", (int64)ETextureEncodeSpeed::Fast },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETextureEncodeSpeed_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// Certain settings can be changed to facilitate how fast a texture build takes. This\n// controls which of those settings is used. It is resolved prior to the settings reaching\n// the encoder.\n//\n// In many places where this is used, FinalIfAvailable is invalid.\n" },
		{ "Fast.Comment", "// Use the \"Fast\" encode settings in UTextureEncodingProjectSettings\n" },
		{ "Fast.Name", "ETextureEncodeSpeed::Fast" },
		{ "Fast.ToolTip", "Use the \"Fast\" encode settings in UTextureEncodingProjectSettings" },
		{ "Final.Comment", "// Use the \"Final\" encode speed settings in UTextureEncodingProjectSettings\n" },
		{ "Final.Name", "ETextureEncodeSpeed::Final" },
		{ "Final.ToolTip", "Use the \"Final\" encode speed settings in UTextureEncodingProjectSettings" },
		{ "FinalIfAvailable.Comment", "// Try and fetch the final encode speed settings, but if they don't exist, encode\n// with Fast.\n" },
		{ "FinalIfAvailable.Name", "ETextureEncodeSpeed::FinalIfAvailable" },
		{ "FinalIfAvailable.ToolTip", "Try and fetch the final encode speed settings, but if they don't exist, encode\nwith Fast." },
		{ "ModuleRelativePath", "Classes/Engine/TextureDefines.h" },
		{ "ToolTip", "Certain settings can be changed to facilitate how fast a texture build takes. This\ncontrols which of those settings is used. It is resolved prior to the settings reaching\nthe encoder.\n\nIn many places where this is used, FinalIfAvailable is invalid." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureEncodeSpeed_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETextureEncodeSpeed",
		"ETextureEncodeSpeed",
		Z_Construct_UEnum_Engine_ETextureEncodeSpeed_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureEncodeSpeed_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETextureEncodeSpeed_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureEncodeSpeed_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETextureEncodeSpeed()
	{
		if (!Z_Registration_Info_UEnum_ETextureEncodeSpeed.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureEncodeSpeed.InnerSingleton, Z_Construct_UEnum_Engine_ETextureEncodeSpeed_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureEncodeSpeed.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureClass;
	static UEnum* ETextureClass_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureClass.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureClass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureClass, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextureClass"));
		}
		return Z_Registration_Info_UEnum_ETextureClass.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureClass>()
	{
		return ETextureClass_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETextureClass_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETextureClass_Statics::Enumerators[] = {
		{ "ETextureClass::Invalid", (int64)ETextureClass::Invalid },
		{ "ETextureClass::TwoD", (int64)ETextureClass::TwoD },
		{ "ETextureClass::Cube", (int64)ETextureClass::Cube },
		{ "ETextureClass::Array", (int64)ETextureClass::Array },
		{ "ETextureClass::CubeArray", (int64)ETextureClass::CubeArray },
		{ "ETextureClass::Volume", (int64)ETextureClass::Volume },
		{ "ETextureClass::TwoDDynamic", (int64)ETextureClass::TwoDDynamic },
		{ "ETextureClass::RenderTarget", (int64)ETextureClass::RenderTarget },
		{ "ETextureClass::Other2DNoSource", (int64)ETextureClass::Other2DNoSource },
		{ "ETextureClass::OtherUnknown", (int64)ETextureClass::OtherUnknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETextureClass_Statics::Enum_MetaDataParams[] = {
		{ "Array.Name", "ETextureClass::Array" },
		{ "Cube.Name", "ETextureClass::Cube" },
		{ "CubeArray.Name", "ETextureClass::CubeArray" },
		{ "Invalid.Name", "ETextureClass::Invalid" },
		{ "ModuleRelativePath", "Classes/Engine/TextureDefines.h" },
		{ "Other2DNoSource.Comment", "// User types :\n" },
		{ "Other2DNoSource.Name", "ETextureClass::Other2DNoSource" },
		{ "Other2DNoSource.ToolTip", "User types :" },
		{ "OtherUnknown.Comment", "// Media, Web, etc. that should have derived from TwoDDynamic but didn't\n" },
		{ "OtherUnknown.Name", "ETextureClass::OtherUnknown" },
		{ "OtherUnknown.ToolTip", "Media, Web, etc. that should have derived from TwoDDynamic but didn't" },
		{ "RenderTarget.Name", "ETextureClass::RenderTarget" },
		{ "TwoD.Comment", "// Engine types with source data :\n" },
		{ "TwoD.Name", "ETextureClass::TwoD" },
		{ "TwoD.ToolTip", "Engine types with source data :" },
		{ "TwoDDynamic.Comment", "// Engine types without source data :\n" },
		{ "TwoDDynamic.Name", "ETextureClass::TwoDDynamic" },
		{ "TwoDDynamic.ToolTip", "Engine types without source data :" },
		{ "Volume.Name", "ETextureClass::Volume" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureClass_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETextureClass",
		"ETextureClass",
		Z_Construct_UEnum_Engine_ETextureClass_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureClass_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETextureClass_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureClass_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETextureClass()
	{
		if (!Z_Registration_Info_UEnum_ETextureClass.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureClass.InnerSingleton, Z_Construct_UEnum_Engine_ETextureClass_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureClass.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECompositeTextureMode;
	static UEnum* ECompositeTextureMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECompositeTextureMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECompositeTextureMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECompositeTextureMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECompositeTextureMode"));
		}
		return Z_Registration_Info_UEnum_ECompositeTextureMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECompositeTextureMode>()
	{
		return ECompositeTextureMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ECompositeTextureMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ECompositeTextureMode_Statics::Enumerators[] = {
		{ "CTM_Disabled", (int64)CTM_Disabled },
		{ "CTM_NormalRoughnessToRed", (int64)CTM_NormalRoughnessToRed },
		{ "CTM_NormalRoughnessToGreen", (int64)CTM_NormalRoughnessToGreen },
		{ "CTM_NormalRoughnessToBlue", (int64)CTM_NormalRoughnessToBlue },
		{ "CTM_NormalRoughnessToAlpha", (int64)CTM_NormalRoughnessToAlpha },
		{ "CTM_MAX", (int64)CTM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ECompositeTextureMode_Statics::Enum_MetaDataParams[] = {
		{ "CTM_Disabled.DisplayName", "Disabled" },
		{ "CTM_Disabled.Name", "CTM_Disabled" },
		{ "CTM_MAX.Name", "CTM_MAX" },
		{ "CTM_NormalRoughnessToAlpha.Comment", "/** CompositingTexture needs to be a normal map with the same or larger size. */" },
		{ "CTM_NormalRoughnessToAlpha.DisplayName", "Add Normal Roughness To Alpha" },
		{ "CTM_NormalRoughnessToAlpha.Name", "CTM_NormalRoughnessToAlpha" },
		{ "CTM_NormalRoughnessToAlpha.ToolTip", "CompositingTexture needs to be a normal map with the same or larger size." },
		{ "CTM_NormalRoughnessToBlue.Comment", "/** CompositingTexture needs to be a normal map with the same or larger size. */" },
		{ "CTM_NormalRoughnessToBlue.DisplayName", "Add Normal Roughness To Blue" },
		{ "CTM_NormalRoughnessToBlue.Name", "CTM_NormalRoughnessToBlue" },
		{ "CTM_NormalRoughnessToBlue.ToolTip", "CompositingTexture needs to be a normal map with the same or larger size." },
		{ "CTM_NormalRoughnessToGreen.Comment", "/** CompositingTexture needs to be a normal map with the same or larger size. */" },
		{ "CTM_NormalRoughnessToGreen.DisplayName", "Add Normal Roughness To Green" },
		{ "CTM_NormalRoughnessToGreen.Name", "CTM_NormalRoughnessToGreen" },
		{ "CTM_NormalRoughnessToGreen.ToolTip", "CompositingTexture needs to be a normal map with the same or larger size." },
		{ "CTM_NormalRoughnessToRed.Comment", "/** CompositingTexture needs to be a normal map with the same or larger size. */" },
		{ "CTM_NormalRoughnessToRed.DisplayName", "Add Normal Roughness To Red" },
		{ "CTM_NormalRoughnessToRed.Name", "CTM_NormalRoughnessToRed" },
		{ "CTM_NormalRoughnessToRed.ToolTip", "CompositingTexture needs to be a normal map with the same or larger size." },
		{ "ModuleRelativePath", "Classes/Engine/TextureDefines.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECompositeTextureMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ECompositeTextureMode",
		"ECompositeTextureMode",
		Z_Construct_UEnum_Engine_ECompositeTextureMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECompositeTextureMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ECompositeTextureMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECompositeTextureMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ECompositeTextureMode()
	{
		if (!Z_Registration_Info_UEnum_ECompositeTextureMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECompositeTextureMode.InnerSingleton, Z_Construct_UEnum_Engine_ECompositeTextureMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECompositeTextureMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureSourceCompressionFormat;
	static UEnum* ETextureSourceCompressionFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureSourceCompressionFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureSourceCompressionFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureSourceCompressionFormat, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextureSourceCompressionFormat"));
		}
		return Z_Registration_Info_UEnum_ETextureSourceCompressionFormat.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureSourceCompressionFormat>()
	{
		return ETextureSourceCompressionFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETextureSourceCompressionFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETextureSourceCompressionFormat_Statics::Enumerators[] = {
		{ "TSCF_None", (int64)TSCF_None },
		{ "TSCF_PNG", (int64)TSCF_PNG },
		{ "TSCF_JPEG", (int64)TSCF_JPEG },
		{ "TSCF_MAX", (int64)TSCF_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETextureSourceCompressionFormat_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureDefines.h" },
		{ "TSCF_JPEG.DisplayName", "JPEG" },
		{ "TSCF_JPEG.Name", "TSCF_JPEG" },
		{ "TSCF_MAX.Name", "TSCF_MAX" },
		{ "TSCF_None.DisplayName", "None" },
		{ "TSCF_None.Name", "TSCF_None" },
		{ "TSCF_PNG.DisplayName", "PNG" },
		{ "TSCF_PNG.Name", "TSCF_PNG" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureSourceCompressionFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETextureSourceCompressionFormat",
		"ETextureSourceCompressionFormat",
		Z_Construct_UEnum_Engine_ETextureSourceCompressionFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureSourceCompressionFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETextureSourceCompressionFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureSourceCompressionFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETextureSourceCompressionFormat()
	{
		if (!Z_Registration_Info_UEnum_ETextureSourceCompressionFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureSourceCompressionFormat.InnerSingleton, Z_Construct_UEnum_Engine_ETextureSourceCompressionFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureSourceCompressionFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureSourceFormat;
	static UEnum* ETextureSourceFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureSourceFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureSourceFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureSourceFormat, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextureSourceFormat"));
		}
		return Z_Registration_Info_UEnum_ETextureSourceFormat.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureSourceFormat>()
	{
		return ETextureSourceFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETextureSourceFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETextureSourceFormat_Statics::Enumerators[] = {
		{ "TSF_Invalid", (int64)TSF_Invalid },
		{ "TSF_G8", (int64)TSF_G8 },
		{ "TSF_BGRA8", (int64)TSF_BGRA8 },
		{ "TSF_BGRE8", (int64)TSF_BGRE8 },
		{ "TSF_RGBA16", (int64)TSF_RGBA16 },
		{ "TSF_RGBA16F", (int64)TSF_RGBA16F },
		{ "TSF_RGBA8_DEPRECATED", (int64)TSF_RGBA8_DEPRECATED },
		{ "TSF_RGBE8_DEPRECATED", (int64)TSF_RGBE8_DEPRECATED },
		{ "TSF_G16", (int64)TSF_G16 },
		{ "TSF_RGBA32F", (int64)TSF_RGBA32F },
		{ "TSF_R16F", (int64)TSF_R16F },
		{ "TSF_R32F", (int64)TSF_R32F },
		{ "TSF_MAX", (int64)TSF_MAX },
		{ "TSF_RGBA8", (int64)TSF_RGBA8 },
		{ "TSF_RGBE8", (int64)TSF_RGBE8 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETextureSourceFormat_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// ETextureSourceFormat should map one-to-one to ImageCore ERawImageFormat::Type\n" },
		{ "ModuleRelativePath", "Classes/Engine/TextureDefines.h" },
		{ "ToolTip", "ETextureSourceFormat should map one-to-one to ImageCore ERawImageFormat::Type" },
		{ "TSF_BGRA8.Name", "TSF_BGRA8" },
		{ "TSF_BGRE8.Name", "TSF_BGRE8" },
		{ "TSF_G16.Name", "TSF_G16" },
		{ "TSF_G8.Name", "TSF_G8" },
		{ "TSF_Invalid.Name", "TSF_Invalid" },
		{ "TSF_MAX.Name", "TSF_MAX" },
		{ "TSF_R16F.Name", "TSF_R16F" },
		{ "TSF_R32F.Name", "TSF_R32F" },
		{ "TSF_RGBA16.Name", "TSF_RGBA16" },
		{ "TSF_RGBA16F.Name", "TSF_RGBA16F" },
		{ "TSF_RGBA32F.Name", "TSF_RGBA32F" },
		{ "TSF_RGBA8.Comment", "// provide aliases to the old names with deprecation warnings\n//  remove these someday\n" },
		{ "TSF_RGBA8.Name", "TSF_RGBA8" },
		{ "TSF_RGBA8.ToolTip", "provide aliases to the old names with deprecation warnings\n remove these someday" },
		{ "TSF_RGBA8_DEPRECATED.Comment", "// these are mapped to TSF_BGRA8/TSF_BGRE8 on load, so the runtime will never see them after loading :\n// keep them here to preserve enum values\n" },
		{ "TSF_RGBA8_DEPRECATED.Name", "TSF_RGBA8_DEPRECATED" },
		{ "TSF_RGBA8_DEPRECATED.ToolTip", "these are mapped to TSF_BGRA8/TSF_BGRE8 on load, so the runtime will never see them after loading :\nkeep them here to preserve enum values" },
		{ "TSF_RGBE8.Name", "TSF_RGBE8" },
		{ "TSF_RGBE8_DEPRECATED.Name", "TSF_RGBE8_DEPRECATED" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureSourceFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETextureSourceFormat",
		"ETextureSourceFormat",
		Z_Construct_UEnum_Engine_ETextureSourceFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureSourceFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETextureSourceFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureSourceFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETextureSourceFormat()
	{
		if (!Z_Registration_Info_UEnum_ETextureSourceFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureSourceFormat.InnerSingleton, Z_Construct_UEnum_Engine_ETextureSourceFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureSourceFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_TextureCompressionSettings;
	static UEnum* TextureCompressionSettings_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_TextureCompressionSettings.OuterSingleton)
		{
			Z_Registration_Info_UEnum_TextureCompressionSettings.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_TextureCompressionSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TextureCompressionSettings"));
		}
		return Z_Registration_Info_UEnum_TextureCompressionSettings.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<TextureCompressionSettings>()
	{
		return TextureCompressionSettings_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_TextureCompressionSettings_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_TextureCompressionSettings_Statics::Enumerators[] = {
		{ "TC_Default", (int64)TC_Default },
		{ "TC_Normalmap", (int64)TC_Normalmap },
		{ "TC_Masks", (int64)TC_Masks },
		{ "TC_Grayscale", (int64)TC_Grayscale },
		{ "TC_Displacementmap", (int64)TC_Displacementmap },
		{ "TC_VectorDisplacementmap", (int64)TC_VectorDisplacementmap },
		{ "TC_HDR", (int64)TC_HDR },
		{ "TC_EditorIcon", (int64)TC_EditorIcon },
		{ "TC_Alpha", (int64)TC_Alpha },
		{ "TC_DistanceFieldFont", (int64)TC_DistanceFieldFont },
		{ "TC_HDR_Compressed", (int64)TC_HDR_Compressed },
		{ "TC_BC7", (int64)TC_BC7 },
		{ "TC_HalfFloat", (int64)TC_HalfFloat },
		{ "TC_LQ", (int64)TC_LQ },
		{ "TC_EncodedReflectionCapture", (int64)TC_EncodedReflectionCapture },
		{ "TC_SingleFloat", (int64)TC_SingleFloat },
		{ "TC_HDR_F32", (int64)TC_HDR_F32 },
		{ "TC_MAX", (int64)TC_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_TextureCompressionSettings_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// This needs to be mirrored in EditorFactories.cpp.\n" },
		{ "ModuleRelativePath", "Classes/Engine/TextureDefines.h" },
		{ "TC_Alpha.DisplayName", "Alpha (no sRGB, BC4 on DX11)" },
		{ "TC_Alpha.Name", "TC_Alpha" },
		{ "TC_BC7.DisplayName", "BC7 (DX11, optional A)" },
		{ "TC_BC7.Name", "TC_BC7" },
		{ "TC_Default.DisplayName", "Default (DXT1/5, BC1/3 on DX11)" },
		{ "TC_Default.Name", "TC_Default" },
		{ "TC_Displacementmap.DisplayName", "Displacementmap (G8/16)" },
		{ "TC_Displacementmap.Name", "TC_Displacementmap" },
		{ "TC_DistanceFieldFont.DisplayName", "DistanceFieldFont (G8)" },
		{ "TC_DistanceFieldFont.Name", "TC_DistanceFieldFont" },
		{ "TC_EditorIcon.DisplayName", "UserInterface2D (RGBA)" },
		{ "TC_EditorIcon.Name", "TC_EditorIcon" },
		{ "TC_EncodedReflectionCapture.Hidden", "" },
		{ "TC_EncodedReflectionCapture.Name", "TC_EncodedReflectionCapture" },
		{ "TC_Grayscale.DisplayName", "Grayscale (G8/16, RGB8 sRGB)" },
		{ "TC_Grayscale.Name", "TC_Grayscale" },
		{ "TC_HalfFloat.DisplayName", "Half Float (R16F)" },
		{ "TC_HalfFloat.Name", "TC_HalfFloat" },
		{ "TC_HDR.DisplayName", "HDR (RGBA16F, no sRGB)" },
		{ "TC_HDR.Name", "TC_HDR" },
		{ "TC_HDR_Compressed.DisplayName", "HDR Compressed (RGB, BC6H, DX11)" },
		{ "TC_HDR_Compressed.Name", "TC_HDR_Compressed" },
		{ "TC_HDR_F32.DisplayName", "HDR High Precision (RGBA32F)" },
		{ "TC_HDR_F32.Name", "TC_HDR_F32" },
		{ "TC_LQ.DisplayName", "Low Quality (BGR565/BGR555A1)" },
		{ "TC_LQ.Hidden", "" },
		{ "TC_LQ.Name", "TC_LQ" },
		{ "TC_LQ.ToolTip", "BGR565/BGR555A1, fallback to DXT1/DXT5 on Mac platform" },
		{ "TC_Masks.DisplayName", "Masks (no sRGB)" },
		{ "TC_Masks.Name", "TC_Masks" },
		{ "TC_MAX.Name", "TC_MAX" },
		{ "TC_Normalmap.DisplayName", "Normalmap (DXT5, BC5 on DX11)" },
		{ "TC_Normalmap.Name", "TC_Normalmap" },
		{ "TC_SingleFloat.DisplayName", "Single Float (R32F)" },
		{ "TC_SingleFloat.Name", "TC_SingleFloat" },
		{ "TC_VectorDisplacementmap.DisplayName", "VectorDisplacementmap (RGBA8)" },
		{ "TC_VectorDisplacementmap.Name", "TC_VectorDisplacementmap" },
		{ "ToolTip", "This needs to be mirrored in EditorFactories.cpp." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_TextureCompressionSettings_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"TextureCompressionSettings",
		"TextureCompressionSettings",
		Z_Construct_UEnum_Engine_TextureCompressionSettings_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_TextureCompressionSettings_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_TextureCompressionSettings_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_TextureCompressionSettings_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_TextureCompressionSettings()
	{
		if (!Z_Registration_Info_UEnum_TextureCompressionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_TextureCompressionSettings.InnerSingleton, Z_Construct_UEnum_Engine_TextureCompressionSettings_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_TextureCompressionSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureSourceEncoding;
	static UEnum* ETextureSourceEncoding_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureSourceEncoding.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureSourceEncoding.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureSourceEncoding, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextureSourceEncoding"));
		}
		return Z_Registration_Info_UEnum_ETextureSourceEncoding.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureSourceEncoding>()
	{
		return ETextureSourceEncoding_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETextureSourceEncoding_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETextureSourceEncoding_Statics::Enumerators[] = {
		{ "ETextureSourceEncoding::TSE_None", (int64)ETextureSourceEncoding::TSE_None },
		{ "ETextureSourceEncoding::TSE_Linear", (int64)ETextureSourceEncoding::TSE_Linear },
		{ "ETextureSourceEncoding::TSE_sRGB", (int64)ETextureSourceEncoding::TSE_sRGB },
		{ "ETextureSourceEncoding::TSE_ST2084", (int64)ETextureSourceEncoding::TSE_ST2084 },
		{ "ETextureSourceEncoding::TSE_Gamma22", (int64)ETextureSourceEncoding::TSE_Gamma22 },
		{ "ETextureSourceEncoding::TSE_BT1886", (int64)ETextureSourceEncoding::TSE_BT1886 },
		{ "ETextureSourceEncoding::TSE_Gamma26", (int64)ETextureSourceEncoding::TSE_Gamma26 },
		{ "ETextureSourceEncoding::TSE_Cineon", (int64)ETextureSourceEncoding::TSE_Cineon },
		{ "ETextureSourceEncoding::TSE_REDLog", (int64)ETextureSourceEncoding::TSE_REDLog },
		{ "ETextureSourceEncoding::TSE_REDLog3G10", (int64)ETextureSourceEncoding::TSE_REDLog3G10 },
		{ "ETextureSourceEncoding::TSE_SLog1", (int64)ETextureSourceEncoding::TSE_SLog1 },
		{ "ETextureSourceEncoding::TSE_SLog2", (int64)ETextureSourceEncoding::TSE_SLog2 },
		{ "ETextureSourceEncoding::TSE_SLog3", (int64)ETextureSourceEncoding::TSE_SLog3 },
		{ "ETextureSourceEncoding::TSE_AlexaV3LogC", (int64)ETextureSourceEncoding::TSE_AlexaV3LogC },
		{ "ETextureSourceEncoding::TSE_CanonLog", (int64)ETextureSourceEncoding::TSE_CanonLog },
		{ "ETextureSourceEncoding::TSE_ProTune", (int64)ETextureSourceEncoding::TSE_ProTune },
		{ "ETextureSourceEncoding::TSE_VLog", (int64)ETextureSourceEncoding::TSE_VLog },
		{ "ETextureSourceEncoding::TSE_MAX", (int64)ETextureSourceEncoding::TSE_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETextureSourceEncoding_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** List of (advanced) texture source encodings, matching the list in ColorManagementDefines.h. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureDefines.h" },
		{ "ToolTip", "List of (advanced) texture source encodings, matching the list in ColorManagementDefines.h." },
		{ "TSE_AlexaV3LogC.DisplayName", "AlexaV3LogC" },
		{ "TSE_AlexaV3LogC.Name", "ETextureSourceEncoding::TSE_AlexaV3LogC" },
		{ "TSE_AlexaV3LogC.ToolTip", "ARRI Alexa V3 LogC source encoding to be linearized (before optional sRGB encoding is applied)." },
		{ "TSE_BT1886.DisplayName", "BT1886/Gamma 2.4" },
		{ "TSE_BT1886.Name", "ETextureSourceEncoding::TSE_BT1886" },
		{ "TSE_BT1886.ToolTip", "BT1886/Gamma 2.4 source encoding to be linearized (before optional sRGB encoding is applied)." },
		{ "TSE_CanonLog.DisplayName", "CanonLog" },
		{ "TSE_CanonLog.Name", "ETextureSourceEncoding::TSE_CanonLog" },
		{ "TSE_CanonLog.ToolTip", "Canon Log source encoding to be linearized (before optional sRGB encoding is applied)." },
		{ "TSE_Cineon.DisplayName", "Cineon" },
		{ "TSE_Cineon.Name", "ETextureSourceEncoding::TSE_Cineon" },
		{ "TSE_Cineon.ToolTip", "Cineon source encoding to be linearized (before optional sRGB encoding is applied)." },
		{ "TSE_Gamma22.DisplayName", "Gamma 2.2" },
		{ "TSE_Gamma22.Name", "ETextureSourceEncoding::TSE_Gamma22" },
		{ "TSE_Gamma22.ToolTip", "Gamma 2.2 source encoding to be linearized (before optional sRGB encoding is applied)." },
		{ "TSE_Gamma26.DisplayName", "Gamma 2.6" },
		{ "TSE_Gamma26.Name", "ETextureSourceEncoding::TSE_Gamma26" },
		{ "TSE_Gamma26.ToolTip", "Gamma 2.6 source encoding to be linearized (before optional sRGB encoding is applied)." },
		{ "TSE_Linear.DisplayName", "Linear" },
		{ "TSE_Linear.Name", "ETextureSourceEncoding::TSE_Linear" },
		{ "TSE_Linear.ToolTip", "The source encoding is considered linear (before optional sRGB encoding is applied)." },
		{ "TSE_MAX.Name", "ETextureSourceEncoding::TSE_MAX" },
		{ "TSE_None.DisplayName", "Default" },
		{ "TSE_None.Name", "ETextureSourceEncoding::TSE_None" },
		{ "TSE_None.ToolTip", "The source encoding is assumed to match the state of the sRGB checkbox parameter." },
		{ "TSE_ProTune.DisplayName", "ProTune" },
		{ "TSE_ProTune.Name", "ETextureSourceEncoding::TSE_ProTune" },
		{ "TSE_ProTune.ToolTip", "GoPro ProTune source encoding to be linearized (before optional sRGB encoding is applied)." },
		{ "TSE_REDLog.DisplayName", "REDLog" },
		{ "TSE_REDLog.Name", "ETextureSourceEncoding::TSE_REDLog" },
		{ "TSE_REDLog.ToolTip", "RED Log source encoding to be linearized (before optional sRGB encoding is applied)." },
		{ "TSE_REDLog3G10.DisplayName", "REDLog3G10" },
		{ "TSE_REDLog3G10.Name", "ETextureSourceEncoding::TSE_REDLog3G10" },
		{ "TSE_REDLog3G10.ToolTip", "RED Log3G10 source encoding to be linearized (before optional sRGB encoding is applied)." },
		{ "TSE_SLog1.DisplayName", "SLog1" },
		{ "TSE_SLog1.Name", "ETextureSourceEncoding::TSE_SLog1" },
		{ "TSE_SLog1.ToolTip", "Sony SLog1 source encoding to be linearized (before optional sRGB encoding is applied)." },
		{ "TSE_SLog2.DisplayName", "SLog2" },
		{ "TSE_SLog2.Name", "ETextureSourceEncoding::TSE_SLog2" },
		{ "TSE_SLog2.ToolTip", "Sony SLog2 source encoding to be linearized (before optional sRGB encoding is applied)." },
		{ "TSE_SLog3.DisplayName", "SLog3" },
		{ "TSE_SLog3.Name", "ETextureSourceEncoding::TSE_SLog3" },
		{ "TSE_SLog3.ToolTip", "Sony SLog3 source encoding to be linearized (before optional sRGB encoding is applied)." },
		{ "TSE_sRGB.DisplayName", "sRGB" },
		{ "TSE_sRGB.Name", "ETextureSourceEncoding::TSE_sRGB" },
		{ "TSE_sRGB.ToolTip", "sRGB source encoding to be linearized (before optional sRGB encoding is applied)." },
		{ "TSE_ST2084.DisplayName", "ST 2084/PQ" },
		{ "TSE_ST2084.Name", "ETextureSourceEncoding::TSE_ST2084" },
		{ "TSE_ST2084.ToolTip", "SMPTE ST 2084/PQ source encoding to be linearized (before optional sRGB encoding is applied)." },
		{ "TSE_VLog.DisplayName", "V-Log" },
		{ "TSE_VLog.Name", "ETextureSourceEncoding::TSE_VLog" },
		{ "TSE_VLog.ToolTip", "Panasonic V-Log source encoding to be linearized (before optional sRGB encoding is applied)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureSourceEncoding_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETextureSourceEncoding",
		"ETextureSourceEncoding",
		Z_Construct_UEnum_Engine_ETextureSourceEncoding_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureSourceEncoding_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETextureSourceEncoding_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureSourceEncoding_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETextureSourceEncoding()
	{
		if (!Z_Registration_Info_UEnum_ETextureSourceEncoding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureSourceEncoding.InnerSingleton, Z_Construct_UEnum_Engine_ETextureSourceEncoding_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureSourceEncoding.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureColorSpace;
	static UEnum* ETextureColorSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureColorSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureColorSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureColorSpace, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextureColorSpace"));
		}
		return Z_Registration_Info_UEnum_ETextureColorSpace.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureColorSpace>()
	{
		return ETextureColorSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETextureColorSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETextureColorSpace_Statics::Enumerators[] = {
		{ "ETextureColorSpace::TCS_None", (int64)ETextureColorSpace::TCS_None },
		{ "ETextureColorSpace::TCS_sRGB", (int64)ETextureColorSpace::TCS_sRGB },
		{ "ETextureColorSpace::TCS_Rec2020", (int64)ETextureColorSpace::TCS_Rec2020 },
		{ "ETextureColorSpace::TCS_ACESAP0", (int64)ETextureColorSpace::TCS_ACESAP0 },
		{ "ETextureColorSpace::TCS_ACESAP1", (int64)ETextureColorSpace::TCS_ACESAP1 },
		{ "ETextureColorSpace::TCS_P3DCI", (int64)ETextureColorSpace::TCS_P3DCI },
		{ "ETextureColorSpace::TCS_P3D65", (int64)ETextureColorSpace::TCS_P3D65 },
		{ "ETextureColorSpace::TCS_REDWideGamut", (int64)ETextureColorSpace::TCS_REDWideGamut },
		{ "ETextureColorSpace::TCS_SonySGamut3", (int64)ETextureColorSpace::TCS_SonySGamut3 },
		{ "ETextureColorSpace::TCS_SonySGamut3Cine", (int64)ETextureColorSpace::TCS_SonySGamut3Cine },
		{ "ETextureColorSpace::TCS_AlexaWideGamut", (int64)ETextureColorSpace::TCS_AlexaWideGamut },
		{ "ETextureColorSpace::TCS_CanonCinemaGamut", (int64)ETextureColorSpace::TCS_CanonCinemaGamut },
		{ "ETextureColorSpace::TCS_GoProProtuneNative", (int64)ETextureColorSpace::TCS_GoProProtuneNative },
		{ "ETextureColorSpace::TCS_PanasonicVGamut", (int64)ETextureColorSpace::TCS_PanasonicVGamut },
		{ "ETextureColorSpace::TCS_Custom", (int64)ETextureColorSpace::TCS_Custom },
		{ "ETextureColorSpace::TCS_MAX", (int64)ETextureColorSpace::TCS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETextureColorSpace_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** List of (source) texture color spaces, matching the list in ColorManagementDefines.h. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureDefines.h" },
		{ "TCS_ACESAP0.DIsplayName", "ACES AP0" },
		{ "TCS_ACESAP0.Name", "ETextureColorSpace::TCS_ACESAP0" },
		{ "TCS_ACESAP0.ToolTip", "ACES AP0 wide gamut primaries, with D60 white point." },
		{ "TCS_ACESAP1.DIsplayName", "ACES AP1 / ACEScg" },
		{ "TCS_ACESAP1.Name", "ETextureColorSpace::TCS_ACESAP1" },
		{ "TCS_ACESAP1.ToolTip", "ACES AP1 / ACEScg wide gamut primaries, with D60 white point." },
		{ "TCS_AlexaWideGamut.DisplayName", "Alexa Wide Gamut" },
		{ "TCS_AlexaWideGamut.Name", "ETextureColorSpace::TCS_AlexaWideGamut" },
		{ "TCS_AlexaWideGamut.ToolTip", "Alexa Wide Gamut primaries, with D65 white point." },
		{ "TCS_CanonCinemaGamut.DisplayName", "Canon Cinema Gamut" },
		{ "TCS_CanonCinemaGamut.Name", "ETextureColorSpace::TCS_CanonCinemaGamut" },
		{ "TCS_CanonCinemaGamut.ToolTip", "Canon Cinema Gamut primaries, with D65 white point." },
		{ "TCS_Custom.DisplayName", "Custom" },
		{ "TCS_Custom.Name", "ETextureColorSpace::TCS_Custom" },
		{ "TCS_Custom.ToolTip", "User defined color space and white point." },
		{ "TCS_GoProProtuneNative.DisplayName", "GoPro Protune Native" },
		{ "TCS_GoProProtuneNative.Name", "ETextureColorSpace::TCS_GoProProtuneNative" },
		{ "TCS_GoProProtuneNative.ToolTip", "GoPro Protune Native primaries, with D65 white point." },
		{ "TCS_MAX.Name", "ETextureColorSpace::TCS_MAX" },
		{ "TCS_None.DisplayName", "None" },
		{ "TCS_None.Name", "ETextureColorSpace::TCS_None" },
		{ "TCS_None.ToolTip", "No explicit color space definition." },
		{ "TCS_P3D65.DisplayName", "P3D65" },
		{ "TCS_P3D65.Name", "ETextureColorSpace::TCS_P3D65" },
		{ "TCS_P3D65.ToolTip", "P3 (Display) primaries, with D65 white point." },
		{ "TCS_P3DCI.DisplayName", "P3DCI" },
		{ "TCS_P3DCI.Name", "ETextureColorSpace::TCS_P3DCI" },
		{ "TCS_P3DCI.ToolTip", "P3 (Theater) primaries, with DCI Calibration white point." },
		{ "TCS_PanasonicVGamut.DisplayName", "Panasonic V-Gamut" },
		{ "TCS_PanasonicVGamut.Name", "ETextureColorSpace::TCS_PanasonicVGamut" },
		{ "TCS_PanasonicVGamut.ToolTip", "Panasonic V-Gamut primaries, with D65 white point." },
		{ "TCS_Rec2020.DisplayName", "Rec2020" },
		{ "TCS_Rec2020.Name", "ETextureColorSpace::TCS_Rec2020" },
		{ "TCS_Rec2020.ToolTip", "Rec2020 (BT.2020) primaries with D65 white point." },
		{ "TCS_REDWideGamut.DisplayName", "RED Wide Gamut" },
		{ "TCS_REDWideGamut.Name", "ETextureColorSpace::TCS_REDWideGamut" },
		{ "TCS_REDWideGamut.ToolTip", "RED Wide Gamut primaries, with D65 white point." },
		{ "TCS_SonySGamut3.DisplayName", "Sony S-Gamut3" },
		{ "TCS_SonySGamut3.Name", "ETextureColorSpace::TCS_SonySGamut3" },
		{ "TCS_SonySGamut3.ToolTip", "Sony S-Gamut/S-Gamut3 primaries, with D65 white point." },
		{ "TCS_SonySGamut3Cine.DisplayName", "Sony S-Gamut3 Cine" },
		{ "TCS_SonySGamut3Cine.Name", "ETextureColorSpace::TCS_SonySGamut3Cine" },
		{ "TCS_SonySGamut3Cine.ToolTip", "Sony S-Gamut3 Cine primaries, with D65 white point." },
		{ "TCS_sRGB.DisplayName", "sRGB / Rec709" },
		{ "TCS_sRGB.Name", "ETextureColorSpace::TCS_sRGB" },
		{ "TCS_sRGB.ToolTip", "sRGB / Rec709 (BT.709) color primaries, with D65 white point." },
		{ "ToolTip", "List of (source) texture color spaces, matching the list in ColorManagementDefines.h." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureColorSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETextureColorSpace",
		"ETextureColorSpace",
		Z_Construct_UEnum_Engine_ETextureColorSpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureColorSpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETextureColorSpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureColorSpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETextureColorSpace()
	{
		if (!Z_Registration_Info_UEnum_ETextureColorSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureColorSpace.InnerSingleton, Z_Construct_UEnum_Engine_ETextureColorSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureColorSpace.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_TextureCookPlatformTilingSettings;
	static UEnum* TextureCookPlatformTilingSettings_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_TextureCookPlatformTilingSettings.OuterSingleton)
		{
			Z_Registration_Info_UEnum_TextureCookPlatformTilingSettings.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_TextureCookPlatformTilingSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TextureCookPlatformTilingSettings"));
		}
		return Z_Registration_Info_UEnum_TextureCookPlatformTilingSettings.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<TextureCookPlatformTilingSettings>()
	{
		return TextureCookPlatformTilingSettings_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_TextureCookPlatformTilingSettings_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_TextureCookPlatformTilingSettings_Statics::Enumerators[] = {
		{ "TCPTS_FromTextureGroup", (int64)TCPTS_FromTextureGroup },
		{ "TCPTS_Tile", (int64)TCPTS_Tile },
		{ "TCPTS_DoNotTile", (int64)TCPTS_DoNotTile },
		{ "TCPTS_MAX", (int64)TCPTS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_TextureCookPlatformTilingSettings_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureDefines.h" },
		{ "TCPTS_DoNotTile.Comment", "/** The texture will not be tiled during the cook process, and will be tiled when uploaded to the GPU if the platform supports it. */" },
		{ "TCPTS_DoNotTile.DisplayName", "Do not tile during cook" },
		{ "TCPTS_DoNotTile.Name", "TCPTS_DoNotTile" },
		{ "TCPTS_DoNotTile.ToolTip", "The texture will not be tiled during the cook process, and will be tiled when uploaded to the GPU if the platform supports it." },
		{ "TCPTS_FromTextureGroup.Comment", "/** Get the tiling setting from the texture's group CookPlatformTilingDisabled setting. By default it's to tile during cook, unless it has been changed in the texture group */" },
		{ "TCPTS_FromTextureGroup.DisplayName", "FromTextureGroup" },
		{ "TCPTS_FromTextureGroup.Name", "TCPTS_FromTextureGroup" },
		{ "TCPTS_FromTextureGroup.ToolTip", "Get the tiling setting from the texture's group CookPlatformTilingDisabled setting. By default it's to tile during cook, unless it has been changed in the texture group" },
		{ "TCPTS_MAX.Name", "TCPTS_MAX" },
		{ "TCPTS_Tile.Comment", "/** The texture will be tiled during the cook process if the platform supports it. */" },
		{ "TCPTS_Tile.DisplayName", "Tile during cook" },
		{ "TCPTS_Tile.Name", "TCPTS_Tile" },
		{ "TCPTS_Tile.ToolTip", "The texture will be tiled during the cook process if the platform supports it." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_TextureCookPlatformTilingSettings_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"TextureCookPlatformTilingSettings",
		"TextureCookPlatformTilingSettings",
		Z_Construct_UEnum_Engine_TextureCookPlatformTilingSettings_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_TextureCookPlatformTilingSettings_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_TextureCookPlatformTilingSettings_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_TextureCookPlatformTilingSettings_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_TextureCookPlatformTilingSettings()
	{
		if (!Z_Registration_Info_UEnum_TextureCookPlatformTilingSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_TextureCookPlatformTilingSettings.InnerSingleton, Z_Construct_UEnum_Engine_TextureCookPlatformTilingSettings_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_TextureCookPlatformTilingSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureChromaticAdaptationMethod;
	static UEnum* ETextureChromaticAdaptationMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureChromaticAdaptationMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureChromaticAdaptationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureChromaticAdaptationMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextureChromaticAdaptationMethod"));
		}
		return Z_Registration_Info_UEnum_ETextureChromaticAdaptationMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureChromaticAdaptationMethod>()
	{
		return ETextureChromaticAdaptationMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETextureChromaticAdaptationMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETextureChromaticAdaptationMethod_Statics::Enumerators[] = {
		{ "ETextureChromaticAdaptationMethod::TCAM_None", (int64)ETextureChromaticAdaptationMethod::TCAM_None },
		{ "ETextureChromaticAdaptationMethod::TCAM_Bradford", (int64)ETextureChromaticAdaptationMethod::TCAM_Bradford },
		{ "ETextureChromaticAdaptationMethod::TCAM_CAT02", (int64)ETextureChromaticAdaptationMethod::TCAM_CAT02 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETextureChromaticAdaptationMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** List of chromatic adaptation methods, matching the list in ColorManagementDefines.h. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureDefines.h" },
		{ "TCAM_Bradford.DisplayName", "Bradford" },
		{ "TCAM_Bradford.Name", "ETextureChromaticAdaptationMethod::TCAM_Bradford" },
		{ "TCAM_Bradford.ToolTip", "Chromatic adaptation is applied using the Bradford method." },
		{ "TCAM_CAT02.DisplayName", "CAT02" },
		{ "TCAM_CAT02.Name", "ETextureChromaticAdaptationMethod::TCAM_CAT02" },
		{ "TCAM_CAT02.ToolTip", "Chromatic adaptation is applied using the CAT02 method." },
		{ "TCAM_None.DisplayName", "None" },
		{ "TCAM_None.Name", "ETextureChromaticAdaptationMethod::TCAM_None" },
		{ "TCAM_None.ToolTip", "No chromatic adaptation is applied." },
		{ "ToolTip", "List of chromatic adaptation methods, matching the list in ColorManagementDefines.h." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureChromaticAdaptationMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETextureChromaticAdaptationMethod",
		"ETextureChromaticAdaptationMethod",
		Z_Construct_UEnum_Engine_ETextureChromaticAdaptationMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureChromaticAdaptationMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETextureChromaticAdaptationMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureChromaticAdaptationMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETextureChromaticAdaptationMethod()
	{
		if (!Z_Registration_Info_UEnum_ETextureChromaticAdaptationMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureChromaticAdaptationMethod.InnerSingleton, Z_Construct_UEnum_Engine_ETextureChromaticAdaptationMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureChromaticAdaptationMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_TextureFilter;
	static UEnum* TextureFilter_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_TextureFilter.OuterSingleton)
		{
			Z_Registration_Info_UEnum_TextureFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_TextureFilter, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TextureFilter"));
		}
		return Z_Registration_Info_UEnum_TextureFilter.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<TextureFilter>()
	{
		return TextureFilter_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_TextureFilter_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_TextureFilter_Statics::Enumerators[] = {
		{ "TF_Nearest", (int64)TF_Nearest },
		{ "TF_Bilinear", (int64)TF_Bilinear },
		{ "TF_Trilinear", (int64)TF_Trilinear },
		{ "TF_Default", (int64)TF_Default },
		{ "TF_MAX", (int64)TF_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_TextureFilter_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureDefines.h" },
		{ "TF_Bilinear.DisplayName", "Bi-linear" },
		{ "TF_Bilinear.Name", "TF_Bilinear" },
		{ "TF_Default.Comment", "/** Use setting from the Texture Group. */" },
		{ "TF_Default.DisplayName", "Default (from Texture Group)" },
		{ "TF_Default.Name", "TF_Default" },
		{ "TF_Default.ToolTip", "Use setting from the Texture Group." },
		{ "TF_MAX.Name", "TF_MAX" },
		{ "TF_Nearest.DisplayName", "Nearest" },
		{ "TF_Nearest.Name", "TF_Nearest" },
		{ "TF_Trilinear.DisplayName", "Tri-linear" },
		{ "TF_Trilinear.Name", "TF_Trilinear" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_TextureFilter_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"TextureFilter",
		"TextureFilter",
		Z_Construct_UEnum_Engine_TextureFilter_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_TextureFilter_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_TextureFilter_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_TextureFilter_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_TextureFilter()
	{
		if (!Z_Registration_Info_UEnum_TextureFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_TextureFilter.InnerSingleton, Z_Construct_UEnum_Engine_TextureFilter_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_TextureFilter.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_TextureAddress;
	static UEnum* TextureAddress_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_TextureAddress.OuterSingleton)
		{
			Z_Registration_Info_UEnum_TextureAddress.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_TextureAddress, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TextureAddress"));
		}
		return Z_Registration_Info_UEnum_TextureAddress.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<TextureAddress>()
	{
		return TextureAddress_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_TextureAddress_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_TextureAddress_Statics::Enumerators[] = {
		{ "TA_Wrap", (int64)TA_Wrap },
		{ "TA_Clamp", (int64)TA_Clamp },
		{ "TA_Mirror", (int64)TA_Mirror },
		{ "TA_MAX", (int64)TA_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_TextureAddress_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureDefines.h" },
		{ "TA_Clamp.DisplayName", "Clamp" },
		{ "TA_Clamp.Name", "TA_Clamp" },
		{ "TA_MAX.Name", "TA_MAX" },
		{ "TA_Mirror.DisplayName", "Mirror" },
		{ "TA_Mirror.Name", "TA_Mirror" },
		{ "TA_Wrap.DisplayName", "Wrap" },
		{ "TA_Wrap.Name", "TA_Wrap" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_TextureAddress_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"TextureAddress",
		"TextureAddress",
		Z_Construct_UEnum_Engine_TextureAddress_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_TextureAddress_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_TextureAddress_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_TextureAddress_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_TextureAddress()
	{
		if (!Z_Registration_Info_UEnum_TextureAddress.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_TextureAddress.InnerSingleton, Z_Construct_UEnum_Engine_TextureAddress_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_TextureAddress.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureMipCount;
	static UEnum* ETextureMipCount_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureMipCount.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureMipCount.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureMipCount, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextureMipCount"));
		}
		return Z_Registration_Info_UEnum_ETextureMipCount.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureMipCount>()
	{
		return ETextureMipCount_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETextureMipCount_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETextureMipCount_Statics::Enumerators[] = {
		{ "TMC_ResidentMips", (int64)TMC_ResidentMips },
		{ "TMC_AllMips", (int64)TMC_AllMips },
		{ "TMC_AllMipsBiased", (int64)TMC_AllMipsBiased },
		{ "TMC_MAX", (int64)TMC_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETextureMipCount_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureDefines.h" },
		{ "TMC_AllMips.Name", "TMC_AllMips" },
		{ "TMC_AllMipsBiased.Name", "TMC_AllMipsBiased" },
		{ "TMC_MAX.Name", "TMC_MAX" },
		{ "TMC_ResidentMips.Name", "TMC_ResidentMips" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureMipCount_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETextureMipCount",
		"ETextureMipCount",
		Z_Construct_UEnum_Engine_ETextureMipCount_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureMipCount_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETextureMipCount_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureMipCount_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETextureMipCount()
	{
		if (!Z_Registration_Info_UEnum_ETextureMipCount.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureMipCount.InnerSingleton, Z_Construct_UEnum_Engine_ETextureMipCount_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureMipCount.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureCompressionQuality;
	static UEnum* ETextureCompressionQuality_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureCompressionQuality.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureCompressionQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureCompressionQuality, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextureCompressionQuality"));
		}
		return Z_Registration_Info_UEnum_ETextureCompressionQuality.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureCompressionQuality>()
	{
		return ETextureCompressionQuality_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETextureCompressionQuality_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETextureCompressionQuality_Statics::Enumerators[] = {
		{ "TCQ_Default", (int64)TCQ_Default },
		{ "TCQ_Lowest", (int64)TCQ_Lowest },
		{ "TCQ_Low", (int64)TCQ_Low },
		{ "TCQ_Medium", (int64)TCQ_Medium },
		{ "TCQ_High", (int64)TCQ_High },
		{ "TCQ_Highest", (int64)TCQ_Highest },
		{ "TCQ_MAX", (int64)TCQ_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETextureCompressionQuality_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// TextureCompressionQuality is used for ASTC\n" },
		{ "ModuleRelativePath", "Classes/Engine/TextureDefines.h" },
		{ "TCQ_Default.DisplayName", "Default" },
		{ "TCQ_Default.Name", "TCQ_Default" },
		{ "TCQ_High.DisplayName", "High (ASTC 6x6)" },
		{ "TCQ_High.Name", "TCQ_High" },
		{ "TCQ_Highest.DisplayName", "Highest (ASTC 4x4)" },
		{ "TCQ_Highest.Name", "TCQ_Highest" },
		{ "TCQ_Low.DisplayName", "Low (ASTC 10x10)" },
		{ "TCQ_Low.Name", "TCQ_Low" },
		{ "TCQ_Lowest.DisplayName", "Lowest (ASTC 12x12)" },
		{ "TCQ_Lowest.Name", "TCQ_Lowest" },
		{ "TCQ_MAX.Name", "TCQ_MAX" },
		{ "TCQ_Medium.DisplayName", "Medium (ASTC 8x8)" },
		{ "TCQ_Medium.Name", "TCQ_Medium" },
		{ "ToolTip", "TextureCompressionQuality is used for ASTC" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureCompressionQuality_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETextureCompressionQuality",
		"ETextureCompressionQuality",
		Z_Construct_UEnum_Engine_ETextureCompressionQuality_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureCompressionQuality_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETextureCompressionQuality_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureCompressionQuality_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETextureCompressionQuality()
	{
		if (!Z_Registration_Info_UEnum_ETextureCompressionQuality.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureCompressionQuality.InnerSingleton, Z_Construct_UEnum_Engine_ETextureCompressionQuality_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureCompressionQuality.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureDefines_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureDefines_h_Statics::EnumInfo[] = {
		{ TextureGroup_StaticEnum, TEXT("TextureGroup"), &Z_Registration_Info_UEnum_TextureGroup, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3720270347U) },
		{ TextureMipGenSettings_StaticEnum, TEXT("TextureMipGenSettings"), &Z_Registration_Info_UEnum_TextureMipGenSettings, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3224170763U) },
		{ ETexturePowerOfTwoSetting_StaticEnum, TEXT("ETexturePowerOfTwoSetting"), &Z_Registration_Info_UEnum_ETexturePowerOfTwoSetting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 306375142U) },
		{ ETextureSamplerFilter_StaticEnum, TEXT("ETextureSamplerFilter"), &Z_Registration_Info_UEnum_ETextureSamplerFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2799937327U) },
		{ ETextureMipLoadOptions_StaticEnum, TEXT("ETextureMipLoadOptions"), &Z_Registration_Info_UEnum_ETextureMipLoadOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1752741819U) },
		{ ETextureDownscaleOptions_StaticEnum, TEXT("ETextureDownscaleOptions"), &Z_Registration_Info_UEnum_ETextureDownscaleOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 15399735U) },
		{ ETextureLossyCompressionAmount_StaticEnum, TEXT("ETextureLossyCompressionAmount"), &Z_Registration_Info_UEnum_ETextureLossyCompressionAmount, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1372911062U) },
		{ ETextureEncodeSpeed_StaticEnum, TEXT("ETextureEncodeSpeed"), &Z_Registration_Info_UEnum_ETextureEncodeSpeed, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4229381481U) },
		{ ETextureClass_StaticEnum, TEXT("ETextureClass"), &Z_Registration_Info_UEnum_ETextureClass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3818878484U) },
		{ ECompositeTextureMode_StaticEnum, TEXT("ECompositeTextureMode"), &Z_Registration_Info_UEnum_ECompositeTextureMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1321184244U) },
		{ ETextureSourceCompressionFormat_StaticEnum, TEXT("ETextureSourceCompressionFormat"), &Z_Registration_Info_UEnum_ETextureSourceCompressionFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 261538506U) },
		{ ETextureSourceFormat_StaticEnum, TEXT("ETextureSourceFormat"), &Z_Registration_Info_UEnum_ETextureSourceFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1845410916U) },
		{ TextureCompressionSettings_StaticEnum, TEXT("TextureCompressionSettings"), &Z_Registration_Info_UEnum_TextureCompressionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3296291951U) },
		{ ETextureSourceEncoding_StaticEnum, TEXT("ETextureSourceEncoding"), &Z_Registration_Info_UEnum_ETextureSourceEncoding, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3747482882U) },
		{ ETextureColorSpace_StaticEnum, TEXT("ETextureColorSpace"), &Z_Registration_Info_UEnum_ETextureColorSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2172019913U) },
		{ TextureCookPlatformTilingSettings_StaticEnum, TEXT("TextureCookPlatformTilingSettings"), &Z_Registration_Info_UEnum_TextureCookPlatformTilingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2163631284U) },
		{ ETextureChromaticAdaptationMethod_StaticEnum, TEXT("ETextureChromaticAdaptationMethod"), &Z_Registration_Info_UEnum_ETextureChromaticAdaptationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 171705U) },
		{ TextureFilter_StaticEnum, TEXT("TextureFilter"), &Z_Registration_Info_UEnum_TextureFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1243172109U) },
		{ TextureAddress_StaticEnum, TEXT("TextureAddress"), &Z_Registration_Info_UEnum_TextureAddress, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1462649072U) },
		{ ETextureMipCount_StaticEnum, TEXT("ETextureMipCount"), &Z_Registration_Info_UEnum_ETextureMipCount, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 35062266U) },
		{ ETextureCompressionQuality_StaticEnum, TEXT("ETextureCompressionQuality"), &Z_Registration_Info_UEnum_ETextureCompressionQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1779627810U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureDefines_h_3478258113(TEXT("/Script/Engine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureDefines_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureDefines_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
