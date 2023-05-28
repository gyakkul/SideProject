// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroomEditorMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomEditorMode() {}
// Cross Module References
	HAIRSTRANDSEDITOR_API UClass* Z_Construct_UClass_UGroomEditorMode();
	HAIRSTRANDSEDITOR_API UClass* Z_Construct_UClass_UGroomEditorMode_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UBaseLegacyWidgetEdMode();
	UPackage* Z_Construct_UPackage__Script_HairStrandsEditor();
// End Cross Module References
	void UGroomEditorMode::StaticRegisterNativesUGroomEditorMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomEditorMode);
	UClass* Z_Construct_UClass_UGroomEditorMode_NoRegister()
	{
		return UGroomEditorMode::StaticClass();
	}
	struct Z_Construct_UClass_UGroomEditorMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroomEditorMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseLegacyWidgetEdMode,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomEditorMode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GroomEditorMode.h" },
		{ "ModuleRelativePath", "Public/GroomEditorMode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroomEditorMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomEditorMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomEditorMode_Statics::ClassParams = {
		&UGroomEditorMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGroomEditorMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomEditorMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroomEditorMode()
	{
		if (!Z_Registration_Info_UClass_UGroomEditorMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomEditorMode.OuterSingleton, Z_Construct_UClass_UGroomEditorMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroomEditorMode.OuterSingleton;
	}
	template<> HAIRSTRANDSEDITOR_API UClass* StaticClass<UGroomEditorMode>()
	{
		return UGroomEditorMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomEditorMode);
	UGroomEditorMode::~UGroomEditorMode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomEditorMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomEditorMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGroomEditorMode, UGroomEditorMode::StaticClass, TEXT("UGroomEditorMode"), &Z_Registration_Info_UClass_UGroomEditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomEditorMode), 4167375965U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomEditorMode_h_1279460027(TEXT("/Script/HairStrandsEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomEditorMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomEditorMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
