// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionRayTracingQualitySwitch.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionRayTracingQualitySwitch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionRayTracingQualitySwitch::StaticRegisterNativesUMaterialExpressionRayTracingQualitySwitch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionRayTracingQualitySwitch);
	UClass* Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_NoRegister()
	{
		return UMaterialExpressionRayTracingQualitySwitch::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTraced_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RayTraced;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionRayTracingQualitySwitch.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRayTracingQualitySwitch.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::NewProp_Normal_MetaData[] = {
		{ "Comment", "/** Used for standard rasterization */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRayTracingQualitySwitch.h" },
		{ "ToolTip", "Used for standard rasterization" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionRayTracingQualitySwitch, Normal), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::NewProp_RayTraced_MetaData[] = {
		{ "Comment", "/** Used for simplified ray trace eval */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionRayTracingQualitySwitch.h" },
		{ "ToolTip", "Used for simplified ray trace eval" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::NewProp_RayTraced = { "RayTraced", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionRayTracingQualitySwitch, RayTraced), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::NewProp_RayTraced_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::NewProp_RayTraced_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::NewProp_RayTraced,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionRayTracingQualitySwitch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::ClassParams = {
		&UMaterialExpressionRayTracingQualitySwitch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::PropPointers),
		0,
		0x000000B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionRayTracingQualitySwitch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionRayTracingQualitySwitch.OuterSingleton, Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionRayTracingQualitySwitch.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionRayTracingQualitySwitch>()
	{
		return UMaterialExpressionRayTracingQualitySwitch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionRayTracingQualitySwitch);
	UMaterialExpressionRayTracingQualitySwitch::~UMaterialExpressionRayTracingQualitySwitch() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRayTracingQualitySwitch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRayTracingQualitySwitch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionRayTracingQualitySwitch, UMaterialExpressionRayTracingQualitySwitch::StaticClass, TEXT("UMaterialExpressionRayTracingQualitySwitch"), &Z_Registration_Info_UClass_UMaterialExpressionRayTracingQualitySwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionRayTracingQualitySwitch), 1859358274U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRayTracingQualitySwitch_h_1080976956(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRayTracingQualitySwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRayTracingQualitySwitch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
