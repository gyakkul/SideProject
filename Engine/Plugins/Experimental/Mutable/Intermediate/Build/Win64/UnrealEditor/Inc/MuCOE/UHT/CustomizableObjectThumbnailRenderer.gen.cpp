// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Thumbnails/CustomizableObjectThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectThumbnailRenderer() {}
// Cross Module References
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectThumbnailRenderer();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectThumbnailRenderer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectThumbnailRenderer::StaticRegisterNativesUCustomizableObjectThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectThumbnailRenderer);
	UClass* Z_Construct_UClass_UCustomizableObjectThumbnailRenderer_NoRegister()
	{
		return UCustomizableObjectThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomizableObjectInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomizableObjectInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NoImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Thumbnails/CustomizableObjectThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Thumbnails/CustomizableObjectThumbnailRenderer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectThumbnailRenderer_Statics::NewProp_CustomizableObjectInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Thumbnails/CustomizableObjectThumbnailRenderer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectThumbnailRenderer_Statics::NewProp_CustomizableObjectInstance = { "CustomizableObjectInstance", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectThumbnailRenderer, CustomizableObjectInstance), Z_Construct_UClass_UCustomizableObjectInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectThumbnailRenderer_Statics::NewProp_CustomizableObjectInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectThumbnailRenderer_Statics::NewProp_CustomizableObjectInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectThumbnailRenderer_Statics::NewProp_NoImage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Thumbnails/CustomizableObjectThumbnailRenderer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectThumbnailRenderer_Statics::NewProp_NoImage = { "NoImage", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectThumbnailRenderer, NoImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectThumbnailRenderer_Statics::NewProp_NoImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectThumbnailRenderer_Statics::NewProp_NoImage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectThumbnailRenderer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectThumbnailRenderer_Statics::NewProp_CustomizableObjectInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectThumbnailRenderer_Statics::NewProp_NoImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectThumbnailRenderer_Statics::ClassParams = {
		&UCustomizableObjectThumbnailRenderer::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectThumbnailRenderer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectThumbnailRenderer_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UCustomizableObjectThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectThumbnailRenderer.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectThumbnailRenderer>()
	{
		return UCustomizableObjectThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectThumbnailRenderer);
	UCustomizableObjectThumbnailRenderer::~UCustomizableObjectThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Thumbnails_CustomizableObjectThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Thumbnails_CustomizableObjectThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectThumbnailRenderer, UCustomizableObjectThumbnailRenderer::StaticClass, TEXT("UCustomizableObjectThumbnailRenderer"), &Z_Registration_Info_UClass_UCustomizableObjectThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectThumbnailRenderer), 3093784932U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Thumbnails_CustomizableObjectThumbnailRenderer_h_348914246(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Thumbnails_CustomizableObjectThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Thumbnails_CustomizableObjectThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
