// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PropertyValueOption.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyValueOption() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValue();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueOption();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueOption_NoRegister();
// End Cross Module References
	void UPropertyValueOption::StaticRegisterNativesUPropertyValueOption()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPropertyValueOption);
	UClass* Z_Construct_UClass_UPropertyValueOption_NoRegister()
	{
		return UPropertyValueOption::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyValueOption_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyValueOption_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyValue,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValueOption_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// PropertyValue that can only be captured from ASwitchActors\n" },
		{ "IncludePath", "PropertyValueOption.h" },
		{ "ModuleRelativePath", "Public/PropertyValueOption.h" },
		{ "ToolTip", "PropertyValue that can only be captured from ASwitchActors" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyValueOption_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyValueOption>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPropertyValueOption_Statics::ClassParams = {
		&UPropertyValueOption::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPropertyValueOption_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValueOption_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyValueOption()
	{
		if (!Z_Registration_Info_UClass_UPropertyValueOption.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropertyValueOption.OuterSingleton, Z_Construct_UClass_UPropertyValueOption_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPropertyValueOption.OuterSingleton;
	}
	template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<UPropertyValueOption>()
	{
		return UPropertyValueOption::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyValueOption);
	UPropertyValueOption::~UPropertyValueOption() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueOption_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueOption_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPropertyValueOption, UPropertyValueOption::StaticClass, TEXT("UPropertyValueOption"), &Z_Registration_Info_UClass_UPropertyValueOption, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropertyValueOption), 1169299872U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueOption_h_1876416168(TEXT("/Script/VariantManagerContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueOption_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueOption_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
