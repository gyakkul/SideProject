// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MaterialX/MaterialExpressionLuminance.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLuminance() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UMaterialExpressionLuminance();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UMaterialExpressionLuminance_NoRegister();
	INTERCHANGEIMPORT_API UEnum* Z_Construct_UEnum_InterchangeImport_ELuminanceMode();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELuminanceMode;
	static UEnum* ELuminanceMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELuminanceMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELuminanceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeImport_ELuminanceMode, (UObject*)Z_Construct_UPackage__Script_InterchangeImport(), TEXT("ELuminanceMode"));
		}
		return Z_Registration_Info_UEnum_ELuminanceMode.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UEnum* StaticEnum<ELuminanceMode>()
	{
		return ELuminanceMode_StaticEnum();
	}
	struct Z_Construct_UEnum_InterchangeImport_ELuminanceMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InterchangeImport_ELuminanceMode_Statics::Enumerators[] = {
		{ "ELuminanceMode::ACEScg", (int64)ELuminanceMode::ACEScg },
		{ "ELuminanceMode::Rec709", (int64)ELuminanceMode::Rec709 },
		{ "ELuminanceMode::Rec2020", (int64)ELuminanceMode::Rec2020 },
		{ "ELuminanceMode::Rec2100", (int64)ELuminanceMode::Rec2100 },
		{ "ELuminanceMode::Custom", (int64)ELuminanceMode::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InterchangeImport_ELuminanceMode_Statics::Enum_MetaDataParams[] = {
		{ "ACEScg.Name", "ELuminanceMode::ACEScg" },
		{ "Comment", "/**\n * A material expression that outputs a grayscale image containing the luminance of the incoming RGB color in all color channels;\n    the alpha channel is left unchanged if present.\n */" },
		{ "Custom.Name", "ELuminanceMode::Custom" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressionLuminance.h" },
		{ "Rec2020.Name", "ELuminanceMode::Rec2020" },
		{ "Rec2100.Name", "ELuminanceMode::Rec2100" },
		{ "Rec709.Name", "ELuminanceMode::Rec709" },
		{ "ToolTip", "A material expression that outputs a grayscale image containing the luminance of the incoming RGB color in all color channels;\n    the alpha channel is left unchanged if present." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeImport_ELuminanceMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InterchangeImport,
		nullptr,
		"ELuminanceMode",
		"ELuminanceMode",
		Z_Construct_UEnum_InterchangeImport_ELuminanceMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeImport_ELuminanceMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InterchangeImport_ELuminanceMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeImport_ELuminanceMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InterchangeImport_ELuminanceMode()
	{
		if (!Z_Registration_Info_UEnum_ELuminanceMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELuminanceMode.InnerSingleton, Z_Construct_UEnum_InterchangeImport_ELuminanceMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELuminanceMode.InnerSingleton;
	}
	void UMaterialExpressionLuminance::StaticRegisterNativesUMaterialExpressionLuminance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionLuminance);
	UClass* Z_Construct_UClass_UMaterialExpressionLuminance_NoRegister()
	{
		return UMaterialExpressionLuminance::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionLuminance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LuminanceFactors_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LuminanceFactors;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LuminanceMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LuminanceMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LuminanceMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionLuminance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLuminance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialX/MaterialExpressionLuminance.h" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressionLuminance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLuminance_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressionLuminance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLuminance_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionLuminance, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLuminance_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLuminance_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLuminance_Statics::NewProp_LuminanceFactors_MetaData[] = {
		{ "Category", "MaterialExpressionLuminance" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressionLuminance.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLuminance_Statics::NewProp_LuminanceFactors = { "LuminanceFactors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionLuminance, LuminanceFactors), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLuminance_Statics::NewProp_LuminanceFactors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLuminance_Statics::NewProp_LuminanceFactors_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionLuminance_Statics::NewProp_LuminanceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLuminance_Statics::NewProp_LuminanceMode_MetaData[] = {
		{ "Category", "MaterialExpressionLuminance" },
		{ "Comment", "// Color component factors for converting a color to greyscale.\n" },
		{ "ModuleRelativePath", "Private/MaterialX/MaterialExpressionLuminance.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Color component factors for converting a color to greyscale." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialExpressionLuminance_Statics::NewProp_LuminanceMode = { "LuminanceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionLuminance, LuminanceMode), Z_Construct_UEnum_InterchangeImport_ELuminanceMode, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLuminance_Statics::NewProp_LuminanceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLuminance_Statics::NewProp_LuminanceMode_MetaData)) }; // 1277369895
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionLuminance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLuminance_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLuminance_Statics::NewProp_LuminanceFactors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLuminance_Statics::NewProp_LuminanceMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLuminance_Statics::NewProp_LuminanceMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionLuminance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionLuminance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionLuminance_Statics::ClassParams = {
		&UMaterialExpressionLuminance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionLuminance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLuminance_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLuminance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLuminance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionLuminance()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionLuminance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionLuminance.OuterSingleton, Z_Construct_UClass_UMaterialExpressionLuminance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionLuminance.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UMaterialExpressionLuminance>()
	{
		return UMaterialExpressionLuminance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLuminance);
	UMaterialExpressionLuminance::~UMaterialExpressionLuminance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionLuminance_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionLuminance_h_Statics::EnumInfo[] = {
		{ ELuminanceMode_StaticEnum, TEXT("ELuminanceMode"), &Z_Registration_Info_UEnum_ELuminanceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1277369895U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionLuminance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionLuminance, UMaterialExpressionLuminance::StaticClass, TEXT("UMaterialExpressionLuminance"), &Z_Registration_Info_UClass_UMaterialExpressionLuminance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionLuminance), 4159129616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionLuminance_h_4157779563(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionLuminance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionLuminance_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionLuminance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressionLuminance_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
