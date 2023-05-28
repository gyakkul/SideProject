// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryOption() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryOption();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryOption_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UEnvQueryOption::StaticRegisterNativesUEnvQueryOption()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryOption);
	UClass* Z_Construct_UClass_UEnvQueryOption_NoRegister()
	{
		return UEnvQueryOption::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryOption_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Generator;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Tests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tests;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryOption_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryOption_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/EnvQueryOption.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryOption.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryOption_Statics::NewProp_Generator_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryOption.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEnvQueryOption_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryOption, Generator), Z_Construct_UClass_UEnvQueryGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryOption_Statics::NewProp_Generator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryOption_Statics::NewProp_Generator_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEnvQueryOption_Statics::NewProp_Tests_Inner = { "Tests", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UEnvQueryTest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryOption_Statics::NewProp_Tests_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryOption.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnvQueryOption_Statics::NewProp_Tests = { "Tests", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryOption, Tests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryOption_Statics::NewProp_Tests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryOption_Statics::NewProp_Tests_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryOption_Statics::NewProp_Generator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryOption_Statics::NewProp_Tests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryOption_Statics::NewProp_Tests,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryOption_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryOption>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryOption_Statics::ClassParams = {
		&UEnvQueryOption::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryOption_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryOption_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryOption_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryOption_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryOption()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryOption.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryOption.OuterSingleton, Z_Construct_UClass_UEnvQueryOption_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryOption.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryOption>()
	{
		return UEnvQueryOption::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryOption);
	UEnvQueryOption::~UEnvQueryOption() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryOption_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryOption_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryOption, UEnvQueryOption::StaticClass, TEXT("UEnvQueryOption"), &Z_Registration_Info_UClass_UEnvQueryOption, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryOption), 3022687815U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryOption_h_3216273514(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryOption_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryOption_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
