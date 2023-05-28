// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/VT/LightmapVirtualTexture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightmapVirtualTexture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULightMapVirtualTexture2D();
	ENGINE_API UClass* Z_Construct_UClass_ULightMapVirtualTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ULightMapVirtualTexture2D::StaticRegisterNativesULightMapVirtualTexture2D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULightMapVirtualTexture2D);
	UClass* Z_Construct_UClass_ULightMapVirtualTexture2D_NoRegister()
	{
		return ULightMapVirtualTexture2D::StaticClass();
	}
	struct Z_Construct_UClass_ULightMapVirtualTexture2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_TypeToLayer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeToLayer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TypeToLayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VT/LightmapVirtualTexture.h" },
		{ "ModuleRelativePath", "Classes/VT/LightmapVirtualTexture.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::NewProp_TypeToLayer_Inner = { "TypeToLayer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::NewProp_TypeToLayer_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "ModuleRelativePath", "Classes/VT/LightmapVirtualTexture.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::NewProp_TypeToLayer = { "TypeToLayer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightMapVirtualTexture2D, TypeToLayer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::NewProp_TypeToLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::NewProp_TypeToLayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::NewProp_TypeToLayer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::NewProp_TypeToLayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightMapVirtualTexture2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::ClassParams = {
		&ULightMapVirtualTexture2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightMapVirtualTexture2D()
	{
		if (!Z_Registration_Info_UClass_ULightMapVirtualTexture2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightMapVirtualTexture2D.OuterSingleton, Z_Construct_UClass_ULightMapVirtualTexture2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULightMapVirtualTexture2D.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ULightMapVirtualTexture2D>()
	{
		return ULightMapVirtualTexture2D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightMapVirtualTexture2D);
	ULightMapVirtualTexture2D::~ULightMapVirtualTexture2D() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_LightmapVirtualTexture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_LightmapVirtualTexture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULightMapVirtualTexture2D, ULightMapVirtualTexture2D::StaticClass, TEXT("ULightMapVirtualTexture2D"), &Z_Registration_Info_UClass_ULightMapVirtualTexture2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightMapVirtualTexture2D), 1186850101U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_LightmapVirtualTexture_h_1918457438(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_LightmapVirtualTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_LightmapVirtualTexture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
