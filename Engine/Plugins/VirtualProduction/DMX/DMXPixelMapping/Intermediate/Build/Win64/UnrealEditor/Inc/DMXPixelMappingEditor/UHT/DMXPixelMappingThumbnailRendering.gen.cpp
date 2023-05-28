// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../DMXPixelMappingEditor/Private/DMXPixelMappingThumbnailRendering.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingThumbnailRendering() {}
// Cross Module References
	DMXPIXELMAPPINGEDITOR_API UClass* Z_Construct_UClass_UDMXPixelMappingThumbnailRendering();
	DMXPIXELMAPPINGEDITOR_API UClass* Z_Construct_UClass_UDMXPixelMappingThumbnailRendering_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTextureThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingEditor();
// End Cross Module References
	void UDMXPixelMappingThumbnailRendering::StaticRegisterNativesUDMXPixelMappingThumbnailRendering()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMappingThumbnailRendering);
	UClass* Z_Construct_UClass_UDMXPixelMappingThumbnailRendering_NoRegister()
	{
		return UDMXPixelMappingThumbnailRendering::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMappingThumbnailRendering_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXPixelMappingThumbnailRendering_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingThumbnailRendering_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Dynamically  rendering thumbnail for Pixel Mapping asset\n */" },
		{ "IncludePath", "DMXPixelMappingThumbnailRendering.h" },
		{ "ModuleRelativePath", "Private/DMXPixelMappingThumbnailRendering.h" },
		{ "ToolTip", "Dynamically  rendering thumbnail for Pixel Mapping asset" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMappingThumbnailRendering_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMappingThumbnailRendering>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMappingThumbnailRendering_Statics::ClassParams = {
		&UDMXPixelMappingThumbnailRendering::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingThumbnailRendering_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingThumbnailRendering_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXPixelMappingThumbnailRendering()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMappingThumbnailRendering.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMappingThumbnailRendering.OuterSingleton, Z_Construct_UClass_UDMXPixelMappingThumbnailRendering_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMappingThumbnailRendering.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGEDITOR_API UClass* StaticClass<UDMXPixelMappingThumbnailRendering>()
	{
		return UDMXPixelMappingThumbnailRendering::StaticClass();
	}
	UDMXPixelMappingThumbnailRendering::UDMXPixelMappingThumbnailRendering(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMappingThumbnailRendering);
	UDMXPixelMappingThumbnailRendering::~UDMXPixelMappingThumbnailRendering() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_DMXPixelMappingThumbnailRendering_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_DMXPixelMappingThumbnailRendering_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMappingThumbnailRendering, UDMXPixelMappingThumbnailRendering::StaticClass, TEXT("UDMXPixelMappingThumbnailRendering"), &Z_Registration_Info_UClass_UDMXPixelMappingThumbnailRendering, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMappingThumbnailRendering), 834793742U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_DMXPixelMappingThumbnailRendering_h_1054253855(TEXT("/Script/DMXPixelMappingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_DMXPixelMappingThumbnailRendering_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_DMXPixelMappingThumbnailRendering_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
