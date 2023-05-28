// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionReflectionVectorWS.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionReflectionVectorWS() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionReflectionVectorWS();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionReflectionVectorWS::StaticRegisterNativesUMaterialExpressionReflectionVectorWS()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionReflectionVectorWS);
	UClass* Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_NoRegister()
	{
		return UMaterialExpressionReflectionVectorWS::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomWorldNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomWorldNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNormalizeCustomWorldNormal_MetaData[];
#endif
		static void NewProp_bNormalizeCustomWorldNormal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalizeCustomWorldNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionReflectionVectorWS.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionReflectionVectorWS.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_CustomWorldNormal_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionReflectionVectorWS.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to Reflection Vector if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_CustomWorldNormal = { "CustomWorldNormal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionReflectionVectorWS, CustomWorldNormal), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_CustomWorldNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_CustomWorldNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_bNormalizeCustomWorldNormal_MetaData[] = {
		{ "Category", "UMaterialExpressionReflectionVectorWS" },
		{ "Comment", "/** (true): The specified world normal will be normalized. (false): WorldNormal will just be used as is, faster but possible artifacts if normal length isn't 1 */" },
		{ "DisplayName", "Normalize custom world normal" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionReflectionVectorWS.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "(true): The specified world normal will be normalized. (false): WorldNormal will just be used as is, faster but possible artifacts if normal length isn't 1" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_bNormalizeCustomWorldNormal_SetBit(void* Obj)
	{
		((UMaterialExpressionReflectionVectorWS*)Obj)->bNormalizeCustomWorldNormal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_bNormalizeCustomWorldNormal = { "bNormalizeCustomWorldNormal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionReflectionVectorWS), &Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_bNormalizeCustomWorldNormal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_bNormalizeCustomWorldNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_bNormalizeCustomWorldNormal_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_CustomWorldNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::NewProp_bNormalizeCustomWorldNormal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionReflectionVectorWS>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::ClassParams = {
		&UMaterialExpressionReflectionVectorWS::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionReflectionVectorWS()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionReflectionVectorWS.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionReflectionVectorWS.OuterSingleton, Z_Construct_UClass_UMaterialExpressionReflectionVectorWS_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionReflectionVectorWS.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionReflectionVectorWS>()
	{
		return UMaterialExpressionReflectionVectorWS::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionReflectionVectorWS);
	UMaterialExpressionReflectionVectorWS::~UMaterialExpressionReflectionVectorWS() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionReflectionVectorWS_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionReflectionVectorWS_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionReflectionVectorWS, UMaterialExpressionReflectionVectorWS::StaticClass, TEXT("UMaterialExpressionReflectionVectorWS"), &Z_Registration_Info_UClass_UMaterialExpressionReflectionVectorWS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionReflectionVectorWS), 284142783U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionReflectionVectorWS_h_1154969220(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionReflectionVectorWS_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionReflectionVectorWS_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
