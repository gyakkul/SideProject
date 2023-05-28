// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeightfieldMinMaxTexture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeightfieldMinMaxTexture() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VirtualHeightfieldMesh();
	VIRTUALHEIGHTFIELDMESH_API UClass* Z_Construct_UClass_UHeightfieldMinMaxTexture();
	VIRTUALHEIGHTFIELDMESH_API UClass* Z_Construct_UClass_UHeightfieldMinMaxTexture_NoRegister();
// End Cross Module References
	void UHeightfieldMinMaxTexture::StaticRegisterNativesUHeightfieldMinMaxTexture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeightfieldMinMaxTexture);
	UClass* Z_Construct_UClass_UHeightfieldMinMaxTexture_NoRegister()
	{
		return UHeightfieldMinMaxTexture::StaticClass();
	}
	struct Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodBiasTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LodBiasTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodBiasMinMaxTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LodBiasMinMaxTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCPULevels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCPULevels;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureDataSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureDataSize;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TextureDataMips_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureDataMips_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureDataMips;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualHeightfieldMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n * Container for a UTexture2D that can be built from a FHeightfieldMinMaxTextureBuildDesc description.\n */" },
		{ "IncludePath", "HeightfieldMinMaxTexture.h" },
		{ "ModuleRelativePath", "Public/HeightfieldMinMaxTexture.h" },
		{ "ToolTip", "Container for a UTexture2D that can be built from a FHeightfieldMinMaxTextureBuildDesc description." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** The Height MinMax texture. */" },
		{ "DisplayName", "Height MinMax Texture" },
		{ "ModuleRelativePath", "Public/HeightfieldMinMaxTexture.h" },
		{ "ToolTip", "The Height MinMax texture." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightfieldMinMaxTexture, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_LodBiasTexture_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** A LodBias texture derived from the Height MinMax texture*/" },
		{ "DisplayName", "LodBias Texture" },
		{ "ModuleRelativePath", "Public/HeightfieldMinMaxTexture.h" },
		{ "ToolTip", "A LodBias texture derived from the Height MinMax texture" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_LodBiasTexture = { "LodBiasTexture", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightfieldMinMaxTexture, LodBiasTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_LodBiasTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_LodBiasTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_LodBiasMinMaxTexture_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** A LodBias MinMax texture derived from the LodBias texture*/" },
		{ "DisplayName", "LodBias MinMax Texture" },
		{ "ModuleRelativePath", "Public/HeightfieldMinMaxTexture.h" },
		{ "ToolTip", "A LodBias MinMax texture derived from the LodBias texture" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_LodBiasMinMaxTexture = { "LodBiasMinMaxTexture", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightfieldMinMaxTexture, LodBiasMinMaxTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_LodBiasMinMaxTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_LodBiasMinMaxTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_MaxCPULevels_MetaData[] = {
		{ "Category", "Texture" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The number of mip levels to clone for CPU access. */" },
		{ "DisplayName", "Num CPU Levels" },
		{ "ModuleRelativePath", "Public/HeightfieldMinMaxTexture.h" },
		{ "ToolTip", "The number of mip levels to clone for CPU access." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_MaxCPULevels = { "MaxCPULevels", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightfieldMinMaxTexture, MaxCPULevels), METADATA_PARAMS(Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_MaxCPULevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_MaxCPULevels_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_TextureData_Inner = { "TextureData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_TextureData_MetaData[] = {
		{ "Comment", "/** The raw MinMax data from the low resolution mip levels of Texture. These are CPU access of the MinMax bounds. */" },
		{ "ModuleRelativePath", "Public/HeightfieldMinMaxTexture.h" },
		{ "ToolTip", "The raw MinMax data from the low resolution mip levels of Texture. These are CPU access of the MinMax bounds." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_TextureData = { "TextureData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightfieldMinMaxTexture, TextureData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_TextureData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_TextureData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_TextureDataSize_MetaData[] = {
		{ "Comment", "/** The size of the largest mip stored in TextureData. */" },
		{ "ModuleRelativePath", "Public/HeightfieldMinMaxTexture.h" },
		{ "ToolTip", "The size of the largest mip stored in TextureData." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_TextureDataSize = { "TextureDataSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightfieldMinMaxTexture, TextureDataSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_TextureDataSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_TextureDataSize_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_TextureDataMips_Inner = { "TextureDataMips", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_TextureDataMips_MetaData[] = {
		{ "Comment", "/** The starting array index for the data of each mip stored in TextureData. */" },
		{ "ModuleRelativePath", "Public/HeightfieldMinMaxTexture.h" },
		{ "ToolTip", "The starting array index for the data of each mip stored in TextureData." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_TextureDataMips = { "TextureDataMips", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHeightfieldMinMaxTexture, TextureDataMips), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_TextureDataMips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_TextureDataMips_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_LodBiasTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_LodBiasMinMaxTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_MaxCPULevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_TextureData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_TextureData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_TextureDataSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_TextureDataMips_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::NewProp_TextureDataMips,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeightfieldMinMaxTexture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::ClassParams = {
		&UHeightfieldMinMaxTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeightfieldMinMaxTexture()
	{
		if (!Z_Registration_Info_UClass_UHeightfieldMinMaxTexture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeightfieldMinMaxTexture.OuterSingleton, Z_Construct_UClass_UHeightfieldMinMaxTexture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHeightfieldMinMaxTexture.OuterSingleton;
	}
	template<> VIRTUALHEIGHTFIELDMESH_API UClass* StaticClass<UHeightfieldMinMaxTexture>()
	{
		return UHeightfieldMinMaxTexture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeightfieldMinMaxTexture);
	UHeightfieldMinMaxTexture::~UHeightfieldMinMaxTexture() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_HeightfieldMinMaxTexture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_HeightfieldMinMaxTexture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHeightfieldMinMaxTexture, UHeightfieldMinMaxTexture::StaticClass, TEXT("UHeightfieldMinMaxTexture"), &Z_Registration_Info_UClass_UHeightfieldMinMaxTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeightfieldMinMaxTexture), 169369640U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_HeightfieldMinMaxTexture_h_276195964(TEXT("/Script/VirtualHeightfieldMesh"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_HeightfieldMinMaxTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_HeightfieldMinMaxTexture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
