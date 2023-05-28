// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnvQueryTest_InsideWaterBody.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_InsideWaterBody() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_UEnvQueryTest_InsideWaterBody();
	WATER_API UClass* Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_NoRegister();
// End Cross Module References
	void UEnvQueryTest_InsideWaterBody::StaticRegisterNativesUEnvQueryTest_InsideWaterBody()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryTest_InsideWaterBody);
	UClass* Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_NoRegister()
	{
		return UEnvQueryTest_InsideWaterBody::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeWaves_MetaData[];
#endif
		static void NewProp_bIncludeWaves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeWaves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimpleWaves_MetaData[];
#endif
		static void NewProp_bSimpleWaves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimpleWaves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreExclusionVolumes_MetaData[];
#endif
		static void NewProp_bIgnoreExclusionVolumes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreExclusionVolumes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvQueryTest_InsideWaterBody.h" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_InsideWaterBody.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::NewProp_bIncludeWaves_MetaData[] = {
		{ "Category", "Water" },
		{ "Comment", "/** Whether waves should be taken into account in the query. */" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_InsideWaterBody.h" },
		{ "ToolTip", "Whether waves should be taken into account in the query." },
	};
#endif
	void Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::NewProp_bIncludeWaves_SetBit(void* Obj)
	{
		((UEnvQueryTest_InsideWaterBody*)Obj)->bIncludeWaves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::NewProp_bIncludeWaves = { "bIncludeWaves", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEnvQueryTest_InsideWaterBody), &Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::NewProp_bIncludeWaves_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::NewProp_bIncludeWaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::NewProp_bIncludeWaves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::NewProp_bSimpleWaves_MetaData[] = {
		{ "Category", "Water" },
		{ "Comment", "/** Use the simple (faster) version of waves computation. */" },
		{ "EditCondition", "!bIncludeWaves" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_InsideWaterBody.h" },
		{ "ToolTip", "Use the simple (faster) version of waves computation." },
	};
#endif
	void Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::NewProp_bSimpleWaves_SetBit(void* Obj)
	{
		((UEnvQueryTest_InsideWaterBody*)Obj)->bSimpleWaves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::NewProp_bSimpleWaves = { "bSimpleWaves", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEnvQueryTest_InsideWaterBody), &Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::NewProp_bSimpleWaves_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::NewProp_bSimpleWaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::NewProp_bSimpleWaves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::NewProp_bIgnoreExclusionVolumes_MetaData[] = {
		{ "Category", "Water" },
		{ "Comment", "/** Whether water body exclusion volumes should be taken into account in the query. */" },
		{ "ModuleRelativePath", "Public/EnvQueryTest_InsideWaterBody.h" },
		{ "ToolTip", "Whether water body exclusion volumes should be taken into account in the query." },
	};
#endif
	void Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::NewProp_bIgnoreExclusionVolumes_SetBit(void* Obj)
	{
		((UEnvQueryTest_InsideWaterBody*)Obj)->bIgnoreExclusionVolumes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::NewProp_bIgnoreExclusionVolumes = { "bIgnoreExclusionVolumes", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEnvQueryTest_InsideWaterBody), &Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::NewProp_bIgnoreExclusionVolumes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::NewProp_bIgnoreExclusionVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::NewProp_bIgnoreExclusionVolumes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::NewProp_bIncludeWaves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::NewProp_bSimpleWaves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::NewProp_bIgnoreExclusionVolumes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_InsideWaterBody>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::ClassParams = {
		&UEnvQueryTest_InsideWaterBody::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryTest_InsideWaterBody()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryTest_InsideWaterBody.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTest_InsideWaterBody.OuterSingleton, Z_Construct_UClass_UEnvQueryTest_InsideWaterBody_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryTest_InsideWaterBody.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UEnvQueryTest_InsideWaterBody>()
	{
		return UEnvQueryTest_InsideWaterBody::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_InsideWaterBody);
	UEnvQueryTest_InsideWaterBody::~UEnvQueryTest_InsideWaterBody() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_EnvQueryTest_InsideWaterBody_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_EnvQueryTest_InsideWaterBody_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTest_InsideWaterBody, UEnvQueryTest_InsideWaterBody::StaticClass, TEXT("UEnvQueryTest_InsideWaterBody"), &Z_Registration_Info_UClass_UEnvQueryTest_InsideWaterBody, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTest_InsideWaterBody), 2004210431U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_EnvQueryTest_InsideWaterBody_h_1617078634(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_EnvQueryTest_InsideWaterBody_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_EnvQueryTest_InsideWaterBody_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
