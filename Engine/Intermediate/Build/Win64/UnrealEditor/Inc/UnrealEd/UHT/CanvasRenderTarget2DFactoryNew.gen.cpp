// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/CanvasRenderTarget2DFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanvasRenderTarget2DFactoryNew() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew();
	UNREALED_API UClass* Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UCanvasRenderTarget2DFactoryNew::StaticRegisterNativesUCanvasRenderTarget2DFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCanvasRenderTarget2DFactoryNew);
	UClass* Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_NoRegister()
	{
		return UCanvasRenderTarget2DFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Texture" },
		{ "IncludePath", "Factories/CanvasRenderTarget2DFactoryNew.h" },
		{ "ModuleRelativePath", "Classes/Factories/CanvasRenderTarget2DFactoryNew.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/CanvasRenderTarget2DFactoryNew.h" },
		{ "ToolTip", "Width of the texture render target" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCanvasRenderTarget2DFactoryNew, Width), METADATA_PARAMS(Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/CanvasRenderTarget2DFactoryNew.h" },
		{ "ToolTip", "Height of the texture render target" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCanvasRenderTarget2DFactoryNew, Height), METADATA_PARAMS(Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Format_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/CanvasRenderTarget2DFactoryNew.h" },
		{ "ToolTip", "Pixel format of the texture render target" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCanvasRenderTarget2DFactoryNew, Format), nullptr, METADATA_PARAMS(Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Format_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Format_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::NewProp_Format,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCanvasRenderTarget2DFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::ClassParams = {
		&UCanvasRenderTarget2DFactoryNew::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UCanvasRenderTarget2DFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCanvasRenderTarget2DFactoryNew.OuterSingleton, Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCanvasRenderTarget2DFactoryNew.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UCanvasRenderTarget2DFactoryNew>()
	{
		return UCanvasRenderTarget2DFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCanvasRenderTarget2DFactoryNew);
	UCanvasRenderTarget2DFactoryNew::~UCanvasRenderTarget2DFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CanvasRenderTarget2DFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CanvasRenderTarget2DFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCanvasRenderTarget2DFactoryNew, UCanvasRenderTarget2DFactoryNew::StaticClass, TEXT("UCanvasRenderTarget2DFactoryNew"), &Z_Registration_Info_UClass_UCanvasRenderTarget2DFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCanvasRenderTarget2DFactoryNew), 3770030914U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CanvasRenderTarget2DFactoryNew_h_3274363779(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CanvasRenderTarget2DFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CanvasRenderTarget2DFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
