// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionGetMaterialAttributes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionGetMaterialAttributes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionGetMaterialAttributes::StaticRegisterNativesUMaterialExpressionGetMaterialAttributes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionGetMaterialAttributes);
	UClass* Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_NoRegister()
	{
		return UMaterialExpressionGetMaterialAttributes::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialAttributes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeGetTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeGetTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeGetTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionGetMaterialAttributes.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGetMaterialAttributes.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_MaterialAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGetMaterialAttributes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_MaterialAttributes = { "MaterialAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionGetMaterialAttributes, MaterialAttributes), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_MaterialAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_MaterialAttributes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_AttributeGetTypes_Inner = { "AttributeGetTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_AttributeGetTypes_MetaData[] = {
		{ "Category", "MaterialAttributes" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionGetMaterialAttributes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_AttributeGetTypes = { "AttributeGetTypes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionGetMaterialAttributes, AttributeGetTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_AttributeGetTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_AttributeGetTypes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_MaterialAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_AttributeGetTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::NewProp_AttributeGetTypes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionGetMaterialAttributes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::ClassParams = {
		&UMaterialExpressionGetMaterialAttributes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionGetMaterialAttributes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionGetMaterialAttributes.OuterSingleton, Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionGetMaterialAttributes.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionGetMaterialAttributes>()
	{
		return UMaterialExpressionGetMaterialAttributes::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionGetMaterialAttributes);
	UMaterialExpressionGetMaterialAttributes::~UMaterialExpressionGetMaterialAttributes() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGetMaterialAttributes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGetMaterialAttributes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionGetMaterialAttributes, UMaterialExpressionGetMaterialAttributes::StaticClass, TEXT("UMaterialExpressionGetMaterialAttributes"), &Z_Registration_Info_UClass_UMaterialExpressionGetMaterialAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionGetMaterialAttributes), 979708877U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGetMaterialAttributes_h_3491803122(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGetMaterialAttributes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGetMaterialAttributes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
