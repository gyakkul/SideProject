// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/DataProviders/AIDataProvider_QueryParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIDataProvider_QueryParams() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider();
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider_QueryParams();
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider_QueryParams_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAIDataProvider_QueryParams::StaticRegisterNativesUAIDataProvider_QueryParams()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIDataProvider_QueryParams);
	UClass* Z_Construct_UClass_UAIDataProvider_QueryParams_NoRegister()
	{
		return UAIDataProvider_QueryParams::StaticClass();
	}
	struct Z_Construct_UClass_UAIDataProvider_QueryParams_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolValue_MetaData[];
#endif
		static void NewProp_BoolValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIDataProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Provider" },
		{ "Comment", "/**\n * AIDataProvider_QueryParams is used with environment queries\n *\n * It allows defining simple parameters for running query,\n * which are not tied to any specific pawn, but defined\n * for every query execution.\n */" },
		{ "DisplayName", "Query Params" },
		{ "IncludePath", "DataProviders/AIDataProvider_QueryParams.h" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_QueryParams.h" },
		{ "ToolTip", "AIDataProvider_QueryParams is used with environment queries\n\nIt allows defining simple parameters for running query,\nwhich are not tied to any specific pawn, but defined\nfor every query execution." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_ParamName_MetaData[] = {
		{ "Category", "Provider" },
		{ "Comment", "/** Arbitrary name this query parameter will be exposed as to outside world (like BT nodes) */" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_QueryParams.h" },
		{ "ToolTip", "Arbitrary name this query parameter will be exposed as to outside world (like BT nodes)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIDataProvider_QueryParams, ParamName), METADATA_PARAMS(Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_ParamName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_FloatValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_QueryParams.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIDataProvider_QueryParams, FloatValue), METADATA_PARAMS(Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_FloatValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_FloatValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_IntValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_QueryParams.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIDataProvider_QueryParams, IntValue), METADATA_PARAMS(Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_IntValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_IntValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_BoolValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider_QueryParams.h" },
	};
#endif
	void Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_BoolValue_SetBit(void* Obj)
	{
		((UAIDataProvider_QueryParams*)Obj)->BoolValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAIDataProvider_QueryParams), &Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_BoolValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_BoolValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_FloatValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_IntValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::NewProp_BoolValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIDataProvider_QueryParams>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::ClassParams = {
		&UAIDataProvider_QueryParams::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIDataProvider_QueryParams()
	{
		if (!Z_Registration_Info_UClass_UAIDataProvider_QueryParams.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIDataProvider_QueryParams.OuterSingleton, Z_Construct_UClass_UAIDataProvider_QueryParams_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAIDataProvider_QueryParams.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UAIDataProvider_QueryParams>()
	{
		return UAIDataProvider_QueryParams::StaticClass();
	}
	UAIDataProvider_QueryParams::UAIDataProvider_QueryParams(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIDataProvider_QueryParams);
	UAIDataProvider_QueryParams::~UAIDataProvider_QueryParams() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_QueryParams_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_QueryParams_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAIDataProvider_QueryParams, UAIDataProvider_QueryParams::StaticClass, TEXT("UAIDataProvider_QueryParams"), &Z_Registration_Info_UClass_UAIDataProvider_QueryParams, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIDataProvider_QueryParams), 3486976698U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_QueryParams_h_2139831014(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_QueryParams_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_QueryParams_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
