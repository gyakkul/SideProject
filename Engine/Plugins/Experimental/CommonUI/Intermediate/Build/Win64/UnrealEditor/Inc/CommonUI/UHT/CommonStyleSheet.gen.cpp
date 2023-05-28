// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StyleSheet/CommonStyleSheet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonStyleSheet() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonStyleSheet();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonStyleSheet_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonStyleSheetTypeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	void UCommonStyleSheet::StaticRegisterNativesUCommonStyleSheet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonStyleSheet);
	UClass* Z_Construct_UClass_UCommonStyleSheet_NoRegister()
	{
		return UCommonStyleSheet::StaticClass();
	}
	struct Z_Construct_UClass_UCommonStyleSheet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Properties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImportedStyleSheets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportedStyleSheets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImportedStyleSheets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonStyleSheet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonStyleSheet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//////////////////////////////\n// PROTOTYPE: DO NOT USE!!!\n//////////////////////////////\n" },
		{ "IncludePath", "StyleSheet/CommonStyleSheet.h" },
		{ "ModuleRelativePath", "Public/StyleSheet/CommonStyleSheet.h" },
		{ "ToolTip", "PROTOTYPE: DO NOT USE!!!" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonStyleSheet_Statics::NewProp_Properties_Inner_MetaData[] = {
		{ "Category", "Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StyleSheet/CommonStyleSheet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonStyleSheet_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCommonStyleSheetTypeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonStyleSheet_Statics::NewProp_Properties_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheet_Statics::NewProp_Properties_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonStyleSheet_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StyleSheet/CommonStyleSheet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommonStyleSheet_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0044008000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonStyleSheet, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCommonStyleSheet_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheet_Statics::NewProp_Properties_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonStyleSheet_Statics::NewProp_ImportedStyleSheets_Inner = { "ImportedStyleSheets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCommonStyleSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonStyleSheet_Statics::NewProp_ImportedStyleSheets_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/StyleSheet/CommonStyleSheet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommonStyleSheet_Statics::NewProp_ImportedStyleSheets = { "ImportedStyleSheets", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonStyleSheet, ImportedStyleSheets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCommonStyleSheet_Statics::NewProp_ImportedStyleSheets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheet_Statics::NewProp_ImportedStyleSheets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonStyleSheet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonStyleSheet_Statics::NewProp_Properties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonStyleSheet_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonStyleSheet_Statics::NewProp_ImportedStyleSheets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonStyleSheet_Statics::NewProp_ImportedStyleSheets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonStyleSheet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonStyleSheet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonStyleSheet_Statics::ClassParams = {
		&UCommonStyleSheet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonStyleSheet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheet_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonStyleSheet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonStyleSheet()
	{
		if (!Z_Registration_Info_UClass_UCommonStyleSheet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonStyleSheet.OuterSingleton, Z_Construct_UClass_UCommonStyleSheet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonStyleSheet.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonStyleSheet>()
	{
		return UCommonStyleSheet::StaticClass();
	}
	UCommonStyleSheet::UCommonStyleSheet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonStyleSheet);
	UCommonStyleSheet::~UCommonStyleSheet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_StyleSheet_CommonStyleSheet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_StyleSheet_CommonStyleSheet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonStyleSheet, UCommonStyleSheet::StaticClass, TEXT("UCommonStyleSheet"), &Z_Registration_Info_UClass_UCommonStyleSheet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonStyleSheet), 2567496473U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_StyleSheet_CommonStyleSheet_h_1849393871(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_StyleSheet_CommonStyleSheet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_StyleSheet_CommonStyleSheet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
