// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionCollectionParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionCollectionParameter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCollectionParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCollectionParameter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionCollectionParameter::StaticRegisterNativesUMaterialExpressionCollectionParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionCollectionParameter);
	UClass* Z_Construct_UClass_UMaterialExpressionCollectionParameter_NoRegister()
	{
		return UMaterialExpressionCollectionParameter::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Collection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "object Object" },
		{ "IncludePath", "Materials/MaterialExpressionCollectionParameter.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCollectionParameter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_Collection_MetaData[] = {
		{ "Category", "MaterialExpressionCollectionParameter" },
		{ "Comment", "/** The Parameter Collection to use. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCollectionParameter.h" },
		{ "ToolTip", "The Parameter Collection to use." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionCollectionParameter, Collection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_Collection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "MaterialExpressionCollectionParameter" },
		{ "Comment", "/** Name of the parameter being referenced. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCollectionParameter.h" },
		{ "ToolTip", "Name of the parameter being referenced." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionCollectionParameter, ParameterName), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_ParameterId_MetaData[] = {
		{ "Comment", "/** Id that is set from the name, and used to handle renaming of collection parameters. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionCollectionParameter.h" },
		{ "ToolTip", "Id that is set from the name, and used to handle renaming of collection parameters." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_ParameterId = { "ParameterId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionCollectionParameter, ParameterId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_ParameterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_ParameterId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::NewProp_ParameterId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionCollectionParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::ClassParams = {
		&UMaterialExpressionCollectionParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionCollectionParameter()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionCollectionParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionCollectionParameter.OuterSingleton, Z_Construct_UClass_UMaterialExpressionCollectionParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionCollectionParameter.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionCollectionParameter>()
	{
		return UMaterialExpressionCollectionParameter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionCollectionParameter);
	UMaterialExpressionCollectionParameter::~UMaterialExpressionCollectionParameter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCollectionParameter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCollectionParameter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionCollectionParameter, UMaterialExpressionCollectionParameter::StaticClass, TEXT("UMaterialExpressionCollectionParameter"), &Z_Registration_Info_UClass_UMaterialExpressionCollectionParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionCollectionParameter), 772602998U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCollectionParameter_h_3800383940(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCollectionParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionCollectionParameter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
