// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/ShadowMapTexture2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShadowMapTexture2D() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UShadowMapTexture2D();
	ENGINE_API UClass* Z_Construct_UClass_UShadowMapTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EShadowMapFlags();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UShadowMapTexture2D::StaticRegisterNativesUShadowMapTexture2D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShadowMapTexture2D);
	UClass* Z_Construct_UClass_UShadowMapTexture2D_NoRegister()
	{
		return UShadowMapTexture2D::StaticClass();
	}
	struct Z_Construct_UClass_UShadowMapTexture2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowmapFlags_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShadowmapFlags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShadowMapTexture2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowMapTexture2D_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/ShadowMapTexture2D.h" },
		{ "ModuleRelativePath", "Classes/Engine/ShadowMapTexture2D.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShadowMapTexture2D_Statics::NewProp_ShadowmapFlags_MetaData[] = {
		{ "Comment", "/** Bit-field with shadowmap flags. */" },
		{ "ModuleRelativePath", "Classes/Engine/ShadowMapTexture2D.h" },
		{ "ToolTip", "Bit-field with shadowmap flags." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UShadowMapTexture2D_Statics::NewProp_ShadowmapFlags = { "ShadowmapFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShadowMapTexture2D, ShadowmapFlags), Z_Construct_UEnum_Engine_EShadowMapFlags, METADATA_PARAMS(Z_Construct_UClass_UShadowMapTexture2D_Statics::NewProp_ShadowmapFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowMapTexture2D_Statics::NewProp_ShadowmapFlags_MetaData)) }; // 3225150304
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShadowMapTexture2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShadowMapTexture2D_Statics::NewProp_ShadowmapFlags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShadowMapTexture2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShadowMapTexture2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShadowMapTexture2D_Statics::ClassParams = {
		&UShadowMapTexture2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShadowMapTexture2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShadowMapTexture2D_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShadowMapTexture2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShadowMapTexture2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShadowMapTexture2D()
	{
		if (!Z_Registration_Info_UClass_UShadowMapTexture2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShadowMapTexture2D.OuterSingleton, Z_Construct_UClass_UShadowMapTexture2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShadowMapTexture2D.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UShadowMapTexture2D>()
	{
		return UShadowMapTexture2D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShadowMapTexture2D);
	UShadowMapTexture2D::~UShadowMapTexture2D() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ShadowMapTexture2D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ShadowMapTexture2D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShadowMapTexture2D, UShadowMapTexture2D::StaticClass, TEXT("UShadowMapTexture2D"), &Z_Registration_Info_UClass_UShadowMapTexture2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShadowMapTexture2D), 2979944564U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ShadowMapTexture2D_h_187436302(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ShadowMapTexture2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ShadowMapTexture2D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
