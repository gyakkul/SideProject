// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloatConstantCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionFloatConstantCurve() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveFloat();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatConstantCurve();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDistributionFloatConstantCurve::StaticRegisterNativesUDistributionFloatConstantCurve()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDistributionFloatConstantCurve);
	UClass* Z_Construct_UClass_UDistributionFloatConstantCurve_NoRegister()
	{
		return UDistributionFloatConstantCurve::StaticClass();
	}
	struct Z_Construct_UClass_UDistributionFloatConstantCurve_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstantCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstantCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDistributionFloat,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Distributions/DistributionFloatConstantCurve.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatConstantCurve.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::NewProp_ConstantCurve_MetaData[] = {
		{ "Category", "DistributionFloatConstantCurve" },
		{ "Comment", "/** Keyframe data for how output constant varies over time. */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatConstantCurve.h" },
		{ "ToolTip", "Keyframe data for how output constant varies over time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::NewProp_ConstantCurve = { "ConstantCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDistributionFloatConstantCurve, ConstantCurve), Z_Construct_UScriptStruct_FInterpCurveFloat, METADATA_PARAMS(Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::NewProp_ConstantCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::NewProp_ConstantCurve_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::NewProp_ConstantCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionFloatConstantCurve>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::ClassParams = {
		&UDistributionFloatConstantCurve::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::PropPointers),
		0,
		0x003030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDistributionFloatConstantCurve()
	{
		if (!Z_Registration_Info_UClass_UDistributionFloatConstantCurve.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDistributionFloatConstantCurve.OuterSingleton, Z_Construct_UClass_UDistributionFloatConstantCurve_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDistributionFloatConstantCurve.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDistributionFloatConstantCurve>()
	{
		return UDistributionFloatConstantCurve::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionFloatConstantCurve);
	UDistributionFloatConstantCurve::~UDistributionFloatConstantCurve() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstantCurve_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstantCurve_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDistributionFloatConstantCurve, UDistributionFloatConstantCurve::StaticClass, TEXT("UDistributionFloatConstantCurve"), &Z_Registration_Info_UClass_UDistributionFloatConstantCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDistributionFloatConstantCurve), 3610791817U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstantCurve_h_3975523124(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstantCurve_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatConstantCurve_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
