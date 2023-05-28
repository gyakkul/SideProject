// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/DataProviders/AIDataProvider_Random.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIDataProvider_Random() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider_QueryParams();
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider_Random();
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider_Random_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAIDataProvider_Random::StaticRegisterNativesUAIDataProvider_Random()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIDataProvider_Random);
	UClass* Z_Construct_UClass_UAIDataProvider_Random_NoRegister()
	{
		return UAIDataProvider_Random::StaticClass();
	}
	struct Z_Construct_UClass_UAIDataProvider_Random_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInteger_MetaData[];
#endif
		static void NewProp_bInteger_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInteger;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIDataProvider_Random_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIDataProvider_QueryParams,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataProvider_Random_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Provider" },
		{ "DisplayName", "Random number" },
		{ "IncludePath", "DataProviders/AIDataProvider_Random.h" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_Random.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_Random.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIDataProvider_Random, Min), METADATA_PARAMS(Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_Random.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIDataProvider_Random, Max), METADATA_PARAMS(Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_bInteger_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_Random.h" },
	};
#endif
	void Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_bInteger_SetBit(void* Obj)
	{
		((UAIDataProvider_Random*)Obj)->bInteger = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_bInteger = { "bInteger", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAIDataProvider_Random), &Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_bInteger_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_bInteger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_bInteger_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIDataProvider_Random_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIDataProvider_Random_Statics::NewProp_bInteger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIDataProvider_Random_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIDataProvider_Random>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIDataProvider_Random_Statics::ClassParams = {
		&UAIDataProvider_Random::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAIDataProvider_Random_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_Random_Statics::PropPointers),
		0,
		0x000030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAIDataProvider_Random_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_Random_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIDataProvider_Random()
	{
		if (!Z_Registration_Info_UClass_UAIDataProvider_Random.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIDataProvider_Random.OuterSingleton, Z_Construct_UClass_UAIDataProvider_Random_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAIDataProvider_Random.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UAIDataProvider_Random>()
	{
		return UAIDataProvider_Random::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIDataProvider_Random);
	UAIDataProvider_Random::~UAIDataProvider_Random() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_Random_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_Random_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAIDataProvider_Random, UAIDataProvider_Random::StaticClass, TEXT("UAIDataProvider_Random"), &Z_Registration_Info_UClass_UAIDataProvider_Random, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIDataProvider_Random), 1428652920U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_Random_h_2110099998(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_Random_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_Random_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
