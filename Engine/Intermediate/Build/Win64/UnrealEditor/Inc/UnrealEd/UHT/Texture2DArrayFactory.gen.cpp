// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/Texture2DArrayFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexture2DArrayFactory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UTexture2DArrayFactory();
	UNREALED_API UClass* Z_Construct_UClass_UTexture2DArrayFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTexture2DArrayFactory::StaticRegisterNativesUTexture2DArrayFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTexture2DArrayFactory);
	UClass* Z_Construct_UClass_UTexture2DArrayFactory_NoRegister()
	{
		return UTexture2DArrayFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTexture2DArrayFactory_Statics
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
	UObject* (*const Z_Construct_UClass_UTexture2DArrayFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2DArrayFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Factory for creating volume texture */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/Texture2DArrayFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/Texture2DArrayFactory.h" },
		{ "ToolTip", "Factory for creating volume texture" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTexture2DArrayFactory_Statics::NewProp_InitialTextures_Inner = { "InitialTextures", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture2DArrayFactory_Statics::NewProp_InitialTextures_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/Texture2DArrayFactory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTexture2DArrayFactory_Statics::NewProp_InitialTextures = { "InitialTextures", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTexture2DArrayFactory, InitialTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTexture2DArrayFactory_Statics::NewProp_InitialTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DArrayFactory_Statics::NewProp_InitialTextures_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTexture2DArrayFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2DArrayFactory_Statics::NewProp_InitialTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture2DArrayFactory_Statics::NewProp_InitialTextures,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTexture2DArrayFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexture2DArrayFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTexture2DArrayFactory_Statics::ClassParams = {
		&UTexture2DArrayFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTexture2DArrayFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DArrayFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTexture2DArrayFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture2DArrayFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTexture2DArrayFactory()
	{
		if (!Z_Registration_Info_UClass_UTexture2DArrayFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTexture2DArrayFactory.OuterSingleton, Z_Construct_UClass_UTexture2DArrayFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTexture2DArrayFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTexture2DArrayFactory>()
	{
		return UTexture2DArrayFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexture2DArrayFactory);
	UTexture2DArrayFactory::~UTexture2DArrayFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2DArrayFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2DArrayFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTexture2DArrayFactory, UTexture2DArrayFactory::StaticClass, TEXT("UTexture2DArrayFactory"), &Z_Registration_Info_UClass_UTexture2DArrayFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTexture2DArrayFactory), 4067606858U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2DArrayFactory_h_3358961058(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2DArrayFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Texture2DArrayFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
