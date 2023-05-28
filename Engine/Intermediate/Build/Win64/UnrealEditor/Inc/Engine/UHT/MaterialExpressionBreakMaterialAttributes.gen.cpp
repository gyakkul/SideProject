// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionBreakMaterialAttributes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionBreakMaterialAttributes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionBreakMaterialAttributes::StaticRegisterNativesUMaterialExpressionBreakMaterialAttributes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionBreakMaterialAttributes);
	UClass* Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_NoRegister()
	{
		return UMaterialExpressionBreakMaterialAttributes::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialAttributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionBreakMaterialAttributes.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBreakMaterialAttributes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::NewProp_MaterialAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBreakMaterialAttributes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::NewProp_MaterialAttributes = { "MaterialAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionBreakMaterialAttributes, MaterialAttributes), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::NewProp_MaterialAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::NewProp_MaterialAttributes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::NewProp_MaterialAttributes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionBreakMaterialAttributes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::ClassParams = {
		&UMaterialExpressionBreakMaterialAttributes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionBreakMaterialAttributes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionBreakMaterialAttributes.OuterSingleton, Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionBreakMaterialAttributes.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionBreakMaterialAttributes>()
	{
		return UMaterialExpressionBreakMaterialAttributes::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionBreakMaterialAttributes);
	UMaterialExpressionBreakMaterialAttributes::~UMaterialExpressionBreakMaterialAttributes() {}
	IMPLEMENT_FARCHIVE_SERIALIZER(UMaterialExpressionBreakMaterialAttributes)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBreakMaterialAttributes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBreakMaterialAttributes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionBreakMaterialAttributes, UMaterialExpressionBreakMaterialAttributes::StaticClass, TEXT("UMaterialExpressionBreakMaterialAttributes"), &Z_Registration_Info_UClass_UMaterialExpressionBreakMaterialAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionBreakMaterialAttributes), 776171917U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBreakMaterialAttributes_h_4021452798(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBreakMaterialAttributes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBreakMaterialAttributes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
