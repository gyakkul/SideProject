// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionPreviousFrameSwitch.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPreviousFrameSwitch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionPreviousFrameSwitch::StaticRegisterNativesUMaterialExpressionPreviousFrameSwitch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPreviousFrameSwitch);
	UClass* Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_NoRegister()
	{
		return UMaterialExpressionPreviousFrameSwitch::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionPreviousFrameSwitch.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPreviousFrameSwitch.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::NewProp_CurrentFrame_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPreviousFrameSwitch.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::NewProp_CurrentFrame = { "CurrentFrame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPreviousFrameSwitch, CurrentFrame), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::NewProp_CurrentFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::NewProp_CurrentFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::NewProp_PreviousFrame_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPreviousFrameSwitch.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::NewProp_PreviousFrame = { "PreviousFrame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPreviousFrameSwitch, PreviousFrame), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::NewProp_PreviousFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::NewProp_PreviousFrame_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::NewProp_CurrentFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::NewProp_PreviousFrame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPreviousFrameSwitch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::ClassParams = {
		&UMaterialExpressionPreviousFrameSwitch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionPreviousFrameSwitch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPreviousFrameSwitch.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionPreviousFrameSwitch.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPreviousFrameSwitch>()
	{
		return UMaterialExpressionPreviousFrameSwitch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPreviousFrameSwitch);
	UMaterialExpressionPreviousFrameSwitch::~UMaterialExpressionPreviousFrameSwitch() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreviousFrameSwitch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreviousFrameSwitch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPreviousFrameSwitch, UMaterialExpressionPreviousFrameSwitch::StaticClass, TEXT("UMaterialExpressionPreviousFrameSwitch"), &Z_Registration_Info_UClass_UMaterialExpressionPreviousFrameSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPreviousFrameSwitch), 4208524634U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreviousFrameSwitch_h_3945502633(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreviousFrameSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPreviousFrameSwitch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
