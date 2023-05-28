// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionDistanceToNearestSurface.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDistanceToNearestSurface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionDistanceToNearestSurface::StaticRegisterNativesUMaterialExpressionDistanceToNearestSurface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDistanceToNearestSurface);
	UClass* Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_NoRegister()
	{
		return UMaterialExpressionDistanceToNearestSurface::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics
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
	UObject* (*const Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionDistanceToNearestSurface.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDistanceToNearestSurface.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDistanceToNearestSurface.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to current world position if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionDistanceToNearestSurface, Position), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::NewProp_Position_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::NewProp_Position,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDistanceToNearestSurface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::ClassParams = {
		&UMaterialExpressionDistanceToNearestSurface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::PropPointers),
		0,
		0x000000B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionDistanceToNearestSurface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDistanceToNearestSurface.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionDistanceToNearestSurface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDistanceToNearestSurface>()
	{
		return UMaterialExpressionDistanceToNearestSurface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDistanceToNearestSurface);
	UMaterialExpressionDistanceToNearestSurface::~UMaterialExpressionDistanceToNearestSurface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceToNearestSurface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceToNearestSurface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDistanceToNearestSurface, UMaterialExpressionDistanceToNearestSurface::StaticClass, TEXT("UMaterialExpressionDistanceToNearestSurface"), &Z_Registration_Info_UClass_UMaterialExpressionDistanceToNearestSurface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDistanceToNearestSurface), 2014236143U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceToNearestSurface_h_1906483380(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceToNearestSurface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDistanceToNearestSurface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
