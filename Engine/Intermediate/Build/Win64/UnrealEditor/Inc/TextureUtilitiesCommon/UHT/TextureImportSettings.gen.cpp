// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TextureImportSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureImportSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	TEXTUREUTILITIESCOMMON_API UClass* Z_Construct_UClass_UTextureImportSettings();
	TEXTUREUTILITIESCOMMON_API UClass* Z_Construct_UClass_UTextureImportSettings_NoRegister();
	TEXTUREUTILITIESCOMMON_API UEnum* Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat();
	UPackage* Z_Construct_UPackage__Script_TextureUtilitiesCommon();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureImportFloatingPointFormat;
	static UEnum* ETextureImportFloatingPointFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureImportFloatingPointFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureImportFloatingPointFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat, (UObject*)Z_Construct_UPackage__Script_TextureUtilitiesCommon(), TEXT("ETextureImportFloatingPointFormat"));
		}
		return Z_Registration_Info_UEnum_ETextureImportFloatingPointFormat.OuterSingleton;
	}
	template<> TEXTUREUTILITIESCOMMON_API UEnum* StaticEnum<ETextureImportFloatingPointFormat>()
	{
		return ETextureImportFloatingPointFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat_Statics::Enumerators[] = {
		{ "ETextureImportFloatingPointFormat::HDR_F16", (int64)ETextureImportFloatingPointFormat::HDR_F16 },
		{ "ETextureImportFloatingPointFormat::HDRCompressed_BC6", (int64)ETextureImportFloatingPointFormat::HDRCompressed_BC6 },
		{ "ETextureImportFloatingPointFormat::HDR_F32_or_F16", (int64)ETextureImportFloatingPointFormat::HDR_F32_or_F16 },
		{ "ETextureImportFloatingPointFormat::PreviousDefault", (int64)ETextureImportFloatingPointFormat::PreviousDefault },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/* What CompressionSettings runtime format should imported floating point textures use\n */" },
		{ "HDR_F16.Comment", "/* Use \"HDR\" RGBA16F */" },
		{ "HDR_F16.Name", "ETextureImportFloatingPointFormat::HDR_F16" },
		{ "HDR_F16.ToolTip", "Use \"HDR\" RGBA16F" },
		{ "HDR_F32_or_F16.Comment", "/* Use 32-bit float formats if the source is 32-bit, otherwise use 16-bit HDR */" },
		{ "HDR_F32_or_F16.Name", "ETextureImportFloatingPointFormat::HDR_F32_or_F16" },
		{ "HDR_F32_or_F16.ToolTip", "Use 32-bit float formats if the source is 32-bit, otherwise use 16-bit HDR" },
		{ "HDRCompressed_BC6.Comment", "/* Use \"HDRCompressed\" , BC6H */" },
		{ "HDRCompressed_BC6.Name", "ETextureImportFloatingPointFormat::HDRCompressed_BC6" },
		{ "HDRCompressed_BC6.ToolTip", "Use \"HDRCompressed\" , BC6H" },
		{ "ModuleRelativePath", "Public/TextureImportSettings.h" },
		{ "PreviousDefault.Hidden", "" },
		{ "PreviousDefault.Name", "ETextureImportFloatingPointFormat::PreviousDefault" },
		{ "ToolTip", "What CompressionSettings runtime format should imported floating point textures use" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TextureUtilitiesCommon,
		nullptr,
		"ETextureImportFloatingPointFormat",
		"ETextureImportFloatingPointFormat",
		Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat()
	{
		if (!Z_Registration_Info_UEnum_ETextureImportFloatingPointFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureImportFloatingPointFormat.InnerSingleton, Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureImportFloatingPointFormat.InnerSingleton;
	}
	void UTextureImportSettings::StaticRegisterNativesUTextureImportSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureImportSettings);
	UClass* Z_Construct_UClass_UTextureImportSettings_NoRegister()
	{
		return UTextureImportSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTextureImportSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoVTSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AutoVTSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNormalizeNormals_MetaData[];
#endif
		static void NewProp_bEnableNormalizeNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNormalizeNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFastMipFilter_MetaData[];
#endif
		static void NewProp_bEnableFastMipFilter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFastMipFilter;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompressedFormatForFloatTextures_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressedFormatForFloatTextures_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CompressedFormatForFloatTextures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureImportSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_TextureUtilitiesCommon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureImportSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Texture Import" },
		{ "IncludePath", "TextureImportSettings.h" },
		{ "ModuleRelativePath", "Public/TextureImportSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_AutoVTSize_MetaData[] = {
		{ "Category", "VirtualTextures" },
		{ "DisplayName", "Auto Virtual Texturing Size" },
		{ "ModuleRelativePath", "Public/TextureImportSettings.h" },
		{ "ToolTip", "Automatically enable the 'Virtual Texture Streaming' texture setting for textures larger than or equal to this size. This setting will not affect existing textures in the project." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_AutoVTSize = { "AutoVTSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureImportSettings, AutoVTSize), METADATA_PARAMS(Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_AutoVTSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_AutoVTSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_bEnableNormalizeNormals_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "DisplayName", "Turn on NormalizeNormals for normal maps" },
		{ "ModuleRelativePath", "Public/TextureImportSettings.h" },
		{ "ToolTip", "NormalizeNormals makes more correct normals in mip maps; it is recommended, but can be turned off to maintain legacy behavior. This setting is applied to newly imported textures, it does not affect existing textures in the project." },
	};
#endif
	void Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_bEnableNormalizeNormals_SetBit(void* Obj)
	{
		((UTextureImportSettings*)Obj)->bEnableNormalizeNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_bEnableNormalizeNormals = { "bEnableNormalizeNormals", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTextureImportSettings), &Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_bEnableNormalizeNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_bEnableNormalizeNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_bEnableNormalizeNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_bEnableFastMipFilter_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "DisplayName", "Turn on fast mip generation filter" },
		{ "ModuleRelativePath", "Public/TextureImportSettings.h" },
		{ "ToolTip", "Use the fast mip filter on new textures; it is recommended, but can be turned off to maintain legacy behavior. This setting is applied to newly imported textures, it does not affect existing textures in the project." },
	};
#endif
	void Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_bEnableFastMipFilter_SetBit(void* Obj)
	{
		((UTextureImportSettings*)Obj)->bEnableFastMipFilter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_bEnableFastMipFilter = { "bEnableFastMipFilter", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTextureImportSettings), &Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_bEnableFastMipFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_bEnableFastMipFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_bEnableFastMipFilter_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_CompressedFormatForFloatTextures_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_CompressedFormatForFloatTextures_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "DisplayName", "CompressionFormat to use for new float textures" },
		{ "ModuleRelativePath", "Public/TextureImportSettings.h" },
		{ "ToolTip", "Optionally use HDRCompressed (BC6H), or 32-bit adaptively, instead of HDR (RGBA16F) for floating point textures.  This setting is applied to newly imported textures, it does not affect existing textures in the project." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_CompressedFormatForFloatTextures = { "CompressedFormatForFloatTextures", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureImportSettings, CompressedFormatForFloatTextures), Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat, METADATA_PARAMS(Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_CompressedFormatForFloatTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_CompressedFormatForFloatTextures_MetaData)) }; // 3867853934
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureImportSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_AutoVTSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_bEnableNormalizeNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_bEnableFastMipFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_CompressedFormatForFloatTextures_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_CompressedFormatForFloatTextures,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureImportSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureImportSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureImportSettings_Statics::ClassParams = {
		&UTextureImportSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextureImportSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextureImportSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureImportSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureImportSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureImportSettings()
	{
		if (!Z_Registration_Info_UClass_UTextureImportSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureImportSettings.OuterSingleton, Z_Construct_UClass_UTextureImportSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureImportSettings.OuterSingleton;
	}
	template<> TEXTUREUTILITIESCOMMON_API UClass* StaticClass<UTextureImportSettings>()
	{
		return UTextureImportSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureImportSettings);
	UTextureImportSettings::~UTextureImportSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_Statics::EnumInfo[] = {
		{ ETextureImportFloatingPointFormat_StaticEnum, TEXT("ETextureImportFloatingPointFormat"), &Z_Registration_Info_UEnum_ETextureImportFloatingPointFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3867853934U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureImportSettings, UTextureImportSettings::StaticClass, TEXT("UTextureImportSettings"), &Z_Registration_Info_UClass_UTextureImportSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureImportSettings), 3881262993U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_3844093594(TEXT("/Script/TextureUtilitiesCommon"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
