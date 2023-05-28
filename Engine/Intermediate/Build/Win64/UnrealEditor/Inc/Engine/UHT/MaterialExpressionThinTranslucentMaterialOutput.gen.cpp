// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionThinTranslucentMaterialOutput.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionThinTranslucentMaterialOutput() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionThinTranslucentMaterialOutput::StaticRegisterNativesUMaterialExpressionThinTranslucentMaterialOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionThinTranslucentMaterialOutput);
	UClass* Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_NoRegister()
	{
		return UMaterialExpressionThinTranslucentMaterialOutput::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransmittanceColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransmittanceColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionCustomOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Material output expression for setting absorption properties of thin translucent materials. */" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionThinTranslucentMaterialOutput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionThinTranslucentMaterialOutput.h" },
		{ "ToolTip", "Material output expression for setting absorption properties of thin translucent materials." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::NewProp_TransmittanceColor_MetaData[] = {
		{ "Comment", "/** Input for the transmittance color for a view perpendicular to the surface. Valid range is [0,1]. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionThinTranslucentMaterialOutput.h" },
		{ "ToolTip", "Input for the transmittance color for a view perpendicular to the surface. Valid range is [0,1]." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::NewProp_TransmittanceColor = { "TransmittanceColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionThinTranslucentMaterialOutput, TransmittanceColor), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::NewProp_TransmittanceColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::NewProp_TransmittanceColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::NewProp_TransmittanceColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionThinTranslucentMaterialOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::ClassParams = {
		&UMaterialExpressionThinTranslucentMaterialOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionThinTranslucentMaterialOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionThinTranslucentMaterialOutput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionThinTranslucentMaterialOutput.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionThinTranslucentMaterialOutput>()
	{
		return UMaterialExpressionThinTranslucentMaterialOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionThinTranslucentMaterialOutput);
	UMaterialExpressionThinTranslucentMaterialOutput::~UMaterialExpressionThinTranslucentMaterialOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionThinTranslucentMaterialOutput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionThinTranslucentMaterialOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionThinTranslucentMaterialOutput, UMaterialExpressionThinTranslucentMaterialOutput::StaticClass, TEXT("UMaterialExpressionThinTranslucentMaterialOutput"), &Z_Registration_Info_UClass_UMaterialExpressionThinTranslucentMaterialOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionThinTranslucentMaterialOutput), 1107224721U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionThinTranslucentMaterialOutput_h_2648997416(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionThinTranslucentMaterialOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionThinTranslucentMaterialOutput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
