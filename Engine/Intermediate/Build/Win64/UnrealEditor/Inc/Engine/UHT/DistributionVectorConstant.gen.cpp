// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVectorConstant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionVectorConstant() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVector();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorConstant();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionVectorConstant_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDistributionVectorLockFlags();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDistributionVectorConstant::StaticRegisterNativesUDistributionVectorConstant()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDistributionVectorConstant);
	UClass* Z_Construct_UClass_UDistributionVectorConstant_NoRegister()
	{
		return UDistributionVectorConstant::StaticClass();
	}
	struct Z_Construct_UClass_UDistributionVectorConstant_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Constant;
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
	UObject* (*const Z_Construct_UClass_UDistributionVectorConstant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDistributionVector,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorConstant_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Distributions/DistributionVectorConstant.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorConstant.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_Constant_MetaData[] = {
		{ "Category", "DistributionVectorConstant" },
		{ "Comment", "/** This FVector will be returned for all input times. */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorConstant.h" },
		{ "ToolTip", "This FVector will be returned for all input times." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_Constant = { "Constant", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDistributionVectorConstant, Constant), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_Constant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_Constant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_bLockAxes_MetaData[] = {
		{ "Comment", "/** If true, X == Y == Z ie. only one degree of freedom. If false, each axis is picked independently. */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorConstant.h" },
		{ "ToolTip", "If true, X == Y == Z ie. only one degree of freedom. If false, each axis is picked independently." },
	};
#endif
	void Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_bLockAxes_SetBit(void* Obj)
	{
		((UDistributionVectorConstant*)Obj)->bLockAxes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_bLockAxes = { "bLockAxes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDistributionVectorConstant), &Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_bLockAxes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_bLockAxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_bLockAxes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_LockedAxes_MetaData[] = {
		{ "Category", "DistributionVectorConstant" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionVectorConstant.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_LockedAxes = { "LockedAxes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDistributionVectorConstant, LockedAxes), Z_Construct_UEnum_Engine_EDistributionVectorLockFlags, METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_LockedAxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_LockedAxes_MetaData)) }; // 2705895626
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionVectorConstant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_Constant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_bLockAxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionVectorConstant_Statics::NewProp_LockedAxes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDistributionVectorConstant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionVectorConstant>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDistributionVectorConstant_Statics::ClassParams = {
		&UDistributionVectorConstant::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDistributionVectorConstant_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorConstant_Statics::PropPointers),
		0,
		0x003030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDistributionVectorConstant_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionVectorConstant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDistributionVectorConstant()
	{
		if (!Z_Registration_Info_UClass_UDistributionVectorConstant.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDistributionVectorConstant.OuterSingleton, Z_Construct_UClass_UDistributionVectorConstant_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDistributionVectorConstant.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDistributionVectorConstant>()
	{
		return UDistributionVectorConstant::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionVectorConstant);
	UDistributionVectorConstant::~UDistributionVectorConstant() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstant_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstant_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDistributionVectorConstant, UDistributionVectorConstant::StaticClass, TEXT("UDistributionVectorConstant"), &Z_Registration_Info_UClass_UDistributionVectorConstant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDistributionVectorConstant), 1410786074U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstant_h_3069196251(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstant_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstant_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
