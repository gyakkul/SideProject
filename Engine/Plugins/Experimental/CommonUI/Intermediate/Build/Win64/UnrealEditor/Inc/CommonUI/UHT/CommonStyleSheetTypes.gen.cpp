// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StyleSheet/CommonStyleSheetTypes.h"
#include "Fonts/SlateFontInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonStyleSheetTypes() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonStyleSheetTypeBase();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonStyleSheetTypeBase_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonStyleSheetTypeColor();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonStyleSheetTypeColor_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonStyleSheetTypeFontLetterSpacing();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonStyleSheetTypeFontLetterSpacing_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonStyleSheetTypeFontSize();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonStyleSheetTypeFontSize_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonStyleSheetTypeFontTypeface();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonStyleSheetTypeFontTypeface_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonStyleSheetTypeLineHeightPercentage();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonStyleSheetTypeLineHeightPercentage_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonStyleSheetTypeMarginBottom();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonStyleSheetTypeMarginBottom_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonStyleSheetTypeMarginLeft();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonStyleSheetTypeMarginLeft_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonStyleSheetTypeMarginRight();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonStyleSheetTypeMarginRight_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonStyleSheetTypeMarginTop();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonStyleSheetTypeMarginTop_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonStyleSheetTypeOpacity();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonStyleSheetTypeOpacity_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	void UCommonStyleSheetTypeBase::StaticRegisterNativesUCommonStyleSheetTypeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonStyleSheetTypeBase);
	UClass* Z_Construct_UClass_UCommonStyleSheetTypeBase_NoRegister()
	{
		return UCommonStyleSheetTypeBase::StaticClass();
	}
	struct Z_Construct_UClass_UCommonStyleSheetTypeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonStyleSheetTypeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonStyleSheetTypeBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StyleSheet/CommonStyleSheetTypes.h" },
		{ "ModuleRelativePath", "Public/StyleSheet/CommonStyleSheetTypes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonStyleSheetTypeBase_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "Value" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/StyleSheet/CommonStyleSheetTypes.h" },
	};
#endif
	void Z_Construct_UClass_UCommonStyleSheetTypeBase_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((UCommonStyleSheetTypeBase*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonStyleSheetTypeBase_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonStyleSheetTypeBase), &Z_Construct_UClass_UCommonStyleSheetTypeBase_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonStyleSheetTypeBase_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeBase_Statics::NewProp_bIsEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonStyleSheetTypeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonStyleSheetTypeBase_Statics::NewProp_bIsEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonStyleSheetTypeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonStyleSheetTypeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonStyleSheetTypeBase_Statics::ClassParams = {
		&UCommonStyleSheetTypeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonStyleSheetTypeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeBase_Statics::PropPointers),
		0,
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonStyleSheetTypeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonStyleSheetTypeBase()
	{
		if (!Z_Registration_Info_UClass_UCommonStyleSheetTypeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonStyleSheetTypeBase.OuterSingleton, Z_Construct_UClass_UCommonStyleSheetTypeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonStyleSheetTypeBase.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonStyleSheetTypeBase>()
	{
		return UCommonStyleSheetTypeBase::StaticClass();
	}
	UCommonStyleSheetTypeBase::UCommonStyleSheetTypeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonStyleSheetTypeBase);
	UCommonStyleSheetTypeBase::~UCommonStyleSheetTypeBase() {}
	void UCommonStyleSheetTypeColor::StaticRegisterNativesUCommonStyleSheetTypeColor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonStyleSheetTypeColor);
	UClass* Z_Construct_UClass_UCommonStyleSheetTypeColor_NoRegister()
	{
		return UCommonStyleSheetTypeColor::StaticClass();
	}
	struct Z_Construct_UClass_UCommonStyleSheetTypeColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonStyleSheetTypeColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonStyleSheetTypeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonStyleSheetTypeColor_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Color" },
		{ "IncludePath", "StyleSheet/CommonStyleSheetTypes.h" },
		{ "ModuleRelativePath", "Public/StyleSheet/CommonStyleSheetTypes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonStyleSheetTypeColor_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Value" },
		{ "EditCondition", "bIsEnabled" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/StyleSheet/CommonStyleSheetTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonStyleSheetTypeColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonStyleSheetTypeColor, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCommonStyleSheetTypeColor_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeColor_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonStyleSheetTypeColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonStyleSheetTypeColor_Statics::NewProp_Color,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonStyleSheetTypeColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonStyleSheetTypeColor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonStyleSheetTypeColor_Statics::ClassParams = {
		&UCommonStyleSheetTypeColor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonStyleSheetTypeColor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeColor_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonStyleSheetTypeColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonStyleSheetTypeColor()
	{
		if (!Z_Registration_Info_UClass_UCommonStyleSheetTypeColor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonStyleSheetTypeColor.OuterSingleton, Z_Construct_UClass_UCommonStyleSheetTypeColor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonStyleSheetTypeColor.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonStyleSheetTypeColor>()
	{
		return UCommonStyleSheetTypeColor::StaticClass();
	}
	UCommonStyleSheetTypeColor::UCommonStyleSheetTypeColor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonStyleSheetTypeColor);
	UCommonStyleSheetTypeColor::~UCommonStyleSheetTypeColor() {}
	void UCommonStyleSheetTypeOpacity::StaticRegisterNativesUCommonStyleSheetTypeOpacity()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonStyleSheetTypeOpacity);
	UClass* Z_Construct_UClass_UCommonStyleSheetTypeOpacity_NoRegister()
	{
		return UCommonStyleSheetTypeOpacity::StaticClass();
	}
	struct Z_Construct_UClass_UCommonStyleSheetTypeOpacity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Opacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Opacity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonStyleSheetTypeOpacity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonStyleSheetTypeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonStyleSheetTypeOpacity_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Opacity" },
		{ "IncludePath", "StyleSheet/CommonStyleSheetTypes.h" },
		{ "ModuleRelativePath", "Public/StyleSheet/CommonStyleSheetTypes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonStyleSheetTypeOpacity_Statics::NewProp_Opacity_MetaData[] = {
		{ "Category", "Value" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "EditCondition", "bIsEnabled" },
		{ "ModuleRelativePath", "Public/StyleSheet/CommonStyleSheetTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonStyleSheetTypeOpacity_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonStyleSheetTypeOpacity, Opacity), METADATA_PARAMS(Z_Construct_UClass_UCommonStyleSheetTypeOpacity_Statics::NewProp_Opacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeOpacity_Statics::NewProp_Opacity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonStyleSheetTypeOpacity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonStyleSheetTypeOpacity_Statics::NewProp_Opacity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonStyleSheetTypeOpacity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonStyleSheetTypeOpacity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonStyleSheetTypeOpacity_Statics::ClassParams = {
		&UCommonStyleSheetTypeOpacity::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonStyleSheetTypeOpacity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeOpacity_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonStyleSheetTypeOpacity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeOpacity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonStyleSheetTypeOpacity()
	{
		if (!Z_Registration_Info_UClass_UCommonStyleSheetTypeOpacity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonStyleSheetTypeOpacity.OuterSingleton, Z_Construct_UClass_UCommonStyleSheetTypeOpacity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonStyleSheetTypeOpacity.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonStyleSheetTypeOpacity>()
	{
		return UCommonStyleSheetTypeOpacity::StaticClass();
	}
	UCommonStyleSheetTypeOpacity::UCommonStyleSheetTypeOpacity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonStyleSheetTypeOpacity);
	UCommonStyleSheetTypeOpacity::~UCommonStyleSheetTypeOpacity() {}
	void UCommonStyleSheetTypeLineHeightPercentage::StaticRegisterNativesUCommonStyleSheetTypeLineHeightPercentage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonStyleSheetTypeLineHeightPercentage);
	UClass* Z_Construct_UClass_UCommonStyleSheetTypeLineHeightPercentage_NoRegister()
	{
		return UCommonStyleSheetTypeLineHeightPercentage::StaticClass();
	}
	struct Z_Construct_UClass_UCommonStyleSheetTypeLineHeightPercentage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineHeightPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LineHeightPercentage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonStyleSheetTypeLineHeightPercentage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonStyleSheetTypeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonStyleSheetTypeLineHeightPercentage_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Line Height Percentage" },
		{ "IncludePath", "StyleSheet/CommonStyleSheetTypes.h" },
		{ "ModuleRelativePath", "Public/StyleSheet/CommonStyleSheetTypes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonStyleSheetTypeLineHeightPercentage_Statics::NewProp_LineHeightPercentage_MetaData[] = {
		{ "Category", "Value" },
		{ "EditCondition", "bIsEnabled" },
		{ "ModuleRelativePath", "Public/StyleSheet/CommonStyleSheetTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonStyleSheetTypeLineHeightPercentage_Statics::NewProp_LineHeightPercentage = { "LineHeightPercentage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonStyleSheetTypeLineHeightPercentage, LineHeightPercentage), METADATA_PARAMS(Z_Construct_UClass_UCommonStyleSheetTypeLineHeightPercentage_Statics::NewProp_LineHeightPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeLineHeightPercentage_Statics::NewProp_LineHeightPercentage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonStyleSheetTypeLineHeightPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonStyleSheetTypeLineHeightPercentage_Statics::NewProp_LineHeightPercentage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonStyleSheetTypeLineHeightPercentage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonStyleSheetTypeLineHeightPercentage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonStyleSheetTypeLineHeightPercentage_Statics::ClassParams = {
		&UCommonStyleSheetTypeLineHeightPercentage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonStyleSheetTypeLineHeightPercentage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeLineHeightPercentage_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonStyleSheetTypeLineHeightPercentage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeLineHeightPercentage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonStyleSheetTypeLineHeightPercentage()
	{
		if (!Z_Registration_Info_UClass_UCommonStyleSheetTypeLineHeightPercentage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonStyleSheetTypeLineHeightPercentage.OuterSingleton, Z_Construct_UClass_UCommonStyleSheetTypeLineHeightPercentage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonStyleSheetTypeLineHeightPercentage.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonStyleSheetTypeLineHeightPercentage>()
	{
		return UCommonStyleSheetTypeLineHeightPercentage::StaticClass();
	}
	UCommonStyleSheetTypeLineHeightPercentage::UCommonStyleSheetTypeLineHeightPercentage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonStyleSheetTypeLineHeightPercentage);
	UCommonStyleSheetTypeLineHeightPercentage::~UCommonStyleSheetTypeLineHeightPercentage() {}
	void UCommonStyleSheetTypeFontTypeface::StaticRegisterNativesUCommonStyleSheetTypeFontTypeface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonStyleSheetTypeFontTypeface);
	UClass* Z_Construct_UClass_UCommonStyleSheetTypeFontTypeface_NoRegister()
	{
		return UCommonStyleSheetTypeFontTypeface::StaticClass();
	}
	struct Z_Construct_UClass_UCommonStyleSheetTypeFontTypeface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Typeface_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Typeface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonStyleSheetTypeFontTypeface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonStyleSheetTypeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonStyleSheetTypeFontTypeface_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Font - Typeface" },
		{ "IncludePath", "StyleSheet/CommonStyleSheetTypes.h" },
		{ "ModuleRelativePath", "Public/StyleSheet/CommonStyleSheetTypes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonStyleSheetTypeFontTypeface_Statics::NewProp_Typeface_MetaData[] = {
		{ "Category", "Value" },
		{ "Comment", "//\x09""FIXME: Should be used instead of SlateFontInfo but no time to do the customization\n// \x09UPROPERTY(EditDefaultsOnly, Category = \"Value\", meta = (AllowedClasses = \"/Script/Engine.Font\"))\n// \x09TObjectPtr<const UObject> FontFamily;\n// \n// \x09UPROPERTY(EditDefaultsOnly, Category = \"Value\")\n// \x09""FName Typeface;\n" },
		{ "EditCondition", "bIsEnabled" },
		{ "ModuleRelativePath", "Public/StyleSheet/CommonStyleSheetTypes.h" },
		{ "ToolTip", "FIXME: Should be used instead of SlateFontInfo but no time to do the customization\nUPROPERTY(EditDefaultsOnly, Category = \"Value\", meta = (AllowedClasses = \"/Script/Engine.Font\"))\nTObjectPtr<const UObject> FontFamily;\n\nUPROPERTY(EditDefaultsOnly, Category = \"Value\")\nFName Typeface;" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonStyleSheetTypeFontTypeface_Statics::NewProp_Typeface = { "Typeface", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonStyleSheetTypeFontTypeface, Typeface), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UClass_UCommonStyleSheetTypeFontTypeface_Statics::NewProp_Typeface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeFontTypeface_Statics::NewProp_Typeface_MetaData)) }; // 192883377
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonStyleSheetTypeFontTypeface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonStyleSheetTypeFontTypeface_Statics::NewProp_Typeface,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonStyleSheetTypeFontTypeface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonStyleSheetTypeFontTypeface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonStyleSheetTypeFontTypeface_Statics::ClassParams = {
		&UCommonStyleSheetTypeFontTypeface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonStyleSheetTypeFontTypeface_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeFontTypeface_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonStyleSheetTypeFontTypeface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeFontTypeface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonStyleSheetTypeFontTypeface()
	{
		if (!Z_Registration_Info_UClass_UCommonStyleSheetTypeFontTypeface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonStyleSheetTypeFontTypeface.OuterSingleton, Z_Construct_UClass_UCommonStyleSheetTypeFontTypeface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonStyleSheetTypeFontTypeface.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonStyleSheetTypeFontTypeface>()
	{
		return UCommonStyleSheetTypeFontTypeface::StaticClass();
	}
	UCommonStyleSheetTypeFontTypeface::UCommonStyleSheetTypeFontTypeface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonStyleSheetTypeFontTypeface);
	UCommonStyleSheetTypeFontTypeface::~UCommonStyleSheetTypeFontTypeface() {}
	void UCommonStyleSheetTypeFontSize::StaticRegisterNativesUCommonStyleSheetTypeFontSize()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonStyleSheetTypeFontSize);
	UClass* Z_Construct_UClass_UCommonStyleSheetTypeFontSize_NoRegister()
	{
		return UCommonStyleSheetTypeFontSize::StaticClass();
	}
	struct Z_Construct_UClass_UCommonStyleSheetTypeFontSize_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonStyleSheetTypeFontSize_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonStyleSheetTypeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonStyleSheetTypeFontSize_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Font - Size" },
		{ "IncludePath", "StyleSheet/CommonStyleSheetTypes.h" },
		{ "ModuleRelativePath", "Public/StyleSheet/CommonStyleSheetTypes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonStyleSheetTypeFontSize_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Value" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
		{ "EditCondition", "bIsEnabled" },
		{ "ModuleRelativePath", "Public/StyleSheet/CommonStyleSheetTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonStyleSheetTypeFontSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonStyleSheetTypeFontSize, Size), METADATA_PARAMS(Z_Construct_UClass_UCommonStyleSheetTypeFontSize_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeFontSize_Statics::NewProp_Size_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonStyleSheetTypeFontSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonStyleSheetTypeFontSize_Statics::NewProp_Size,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonStyleSheetTypeFontSize_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonStyleSheetTypeFontSize>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonStyleSheetTypeFontSize_Statics::ClassParams = {
		&UCommonStyleSheetTypeFontSize::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonStyleSheetTypeFontSize_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeFontSize_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonStyleSheetTypeFontSize_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeFontSize_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonStyleSheetTypeFontSize()
	{
		if (!Z_Registration_Info_UClass_UCommonStyleSheetTypeFontSize.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonStyleSheetTypeFontSize.OuterSingleton, Z_Construct_UClass_UCommonStyleSheetTypeFontSize_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonStyleSheetTypeFontSize.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonStyleSheetTypeFontSize>()
	{
		return UCommonStyleSheetTypeFontSize::StaticClass();
	}
	UCommonStyleSheetTypeFontSize::UCommonStyleSheetTypeFontSize(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonStyleSheetTypeFontSize);
	UCommonStyleSheetTypeFontSize::~UCommonStyleSheetTypeFontSize() {}
	void UCommonStyleSheetTypeFontLetterSpacing::StaticRegisterNativesUCommonStyleSheetTypeFontLetterSpacing()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonStyleSheetTypeFontLetterSpacing);
	UClass* Z_Construct_UClass_UCommonStyleSheetTypeFontLetterSpacing_NoRegister()
	{
		return UCommonStyleSheetTypeFontLetterSpacing::StaticClass();
	}
	struct Z_Construct_UClass_UCommonStyleSheetTypeFontLetterSpacing_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LetterSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LetterSpacing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonStyleSheetTypeFontLetterSpacing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonStyleSheetTypeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonStyleSheetTypeFontLetterSpacing_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Font - Letter Spacing" },
		{ "IncludePath", "StyleSheet/CommonStyleSheetTypes.h" },
		{ "ModuleRelativePath", "Public/StyleSheet/CommonStyleSheetTypes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonStyleSheetTypeFontLetterSpacing_Statics::NewProp_LetterSpacing_MetaData[] = {
		{ "Category", "Value" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "-1000" },
		{ "EditCondition", "bIsEnabled" },
		{ "ModuleRelativePath", "Public/StyleSheet/CommonStyleSheetTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonStyleSheetTypeFontLetterSpacing_Statics::NewProp_LetterSpacing = { "LetterSpacing", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonStyleSheetTypeFontLetterSpacing, LetterSpacing), METADATA_PARAMS(Z_Construct_UClass_UCommonStyleSheetTypeFontLetterSpacing_Statics::NewProp_LetterSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeFontLetterSpacing_Statics::NewProp_LetterSpacing_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonStyleSheetTypeFontLetterSpacing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonStyleSheetTypeFontLetterSpacing_Statics::NewProp_LetterSpacing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonStyleSheetTypeFontLetterSpacing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonStyleSheetTypeFontLetterSpacing>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonStyleSheetTypeFontLetterSpacing_Statics::ClassParams = {
		&UCommonStyleSheetTypeFontLetterSpacing::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonStyleSheetTypeFontLetterSpacing_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeFontLetterSpacing_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonStyleSheetTypeFontLetterSpacing_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeFontLetterSpacing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonStyleSheetTypeFontLetterSpacing()
	{
		if (!Z_Registration_Info_UClass_UCommonStyleSheetTypeFontLetterSpacing.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonStyleSheetTypeFontLetterSpacing.OuterSingleton, Z_Construct_UClass_UCommonStyleSheetTypeFontLetterSpacing_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonStyleSheetTypeFontLetterSpacing.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonStyleSheetTypeFontLetterSpacing>()
	{
		return UCommonStyleSheetTypeFontLetterSpacing::StaticClass();
	}
	UCommonStyleSheetTypeFontLetterSpacing::UCommonStyleSheetTypeFontLetterSpacing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonStyleSheetTypeFontLetterSpacing);
	UCommonStyleSheetTypeFontLetterSpacing::~UCommonStyleSheetTypeFontLetterSpacing() {}
	void UCommonStyleSheetTypeMarginLeft::StaticRegisterNativesUCommonStyleSheetTypeMarginLeft()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonStyleSheetTypeMarginLeft);
	UClass* Z_Construct_UClass_UCommonStyleSheetTypeMarginLeft_NoRegister()
	{
		return UCommonStyleSheetTypeMarginLeft::StaticClass();
	}
	struct Z_Construct_UClass_UCommonStyleSheetTypeMarginLeft_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Left;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonStyleSheetTypeMarginLeft_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonStyleSheetTypeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonStyleSheetTypeMarginLeft_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Margin - Left" },
		{ "IncludePath", "StyleSheet/CommonStyleSheetTypes.h" },
		{ "ModuleRelativePath", "Public/StyleSheet/CommonStyleSheetTypes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonStyleSheetTypeMarginLeft_Statics::NewProp_Left_MetaData[] = {
		{ "Category", "Value" },
		{ "EditCondition", "bIsEnabled" },
		{ "ModuleRelativePath", "Public/StyleSheet/CommonStyleSheetTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonStyleSheetTypeMarginLeft_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonStyleSheetTypeMarginLeft, Left), METADATA_PARAMS(Z_Construct_UClass_UCommonStyleSheetTypeMarginLeft_Statics::NewProp_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeMarginLeft_Statics::NewProp_Left_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonStyleSheetTypeMarginLeft_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonStyleSheetTypeMarginLeft_Statics::NewProp_Left,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonStyleSheetTypeMarginLeft_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonStyleSheetTypeMarginLeft>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonStyleSheetTypeMarginLeft_Statics::ClassParams = {
		&UCommonStyleSheetTypeMarginLeft::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonStyleSheetTypeMarginLeft_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeMarginLeft_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonStyleSheetTypeMarginLeft_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeMarginLeft_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonStyleSheetTypeMarginLeft()
	{
		if (!Z_Registration_Info_UClass_UCommonStyleSheetTypeMarginLeft.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonStyleSheetTypeMarginLeft.OuterSingleton, Z_Construct_UClass_UCommonStyleSheetTypeMarginLeft_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonStyleSheetTypeMarginLeft.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonStyleSheetTypeMarginLeft>()
	{
		return UCommonStyleSheetTypeMarginLeft::StaticClass();
	}
	UCommonStyleSheetTypeMarginLeft::UCommonStyleSheetTypeMarginLeft(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonStyleSheetTypeMarginLeft);
	UCommonStyleSheetTypeMarginLeft::~UCommonStyleSheetTypeMarginLeft() {}
	void UCommonStyleSheetTypeMarginRight::StaticRegisterNativesUCommonStyleSheetTypeMarginRight()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonStyleSheetTypeMarginRight);
	UClass* Z_Construct_UClass_UCommonStyleSheetTypeMarginRight_NoRegister()
	{
		return UCommonStyleSheetTypeMarginRight::StaticClass();
	}
	struct Z_Construct_UClass_UCommonStyleSheetTypeMarginRight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonStyleSheetTypeMarginRight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonStyleSheetTypeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonStyleSheetTypeMarginRight_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Margin - Right" },
		{ "IncludePath", "StyleSheet/CommonStyleSheetTypes.h" },
		{ "ModuleRelativePath", "Public/StyleSheet/CommonStyleSheetTypes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonStyleSheetTypeMarginRight_Statics::NewProp_Right_MetaData[] = {
		{ "Category", "Value" },
		{ "EditCondition", "bIsEnabled" },
		{ "ModuleRelativePath", "Public/StyleSheet/CommonStyleSheetTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonStyleSheetTypeMarginRight_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonStyleSheetTypeMarginRight, Right), METADATA_PARAMS(Z_Construct_UClass_UCommonStyleSheetTypeMarginRight_Statics::NewProp_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeMarginRight_Statics::NewProp_Right_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonStyleSheetTypeMarginRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonStyleSheetTypeMarginRight_Statics::NewProp_Right,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonStyleSheetTypeMarginRight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonStyleSheetTypeMarginRight>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonStyleSheetTypeMarginRight_Statics::ClassParams = {
		&UCommonStyleSheetTypeMarginRight::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonStyleSheetTypeMarginRight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeMarginRight_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonStyleSheetTypeMarginRight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeMarginRight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonStyleSheetTypeMarginRight()
	{
		if (!Z_Registration_Info_UClass_UCommonStyleSheetTypeMarginRight.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonStyleSheetTypeMarginRight.OuterSingleton, Z_Construct_UClass_UCommonStyleSheetTypeMarginRight_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonStyleSheetTypeMarginRight.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonStyleSheetTypeMarginRight>()
	{
		return UCommonStyleSheetTypeMarginRight::StaticClass();
	}
	UCommonStyleSheetTypeMarginRight::UCommonStyleSheetTypeMarginRight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonStyleSheetTypeMarginRight);
	UCommonStyleSheetTypeMarginRight::~UCommonStyleSheetTypeMarginRight() {}
	void UCommonStyleSheetTypeMarginTop::StaticRegisterNativesUCommonStyleSheetTypeMarginTop()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonStyleSheetTypeMarginTop);
	UClass* Z_Construct_UClass_UCommonStyleSheetTypeMarginTop_NoRegister()
	{
		return UCommonStyleSheetTypeMarginTop::StaticClass();
	}
	struct Z_Construct_UClass_UCommonStyleSheetTypeMarginTop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Top_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Top;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonStyleSheetTypeMarginTop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonStyleSheetTypeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonStyleSheetTypeMarginTop_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Margin - Top" },
		{ "IncludePath", "StyleSheet/CommonStyleSheetTypes.h" },
		{ "ModuleRelativePath", "Public/StyleSheet/CommonStyleSheetTypes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonStyleSheetTypeMarginTop_Statics::NewProp_Top_MetaData[] = {
		{ "Category", "Value" },
		{ "EditCondition", "bIsEnabled" },
		{ "ModuleRelativePath", "Public/StyleSheet/CommonStyleSheetTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonStyleSheetTypeMarginTop_Statics::NewProp_Top = { "Top", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonStyleSheetTypeMarginTop, Top), METADATA_PARAMS(Z_Construct_UClass_UCommonStyleSheetTypeMarginTop_Statics::NewProp_Top_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeMarginTop_Statics::NewProp_Top_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonStyleSheetTypeMarginTop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonStyleSheetTypeMarginTop_Statics::NewProp_Top,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonStyleSheetTypeMarginTop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonStyleSheetTypeMarginTop>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonStyleSheetTypeMarginTop_Statics::ClassParams = {
		&UCommonStyleSheetTypeMarginTop::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonStyleSheetTypeMarginTop_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeMarginTop_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonStyleSheetTypeMarginTop_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeMarginTop_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonStyleSheetTypeMarginTop()
	{
		if (!Z_Registration_Info_UClass_UCommonStyleSheetTypeMarginTop.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonStyleSheetTypeMarginTop.OuterSingleton, Z_Construct_UClass_UCommonStyleSheetTypeMarginTop_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonStyleSheetTypeMarginTop.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonStyleSheetTypeMarginTop>()
	{
		return UCommonStyleSheetTypeMarginTop::StaticClass();
	}
	UCommonStyleSheetTypeMarginTop::UCommonStyleSheetTypeMarginTop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonStyleSheetTypeMarginTop);
	UCommonStyleSheetTypeMarginTop::~UCommonStyleSheetTypeMarginTop() {}
	void UCommonStyleSheetTypeMarginBottom::StaticRegisterNativesUCommonStyleSheetTypeMarginBottom()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonStyleSheetTypeMarginBottom);
	UClass* Z_Construct_UClass_UCommonStyleSheetTypeMarginBottom_NoRegister()
	{
		return UCommonStyleSheetTypeMarginBottom::StaticClass();
	}
	struct Z_Construct_UClass_UCommonStyleSheetTypeMarginBottom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bottom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bottom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonStyleSheetTypeMarginBottom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonStyleSheetTypeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonStyleSheetTypeMarginBottom_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Margin - Bottom" },
		{ "IncludePath", "StyleSheet/CommonStyleSheetTypes.h" },
		{ "ModuleRelativePath", "Public/StyleSheet/CommonStyleSheetTypes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonStyleSheetTypeMarginBottom_Statics::NewProp_Bottom_MetaData[] = {
		{ "Category", "Value" },
		{ "EditCondition", "bIsEnabled" },
		{ "ModuleRelativePath", "Public/StyleSheet/CommonStyleSheetTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonStyleSheetTypeMarginBottom_Statics::NewProp_Bottom = { "Bottom", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonStyleSheetTypeMarginBottom, Bottom), METADATA_PARAMS(Z_Construct_UClass_UCommonStyleSheetTypeMarginBottom_Statics::NewProp_Bottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeMarginBottom_Statics::NewProp_Bottom_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonStyleSheetTypeMarginBottom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonStyleSheetTypeMarginBottom_Statics::NewProp_Bottom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonStyleSheetTypeMarginBottom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonStyleSheetTypeMarginBottom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonStyleSheetTypeMarginBottom_Statics::ClassParams = {
		&UCommonStyleSheetTypeMarginBottom::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonStyleSheetTypeMarginBottom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeMarginBottom_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonStyleSheetTypeMarginBottom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonStyleSheetTypeMarginBottom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonStyleSheetTypeMarginBottom()
	{
		if (!Z_Registration_Info_UClass_UCommonStyleSheetTypeMarginBottom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonStyleSheetTypeMarginBottom.OuterSingleton, Z_Construct_UClass_UCommonStyleSheetTypeMarginBottom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonStyleSheetTypeMarginBottom.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonStyleSheetTypeMarginBottom>()
	{
		return UCommonStyleSheetTypeMarginBottom::StaticClass();
	}
	UCommonStyleSheetTypeMarginBottom::UCommonStyleSheetTypeMarginBottom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonStyleSheetTypeMarginBottom);
	UCommonStyleSheetTypeMarginBottom::~UCommonStyleSheetTypeMarginBottom() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_StyleSheet_CommonStyleSheetTypes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_StyleSheet_CommonStyleSheetTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonStyleSheetTypeBase, UCommonStyleSheetTypeBase::StaticClass, TEXT("UCommonStyleSheetTypeBase"), &Z_Registration_Info_UClass_UCommonStyleSheetTypeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonStyleSheetTypeBase), 79960571U) },
		{ Z_Construct_UClass_UCommonStyleSheetTypeColor, UCommonStyleSheetTypeColor::StaticClass, TEXT("UCommonStyleSheetTypeColor"), &Z_Registration_Info_UClass_UCommonStyleSheetTypeColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonStyleSheetTypeColor), 3070287155U) },
		{ Z_Construct_UClass_UCommonStyleSheetTypeOpacity, UCommonStyleSheetTypeOpacity::StaticClass, TEXT("UCommonStyleSheetTypeOpacity"), &Z_Registration_Info_UClass_UCommonStyleSheetTypeOpacity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonStyleSheetTypeOpacity), 1490604542U) },
		{ Z_Construct_UClass_UCommonStyleSheetTypeLineHeightPercentage, UCommonStyleSheetTypeLineHeightPercentage::StaticClass, TEXT("UCommonStyleSheetTypeLineHeightPercentage"), &Z_Registration_Info_UClass_UCommonStyleSheetTypeLineHeightPercentage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonStyleSheetTypeLineHeightPercentage), 3820054002U) },
		{ Z_Construct_UClass_UCommonStyleSheetTypeFontTypeface, UCommonStyleSheetTypeFontTypeface::StaticClass, TEXT("UCommonStyleSheetTypeFontTypeface"), &Z_Registration_Info_UClass_UCommonStyleSheetTypeFontTypeface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonStyleSheetTypeFontTypeface), 456264062U) },
		{ Z_Construct_UClass_UCommonStyleSheetTypeFontSize, UCommonStyleSheetTypeFontSize::StaticClass, TEXT("UCommonStyleSheetTypeFontSize"), &Z_Registration_Info_UClass_UCommonStyleSheetTypeFontSize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonStyleSheetTypeFontSize), 4262116082U) },
		{ Z_Construct_UClass_UCommonStyleSheetTypeFontLetterSpacing, UCommonStyleSheetTypeFontLetterSpacing::StaticClass, TEXT("UCommonStyleSheetTypeFontLetterSpacing"), &Z_Registration_Info_UClass_UCommonStyleSheetTypeFontLetterSpacing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonStyleSheetTypeFontLetterSpacing), 261648358U) },
		{ Z_Construct_UClass_UCommonStyleSheetTypeMarginLeft, UCommonStyleSheetTypeMarginLeft::StaticClass, TEXT("UCommonStyleSheetTypeMarginLeft"), &Z_Registration_Info_UClass_UCommonStyleSheetTypeMarginLeft, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonStyleSheetTypeMarginLeft), 298832270U) },
		{ Z_Construct_UClass_UCommonStyleSheetTypeMarginRight, UCommonStyleSheetTypeMarginRight::StaticClass, TEXT("UCommonStyleSheetTypeMarginRight"), &Z_Registration_Info_UClass_UCommonStyleSheetTypeMarginRight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonStyleSheetTypeMarginRight), 3257115535U) },
		{ Z_Construct_UClass_UCommonStyleSheetTypeMarginTop, UCommonStyleSheetTypeMarginTop::StaticClass, TEXT("UCommonStyleSheetTypeMarginTop"), &Z_Registration_Info_UClass_UCommonStyleSheetTypeMarginTop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonStyleSheetTypeMarginTop), 1495480494U) },
		{ Z_Construct_UClass_UCommonStyleSheetTypeMarginBottom, UCommonStyleSheetTypeMarginBottom::StaticClass, TEXT("UCommonStyleSheetTypeMarginBottom"), &Z_Registration_Info_UClass_UCommonStyleSheetTypeMarginBottom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonStyleSheetTypeMarginBottom), 1169668749U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_StyleSheet_CommonStyleSheetTypes_h_1582175781(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_StyleSheet_CommonStyleSheetTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_StyleSheet_CommonStyleSheetTypes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
