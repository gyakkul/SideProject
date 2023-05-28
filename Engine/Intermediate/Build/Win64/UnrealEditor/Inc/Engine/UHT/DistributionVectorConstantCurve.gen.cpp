// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVectorConstantCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionVectorConstantCurve() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveVector();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVector();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorConstantCurve();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorConstantCurve_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDistributionVectorLockFlags();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDistributionVectorConstantCurve::StaticRegisterNativesUDistributionVectorConstantCurve()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDistributionVectorConstantCurve);
	UClass* Z_Construct_UClass_UDistributionVectorConstantCurve_NoRegister()
	{
		return UDistributionVectorConstantCurve::StaticClass();
	}
	struct Z_Construct_UClass_UDistributionVectorConstantCurve_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstantCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstantCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockAxes_MetaData[];
#endif
		static void NewProp_bLockAxes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockAxes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockedAxes_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LockedAxes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDistributionVector,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Distributions/DistributionVectorConstantCurve.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorConstantCurve.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_ConstantCurve_MetaData[] = {
		{ "Category", "DistributionVectorConstantCurve" },
		{ "Comment", "/** Keyframe data for each component (X,Y,Z) over time. */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorConstantCurve.h" },
		{ "ToolTip", "Keyframe data for each component (X,Y,Z) over time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_ConstantCurve = { "ConstantCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDistributionVectorConstantCurve, ConstantCurve), Z_Construct_UScriptStruct_FInterpCurveVector, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_ConstantCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_ConstantCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_bLockAxes_MetaData[] = {
		{ "Comment", "/** If true, X == Y == Z ie. only one degree of freedom. If false, each axis is picked independently. */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorConstantCurve.h" },
		{ "ToolTip", "If true, X == Y == Z ie. only one degree of freedom. If false, each axis is picked independently." },
	};
#endif
	void Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_bLockAxes_SetBit(void* Obj)
	{
		((UDistributionVectorConstantCurve*)Obj)->bLockAxes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_bLockAxes = { "bLockAxes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDistributionVectorConstantCurve), &Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_bLockAxes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_bLockAxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_bLockAxes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_LockedAxes_MetaData[] = {
		{ "Category", "DistributionVectorConstantCurve" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorConstantCurve.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_LockedAxes = { "LockedAxes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDistributionVectorConstantCurve, LockedAxes), Z_Construct_UEnum_Engine_EDistributionVectorLockFlags, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_LockedAxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_LockedAxes_MetaData)) }; // 2705895626
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_ConstantCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_bLockAxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::NewProp_LockedAxes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionVectorConstantCurve>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::ClassParams = {
		&UDistributionVectorConstantCurve::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::PropPointers),
		0,
		0x003030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDistributionVectorConstantCurve()
	{
		if (!Z_Registration_Info_UClass_UDistributionVectorConstantCurve.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDistributionVectorConstantCurve.OuterSingleton, Z_Construct_UClass_UDistributionVectorConstantCurve_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDistributionVectorConstantCurve.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDistributionVectorConstantCurve>()
	{
		return UDistributionVectorConstantCurve::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionVectorConstantCurve);
	UDistributionVectorConstantCurve::~UDistributionVectorConstantCurve() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstantCurve_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstantCurve_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDistributionVectorConstantCurve, UDistributionVectorConstantCurve::StaticClass, TEXT("UDistributionVectorConstantCurve"), &Z_Registration_Info_UClass_UDistributionVectorConstantCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDistributionVectorConstantCurve), 114745744U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstantCurve_h_1554808875(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstantCurve_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstantCurve_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
