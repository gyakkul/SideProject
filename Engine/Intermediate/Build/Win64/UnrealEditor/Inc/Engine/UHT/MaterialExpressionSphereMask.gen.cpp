// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionSphereMask.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSphereMask() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSphereMask();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSphereMask_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionSphereMask::StaticRegisterNativesUMaterialExpressionSphereMask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSphereMask);
	UClass* Z_Construct_UClass_UMaterialExpressionSphereMask_NoRegister()
	{
		return UMaterialExpressionSphereMask::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSphereMask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hardness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hardness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardnessPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HardnessPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSphereMask.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_A_MetaData[] = {
		{ "Comment", "/** 1 to 4 dimensional vector, should be the same type as B */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
		{ "ToolTip", "1 to 4 dimensional vector, should be the same type as B" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSphereMask, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_B_MetaData[] = {
		{ "Comment", "/** 1 to 4 dimensional vector, should be the same type as A */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
		{ "ToolTip", "1 to 4 dimensional vector, should be the same type as A" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSphereMask, B), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_Radius_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'AttenuationRadius' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSphereMask, Radius), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_Hardness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'HardnessPercent' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_Hardness = { "Hardness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSphereMask, Hardness), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_Hardness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_Hardness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_AttenuationRadius_MetaData[] = {
		{ "Category", "MaterialExpressionSphereMask" },
		{ "Comment", "/** in the unit that A and B are measured */" },
		{ "DisplayName", "Radius" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
		{ "OverridingInputProperty", "Radius" },
		{ "ToolTip", "in the unit that A and B are measured" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_AttenuationRadius = { "AttenuationRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSphereMask, AttenuationRadius), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_AttenuationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_AttenuationRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_HardnessPercent_MetaData[] = {
		{ "Category", "MaterialExpressionSphereMask" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** in percent 0%=soft .. 100%=hard */" },
		{ "DisplayName", "Hardness" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSphereMask.h" },
		{ "OverridingInputProperty", "Hardness" },
		{ "ToolTip", "in percent 0%=soft .. 100%=hard" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_HardnessPercent = { "HardnessPercent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSphereMask, HardnessPercent), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_HardnessPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_HardnessPercent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_Hardness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_AttenuationRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::NewProp_HardnessPercent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSphereMask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::ClassParams = {
		&UMaterialExpressionSphereMask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSphereMask()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionSphereMask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSphereMask.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSphereMask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionSphereMask.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSphereMask>()
	{
		return UMaterialExpressionSphereMask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSphereMask);
	UMaterialExpressionSphereMask::~UMaterialExpressionSphereMask() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSphereMask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSphereMask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSphereMask, UMaterialExpressionSphereMask::StaticClass, TEXT("UMaterialExpressionSphereMask"), &Z_Registration_Info_UClass_UMaterialExpressionSphereMask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSphereMask), 1215238601U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSphereMask_h_1027183635(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSphereMask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSphereMask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
