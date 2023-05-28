// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/TextureRenderTargetCubeFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureRenderTargetCubeFactoryNew() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UTextureRenderTargetCubeFactoryNew();
	UNREALED_API UClass* Z_Construct_UClass_UTextureRenderTargetCubeFactoryNew_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTextureRenderTargetCubeFactoryNew::StaticRegisterNativesUTextureRenderTargetCubeFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureRenderTargetCubeFactoryNew);
	UClass* Z_Construct_UClass_UTextureRenderTargetCubeFactoryNew_NoRegister()
	{
		return UTextureRenderTargetCubeFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UTextureRenderTargetCubeFactoryNew_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureRenderTargetCubeFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetCubeFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Texture" },
		{ "IncludePath", "Factories/TextureRenderTargetCubeFactoryNew.h" },
		{ "ModuleRelativePath", "Classes/Factories/TextureRenderTargetCubeFactoryNew.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetCubeFactoryNew_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/TextureRenderTargetCubeFactoryNew.h" },
		{ "ToolTip", "Width of the texture render target" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTargetCubeFactoryNew_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTargetCubeFactoryNew, Width), METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetCubeFactoryNew_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetCubeFactoryNew_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTargetCubeFactoryNew_Statics::NewProp_Format_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/TextureRenderTargetCubeFactoryNew.h" },
		{ "ToolTip", "Pixel format of the texture render target" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTargetCubeFactoryNew_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTargetCubeFactoryNew, Format), nullptr, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetCubeFactoryNew_Statics::NewProp_Format_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetCubeFactoryNew_Statics::NewProp_Format_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureRenderTargetCubeFactoryNew_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetCubeFactoryNew_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTargetCubeFactoryNew_Statics::NewProp_Format,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureRenderTargetCubeFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureRenderTargetCubeFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureRenderTargetCubeFactoryNew_Statics::ClassParams = {
		&UTextureRenderTargetCubeFactoryNew::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextureRenderTargetCubeFactoryNew_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetCubeFactoryNew_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTargetCubeFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTargetCubeFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureRenderTargetCubeFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UTextureRenderTargetCubeFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureRenderTargetCubeFactoryNew.OuterSingleton, Z_Construct_UClass_UTextureRenderTargetCubeFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureRenderTargetCubeFactoryNew.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTextureRenderTargetCubeFactoryNew>()
	{
		return UTextureRenderTargetCubeFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureRenderTargetCubeFactoryNew);
	UTextureRenderTargetCubeFactoryNew::~UTextureRenderTargetCubeFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureRenderTargetCubeFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureRenderTargetCubeFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureRenderTargetCubeFactoryNew, UTextureRenderTargetCubeFactoryNew::StaticClass, TEXT("UTextureRenderTargetCubeFactoryNew"), &Z_Registration_Info_UClass_UTextureRenderTargetCubeFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureRenderTargetCubeFactoryNew), 240250245U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureRenderTargetCubeFactoryNew_h_1416725127(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureRenderTargetCubeFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureRenderTargetCubeFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
