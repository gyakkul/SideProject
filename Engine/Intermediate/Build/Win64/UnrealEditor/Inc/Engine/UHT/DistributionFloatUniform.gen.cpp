// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloatUniform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionFloatUniform() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatUniform();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatUniform_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDistributionFloatUniform::StaticRegisterNativesUDistributionFloatUniform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDistributionFloatUniform);
	UClass* Z_Construct_UClass_UDistributionFloatUniform_NoRegister()
	{
		return UDistributionFloatUniform::StaticClass();
	}
	struct Z_Construct_UClass_UDistributionFloatUniform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDistributionFloatUniform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDistributionFloat,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloatUniform_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Distributions/DistributionFloatUniform.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatUniform.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloatUniform_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "DistributionFloatUniform" },
		{ "Comment", "/** Low end of output float distribution. */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatUniform.h" },
		{ "ToolTip", "Low end of output float distribution." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDistributionFloatUniform_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDistributionFloatUniform, Min), METADATA_PARAMS(Z_Construct_UClass_UDistributionFloatUniform_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatUniform_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloatUniform_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "DistributionFloatUniform" },
		{ "Comment", "/** High end of output float distribution. */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatUniform.h" },
		{ "ToolTip", "High end of output float distribution." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDistributionFloatUniform_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDistributionFloatUniform, Max), METADATA_PARAMS(Z_Construct_UClass_UDistributionFloatUniform_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatUniform_Statics::NewProp_Max_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionFloatUniform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloatUniform_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloatUniform_Statics::NewProp_Max,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDistributionFloatUniform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionFloatUniform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDistributionFloatUniform_Statics::ClassParams = {
		&UDistributionFloatUniform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDistributionFloatUniform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatUniform_Statics::PropPointers),
		0,
		0x003030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDistributionFloatUniform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatUniform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDistributionFloatUniform()
	{
		if (!Z_Registration_Info_UClass_UDistributionFloatUniform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDistributionFloatUniform.OuterSingleton, Z_Construct_UClass_UDistributionFloatUniform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDistributionFloatUniform.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDistributionFloatUniform>()
	{
		return UDistributionFloatUniform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionFloatUniform);
	UDistributionFloatUniform::~UDistributionFloatUniform() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDistributionFloatUniform, UDistributionFloatUniform::StaticClass, TEXT("UDistributionFloatUniform"), &Z_Registration_Info_UClass_UDistributionFloatUniform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDistributionFloatUniform), 627442483U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_1930862409(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
