// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/TextureRenderTarget2DArrayFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureRenderTarget2DArrayFactoryNew() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew();
	UNREALED_API UClass* Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTextureRenderTarget2DArrayFactoryNew::StaticRegisterNativesUTextureRenderTarget2DArrayFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureRenderTarget2DArrayFactoryNew);
	UClass* Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_NoRegister()
	{
		return UTextureRenderTarget2DArrayFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Slices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Texture" },
		{ "IncludePath", "Factories/TextureRenderTarget2DArrayFactoryNew.h" },
		{ "ModuleRelativePath", "Classes/Factories/TextureRenderTarget2DArrayFactoryNew.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/TextureRenderTarget2DArrayFactoryNew.h" },
		{ "ToolTip", "Width of the texture render target" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTarget2DArrayFactoryNew, Width), METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/TextureRenderTarget2DArrayFactoryNew.h" },
		{ "ToolTip", "Height of the texture render target" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTarget2DArrayFactoryNew, Height), METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::NewProp_Slices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/TextureRenderTarget2DArrayFactoryNew.h" },
		{ "ToolTip", "Slices of the texture render target" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::NewProp_Slices = { "Slices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTarget2DArrayFactoryNew, Slices), METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::NewProp_Slices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::NewProp_Slices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::NewProp_Format_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/TextureRenderTarget2DArrayFactoryNew.h" },
		{ "ToolTip", "Pixel format of the texture render target" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTarget2DArrayFactoryNew, Format), nullptr, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::NewProp_Format_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::NewProp_Format_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::NewProp_Slices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::NewProp_Format,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureRenderTarget2DArrayFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::ClassParams = {
		&UTextureRenderTarget2DArrayFactoryNew::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UTextureRenderTarget2DArrayFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureRenderTarget2DArrayFactoryNew.OuterSingleton, Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureRenderTarget2DArrayFactoryNew.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTextureRenderTarget2DArrayFactoryNew>()
	{
		return UTextureRenderTarget2DArrayFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureRenderTarget2DArrayFactoryNew);
	UTextureRenderTarget2DArrayFactoryNew::~UTextureRenderTarget2DArrayFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureRenderTarget2DArrayFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureRenderTarget2DArrayFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureRenderTarget2DArrayFactoryNew, UTextureRenderTarget2DArrayFactoryNew::StaticClass, TEXT("UTextureRenderTarget2DArrayFactoryNew"), &Z_Registration_Info_UClass_UTextureRenderTarget2DArrayFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureRenderTarget2DArrayFactoryNew), 4218999080U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureRenderTarget2DArrayFactoryNew_h_2724217341(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureRenderTarget2DArrayFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureRenderTarget2DArrayFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
