// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionPathTracingQualitySwitch.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPathTracingQualitySwitch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionPathTracingQualitySwitch::StaticRegisterNativesUMaterialExpressionPathTracingQualitySwitch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPathTracingQualitySwitch);
	UClass* Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_NoRegister()
	{
		return UMaterialExpressionPathTracingQualitySwitch::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathTraced_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathTraced;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionPathTracingQualitySwitch.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPathTracingQualitySwitch.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::NewProp_Normal_MetaData[] = {
		{ "Comment", "/** Used for non-path traced modes */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPathTracingQualitySwitch.h" },
		{ "ToolTip", "Used for non-path traced modes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPathTracingQualitySwitch, Normal), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::NewProp_PathTraced_MetaData[] = {
		{ "Comment", "/** Used by the path tracer */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPathTracingQualitySwitch.h" },
		{ "ToolTip", "Used by the path tracer" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::NewProp_PathTraced = { "PathTraced", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPathTracingQualitySwitch, PathTraced), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::NewProp_PathTraced_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::NewProp_PathTraced_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::NewProp_PathTraced,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPathTracingQualitySwitch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::ClassParams = {
		&UMaterialExpressionPathTracingQualitySwitch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::PropPointers),
		0,
		0x000000B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionPathTracingQualitySwitch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPathTracingQualitySwitch.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionPathTracingQualitySwitch.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPathTracingQualitySwitch>()
	{
		return UMaterialExpressionPathTracingQualitySwitch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPathTracingQualitySwitch);
	UMaterialExpressionPathTracingQualitySwitch::~UMaterialExpressionPathTracingQualitySwitch() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingQualitySwitch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingQualitySwitch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPathTracingQualitySwitch, UMaterialExpressionPathTracingQualitySwitch::StaticClass, TEXT("UMaterialExpressionPathTracingQualitySwitch"), &Z_Registration_Info_UClass_UMaterialExpressionPathTracingQualitySwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPathTracingQualitySwitch), 1072256709U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingQualitySwitch_h_1457746982(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingQualitySwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingQualitySwitch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
