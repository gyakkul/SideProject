// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeMaterialInstanceConstant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeMaterialInstanceConstant() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMaterialInstanceConstant();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeMaterialInstanceConstant_NoRegister();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeMaterialTextureStreamingInfo;
class UScriptStruct* FLandscapeMaterialTextureStreamingInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeMaterialTextureStreamingInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeMaterialTextureStreamingInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeMaterialTextureStreamingInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeMaterialTextureStreamingInfo.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeMaterialTextureStreamingInfo>()
{
	return FLandscapeMaterialTextureStreamingInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TextureName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TexelFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TexelFactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeMaterialTextureStreamingInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewProp_TextureName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewProp_TextureName = { "TextureName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeMaterialTextureStreamingInfo, TextureName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewProp_TextureName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewProp_TextureName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewProp_TexelFactor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewProp_TexelFactor = { "TexelFactor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeMaterialTextureStreamingInfo, TexelFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewProp_TexelFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewProp_TexelFactor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewProp_TextureName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewProp_TexelFactor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LandscapeMaterialTextureStreamingInfo",
		sizeof(FLandscapeMaterialTextureStreamingInfo),
		alignof(FLandscapeMaterialTextureStreamingInfo),
		Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_LandscapeMaterialTextureStreamingInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeMaterialTextureStreamingInfo.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LandscapeMaterialTextureStreamingInfo.InnerSingleton;
	}
	void ULandscapeMaterialInstanceConstant::StaticRegisterNativesULandscapeMaterialInstanceConstant()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeMaterialInstanceConstant);
	UClass* Z_Construct_UClass_ULandscapeMaterialInstanceConstant_NoRegister()
	{
		return ULandscapeMaterialInstanceConstant::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureStreamingInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureStreamingInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureStreamingInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLayerThumbnail_MetaData[];
#endif
		static void NewProp_bIsLayerThumbnail_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLayerThumbnail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableTessellation_MetaData[];
#endif
		static void NewProp_bDisableTessellation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableTessellation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMobile_MetaData[];
#endif
		static void NewProp_bMobile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEditorToolUsage_MetaData[];
#endif
		static void NewProp_bEditorToolUsage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditorToolUsage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialInstanceConstant,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Thumbnail" },
		{ "IncludePath", "LandscapeMaterialInstanceConstant.h" },
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_TextureStreamingInfo_Inner = { "TextureStreamingInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo, METADATA_PARAMS(nullptr, 0) }; // 1440200111
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_TextureStreamingInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_TextureStreamingInfo = { "TextureStreamingInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeMaterialInstanceConstant, TextureStreamingInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_TextureStreamingInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_TextureStreamingInfo_MetaData)) }; // 1440200111
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bIsLayerThumbnail_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bIsLayerThumbnail_SetBit(void* Obj)
	{
		((ULandscapeMaterialInstanceConstant*)Obj)->bIsLayerThumbnail = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bIsLayerThumbnail = { "bIsLayerThumbnail", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULandscapeMaterialInstanceConstant), &Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bIsLayerThumbnail_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bIsLayerThumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bIsLayerThumbnail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bDisableTessellation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bDisableTessellation_SetBit(void* Obj)
	{
		((ULandscapeMaterialInstanceConstant*)Obj)->bDisableTessellation_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bDisableTessellation = { "bDisableTessellation", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULandscapeMaterialInstanceConstant), &Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bDisableTessellation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bDisableTessellation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bDisableTessellation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bMobile_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bMobile_SetBit(void* Obj)
	{
		((ULandscapeMaterialInstanceConstant*)Obj)->bMobile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bMobile = { "bMobile", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULandscapeMaterialInstanceConstant), &Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bMobile_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bMobile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bMobile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bEditorToolUsage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeMaterialInstanceConstant.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bEditorToolUsage_SetBit(void* Obj)
	{
		((ULandscapeMaterialInstanceConstant*)Obj)->bEditorToolUsage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bEditorToolUsage = { "bEditorToolUsage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULandscapeMaterialInstanceConstant), &Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bEditorToolUsage_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bEditorToolUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bEditorToolUsage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_TextureStreamingInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_TextureStreamingInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bIsLayerThumbnail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bDisableTessellation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bMobile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::NewProp_bEditorToolUsage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeMaterialInstanceConstant>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::ClassParams = {
		&ULandscapeMaterialInstanceConstant::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::PropPointers),
		0,
		0x008820A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeMaterialInstanceConstant()
	{
		if (!Z_Registration_Info_UClass_ULandscapeMaterialInstanceConstant.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeMaterialInstanceConstant.OuterSingleton, Z_Construct_UClass_ULandscapeMaterialInstanceConstant_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULandscapeMaterialInstanceConstant.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeMaterialInstanceConstant>()
	{
		return ULandscapeMaterialInstanceConstant::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeMaterialInstanceConstant);
	ULandscapeMaterialInstanceConstant::~ULandscapeMaterialInstanceConstant() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMaterialInstanceConstant_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMaterialInstanceConstant_h_Statics::ScriptStructInfo[] = {
		{ FLandscapeMaterialTextureStreamingInfo::StaticStruct, Z_Construct_UScriptStruct_FLandscapeMaterialTextureStreamingInfo_Statics::NewStructOps, TEXT("LandscapeMaterialTextureStreamingInfo"), &Z_Registration_Info_UScriptStruct_LandscapeMaterialTextureStreamingInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeMaterialTextureStreamingInfo), 1440200111U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMaterialInstanceConstant_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeMaterialInstanceConstant, ULandscapeMaterialInstanceConstant::StaticClass, TEXT("ULandscapeMaterialInstanceConstant"), &Z_Registration_Info_UClass_ULandscapeMaterialInstanceConstant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeMaterialInstanceConstant), 2114695650U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMaterialInstanceConstant_h_3639662551(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMaterialInstanceConstant_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMaterialInstanceConstant_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMaterialInstanceConstant_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeMaterialInstanceConstant_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
