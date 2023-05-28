// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraBakerOutputVolumeTexture.h"
#include "../Classes/NiagaraBakerOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraBakerOutputVolumeTexture() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerOutput();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBakerTextureSource();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraBakerOutputVolumeTexture::StaticRegisterNativesUNiagaraBakerOutputVolumeTexture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraBakerOutputVolumeTexture);
	UClass* Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_NoRegister()
	{
		return UNiagaraBakerOutputVolumeTexture::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateAtlas_MetaData[];
#endif
		static void NewProp_bGenerateAtlas_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateAtlas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateFrames_MetaData[];
#endif
		static void NewProp_bGenerateFrames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportFrames_MetaData[];
#endif
		static void NewProp_bExportFrames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtlasAssetPathFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AtlasAssetPathFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FramesAssetPathFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FramesAssetPathFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FramesExportPathFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FramesExportPathFormat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraBakerOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Volume Texture Output" },
		{ "IncludePath", "NiagaraBakerOutputVolumeTexture.h" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputVolumeTexture.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_SourceBinding_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputVolumeTexture.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_SourceBinding = { "SourceBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerOutputVolumeTexture, SourceBinding), Z_Construct_UScriptStruct_FNiagaraBakerTextureSource, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_SourceBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_SourceBinding_MetaData)) }; // 3396379681
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_bGenerateAtlas_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputVolumeTexture.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_bGenerateAtlas_SetBit(void* Obj)
	{
		((UNiagaraBakerOutputVolumeTexture*)Obj)->bGenerateAtlas = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_bGenerateAtlas = { "bGenerateAtlas", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraBakerOutputVolumeTexture), &Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_bGenerateAtlas_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_bGenerateAtlas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_bGenerateAtlas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_bGenerateFrames_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputVolumeTexture.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_bGenerateFrames_SetBit(void* Obj)
	{
		((UNiagaraBakerOutputVolumeTexture*)Obj)->bGenerateFrames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_bGenerateFrames = { "bGenerateFrames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraBakerOutputVolumeTexture), &Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_bGenerateFrames_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_bGenerateFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_bGenerateFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_bExportFrames_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputVolumeTexture.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_bExportFrames_SetBit(void* Obj)
	{
		((UNiagaraBakerOutputVolumeTexture*)Obj)->bExportFrames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_bExportFrames = { "bExportFrames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraBakerOutputVolumeTexture), &Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_bExportFrames_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_bExportFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_bExportFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_AtlasAssetPathFormat_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09When enabled a volume atlas is created, the atlas is along X & Y not Z based on baker settings.\n\x09*/" },
		{ "EditCondition", "bGenerateAtlas" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputVolumeTexture.h" },
		{ "ToolTip", "When enabled a volume atlas is created, the atlas is along X & Y not Z based on baker settings." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_AtlasAssetPathFormat = { "AtlasAssetPathFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerOutputVolumeTexture, AtlasAssetPathFormat), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_AtlasAssetPathFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_AtlasAssetPathFormat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_FramesAssetPathFormat_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09When enabled each frame will create an asset.\n\x09*/" },
		{ "EditCondition", "bGenerateFrames" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputVolumeTexture.h" },
		{ "ToolTip", "When enabled each frame will create an asset." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_FramesAssetPathFormat = { "FramesAssetPathFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerOutputVolumeTexture, FramesAssetPathFormat), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_FramesAssetPathFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_FramesAssetPathFormat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_FramesExportPathFormat_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09When enabled each frame will be exported to the output path using the format extension.\n\x09*/" },
		{ "EditCondition", "bExportFrames" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputVolumeTexture.h" },
		{ "ToolTip", "When enabled each frame will be exported to the output path using the format extension." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_FramesExportPathFormat = { "FramesExportPathFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerOutputVolumeTexture, FramesExportPathFormat), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_FramesExportPathFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_FramesExportPathFormat_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_SourceBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_bGenerateAtlas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_bGenerateFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_bExportFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_AtlasAssetPathFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_FramesAssetPathFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::NewProp_FramesExportPathFormat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraBakerOutputVolumeTexture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::ClassParams = {
		&UNiagaraBakerOutputVolumeTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture()
	{
		if (!Z_Registration_Info_UClass_UNiagaraBakerOutputVolumeTexture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraBakerOutputVolumeTexture.OuterSingleton, Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraBakerOutputVolumeTexture.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraBakerOutputVolumeTexture>()
	{
		return UNiagaraBakerOutputVolumeTexture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraBakerOutputVolumeTexture);
	UNiagaraBakerOutputVolumeTexture::~UNiagaraBakerOutputVolumeTexture() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputVolumeTexture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputVolumeTexture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraBakerOutputVolumeTexture, UNiagaraBakerOutputVolumeTexture::StaticClass, TEXT("UNiagaraBakerOutputVolumeTexture"), &Z_Registration_Info_UClass_UNiagaraBakerOutputVolumeTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraBakerOutputVolumeTexture), 143116966U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputVolumeTexture_h_3216272079(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputVolumeTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputVolumeTexture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
