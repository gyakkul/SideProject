// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Filters/SBasicFilterBar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBasicFilterBar() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TOOLWIDGETS_API UClass* Z_Construct_UClass_UFilterBarContext();
	TOOLWIDGETS_API UClass* Z_Construct_UClass_UFilterBarContext_NoRegister();
	TOOLWIDGETS_API UEnum* Z_Construct_UEnum_ToolWidgets_EFilterBarLayout();
	TOOLWIDGETS_API UEnum* Z_Construct_UEnum_ToolWidgets_EFilterPillStyle();
	UPackage* Z_Construct_UPackage__Script_ToolWidgets();
// End Cross Module References
	void UFilterBarContext::StaticRegisterNativesUFilterBarContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFilterBarContext);
	UClass* Z_Construct_UClass_UFilterBarContext_NoRegister()
	{
		return UFilterBarContext::StaticClass();
	}
	struct Z_Construct_UClass_UFilterBarContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFilterBarContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ToolWidgets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFilterBarContext_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** ToolMenuContext that is used to create the Add Filter Menu */" },
		{ "IncludePath", "Filters/SBasicFilterBar.h" },
		{ "ModuleRelativePath", "Public/Filters/SBasicFilterBar.h" },
		{ "ToolTip", "ToolMenuContext that is used to create the Add Filter Menu" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFilterBarContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFilterBarContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFilterBarContext_Statics::ClassParams = {
		&UFilterBarContext::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFilterBarContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFilterBarContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFilterBarContext()
	{
		if (!Z_Registration_Info_UClass_UFilterBarContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFilterBarContext.OuterSingleton, Z_Construct_UClass_UFilterBarContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFilterBarContext.OuterSingleton;
	}
	template<> TOOLWIDGETS_API UClass* StaticClass<UFilterBarContext>()
	{
		return UFilterBarContext::StaticClass();
	}
	UFilterBarContext::UFilterBarContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFilterBarContext);
	UFilterBarContext::~UFilterBarContext() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFilterBarLayout;
	static UEnum* EFilterBarLayout_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFilterBarLayout.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFilterBarLayout.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ToolWidgets_EFilterBarLayout, (UObject*)Z_Construct_UPackage__Script_ToolWidgets(), TEXT("EFilterBarLayout"));
		}
		return Z_Registration_Info_UEnum_EFilterBarLayout.OuterSingleton;
	}
	template<> TOOLWIDGETS_API UEnum* StaticEnum<EFilterBarLayout>()
	{
		return EFilterBarLayout_StaticEnum();
	}
	struct Z_Construct_UEnum_ToolWidgets_EFilterBarLayout_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ToolWidgets_EFilterBarLayout_Statics::Enumerators[] = {
		{ "EFilterBarLayout::Horizontal", (int64)EFilterBarLayout::Horizontal },
		{ "EFilterBarLayout::Vertical", (int64)EFilterBarLayout::Vertical },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ToolWidgets_EFilterBarLayout_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Describes if the filters are laid out horizontally (ScrollBox) or vertically (WrapBox) */" },
		{ "Horizontal.Name", "EFilterBarLayout::Horizontal" },
		{ "ModuleRelativePath", "Public/Filters/SBasicFilterBar.h" },
		{ "ToolTip", "Describes if the filters are laid out horizontally (ScrollBox) or vertically (WrapBox)" },
		{ "Vertical.Name", "EFilterBarLayout::Vertical" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ToolWidgets_EFilterBarLayout_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ToolWidgets,
		nullptr,
		"EFilterBarLayout",
		"EFilterBarLayout",
		Z_Construct_UEnum_ToolWidgets_EFilterBarLayout_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ToolWidgets_EFilterBarLayout_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ToolWidgets_EFilterBarLayout_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ToolWidgets_EFilterBarLayout_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ToolWidgets_EFilterBarLayout()
	{
		if (!Z_Registration_Info_UEnum_EFilterBarLayout.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFilterBarLayout.InnerSingleton, Z_Construct_UEnum_ToolWidgets_EFilterBarLayout_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFilterBarLayout.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFilterPillStyle;
	static UEnum* EFilterPillStyle_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFilterPillStyle.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFilterPillStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ToolWidgets_EFilterPillStyle, (UObject*)Z_Construct_UPackage__Script_ToolWidgets(), TEXT("EFilterPillStyle"));
		}
		return Z_Registration_Info_UEnum_EFilterPillStyle.OuterSingleton;
	}
	template<> TOOLWIDGETS_API UEnum* StaticEnum<EFilterPillStyle>()
	{
		return EFilterPillStyle_StaticEnum();
	}
	struct Z_Construct_UEnum_ToolWidgets_EFilterPillStyle_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ToolWidgets_EFilterPillStyle_Statics::Enumerators[] = {
		{ "EFilterPillStyle::Default", (int64)EFilterPillStyle::Default },
		{ "EFilterPillStyle::Basic", (int64)EFilterPillStyle::Basic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ToolWidgets_EFilterPillStyle_Statics::Enum_MetaDataParams[] = {
		{ "Basic.Comment", "// The default style you see in the Content Browser, pills showing the color and filter name\n" },
		{ "Basic.Name", "EFilterPillStyle::Basic" },
		{ "Basic.ToolTip", "The default style you see in the Content Browser, pills showing the color and filter name" },
		{ "Comment", "/** Describes how each individual filter pill looks like */" },
		{ "Default.Name", "EFilterPillStyle::Default" },
		{ "ModuleRelativePath", "Public/Filters/SBasicFilterBar.h" },
		{ "ToolTip", "Describes how each individual filter pill looks like" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ToolWidgets_EFilterPillStyle_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ToolWidgets,
		nullptr,
		"EFilterPillStyle",
		"EFilterPillStyle",
		Z_Construct_UEnum_ToolWidgets_EFilterPillStyle_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ToolWidgets_EFilterPillStyle_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ToolWidgets_EFilterPillStyle_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ToolWidgets_EFilterPillStyle_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ToolWidgets_EFilterPillStyle()
	{
		if (!Z_Registration_Info_UEnum_EFilterPillStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFilterPillStyle.InnerSingleton, Z_Construct_UEnum_ToolWidgets_EFilterPillStyle_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFilterPillStyle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_Statics::EnumInfo[] = {
		{ EFilterBarLayout_StaticEnum, TEXT("EFilterBarLayout"), &Z_Registration_Info_UEnum_EFilterBarLayout, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4040252252U) },
		{ EFilterPillStyle_StaticEnum, TEXT("EFilterPillStyle"), &Z_Registration_Info_UEnum_EFilterPillStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1655187811U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFilterBarContext, UFilterBarContext::StaticClass, TEXT("UFilterBarContext"), &Z_Registration_Info_UClass_UFilterBarContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFilterBarContext), 97127271U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_1856217310(TEXT("/Script/ToolWidgets"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
