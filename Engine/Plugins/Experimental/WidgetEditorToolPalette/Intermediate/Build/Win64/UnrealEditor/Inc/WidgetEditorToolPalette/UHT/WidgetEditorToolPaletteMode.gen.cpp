// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WidgetEditorToolPaletteMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetEditorToolPaletteMode() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UBaseLegacyWidgetEdMode();
	UPackage* Z_Construct_UPackage__Script_WidgetEditorToolPalette();
	WIDGETEDITORTOOLPALETTE_API UClass* Z_Construct_UClass_UWidgetEditorToolPaletteMode();
	WIDGETEDITORTOOLPALETTE_API UClass* Z_Construct_UClass_UWidgetEditorToolPaletteMode_NoRegister();
// End Cross Module References
	void UWidgetEditorToolPaletteMode::StaticRegisterNativesUWidgetEditorToolPaletteMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetEditorToolPaletteMode);
	UClass* Z_Construct_UClass_UWidgetEditorToolPaletteMode_NoRegister()
	{
		return UWidgetEditorToolPaletteMode::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetEditorToolPaletteMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetEditorToolPaletteMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseLegacyWidgetEdMode,
		(UObject* (*)())Z_Construct_UPackage__Script_WidgetEditorToolPalette,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetEditorToolPaletteMode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WidgetEditorToolPaletteMode.h" },
		{ "ModuleRelativePath", "Public/WidgetEditorToolPaletteMode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetEditorToolPaletteMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetEditorToolPaletteMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetEditorToolPaletteMode_Statics::ClassParams = {
		&UWidgetEditorToolPaletteMode::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetEditorToolPaletteMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetEditorToolPaletteMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetEditorToolPaletteMode()
	{
		if (!Z_Registration_Info_UClass_UWidgetEditorToolPaletteMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetEditorToolPaletteMode.OuterSingleton, Z_Construct_UClass_UWidgetEditorToolPaletteMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetEditorToolPaletteMode.OuterSingleton;
	}
	template<> WIDGETEDITORTOOLPALETTE_API UClass* StaticClass<UWidgetEditorToolPaletteMode>()
	{
		return UWidgetEditorToolPaletteMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetEditorToolPaletteMode);
	UWidgetEditorToolPaletteMode::~UWidgetEditorToolPaletteMode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_WidgetEditorToolPaletteMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_WidgetEditorToolPaletteMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetEditorToolPaletteMode, UWidgetEditorToolPaletteMode::StaticClass, TEXT("UWidgetEditorToolPaletteMode"), &Z_Registration_Info_UClass_UWidgetEditorToolPaletteMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetEditorToolPaletteMode), 3928087956U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_WidgetEditorToolPaletteMode_h_2373879511(TEXT("/Script/WidgetEditorToolPalette"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_WidgetEditorToolPaletteMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_WidgetEditorToolPaletteMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
