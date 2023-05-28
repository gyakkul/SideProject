// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlateSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SLATE_API UClass* Z_Construct_UClass_USlateSettings();
	SLATE_API UClass* Z_Construct_UClass_USlateSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	void USlateSettings::StaticRegisterNativesUSlateSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateSettings);
	UClass* Z_Construct_UClass_USlateSettings_NoRegister()
	{
		return USlateSettings::StaticClass();
	}
	struct Z_Construct_UClass_USlateSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExplicitCanvasChildZOrder_MetaData[];
#endif
		static void NewProp_bExplicitCanvasChildZOrder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExplicitCanvasChildZOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlateSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Settings that control Slate functionality\n*/" },
		{ "DisplayName", "Slate" },
		{ "IncludePath", "SlateSettings.h" },
		{ "ModuleRelativePath", "Public/SlateSettings.h" },
		{ "ToolTip", "Settings that control Slate functionality" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateSettings_Statics::NewProp_bExplicitCanvasChildZOrder_MetaData[] = {
		{ "Category", "ConstraintCanvas" },
		{ "Comment", "/** \n\x09 * Allow children of SConstraintCanvas to share render layers. Children must set explicit ZOrder on their slots to control render order. \n\x09 * Recommendation: Enable for mobile platforms.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SlateSettings.h" },
		{ "ToolTip", "Allow children of SConstraintCanvas to share render layers. Children must set explicit ZOrder on their slots to control render order.\nRecommendation: Enable for mobile platforms." },
	};
#endif
	void Z_Construct_UClass_USlateSettings_Statics::NewProp_bExplicitCanvasChildZOrder_SetBit(void* Obj)
	{
		((USlateSettings*)Obj)->bExplicitCanvasChildZOrder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlateSettings_Statics::NewProp_bExplicitCanvasChildZOrder = { "bExplicitCanvasChildZOrder", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USlateSettings), &Z_Construct_UClass_USlateSettings_Statics::NewProp_bExplicitCanvasChildZOrder_SetBit, METADATA_PARAMS(Z_Construct_UClass_USlateSettings_Statics::NewProp_bExplicitCanvasChildZOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlateSettings_Statics::NewProp_bExplicitCanvasChildZOrder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlateSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateSettings_Statics::NewProp_bExplicitCanvasChildZOrder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlateSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateSettings_Statics::ClassParams = {
		&USlateSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlateSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USlateSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USlateSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlateSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlateSettings()
	{
		if (!Z_Registration_Info_UClass_USlateSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateSettings.OuterSingleton, Z_Construct_UClass_USlateSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USlateSettings.OuterSingleton;
	}
	template<> SLATE_API UClass* StaticClass<USlateSettings>()
	{
		return USlateSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateSettings);
	USlateSettings::~USlateSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_SlateSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_SlateSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USlateSettings, USlateSettings::StaticClass, TEXT("USlateSettings"), &Z_Registration_Info_UClass_USlateSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateSettings), 2851870262U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_SlateSettings_h_4102560538(TEXT("/Script/Slate"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_SlateSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_SlateSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
