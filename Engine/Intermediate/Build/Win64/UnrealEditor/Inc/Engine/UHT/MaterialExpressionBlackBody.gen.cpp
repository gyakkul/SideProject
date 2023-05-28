// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionBlackBody.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionBlackBody() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBlackBody();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBlackBody_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionBlackBody::StaticRegisterNativesUMaterialExpressionBlackBody()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionBlackBody);
	UClass* Z_Construct_UClass_UMaterialExpressionBlackBody_NoRegister()
	{
		return UMaterialExpressionBlackBody::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionBlackBody_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Temp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Temp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionBlackBody.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlackBody.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::NewProp_Temp_MetaData[] = {
		{ "Comment", "/** Temperature */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBlackBody.h" },
		{ "ToolTip", "Temperature" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::NewProp_Temp = { "Temp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionBlackBody, Temp), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::NewProp_Temp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::NewProp_Temp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::NewProp_Temp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionBlackBody>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::ClassParams = {
		&UMaterialExpressionBlackBody::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionBlackBody()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionBlackBody.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionBlackBody.OuterSingleton, Z_Construct_UClass_UMaterialExpressionBlackBody_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionBlackBody.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionBlackBody>()
	{
		return UMaterialExpressionBlackBody::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionBlackBody);
	UMaterialExpressionBlackBody::~UMaterialExpressionBlackBody() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlackBody_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlackBody_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionBlackBody, UMaterialExpressionBlackBody::StaticClass, TEXT("UMaterialExpressionBlackBody"), &Z_Registration_Info_UClass_UMaterialExpressionBlackBody, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionBlackBody), 672998602U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlackBody_h_1181477234(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlackBody_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBlackBody_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
