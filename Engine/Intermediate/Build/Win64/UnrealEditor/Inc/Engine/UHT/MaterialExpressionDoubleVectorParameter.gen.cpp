// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionDoubleVectorParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDoubleVectorParameter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4d();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParameter();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionDoubleVectorParameter::StaticRegisterNativesUMaterialExpressionDoubleVectorParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDoubleVectorParameter);
	UClass* Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_NoRegister()
	{
		return UMaterialExpressionDoubleVectorParameter::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDoubleVectorParameter.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDoubleVectorParameter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "MaterialExpressionVectorParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDoubleVectorParameter.h" },
		{ "ShowAsInputPin", "Primary" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionDoubleVectorParameter, DefaultValue), Z_Construct_UScriptStruct_FVector4d, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::NewProp_DefaultValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDoubleVectorParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::ClassParams = {
		&UMaterialExpressionDoubleVectorParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionDoubleVectorParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDoubleVectorParameter.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionDoubleVectorParameter.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDoubleVectorParameter>()
	{
		return UMaterialExpressionDoubleVectorParameter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDoubleVectorParameter);
	UMaterialExpressionDoubleVectorParameter::~UMaterialExpressionDoubleVectorParameter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDoubleVectorParameter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDoubleVectorParameter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDoubleVectorParameter, UMaterialExpressionDoubleVectorParameter::StaticClass, TEXT("UMaterialExpressionDoubleVectorParameter"), &Z_Registration_Info_UClass_UMaterialExpressionDoubleVectorParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDoubleVectorParameter), 890824842U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDoubleVectorParameter_h_3634981193(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDoubleVectorParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDoubleVectorParameter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
