// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Filters/CurveEditorEulerFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveEditorEulerFilter() {}
// Cross Module References
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorEulerFilter();
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorEulerFilter_NoRegister();
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorFilterBase();
	UPackage* Z_Construct_UPackage__Script_CurveEditor();
// End Cross Module References
	void UCurveEditorEulerFilter::StaticRegisterNativesUCurveEditorEulerFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveEditorEulerFilter);
	UClass* Z_Construct_UClass_UCurveEditorEulerFilter_NoRegister()
	{
		return UCurveEditorEulerFilter::StaticClass();
	}
	struct Z_Construct_UClass_UCurveEditorEulerFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveEditorEulerFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCurveEditorFilterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CurveEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorEulerFilter_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Euler" },
		{ "IncludePath", "Filters/CurveEditorEulerFilter.h" },
		{ "ModuleRelativePath", "Public/Filters/CurveEditorEulerFilter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveEditorEulerFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveEditorEulerFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveEditorEulerFilter_Statics::ClassParams = {
		&UCurveEditorEulerFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveEditorEulerFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorEulerFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveEditorEulerFilter()
	{
		if (!Z_Registration_Info_UClass_UCurveEditorEulerFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveEditorEulerFilter.OuterSingleton, Z_Construct_UClass_UCurveEditorEulerFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveEditorEulerFilter.OuterSingleton;
	}
	template<> CURVEEDITOR_API UClass* StaticClass<UCurveEditorEulerFilter>()
	{
		return UCurveEditorEulerFilter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveEditorEulerFilter);
	UCurveEditorEulerFilter::~UCurveEditorEulerFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorEulerFilter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorEulerFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurveEditorEulerFilter, UCurveEditorEulerFilter::StaticClass, TEXT("UCurveEditorEulerFilter"), &Z_Registration_Info_UClass_UCurveEditorEulerFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveEditorEulerFilter), 1476581195U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorEulerFilter_h_786264769(TEXT("/Script/CurveEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorEulerFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Public_Filters_CurveEditorEulerFilter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
