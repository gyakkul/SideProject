// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionSceneDepth.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSceneDepth() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSceneDepth();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSceneDepth_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionSceneDepth::StaticRegisterNativesUMaterialExpressionSceneDepth()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSceneDepth);
	UClass* Z_Construct_UClass_UMaterialExpressionSceneDepth_NoRegister()
	{
		return UMaterialExpressionSceneDepth::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSceneDepth.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneDepth.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::NewProp_InputMode_MetaData[] = {
		{ "Category", "MaterialExpressionSceneDepth" },
		{ "Comment", "/** \n\x09* Coordinates - UV coordinates to apply to the scene depth lookup.\n\x09* OffsetFraction - An offset to apply to the scene depth lookup in a 2d fraction of the screen.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneDepth.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Coordinates - UV coordinates to apply to the scene depth lookup.\nOffsetFraction - An offset to apply to the scene depth lookup in a 2d fraction of the screen." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSceneDepth, InputMode), Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::NewProp_InputMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::NewProp_InputMode_MetaData)) }; // 2971743664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneDepth.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstInput' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSceneDepth, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::NewProp_Coordinates_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneDepth.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSceneDepth, Coordinates_DEPRECATED), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::NewProp_Coordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::NewProp_Coordinates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::NewProp_ConstInput_MetaData[] = {
		{ "Category", "MaterialExpressionSceneDepth" },
		{ "Comment", "/** only used if Input is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneDepth.h" },
		{ "OverridingInputProperty", "Input" },
		{ "ToolTip", "only used if Input is not hooked up" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::NewProp_ConstInput = { "ConstInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSceneDepth, ConstInput), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::NewProp_ConstInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::NewProp_ConstInput_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::NewProp_InputMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::NewProp_Coordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::NewProp_ConstInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSceneDepth>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::ClassParams = {
		&UMaterialExpressionSceneDepth::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::PropPointers),
		0,
		0x000020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSceneDepth()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionSceneDepth.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSceneDepth.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSceneDepth_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionSceneDepth.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSceneDepth>()
	{
		return UMaterialExpressionSceneDepth::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSceneDepth);
	UMaterialExpressionSceneDepth::~UMaterialExpressionSceneDepth() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneDepth_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneDepth_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSceneDepth, UMaterialExpressionSceneDepth::StaticClass, TEXT("UMaterialExpressionSceneDepth"), &Z_Registration_Info_UClass_UMaterialExpressionSceneDepth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSceneDepth), 2236432520U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneDepth_h_327284490(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneDepth_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneDepth_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
