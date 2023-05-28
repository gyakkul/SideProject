// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PropertyValueColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyValueColor() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValue();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueColor();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueColor_NoRegister();
// End Cross Module References
	void UPropertyValueColor::StaticRegisterNativesUPropertyValueColor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPropertyValueColor);
	UClass* Z_Construct_UClass_UPropertyValueColor_NoRegister()
	{
		return UPropertyValueColor::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyValueColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyValueColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyValue,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValueColor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Keeps an FLinearColor interface by using the property setter/getter functions,\n// even though the property itself is of FColor type\n" },
		{ "IncludePath", "PropertyValueColor.h" },
		{ "ModuleRelativePath", "Public/PropertyValueColor.h" },
		{ "ToolTip", "Keeps an FLinearColor interface by using the property setter/getter functions,\neven though the property itself is of FColor type" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyValueColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyValueColor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPropertyValueColor_Statics::ClassParams = {
		&UPropertyValueColor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPropertyValueColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValueColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyValueColor()
	{
		if (!Z_Registration_Info_UClass_UPropertyValueColor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropertyValueColor.OuterSingleton, Z_Construct_UClass_UPropertyValueColor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPropertyValueColor.OuterSingleton;
	}
	template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<UPropertyValueColor>()
	{
		return UPropertyValueColor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyValueColor);
	UPropertyValueColor::~UPropertyValueColor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueColor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueColor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPropertyValueColor, UPropertyValueColor::StaticClass, TEXT("UPropertyValueColor"), &Z_Registration_Info_UClass_UPropertyValueColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropertyValueColor), 84350597U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueColor_h_2686032632(TEXT("/Script/VariantManagerContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueColor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueColor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
