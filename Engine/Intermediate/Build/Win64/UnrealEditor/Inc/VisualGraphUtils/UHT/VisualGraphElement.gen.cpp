// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VisualGraphElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualGraphElement() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VisualGraphUtils();
	VISUALGRAPHUTILS_API UEnum* Z_Construct_UEnum_VisualGraphUtils_EVisualGraphShape();
	VISUALGRAPHUTILS_API UEnum* Z_Construct_UEnum_VisualGraphUtils_EVisualGraphStyle();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVisualGraphShape;
	static UEnum* EVisualGraphShape_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVisualGraphShape.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVisualGraphShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VisualGraphUtils_EVisualGraphShape, (UObject*)Z_Construct_UPackage__Script_VisualGraphUtils(), TEXT("EVisualGraphShape"));
		}
		return Z_Registration_Info_UEnum_EVisualGraphShape.OuterSingleton;
	}
	template<> VISUALGRAPHUTILS_API UEnum* StaticEnum<EVisualGraphShape>()
	{
		return EVisualGraphShape_StaticEnum();
	}
	struct Z_Construct_UEnum_VisualGraphUtils_EVisualGraphShape_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VisualGraphUtils_EVisualGraphShape_Statics::Enumerators[] = {
		{ "EVisualGraphShape::Box", (int64)EVisualGraphShape::Box },
		{ "EVisualGraphShape::Polygon", (int64)EVisualGraphShape::Polygon },
		{ "EVisualGraphShape::Ellipse", (int64)EVisualGraphShape::Ellipse },
		{ "EVisualGraphShape::Circle", (int64)EVisualGraphShape::Circle },
		{ "EVisualGraphShape::Triangle", (int64)EVisualGraphShape::Triangle },
		{ "EVisualGraphShape::PlainText", (int64)EVisualGraphShape::PlainText },
		{ "EVisualGraphShape::Diamond", (int64)EVisualGraphShape::Diamond },
		{ "EVisualGraphShape::Parallelogram", (int64)EVisualGraphShape::Parallelogram },
		{ "EVisualGraphShape::House", (int64)EVisualGraphShape::House },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VisualGraphUtils_EVisualGraphShape_Statics::Enum_MetaDataParams[] = {
		{ "Box.Name", "EVisualGraphShape::Box" },
		{ "Circle.Name", "EVisualGraphShape::Circle" },
		{ "Diamond.Name", "EVisualGraphShape::Diamond" },
		{ "Ellipse.Name", "EVisualGraphShape::Ellipse" },
		{ "House.Name", "EVisualGraphShape::House" },
		{ "ModuleRelativePath", "Public/VisualGraphElement.h" },
		{ "Parallelogram.Name", "EVisualGraphShape::Parallelogram" },
		{ "PlainText.Name", "EVisualGraphShape::PlainText" },
		{ "Polygon.Name", "EVisualGraphShape::Polygon" },
		{ "Triangle.Name", "EVisualGraphShape::Triangle" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VisualGraphUtils_EVisualGraphShape_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VisualGraphUtils,
		nullptr,
		"EVisualGraphShape",
		"EVisualGraphShape",
		Z_Construct_UEnum_VisualGraphUtils_EVisualGraphShape_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VisualGraphUtils_EVisualGraphShape_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VisualGraphUtils_EVisualGraphShape_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VisualGraphUtils_EVisualGraphShape_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VisualGraphUtils_EVisualGraphShape()
	{
		if (!Z_Registration_Info_UEnum_EVisualGraphShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVisualGraphShape.InnerSingleton, Z_Construct_UEnum_VisualGraphUtils_EVisualGraphShape_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVisualGraphShape.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVisualGraphStyle;
	static UEnum* EVisualGraphStyle_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVisualGraphStyle.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVisualGraphStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VisualGraphUtils_EVisualGraphStyle, (UObject*)Z_Construct_UPackage__Script_VisualGraphUtils(), TEXT("EVisualGraphStyle"));
		}
		return Z_Registration_Info_UEnum_EVisualGraphStyle.OuterSingleton;
	}
	template<> VISUALGRAPHUTILS_API UEnum* StaticEnum<EVisualGraphStyle>()
	{
		return EVisualGraphStyle_StaticEnum();
	}
	struct Z_Construct_UEnum_VisualGraphUtils_EVisualGraphStyle_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VisualGraphUtils_EVisualGraphStyle_Statics::Enumerators[] = {
		{ "EVisualGraphStyle::Filled", (int64)EVisualGraphStyle::Filled },
		{ "EVisualGraphStyle::Diagonals", (int64)EVisualGraphStyle::Diagonals },
		{ "EVisualGraphStyle::Rounded", (int64)EVisualGraphStyle::Rounded },
		{ "EVisualGraphStyle::Dashed", (int64)EVisualGraphStyle::Dashed },
		{ "EVisualGraphStyle::Dotted", (int64)EVisualGraphStyle::Dotted },
		{ "EVisualGraphStyle::Solid", (int64)EVisualGraphStyle::Solid },
		{ "EVisualGraphStyle::Bold", (int64)EVisualGraphStyle::Bold },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VisualGraphUtils_EVisualGraphStyle_Statics::Enum_MetaDataParams[] = {
		{ "Bold.Name", "EVisualGraphStyle::Bold" },
		{ "Dashed.Name", "EVisualGraphStyle::Dashed" },
		{ "Diagonals.Name", "EVisualGraphStyle::Diagonals" },
		{ "Dotted.Name", "EVisualGraphStyle::Dotted" },
		{ "Filled.Name", "EVisualGraphStyle::Filled" },
		{ "ModuleRelativePath", "Public/VisualGraphElement.h" },
		{ "Rounded.Name", "EVisualGraphStyle::Rounded" },
		{ "Solid.Name", "EVisualGraphStyle::Solid" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VisualGraphUtils_EVisualGraphStyle_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VisualGraphUtils,
		nullptr,
		"EVisualGraphStyle",
		"EVisualGraphStyle",
		Z_Construct_UEnum_VisualGraphUtils_EVisualGraphStyle_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VisualGraphUtils_EVisualGraphStyle_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VisualGraphUtils_EVisualGraphStyle_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VisualGraphUtils_EVisualGraphStyle_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VisualGraphUtils_EVisualGraphStyle()
	{
		if (!Z_Registration_Info_UEnum_EVisualGraphStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVisualGraphStyle.InnerSingleton, Z_Construct_UEnum_VisualGraphUtils_EVisualGraphStyle_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVisualGraphStyle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_VisualGraphUtils_Public_VisualGraphElement_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_VisualGraphUtils_Public_VisualGraphElement_h_Statics::EnumInfo[] = {
		{ EVisualGraphShape_StaticEnum, TEXT("EVisualGraphShape"), &Z_Registration_Info_UEnum_EVisualGraphShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2745465342U) },
		{ EVisualGraphStyle_StaticEnum, TEXT("EVisualGraphStyle"), &Z_Registration_Info_UEnum_EVisualGraphStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2297065585U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_VisualGraphUtils_Public_VisualGraphElement_h_1003295143(TEXT("/Script/VisualGraphUtils"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_VisualGraphUtils_Public_VisualGraphElement_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_VisualGraphUtils_Public_VisualGraphElement_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
