// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveEdPresetCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveEdPresetCurve() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve();
	ENGINE_API UClass* Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDEPRECATED_CurveEdPresetCurve::StaticRegisterNativesUDEPRECATED_CurveEdPresetCurve()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_CurveEdPresetCurve);
	UClass* Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_NoRegister()
	{
		return UDEPRECATED_CurveEdPresetCurve::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Curves/CurveEdPresetCurve.h" },
		{ "ModuleRelativePath", "Classes/Curves/CurveEdPresetCurve.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_CurveEdPresetCurve>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_Statics::ClassParams = {
		&UDEPRECATED_CurveEdPresetCurve::StaticClass,
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
		0x020002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_CurveEdPresetCurve.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_CurveEdPresetCurve.OuterSingleton, Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_CurveEdPresetCurve.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDEPRECATED_CurveEdPresetCurve>()
	{
		return UDEPRECATED_CurveEdPresetCurve::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_CurveEdPresetCurve);
	UDEPRECATED_CurveEdPresetCurve::~UDEPRECATED_CurveEdPresetCurve() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveEdPresetCurve_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveEdPresetCurve_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_CurveEdPresetCurve, UDEPRECATED_CurveEdPresetCurve::StaticClass, TEXT("UDEPRECATED_CurveEdPresetCurve"), &Z_Registration_Info_UClass_UDEPRECATED_CurveEdPresetCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_CurveEdPresetCurve), 2472195720U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveEdPresetCurve_h_3080990469(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveEdPresetCurve_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveEdPresetCurve_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
