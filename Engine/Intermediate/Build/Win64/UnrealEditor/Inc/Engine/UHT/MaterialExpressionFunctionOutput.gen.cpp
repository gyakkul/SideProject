// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionFunctionOutput() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionOutput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionOutput_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionFunctionOutput::StaticRegisterNativesUMaterialExpressionFunctionOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionFunctionOutput);
	UClass* Z_Construct_UClass_UMaterialExpressionFunctionOutput_NoRegister()
	{
		return UMaterialExpressionFunctionOutput::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutputName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SortPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLastPreviewed_MetaData[];
#endif
		static void NewProp_bLastPreviewed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLastPreviewed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "object Object" },
		{ "IncludePath", "Materials/MaterialExpressionFunctionOutput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_OutputName_MetaData[] = {
		{ "Category", "MaterialExpressionFunctionOutput" },
		{ "Comment", "/** The output's name, which will be drawn on the connector in function call expressions that use this function. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
		{ "ToolTip", "The output's name, which will be drawn on the connector in function call expressions that use this function." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionFunctionOutput, OutputName), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_OutputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_OutputName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "MaterialExpressionFunctionOutput" },
		{ "Comment", "/** The output's description, which will be used as a tooltip on the connector in function call expressions that use this function. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "The output's description, which will be used as a tooltip on the connector in function call expressions that use this function." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionFunctionOutput, Description), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_SortPriority_MetaData[] = {
		{ "Category", "MaterialExpression" },
		{ "Comment", "/** Controls where the output is displayed relative to the other outputs. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
		{ "ToolTip", "Controls where the output is displayed relative to the other outputs." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_SortPriority = { "SortPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionFunctionOutput, SortPriority), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_SortPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_SortPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_A_MetaData[] = {
		{ "Comment", "/** Stores the expression in the material function connected to this output. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
		{ "ToolTip", "Stores the expression in the material function connected to this output." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionFunctionOutput, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_bLastPreviewed_MetaData[] = {
		{ "Comment", "/** Whether this output was previewed the last time this function was edited. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
		{ "ToolTip", "Whether this output was previewed the last time this function was edited." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_bLastPreviewed_SetBit(void* Obj)
	{
		((UMaterialExpressionFunctionOutput*)Obj)->bLastPreviewed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_bLastPreviewed = { "bLastPreviewed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionFunctionOutput), &Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_bLastPreviewed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_bLastPreviewed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_bLastPreviewed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_Id_MetaData[] = {
		{ "Comment", "/** Id of this input, used to maintain references through name changes. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionOutput.h" },
		{ "ToolTip", "Id of this input, used to maintain references through name changes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionFunctionOutput, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_OutputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_SortPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_bLastPreviewed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::NewProp_Id,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionFunctionOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::ClassParams = {
		&UMaterialExpressionFunctionOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionFunctionOutput()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionFunctionOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionFunctionOutput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionFunctionOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionFunctionOutput.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionFunctionOutput>()
	{
		return UMaterialExpressionFunctionOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionFunctionOutput);
	UMaterialExpressionFunctionOutput::~UMaterialExpressionFunctionOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionOutput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionFunctionOutput, UMaterialExpressionFunctionOutput::StaticClass, TEXT("UMaterialExpressionFunctionOutput"), &Z_Registration_Info_UClass_UMaterialExpressionFunctionOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionFunctionOutput), 50425954U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionOutput_h_3363253036(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionOutput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
