// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionSetMaterialAttributes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSetMaterialAttributes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionSetMaterialAttributes::StaticRegisterNativesUMaterialExpressionSetMaterialAttributes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSetMaterialAttributes);
	UClass* Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_NoRegister()
	{
		return UMaterialExpressionSetMaterialAttributes::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeSetTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSetTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributeSetTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSetMaterialAttributes.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSetMaterialAttributes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics::NewProp_Inputs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSetMaterialAttributes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSetMaterialAttributes, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics::NewProp_Inputs_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics::NewProp_AttributeSetTypes_Inner = { "AttributeSetTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics::NewProp_AttributeSetTypes_MetaData[] = {
		{ "Category", "MaterialAttributes" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSetMaterialAttributes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics::NewProp_AttributeSetTypes = { "AttributeSetTypes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSetMaterialAttributes, AttributeSetTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics::NewProp_AttributeSetTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics::NewProp_AttributeSetTypes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics::NewProp_Inputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics::NewProp_Inputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics::NewProp_AttributeSetTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics::NewProp_AttributeSetTypes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSetMaterialAttributes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics::ClassParams = {
		&UMaterialExpressionSetMaterialAttributes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionSetMaterialAttributes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSetMaterialAttributes.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionSetMaterialAttributes.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSetMaterialAttributes>()
	{
		return UMaterialExpressionSetMaterialAttributes::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSetMaterialAttributes);
	UMaterialExpressionSetMaterialAttributes::~UMaterialExpressionSetMaterialAttributes() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSetMaterialAttributes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSetMaterialAttributes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSetMaterialAttributes, UMaterialExpressionSetMaterialAttributes::StaticClass, TEXT("UMaterialExpressionSetMaterialAttributes"), &Z_Registration_Info_UClass_UMaterialExpressionSetMaterialAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSetMaterialAttributes), 3727983176U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSetMaterialAttributes_h_3388391507(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSetMaterialAttributes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSetMaterialAttributes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
