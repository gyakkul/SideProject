// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/VolumeTextureFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumeTextureFactory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UVolumeTextureFactory();
	UNREALED_API UClass* Z_Construct_UClass_UVolumeTextureFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UVolumeTextureFactory::StaticRegisterNativesUVolumeTextureFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVolumeTextureFactory);
	UClass* Z_Construct_UClass_UVolumeTextureFactory_NoRegister()
	{
		return UVolumeTextureFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVolumeTextureFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InitialTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVolumeTextureFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeTextureFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Factory for creating volume texture */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/VolumeTextureFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/VolumeTextureFactory.h" },
		{ "ToolTip", "Factory for creating volume texture" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeTextureFactory_Statics::NewProp_InitialTexture_MetaData[] = {
		{ "Comment", "/** An initial texture to assign to the newly created volume texture */" },
		{ "ModuleRelativePath", "Classes/Factories/VolumeTextureFactory.h" },
		{ "ToolTip", "An initial texture to assign to the newly created volume texture" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVolumeTextureFactory_Statics::NewProp_InitialTexture = { "InitialTexture", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVolumeTextureFactory, InitialTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVolumeTextureFactory_Statics::NewProp_InitialTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeTextureFactory_Statics::NewProp_InitialTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVolumeTextureFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeTextureFactory_Statics::NewProp_InitialTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVolumeTextureFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVolumeTextureFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVolumeTextureFactory_Statics::ClassParams = {
		&UVolumeTextureFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVolumeTextureFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeTextureFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVolumeTextureFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeTextureFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVolumeTextureFactory()
	{
		if (!Z_Registration_Info_UClass_UVolumeTextureFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVolumeTextureFactory.OuterSingleton, Z_Construct_UClass_UVolumeTextureFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVolumeTextureFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UVolumeTextureFactory>()
	{
		return UVolumeTextureFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVolumeTextureFactory);
	UVolumeTextureFactory::~UVolumeTextureFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VolumeTextureFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VolumeTextureFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVolumeTextureFactory, UVolumeTextureFactory::StaticClass, TEXT("UVolumeTextureFactory"), &Z_Registration_Info_UClass_UVolumeTextureFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVolumeTextureFactory), 2934919521U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VolumeTextureFactory_h_1129354477(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VolumeTextureFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_VolumeTextureFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
