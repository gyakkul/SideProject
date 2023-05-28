// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionConstant2Vector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionConstant2Vector() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConstant2Vector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionConstant2Vector_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionConstant2Vector::StaticRegisterNativesUMaterialExpressionConstant2Vector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionConstant2Vector);
	UClass* Z_Construct_UClass_UMaterialExpressionConstant2Vector_NoRegister()
	{
		return UMaterialExpressionConstant2Vector::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_R;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_G_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_G;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionConstant2Vector.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionConstant2Vector.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::NewProp_R_MetaData[] = {
		{ "Category", "MaterialExpressionConstant2Vector" },
		{ "DisplayName", "X" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionConstant2Vector.h" },
		{ "ShowAsInputPin", "Primary" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionConstant2Vector, R), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::NewProp_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::NewProp_R_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::NewProp_G_MetaData[] = {
		{ "Category", "MaterialExpressionConstant2Vector" },
		{ "DisplayName", "Y" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionConstant2Vector.h" },
		{ "ShowAsInputPin", "Primary" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionConstant2Vector, G), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::NewProp_G_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::NewProp_G_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::NewProp_R,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::NewProp_G,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionConstant2Vector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::ClassParams = {
		&UMaterialExpressionConstant2Vector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionConstant2Vector()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionConstant2Vector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionConstant2Vector.OuterSingleton, Z_Construct_UClass_UMaterialExpressionConstant2Vector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionConstant2Vector.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionConstant2Vector>()
	{
		return UMaterialExpressionConstant2Vector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionConstant2Vector);
	UMaterialExpressionConstant2Vector::~UMaterialExpressionConstant2Vector() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionConstant2Vector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionConstant2Vector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionConstant2Vector, UMaterialExpressionConstant2Vector::StaticClass, TEXT("UMaterialExpressionConstant2Vector"), &Z_Registration_Info_UClass_UMaterialExpressionConstant2Vector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionConstant2Vector), 3858613815U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionConstant2Vector_h_3074329842(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionConstant2Vector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionConstant2Vector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
