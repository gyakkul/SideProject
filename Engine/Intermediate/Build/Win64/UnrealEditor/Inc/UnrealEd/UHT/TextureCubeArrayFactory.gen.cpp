// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/TextureCubeArrayFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureCubeArrayFactory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UTextureCubeArrayFactory();
	UNREALED_API UClass* Z_Construct_UClass_UTextureCubeArrayFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTextureCubeArrayFactory::StaticRegisterNativesUTextureCubeArrayFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureCubeArrayFactory);
	UClass* Z_Construct_UClass_UTextureCubeArrayFactory_NoRegister()
	{
		return UTextureCubeArrayFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTextureCubeArrayFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InitialTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InitialTextures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureCubeArrayFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureCubeArrayFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Factory for creating volume texture */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/TextureCubeArrayFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/TextureCubeArrayFactory.h" },
		{ "ToolTip", "Factory for creating volume texture" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTextureCubeArrayFactory_Statics::NewProp_InitialTextures_Inner = { "InitialTextures", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureCubeArrayFactory_Statics::NewProp_InitialTextures_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/TextureCubeArrayFactory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTextureCubeArrayFactory_Statics::NewProp_InitialTextures = { "InitialTextures", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureCubeArrayFactory, InitialTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTextureCubeArrayFactory_Statics::NewProp_InitialTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureCubeArrayFactory_Statics::NewProp_InitialTextures_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureCubeArrayFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureCubeArrayFactory_Statics::NewProp_InitialTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureCubeArrayFactory_Statics::NewProp_InitialTextures,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureCubeArrayFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureCubeArrayFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureCubeArrayFactory_Statics::ClassParams = {
		&UTextureCubeArrayFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextureCubeArrayFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextureCubeArrayFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureCubeArrayFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureCubeArrayFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureCubeArrayFactory()
	{
		if (!Z_Registration_Info_UClass_UTextureCubeArrayFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureCubeArrayFactory.OuterSingleton, Z_Construct_UClass_UTextureCubeArrayFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureCubeArrayFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTextureCubeArrayFactory>()
	{
		return UTextureCubeArrayFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureCubeArrayFactory);
	UTextureCubeArrayFactory::~UTextureCubeArrayFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureCubeArrayFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureCubeArrayFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureCubeArrayFactory, UTextureCubeArrayFactory::StaticClass, TEXT("UTextureCubeArrayFactory"), &Z_Registration_Info_UClass_UTextureCubeArrayFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureCubeArrayFactory), 4088168769U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureCubeArrayFactory_h_124689431(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureCubeArrayFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureCubeArrayFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
