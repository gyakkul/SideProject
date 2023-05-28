// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionMapARPassthroughCameraUV.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionMapARPassthroughCameraUV() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionMapARPassthroughCameraUV::StaticRegisterNativesUMaterialExpressionMapARPassthroughCameraUV()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionMapARPassthroughCameraUV);
	UClass* Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_NoRegister()
	{
		return UMaterialExpressionMapARPassthroughCameraUV::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionMapARPassthroughCameraUV.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMapARPassthroughCameraUV.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::NewProp_Coordinates_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMapARPassthroughCameraUV.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Input UV to map to AR Camera UV" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionMapARPassthroughCameraUV, Coordinates), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::NewProp_Coordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::NewProp_Coordinates_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::NewProp_Coordinates,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionMapARPassthroughCameraUV>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::ClassParams = {
		&UMaterialExpressionMapARPassthroughCameraUV::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::PropPointers),
		0,
		0x000020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionMapARPassthroughCameraUV.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionMapARPassthroughCameraUV.OuterSingleton, Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionMapARPassthroughCameraUV.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionMapARPassthroughCameraUV>()
	{
		return UMaterialExpressionMapARPassthroughCameraUV::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMapARPassthroughCameraUV);
	UMaterialExpressionMapARPassthroughCameraUV::~UMaterialExpressionMapARPassthroughCameraUV() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMapARPassthroughCameraUV_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMapARPassthroughCameraUV_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionMapARPassthroughCameraUV, UMaterialExpressionMapARPassthroughCameraUV::StaticClass, TEXT("UMaterialExpressionMapARPassthroughCameraUV"), &Z_Registration_Info_UClass_UMaterialExpressionMapARPassthroughCameraUV, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionMapARPassthroughCameraUV), 2861305483U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMapARPassthroughCameraUV_h_1675314765(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMapARPassthroughCameraUV_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMapARPassthroughCameraUV_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
