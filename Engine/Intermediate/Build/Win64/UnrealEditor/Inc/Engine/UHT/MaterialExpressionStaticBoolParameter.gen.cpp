// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionStaticBoolParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionStaticBoolParameter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticBoolParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionStaticBoolParameter::StaticRegisterNativesUMaterialExpressionStaticBoolParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionStaticBoolParameter);
	UClass* Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_NoRegister()
	{
		return UMaterialExpressionStaticBoolParameter::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static void NewProp_DefaultValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicBranch_MetaData[];
#endif
		static void NewProp_DynamicBranch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DynamicBranch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionStaticBoolParameter.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticBoolParameter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "MaterialExpressionStaticBoolParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticBoolParameter.h" },
		{ "ShowAsInputPin", "Primary" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::NewProp_DefaultValue_SetBit(void* Obj)
	{
		((UMaterialExpressionStaticBoolParameter*)Obj)->DefaultValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionStaticBoolParameter), &Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::NewProp_DefaultValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::NewProp_DynamicBranch_MetaData[] = {
		{ "Category", "MaterialExpressionStaticBoolParameter" },
		{ "Comment", "/**Change Parameter from \"static bool\" to (dynamic) bool type which enables it to be used with dynamic branching*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticBoolParameter.h" },
		{ "ToolTip", "Change Parameter from \"static bool\" to (dynamic) bool type which enables it to be used with dynamic branching" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::NewProp_DynamicBranch_SetBit(void* Obj)
	{
		((UMaterialExpressionStaticBoolParameter*)Obj)->DynamicBranch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::NewProp_DynamicBranch = { "DynamicBranch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionStaticBoolParameter), &Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::NewProp_DynamicBranch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::NewProp_DynamicBranch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::NewProp_DynamicBranch_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::NewProp_DynamicBranch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionStaticBoolParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::ClassParams = {
		&UMaterialExpressionStaticBoolParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionStaticBoolParameter()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionStaticBoolParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionStaticBoolParameter.OuterSingleton, Z_Construct_UClass_UMaterialExpressionStaticBoolParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionStaticBoolParameter.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionStaticBoolParameter>()
	{
		return UMaterialExpressionStaticBoolParameter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStaticBoolParameter);
	UMaterialExpressionStaticBoolParameter::~UMaterialExpressionStaticBoolParameter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticBoolParameter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticBoolParameter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionStaticBoolParameter, UMaterialExpressionStaticBoolParameter::StaticClass, TEXT("UMaterialExpressionStaticBoolParameter"), &Z_Registration_Info_UClass_UMaterialExpressionStaticBoolParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionStaticBoolParameter), 522393417U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticBoolParameter_h_87388556(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticBoolParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticBoolParameter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
