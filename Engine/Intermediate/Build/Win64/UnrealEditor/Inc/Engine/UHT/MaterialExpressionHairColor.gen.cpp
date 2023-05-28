// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionHairColor.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionHairColor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionHairColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionHairColor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionHairColor::StaticRegisterNativesUMaterialExpressionHairColor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionHairColor);
	UClass* Z_Construct_UClass_UMaterialExpressionHairColor_NoRegister()
	{
		return UMaterialExpressionHairColor::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionHairColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Melanin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Melanin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Redness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Redness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DyeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DyeColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionHairColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionHairColor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionHairColor.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionHairColor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_Melanin_MetaData[] = {
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Control the concentration of melanin in hair. Value is normalize over the plausible range of human hair.*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionHairColor.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Control the concentration of melanin in hair. Value is normalize over the plausible range of human hair." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_Melanin = { "Melanin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionHairColor, Melanin), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_Melanin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_Melanin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_Redness_MetaData[] = {
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Control the redness tint of the hair. Value is normalize over the plausible range of human hair.*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionHairColor.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Control the redness tint of the hair. Value is normalize over the plausible range of human hair." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_Redness = { "Redness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionHairColor, Redness), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_Redness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_Redness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_DyeColor_MetaData[] = {
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Control the dyeing color of the hair. By default there is no dyeing color.*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionHairColor.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Control the dyeing color of the hair. By default there is no dyeing color." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_DyeColor = { "DyeColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionHairColor, DyeColor), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_DyeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_DyeColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionHairColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_Melanin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_Redness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionHairColor_Statics::NewProp_DyeColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionHairColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionHairColor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionHairColor_Statics::ClassParams = {
		&UMaterialExpressionHairColor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionHairColor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionHairColor_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionHairColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionHairColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionHairColor()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionHairColor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionHairColor.OuterSingleton, Z_Construct_UClass_UMaterialExpressionHairColor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionHairColor.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionHairColor>()
	{
		return UMaterialExpressionHairColor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionHairColor);
	UMaterialExpressionHairColor::~UMaterialExpressionHairColor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairColor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairColor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionHairColor, UMaterialExpressionHairColor::StaticClass, TEXT("UMaterialExpressionHairColor"), &Z_Registration_Info_UClass_UMaterialExpressionHairColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionHairColor), 3791658812U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairColor_h_4102301062(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairColor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionHairColor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
