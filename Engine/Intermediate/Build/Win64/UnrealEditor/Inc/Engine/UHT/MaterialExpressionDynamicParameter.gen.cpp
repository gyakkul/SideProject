// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionDynamicParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDynamicParameter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDynamicParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDynamicParameter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionDynamicParameter::StaticRegisterNativesUMaterialExpressionDynamicParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDynamicParameter);
	UClass* Z_Construct_UClass_UMaterialExpressionDynamicParameter_NoRegister()
	{
		return UMaterialExpressionDynamicParameter::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParamNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ParameterIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDynamicParameter.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDynamicParameter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_ParamNames_Inner = { "ParamNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_ParamNames_MetaData[] = {
		{ "Category", "MaterialExpressionDynamicParameter" },
		{ "Comment", "/** \n\x09 *\x09The names of the parameters.\n\x09 *\x09These will show up in Cascade when editing a particle system\n\x09 *\x09that uses the material it is in...\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDynamicParameter.h" },
		{ "ToolTip", "The names of the parameters.\nThese will show up in Cascade when editing a particle system\nthat uses the material it is in..." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_ParamNames = { "ParamNames", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionDynamicParameter, ParamNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_ParamNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_ParamNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "MaterialExpressionDynamicParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDynamicParameter.h" },
		{ "ShowAsInputPin", "Primary" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionDynamicParameter, DefaultValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_ParameterIndex_MetaData[] = {
		{ "Category", "MaterialExpressionDynamicParameter" },
		{ "ClampMax", "3" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The index of the dynamic parameter for use in tools that allow > 1 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDynamicParameter.h" },
		{ "ShowAsInputPin", "Primary" },
		{ "ToolTip", "The index of the dynamic parameter for use in tools that allow > 1" },
		{ "UIMax", "3" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_ParameterIndex = { "ParameterIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionDynamicParameter, ParameterIndex), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_ParameterIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_ParameterIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_ParamNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_ParamNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::NewProp_ParameterIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDynamicParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::ClassParams = {
		&UMaterialExpressionDynamicParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionDynamicParameter()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionDynamicParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDynamicParameter.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionDynamicParameter.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDynamicParameter>()
	{
		return UMaterialExpressionDynamicParameter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDynamicParameter);
	UMaterialExpressionDynamicParameter::~UMaterialExpressionDynamicParameter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDynamicParameter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDynamicParameter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDynamicParameter, UMaterialExpressionDynamicParameter::StaticClass, TEXT("UMaterialExpressionDynamicParameter"), &Z_Registration_Info_UClass_UMaterialExpressionDynamicParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDynamicParameter), 1737430955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDynamicParameter_h_3312263723(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDynamicParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDynamicParameter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
