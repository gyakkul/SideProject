// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/SceneTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialProperty();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomPrimitiveData();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomPrimitiveData;
class UScriptStruct* FCustomPrimitiveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomPrimitiveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomPrimitiveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomPrimitiveData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CustomPrimitiveData"));
	}
	return Z_Registration_Info_UScriptStruct_CustomPrimitiveData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCustomPrimitiveData>()
{
	return FCustomPrimitiveData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Custom primitive data payload. */" },
		{ "ModuleRelativePath", "Public/SceneTypes.h" },
		{ "ToolTip", "Custom primitive data payload." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomPrimitiveData>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/SceneTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomPrimitiveData, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CustomPrimitiveData",
		sizeof(FCustomPrimitiveData),
		alignof(FCustomPrimitiveData),
		Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomPrimitiveData()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomPrimitiveData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomPrimitiveData.InnerSingleton, Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomPrimitiveData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialProperty;
	static UEnum* EMaterialProperty_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMaterialProperty.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMaterialProperty.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialProperty, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialProperty"));
		}
		return Z_Registration_Info_UEnum_EMaterialProperty.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMaterialProperty>()
	{
		return EMaterialProperty_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMaterialProperty_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMaterialProperty_Statics::Enumerators[] = {
		{ "MP_EmissiveColor", (int64)MP_EmissiveColor },
		{ "MP_Opacity", (int64)MP_Opacity },
		{ "MP_OpacityMask", (int64)MP_OpacityMask },
		{ "MP_DiffuseColor", (int64)MP_DiffuseColor },
		{ "MP_SpecularColor", (int64)MP_SpecularColor },
		{ "MP_BaseColor", (int64)MP_BaseColor },
		{ "MP_Metallic", (int64)MP_Metallic },
		{ "MP_Specular", (int64)MP_Specular },
		{ "MP_Roughness", (int64)MP_Roughness },
		{ "MP_Anisotropy", (int64)MP_Anisotropy },
		{ "MP_Normal", (int64)MP_Normal },
		{ "MP_Tangent", (int64)MP_Tangent },
		{ "MP_WorldPositionOffset", (int64)MP_WorldPositionOffset },
		{ "MP_WorldDisplacement_DEPRECATED", (int64)MP_WorldDisplacement_DEPRECATED },
		{ "MP_TessellationMultiplier_DEPRECATED", (int64)MP_TessellationMultiplier_DEPRECATED },
		{ "MP_SubsurfaceColor", (int64)MP_SubsurfaceColor },
		{ "MP_CustomData0", (int64)MP_CustomData0 },
		{ "MP_CustomData1", (int64)MP_CustomData1 },
		{ "MP_AmbientOcclusion", (int64)MP_AmbientOcclusion },
		{ "MP_Refraction", (int64)MP_Refraction },
		{ "MP_CustomizedUVs0", (int64)MP_CustomizedUVs0 },
		{ "MP_CustomizedUVs1", (int64)MP_CustomizedUVs1 },
		{ "MP_CustomizedUVs2", (int64)MP_CustomizedUVs2 },
		{ "MP_CustomizedUVs3", (int64)MP_CustomizedUVs3 },
		{ "MP_CustomizedUVs4", (int64)MP_CustomizedUVs4 },
		{ "MP_CustomizedUVs5", (int64)MP_CustomizedUVs5 },
		{ "MP_CustomizedUVs6", (int64)MP_CustomizedUVs6 },
		{ "MP_CustomizedUVs7", (int64)MP_CustomizedUVs7 },
		{ "MP_PixelDepthOffset", (int64)MP_PixelDepthOffset },
		{ "MP_ShadingModel", (int64)MP_ShadingModel },
		{ "MP_FrontMaterial", (int64)MP_FrontMaterial },
		{ "MP_SurfaceThickness", (int64)MP_SurfaceThickness },
		{ "MP_MaterialAttributes", (int64)MP_MaterialAttributes },
		{ "MP_CustomOutput", (int64)MP_CustomOutput },
		{ "MP_MAX", (int64)MP_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMaterialProperty_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n//\x09""EMaterialProperty\n//\n" },
		{ "ModuleRelativePath", "Public/SceneTypes.h" },
		{ "MP_AmbientOcclusion.DisplayName", "Ambient Occlusion" },
		{ "MP_AmbientOcclusion.Name", "MP_AmbientOcclusion" },
		{ "MP_Anisotropy.DisplayName", "Anisotropy" },
		{ "MP_Anisotropy.Name", "MP_Anisotropy" },
		{ "MP_BaseColor.Comment", "// used in Lightmass, not exposed to user, derived from: SpecularColor, Metallic, Specular\x09""Also used in Substrate which uses Albedo/F0 parameterization\n" },
		{ "MP_BaseColor.DisplayName", "Diffuse" },
		{ "MP_BaseColor.Name", "MP_BaseColor" },
		{ "MP_BaseColor.ToolTip", "used in Lightmass, not exposed to user, derived from: SpecularColor, Metallic, Specular        Also used in Substrate which uses Albedo/F0 parameterization" },
		{ "MP_CustomData0.Hidden", "" },
		{ "MP_CustomData0.Name", "MP_CustomData0" },
		{ "MP_CustomData1.Hidden", "" },
		{ "MP_CustomData1.Name", "MP_CustomData1" },
		{ "MP_CustomizedUVs0.Hidden", "" },
		{ "MP_CustomizedUVs0.Name", "MP_CustomizedUVs0" },
		{ "MP_CustomizedUVs1.Hidden", "" },
		{ "MP_CustomizedUVs1.Name", "MP_CustomizedUVs1" },
		{ "MP_CustomizedUVs2.Hidden", "" },
		{ "MP_CustomizedUVs2.Name", "MP_CustomizedUVs2" },
		{ "MP_CustomizedUVs3.Hidden", "" },
		{ "MP_CustomizedUVs3.Name", "MP_CustomizedUVs3" },
		{ "MP_CustomizedUVs4.Hidden", "" },
		{ "MP_CustomizedUVs4.Name", "MP_CustomizedUVs4" },
		{ "MP_CustomizedUVs5.Hidden", "" },
		{ "MP_CustomizedUVs5.Name", "MP_CustomizedUVs5" },
		{ "MP_CustomizedUVs6.Hidden", "" },
		{ "MP_CustomizedUVs6.Name", "MP_CustomizedUVs6" },
		{ "MP_CustomizedUVs7.Hidden", "" },
		{ "MP_CustomizedUVs7.Name", "MP_CustomizedUVs7" },
		{ "MP_CustomOutput.Hidden", "" },
		{ "MP_CustomOutput.Name", "MP_CustomOutput" },
		{ "MP_DiffuseColor.Hidden", "" },
		{ "MP_DiffuseColor.Name", "MP_DiffuseColor" },
		{ "MP_EmissiveColor.DisplayName", "Emissive" },
		{ "MP_EmissiveColor.Name", "MP_EmissiveColor" },
		{ "MP_FrontMaterial.Hidden", "" },
		{ "MP_FrontMaterial.Name", "MP_FrontMaterial" },
		{ "MP_MaterialAttributes.Comment", "//^^^ New material properties go above here ^^^^\n" },
		{ "MP_MaterialAttributes.Hidden", "" },
		{ "MP_MaterialAttributes.Name", "MP_MaterialAttributes" },
		{ "MP_MaterialAttributes.ToolTip", "^^^ New material properties go above here ^^^^" },
		{ "MP_MAX.DisplayName", "None" },
		{ "MP_MAX.Name", "MP_MAX" },
		{ "MP_Metallic.DisplayName", "Metallic" },
		{ "MP_Metallic.Name", "MP_Metallic" },
		{ "MP_Normal.DisplayName", "Normal" },
		{ "MP_Normal.Name", "MP_Normal" },
		{ "MP_Opacity.DisplayName", "Opacity" },
		{ "MP_Opacity.Name", "MP_Opacity" },
		{ "MP_OpacityMask.DisplayName", "Opacity Mask" },
		{ "MP_OpacityMask.Name", "MP_OpacityMask" },
		{ "MP_PixelDepthOffset.Hidden", "" },
		{ "MP_PixelDepthOffset.Name", "MP_PixelDepthOffset" },
		{ "MP_Refraction.DisplayName", "Refraction" },
		{ "MP_Refraction.Name", "MP_Refraction" },
		{ "MP_Roughness.DisplayName", "Roughness " },
		{ "MP_Roughness.Name", "MP_Roughness" },
		{ "MP_ShadingModel.Hidden", "" },
		{ "MP_ShadingModel.Name", "MP_ShadingModel" },
		{ "MP_Specular.DisplayName", "Specular" },
		{ "MP_Specular.Name", "MP_Specular" },
		{ "MP_SpecularColor.Comment", "// used in Lightmass, not exposed to user, computed from: BaseColor, Metallic\x09\x09\x09\x09""Also used in Substrate which uses Albedo/F0 parameterization\n" },
		{ "MP_SpecularColor.Hidden", "" },
		{ "MP_SpecularColor.Name", "MP_SpecularColor" },
		{ "MP_SpecularColor.ToolTip", "used in Lightmass, not exposed to user, computed from: BaseColor, Metallic                             Also used in Substrate which uses Albedo/F0 parameterization" },
		{ "MP_SubsurfaceColor.DisplayName", "Subsurface" },
		{ "MP_SubsurfaceColor.Name", "MP_SubsurfaceColor" },
		{ "MP_SurfaceThickness.Hidden", "" },
		{ "MP_SurfaceThickness.Name", "MP_SurfaceThickness" },
		{ "MP_Tangent.DisplayName", "Tangent" },
		{ "MP_Tangent.Name", "MP_Tangent" },
		{ "MP_TessellationMultiplier_DEPRECATED.Hidden", "" },
		{ "MP_TessellationMultiplier_DEPRECATED.Name", "MP_TessellationMultiplier_DEPRECATED" },
		{ "MP_WorldDisplacement_DEPRECATED.Hidden", "" },
		{ "MP_WorldDisplacement_DEPRECATED.Name", "MP_WorldDisplacement_DEPRECATED" },
		{ "MP_WorldPositionOffset.Hidden", "" },
		{ "MP_WorldPositionOffset.Name", "MP_WorldPositionOffset" },
		{ "ToolTip", "EMaterialProperty" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMaterialProperty_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMaterialProperty",
		"EMaterialProperty",
		Z_Construct_UEnum_Engine_EMaterialProperty_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialProperty_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMaterialProperty_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialProperty_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMaterialProperty()
	{
		if (!Z_Registration_Info_UEnum_EMaterialProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialProperty.InnerSingleton, Z_Construct_UEnum_Engine_EMaterialProperty_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMaterialProperty.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SceneTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SceneTypes_h_Statics::EnumInfo[] = {
		{ EMaterialProperty_StaticEnum, TEXT("EMaterialProperty"), &Z_Registration_Info_UEnum_EMaterialProperty, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3911056803U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SceneTypes_h_Statics::ScriptStructInfo[] = {
		{ FCustomPrimitiveData::StaticStruct, Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::NewStructOps, TEXT("CustomPrimitiveData"), &Z_Registration_Info_UScriptStruct_CustomPrimitiveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomPrimitiveData), 2560451921U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SceneTypes_h_3376212866(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SceneTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SceneTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SceneTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SceneTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
