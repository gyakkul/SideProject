// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/WidgetBlueprintExtension.h"
#include "../Public/WidgetBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetBlueprintExtension() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintExtension();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprintExtension();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprintExtension_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
// End Cross Module References
	void UWidgetBlueprintExtension::StaticRegisterNativesUWidgetBlueprintExtension()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetBlueprintExtension);
	UClass* Z_Construct_UClass_UWidgetBlueprintExtension_NoRegister()
	{
		return UWidgetBlueprintExtension::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetBlueprintExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetBlueprintExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintExtension_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Extension that allows per-system data to be held on the widget blueprint, and per-system logic to be executed during compilation */" },
		{ "IncludePath", "WidgetBlueprintExtension.h" },
		{ "ModuleRelativePath", "Public/WidgetBlueprintExtension.h" },
		{ "ToolTip", "Extension that allows per-system data to be held on the widget blueprint, and per-system logic to be executed during compilation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetBlueprintExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetBlueprintExtension>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetBlueprintExtension_Statics::ClassParams = {
		&UWidgetBlueprintExtension::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintExtension_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintExtension_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetBlueprintExtension()
	{
		if (!Z_Registration_Info_UClass_UWidgetBlueprintExtension.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetBlueprintExtension.OuterSingleton, Z_Construct_UClass_UWidgetBlueprintExtension_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetBlueprintExtension.OuterSingleton;
	}
	template<> UMGEDITOR_API UClass* StaticClass<UWidgetBlueprintExtension>()
	{
		return UWidgetBlueprintExtension::StaticClass();
	}
	UWidgetBlueprintExtension::UWidgetBlueprintExtension(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetBlueprintExtension);
	UWidgetBlueprintExtension::~UWidgetBlueprintExtension() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprintExtension_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprintExtension_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetBlueprintExtension, UWidgetBlueprintExtension::StaticClass, TEXT("UWidgetBlueprintExtension"), &Z_Registration_Info_UClass_UWidgetBlueprintExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetBlueprintExtension), 1563359635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprintExtension_h_4207372088(TEXT("/Script/UMGEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprintExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprintExtension_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
