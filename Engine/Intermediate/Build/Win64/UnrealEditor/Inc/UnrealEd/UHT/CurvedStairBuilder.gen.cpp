// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Builders/CurvedStairBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurvedStairBuilder() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UCurvedStairBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UCurvedStairBuilder_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorBrushBuilder();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UCurvedStairBuilder::StaticRegisterNativesUCurvedStairBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurvedStairBuilder);
	UClass* Z_Construct_UClass_UCurvedStairBuilder_NoRegister()
	{
		return UCurvedStairBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UCurvedStairBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerRadius_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InnerRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleOfCurve_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AngleOfCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSteps_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddToFirstStep_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AddToFirstStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CounterClockwise_MetaData[];
#endif
		static void NewProp_CounterClockwise_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CounterClockwise;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurvedStairBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorBrushBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurvedStairBuilder_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "BrushSettings" },
		{ "DisplayName", "Curved Stair" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Builders/CurvedStairBuilder.h" },
		{ "ModuleRelativePath", "Classes/Builders/CurvedStairBuilder.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_InnerRadius_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The radius of the inner curve of the stair */" },
		{ "ModuleRelativePath", "Classes/Builders/CurvedStairBuilder.h" },
		{ "ToolTip", "The radius of the inner curve of the stair" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_InnerRadius = { "InnerRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurvedStairBuilder, InnerRadius), METADATA_PARAMS(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_InnerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_InnerRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_StepHeight_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The height of each step */" },
		{ "ModuleRelativePath", "Classes/Builders/CurvedStairBuilder.h" },
		{ "ToolTip", "The height of each step" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_StepHeight = { "StepHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurvedStairBuilder, StepHeight), METADATA_PARAMS(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_StepHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_StepHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_StepWidth_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The width of each step */" },
		{ "ModuleRelativePath", "Classes/Builders/CurvedStairBuilder.h" },
		{ "ToolTip", "The width of each step" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_StepWidth = { "StepWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurvedStairBuilder, StepWidth), METADATA_PARAMS(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_StepWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_StepWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_AngleOfCurve_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMax", "360" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The angle of the total arc described by this stair */" },
		{ "ModuleRelativePath", "Classes/Builders/CurvedStairBuilder.h" },
		{ "ToolTip", "The angle of the total arc described by this stair" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_AngleOfCurve = { "AngleOfCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurvedStairBuilder, AngleOfCurve), METADATA_PARAMS(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_AngleOfCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_AngleOfCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_NumSteps_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The number of steps */" },
		{ "ModuleRelativePath", "Classes/Builders/CurvedStairBuilder.h" },
		{ "ToolTip", "The number of steps" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_NumSteps = { "NumSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurvedStairBuilder, NumSteps), METADATA_PARAMS(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_NumSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_NumSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_AddToFirstStep_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "Comment", "/** The distance below the first step */" },
		{ "ModuleRelativePath", "Classes/Builders/CurvedStairBuilder.h" },
		{ "ToolTip", "The distance below the first step" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_AddToFirstStep = { "AddToFirstStep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurvedStairBuilder, AddToFirstStep), METADATA_PARAMS(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_AddToFirstStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_AddToFirstStep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_GroupName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Builders/CurvedStairBuilder.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurvedStairBuilder, GroupName), METADATA_PARAMS(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_CounterClockwise_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "Comment", "/** Whether the stair curves clockwise or counter-clockwise */" },
		{ "ModuleRelativePath", "Classes/Builders/CurvedStairBuilder.h" },
		{ "ToolTip", "Whether the stair curves clockwise or counter-clockwise" },
	};
#endif
	void Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_CounterClockwise_SetBit(void* Obj)
	{
		((UCurvedStairBuilder*)Obj)->CounterClockwise = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_CounterClockwise = { "CounterClockwise", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCurvedStairBuilder), &Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_CounterClockwise_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_CounterClockwise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_CounterClockwise_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurvedStairBuilder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_InnerRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_StepHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_StepWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_AngleOfCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_NumSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_AddToFirstStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurvedStairBuilder_Statics::NewProp_CounterClockwise,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurvedStairBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurvedStairBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurvedStairBuilder_Statics::ClassParams = {
		&UCurvedStairBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCurvedStairBuilder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCurvedStairBuilder_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurvedStairBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurvedStairBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurvedStairBuilder()
	{
		if (!Z_Registration_Info_UClass_UCurvedStairBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurvedStairBuilder.OuterSingleton, Z_Construct_UClass_UCurvedStairBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurvedStairBuilder.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UCurvedStairBuilder>()
	{
		return UCurvedStairBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurvedStairBuilder);
	UCurvedStairBuilder::~UCurvedStairBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_CurvedStairBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_CurvedStairBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurvedStairBuilder, UCurvedStairBuilder::StaticClass, TEXT("UCurvedStairBuilder"), &Z_Registration_Info_UClass_UCurvedStairBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurvedStairBuilder), 3222777095U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_CurvedStairBuilder_h_2175475284(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_CurvedStairBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_CurvedStairBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
