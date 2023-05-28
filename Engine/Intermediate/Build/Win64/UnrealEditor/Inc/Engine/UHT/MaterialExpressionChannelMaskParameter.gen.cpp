// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionChannelMaskParameter.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionChannelMaskParameter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionChannelMaskParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVectorParameter();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EChannelMaskParameterColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionChannelMaskParameter::StaticRegisterNativesUMaterialExpressionChannelMaskParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionChannelMaskParameter);
	UClass* Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_NoRegister()
	{
		return UMaterialExpressionChannelMaskParameter::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaskChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionVectorParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object MaterialExpressionVectorParameter Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionChannelMaskParameter.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionChannelMaskParameter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_MaskChannel_MetaData[] = {
		{ "Category", "MaterialExpressionChannelMaskParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionChannelMaskParameter.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_MaskChannel = { "MaskChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionChannelMaskParameter, MaskChannel), Z_Construct_UEnum_Engine_EChannelMaskParameterColor, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_MaskChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_MaskChannel_MetaData)) }; // 2435948577
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionChannelMaskParameter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionChannelMaskParameter, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_MaskChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_Input,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionChannelMaskParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::ClassParams = {
		&UMaterialExpressionChannelMaskParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionChannelMaskParameter()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionChannelMaskParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionChannelMaskParameter.OuterSingleton, Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionChannelMaskParameter.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionChannelMaskParameter>()
	{
		return UMaterialExpressionChannelMaskParameter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionChannelMaskParameter);
	UMaterialExpressionChannelMaskParameter::~UMaterialExpressionChannelMaskParameter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionChannelMaskParameter, UMaterialExpressionChannelMaskParameter::StaticClass, TEXT("UMaterialExpressionChannelMaskParameter"), &Z_Registration_Info_UClass_UMaterialExpressionChannelMaskParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionChannelMaskParameter), 3226594685U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_4107231137(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
