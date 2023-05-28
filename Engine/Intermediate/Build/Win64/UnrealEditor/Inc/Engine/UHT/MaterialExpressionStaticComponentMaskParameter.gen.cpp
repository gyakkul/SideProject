// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionStaticComponentMaskParameter.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionStaticComponentMaskParameter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionStaticComponentMaskParameter::StaticRegisterNativesUMaterialExpressionStaticComponentMaskParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionStaticComponentMaskParameter);
	UClass* Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_NoRegister()
	{
		return UMaterialExpressionStaticComponentMaskParameter::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultR_MetaData[];
#endif
		static void NewProp_DefaultR_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultG_MetaData[];
#endif
		static void NewProp_DefaultG_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultG;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultB_MetaData[];
#endif
		static void NewProp_DefaultB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultA_MetaData[];
#endif
		static void NewProp_DefaultA_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultA;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionStaticComponentMaskParameter.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticComponentMaskParameter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticComponentMaskParameter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionStaticComponentMaskParameter, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultR_MetaData[] = {
		{ "Category", "MaterialExpressionStaticComponentMaskParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticComponentMaskParameter.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultR_SetBit(void* Obj)
	{
		((UMaterialExpressionStaticComponentMaskParameter*)Obj)->DefaultR = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultR = { "DefaultR", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionStaticComponentMaskParameter), &Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultR_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultG_MetaData[] = {
		{ "Category", "MaterialExpressionStaticComponentMaskParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticComponentMaskParameter.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultG_SetBit(void* Obj)
	{
		((UMaterialExpressionStaticComponentMaskParameter*)Obj)->DefaultG = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultG = { "DefaultG", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionStaticComponentMaskParameter), &Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultG_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultG_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultB_MetaData[] = {
		{ "Category", "MaterialExpressionStaticComponentMaskParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticComponentMaskParameter.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultB_SetBit(void* Obj)
	{
		((UMaterialExpressionStaticComponentMaskParameter*)Obj)->DefaultB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultB = { "DefaultB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionStaticComponentMaskParameter), &Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultB_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultA_MetaData[] = {
		{ "Category", "MaterialExpressionStaticComponentMaskParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStaticComponentMaskParameter.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultA_SetBit(void* Obj)
	{
		((UMaterialExpressionStaticComponentMaskParameter*)Obj)->DefaultA = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultA = { "DefaultA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionStaticComponentMaskParameter), &Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultA_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultA_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultG,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::NewProp_DefaultA,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionStaticComponentMaskParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::ClassParams = {
		&UMaterialExpressionStaticComponentMaskParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionStaticComponentMaskParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionStaticComponentMaskParameter.OuterSingleton, Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionStaticComponentMaskParameter.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionStaticComponentMaskParameter>()
	{
		return UMaterialExpressionStaticComponentMaskParameter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStaticComponentMaskParameter);
	UMaterialExpressionStaticComponentMaskParameter::~UMaterialExpressionStaticComponentMaskParameter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticComponentMaskParameter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticComponentMaskParameter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter, UMaterialExpressionStaticComponentMaskParameter::StaticClass, TEXT("UMaterialExpressionStaticComponentMaskParameter"), &Z_Registration_Info_UClass_UMaterialExpressionStaticComponentMaskParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionStaticComponentMaskParameter), 2914466975U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticComponentMaskParameter_h_2559920474(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticComponentMaskParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticComponentMaskParameter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
