// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionTime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTime() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTime();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTime_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionTime::StaticRegisterNativesUMaterialExpressionTime()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionTime);
	UClass* Z_Construct_UClass_UMaterialExpressionTime_NoRegister()
	{
		return UMaterialExpressionTime::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionTime_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnorePause_MetaData[];
#endif
		static void NewProp_bIgnorePause_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnorePause;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Period_MetaData[];
#endif
		static void NewProp_bOverride_Period_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Period;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Period;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionTime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTime_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTime.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTime.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bIgnorePause_MetaData[] = {
		{ "Category", "MaterialExpressionTime" },
		{ "Comment", "/** This time continues advancing regardless of whether the game is paused. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTime.h" },
		{ "ToolTip", "This time continues advancing regardless of whether the game is paused." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bIgnorePause_SetBit(void* Obj)
	{
		((UMaterialExpressionTime*)Obj)->bIgnorePause = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bIgnorePause = { "bIgnorePause", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionTime), &Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bIgnorePause_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bIgnorePause_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bIgnorePause_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bOverride_Period_MetaData[] = {
		{ "Category", "MaterialExpressionTime" },
		{ "Comment", "/** Enables or disables the Period value. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTime.h" },
		{ "ToolTip", "Enables or disables the Period value." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bOverride_Period_SetBit(void* Obj)
	{
		((UMaterialExpressionTime*)Obj)->bOverride_Period = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bOverride_Period = { "bOverride_Period", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionTime), &Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bOverride_Period_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bOverride_Period_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bOverride_Period_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_Period_MetaData[] = {
		{ "Category", "MaterialExpressionTime" },
		{ "ClampMin", "0.0" },
		{ "editcondition", "bOverride_Period" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTime.h" },
		{ "ToolTip", "Period at which to wrap around time" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionTime, Period), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_Period_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_Period_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bIgnorePause,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_bOverride_Period,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTime_Statics::NewProp_Period,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionTime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTime>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTime_Statics::ClassParams = {
		&UMaterialExpressionTime::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionTime_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTime_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTime_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTime_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionTime()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionTime.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionTime.OuterSingleton, Z_Construct_UClass_UMaterialExpressionTime_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionTime.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTime>()
	{
		return UMaterialExpressionTime::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTime);
	UMaterialExpressionTime::~UMaterialExpressionTime() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionTime, UMaterialExpressionTime::StaticClass, TEXT("UMaterialExpressionTime"), &Z_Registration_Info_UClass_UMaterialExpressionTime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionTime), 82926531U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_1218423558(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTime_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
