// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionComponentMask.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionComponentMask() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComponentMask();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComponentMask_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionComponentMask::StaticRegisterNativesUMaterialExpressionComponentMask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionComponentMask);
	UClass* Z_Construct_UClass_UMaterialExpressionComponentMask_NoRegister()
	{
		return UMaterialExpressionComponentMask::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionComponentMask_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[];
#endif
		static void NewProp_R_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_R;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_G_MetaData[];
#endif
		static void NewProp_G_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_G;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static void NewProp_B_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static void NewProp_A_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_A;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionComponentMask.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComponentMask.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComponentMask.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionComponentMask, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_R_MetaData[] = {
		{ "Category", "MaterialExpressionComponentMask" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComponentMask.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_R_SetBit(void* Obj)
	{
		((UMaterialExpressionComponentMask*)Obj)->R = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionComponentMask), &Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_R_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_R_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_G_MetaData[] = {
		{ "Category", "MaterialExpressionComponentMask" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComponentMask.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_G_SetBit(void* Obj)
	{
		((UMaterialExpressionComponentMask*)Obj)->G = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionComponentMask), &Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_G_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_G_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_G_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_B_MetaData[] = {
		{ "Category", "MaterialExpressionComponentMask" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComponentMask.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_B_SetBit(void* Obj)
	{
		((UMaterialExpressionComponentMask*)Obj)->B = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionComponentMask), &Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_B_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_A_MetaData[] = {
		{ "Category", "MaterialExpressionComponentMask" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComponentMask.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_A_SetBit(void* Obj)
	{
		((UMaterialExpressionComponentMask*)Obj)->A = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionComponentMask), &Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_A_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_A_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_R,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_G,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::NewProp_A,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionComponentMask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::ClassParams = {
		&UMaterialExpressionComponentMask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionComponentMask()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionComponentMask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionComponentMask.OuterSingleton, Z_Construct_UClass_UMaterialExpressionComponentMask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionComponentMask.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionComponentMask>()
	{
		return UMaterialExpressionComponentMask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionComponentMask);
	UMaterialExpressionComponentMask::~UMaterialExpressionComponentMask() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComponentMask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComponentMask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionComponentMask, UMaterialExpressionComponentMask::StaticClass, TEXT("UMaterialExpressionComponentMask"), &Z_Registration_Info_UClass_UMaterialExpressionComponentMask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionComponentMask), 2646247034U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComponentMask_h_841587664(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComponentMask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComponentMask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
