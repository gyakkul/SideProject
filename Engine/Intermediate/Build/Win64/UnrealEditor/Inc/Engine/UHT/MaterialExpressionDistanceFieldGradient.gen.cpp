// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionDistanceFieldGradient.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDistanceFieldGradient() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDistanceFieldGradient();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDistanceFieldGradient_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionDistanceFieldGradient::StaticRegisterNativesUMaterialExpressionDistanceFieldGradient()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDistanceFieldGradient);
	UClass* Z_Construct_UClass_UMaterialExpressionDistanceFieldGradient_NoRegister()
	{
		return UMaterialExpressionDistanceFieldGradient::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionDistanceFieldGradient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionDistanceFieldGradient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDistanceFieldGradient_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionDistanceFieldGradient.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDistanceFieldGradient.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDistanceFieldGradient_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDistanceFieldGradient.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to current world position if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDistanceFieldGradient_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionDistanceFieldGradient, Position), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDistanceFieldGradient_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDistanceFieldGradient_Statics::NewProp_Position_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDistanceFieldGradient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDistanceFieldGradient_Statics::NewProp_Position,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionDistanceFieldGradient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDistanceFieldGradient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDistanceFieldGradient_Statics::ClassParams = {
		&UMaterialExpressionDistanceFieldGradient::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionDistanceFieldGradient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDistanceFieldGradient_Statics::PropPointers),
		0,
		0x000000B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDistanceFieldGradient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDistanceFieldGradient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionDistanceFieldGradient()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionDistanceFieldGradient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDistanceFieldGradient.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDistanceFieldGradient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionDistanceFieldGradient.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDistanceFieldGradient>()
	{
		return UMaterialExpressionDistanceFieldGradient::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDistanceFieldGradient);
	UMaterialExpressionDistanceFieldGradient::~UMaterialExpressionDistanceFieldGradient() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceFieldGradient_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceFieldGradient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDistanceFieldGradient, UMaterialExpressionDistanceFieldGradient::StaticClass, TEXT("UMaterialExpressionDistanceFieldGradient"), &Z_Registration_Info_UClass_UMaterialExpressionDistanceFieldGradient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDistanceFieldGradient), 2911852300U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceFieldGradient_h_3455937000(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceFieldGradient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceFieldGradient_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
