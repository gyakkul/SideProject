// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MuCO/DefaultImageProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultImageProvider() {}
// Cross Module References
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableSystemImageProvider();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UDefaultImageProvider();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UDefaultImageProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObject();
// End Cross Module References
	void UDefaultImageProvider::StaticRegisterNativesUDefaultImageProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDefaultImageProvider);
	UClass* Z_Construct_UClass_UDefaultImageProvider_NoRegister()
	{
		return UDefaultImageProvider::StaticClass();
	}
	struct Z_Construct_UClass_UDefaultImageProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Textures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Textures;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_KeepTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeepTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeepTextures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDefaultImageProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableSystemImageProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultImageProvider_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Simple image provider that translates UTexture2D to Mutable IDs.\n *\n * Allows the reuse of UTexture2D.\n * IDs will be garbage collected if they are referenced inside an Instance (GetTextureParameters()) or are not mark explicitly to keep (Keep(...)).\n */" },
		{ "IncludePath", "MuCO/DefaultImageProvider.h" },
		{ "ModuleRelativePath", "Public/MuCO/DefaultImageProvider.h" },
		{ "ToolTip", "Simple image provider that translates UTexture2D to Mutable IDs.\n\nAllows the reuse of UTexture2D.\nIDs will be garbage collected if they are referenced inside an Instance (GetTextureParameters()) or are not mark explicitly to keep (Keep(...))." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDefaultImageProvider_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultImageProvider_Statics::NewProp_Textures_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCO/DefaultImageProvider.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDefaultImageProvider_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDefaultImageProvider, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDefaultImageProvider_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultImageProvider_Statics::NewProp_Textures_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDefaultImageProvider_Statics::NewProp_KeepTextures_Inner = { "KeepTextures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultImageProvider_Statics::NewProp_KeepTextures_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCO/DefaultImageProvider.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDefaultImageProvider_Statics::NewProp_KeepTextures = { "KeepTextures", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDefaultImageProvider, KeepTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDefaultImageProvider_Statics::NewProp_KeepTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultImageProvider_Statics::NewProp_KeepTextures_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDefaultImageProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultImageProvider_Statics::NewProp_Textures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultImageProvider_Statics::NewProp_Textures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultImageProvider_Statics::NewProp_KeepTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultImageProvider_Statics::NewProp_KeepTextures,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDefaultImageProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefaultImageProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDefaultImageProvider_Statics::ClassParams = {
		&UDefaultImageProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDefaultImageProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultImageProvider_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDefaultImageProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultImageProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDefaultImageProvider()
	{
		if (!Z_Registration_Info_UClass_UDefaultImageProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDefaultImageProvider.OuterSingleton, Z_Construct_UClass_UDefaultImageProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDefaultImageProvider.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECT_API UClass* StaticClass<UDefaultImageProvider>()
	{
		return UDefaultImageProvider::StaticClass();
	}
	UDefaultImageProvider::UDefaultImageProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDefaultImageProvider);
	UDefaultImageProvider::~UDefaultImageProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_DefaultImageProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_DefaultImageProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDefaultImageProvider, UDefaultImageProvider::StaticClass, TEXT("UDefaultImageProvider"), &Z_Registration_Info_UClass_UDefaultImageProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDefaultImageProvider), 2836626798U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_DefaultImageProvider_h_1018588820(TEXT("/Script/CustomizableObject"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_DefaultImageProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_DefaultImageProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
