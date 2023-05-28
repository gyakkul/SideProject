// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Materials/MaterialExpressionLandscapeGrassOutput.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeGrassOutput() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeGrassType_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput();
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_NoRegister();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FGrassInput();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GrassInput;
class UScriptStruct* FGrassInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GrassInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GrassInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGrassInput, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("GrassInput"));
	}
	return Z_Registration_Info_UScriptStruct_GrassInput.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FGrassInput>()
{
	return FGrassInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGrassInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrassType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GrassType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassInput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeGrassOutput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGrassInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGrassInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassInput_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Grass" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeGrassOutput.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGrassInput_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrassInput, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassInput_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassInput_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassInput_Statics::NewProp_GrassType_MetaData[] = {
		{ "Category", "Grass" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeGrassOutput.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGrassInput_Statics::NewProp_GrassType = { "GrassType", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrassInput, GrassType), Z_Construct_UClass_ULandscapeGrassType_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassInput_Statics::NewProp_GrassType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassInput_Statics::NewProp_GrassType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrassInput_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeGrassOutput.h" },
		{ "RequiredInput", "true" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrassInput_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrassInput, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassInput_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassInput_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGrassInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassInput_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassInput_Statics::NewProp_GrassType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrassInput_Statics::NewProp_Input,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGrassInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"GrassInput",
		sizeof(FGrassInput),
		alignof(FGrassInput),
		Z_Construct_UScriptStruct_FGrassInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGrassInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrassInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGrassInput()
	{
		if (!Z_Registration_Info_UScriptStruct_GrassInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GrassInput.InnerSingleton, Z_Construct_UScriptStruct_FGrassInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GrassInput.InnerSingleton;
	}
	void UMaterialExpressionLandscapeGrassOutput::StaticRegisterNativesUMaterialExpressionLandscapeGrassOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionLandscapeGrassOutput);
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_NoRegister()
	{
		return UMaterialExpressionLandscapeGrassOutput::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrassTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrassTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrassTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionCustomOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionLandscapeGrassOutput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeGrassOutput.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::NewProp_GrassTypes_Inner = { "GrassTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGrassInput, METADATA_PARAMS(nullptr, 0) }; // 2585543373
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::NewProp_GrassTypes_MetaData[] = {
		{ "Category", "UMaterialExpressionLandscapeGrassOutput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeGrassOutput.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::NewProp_GrassTypes = { "GrassTypes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeGrassOutput, GrassTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::NewProp_GrassTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::NewProp_GrassTypes_MetaData)) }; // 2585543373
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::NewProp_GrassTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::NewProp_GrassTypes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionLandscapeGrassOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::ClassParams = {
		&UMaterialExpressionLandscapeGrassOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::PropPointers),
		0,
		0x001020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionLandscapeGrassOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionLandscapeGrassOutput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionLandscapeGrassOutput.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<UMaterialExpressionLandscapeGrassOutput>()
	{
		return UMaterialExpressionLandscapeGrassOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLandscapeGrassOutput);
	UMaterialExpressionLandscapeGrassOutput::~UMaterialExpressionLandscapeGrassOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeGrassOutput_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeGrassOutput_h_Statics::ScriptStructInfo[] = {
		{ FGrassInput::StaticStruct, Z_Construct_UScriptStruct_FGrassInput_Statics::NewStructOps, TEXT("GrassInput"), &Z_Registration_Info_UScriptStruct_GrassInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGrassInput), 2585543373U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeGrassOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionLandscapeGrassOutput, UMaterialExpressionLandscapeGrassOutput::StaticClass, TEXT("UMaterialExpressionLandscapeGrassOutput"), &Z_Registration_Info_UClass_UMaterialExpressionLandscapeGrassOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionLandscapeGrassOutput), 1793311542U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeGrassOutput_h_2889377924(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeGrassOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeGrassOutput_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeGrassOutput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeGrassOutput_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
