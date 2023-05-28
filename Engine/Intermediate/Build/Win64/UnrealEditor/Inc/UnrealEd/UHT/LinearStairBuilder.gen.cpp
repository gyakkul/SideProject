// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Builders/LinearStairBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLinearStairBuilder() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UEditorBrushBuilder();
	UNREALED_API UClass* Z_Construct_UClass_ULinearStairBuilder();
	UNREALED_API UClass* Z_Construct_UClass_ULinearStairBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void ULinearStairBuilder::StaticRegisterNativesULinearStairBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULinearStairBuilder);
	UClass* Z_Construct_UClass_ULinearStairBuilder_NoRegister()
	{
		return ULinearStairBuilder::StaticClass();
	}
	struct Z_Construct_UClass_ULinearStairBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepLength_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepWidth;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULinearStairBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorBrushBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearStairBuilder_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "BrushSettings" },
		{ "DisplayName", "Linear Stair" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Builders/LinearStairBuilder.h" },
		{ "ModuleRelativePath", "Classes/Builders/LinearStairBuilder.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepLength_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The length of each step */" },
		{ "ModuleRelativePath", "Classes/Builders/LinearStairBuilder.h" },
		{ "ToolTip", "The length of each step" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepLength = { "StepLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULinearStairBuilder, StepLength), METADATA_PARAMS(Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepHeight_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The height of each step */" },
		{ "ModuleRelativePath", "Classes/Builders/LinearStairBuilder.h" },
		{ "ToolTip", "The height of each step" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepHeight = { "StepHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULinearStairBuilder, StepHeight), METADATA_PARAMS(Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepWidth_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The width of each step */" },
		{ "ModuleRelativePath", "Classes/Builders/LinearStairBuilder.h" },
		{ "ToolTip", "The width of each step" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepWidth = { "StepWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULinearStairBuilder, StepWidth), METADATA_PARAMS(Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_NumSteps_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMax", "45" },
		{ "ClampMin", "2" },
		{ "Comment", "/** The number of steps */" },
		{ "ModuleRelativePath", "Classes/Builders/LinearStairBuilder.h" },
		{ "ToolTip", "The number of steps" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_NumSteps = { "NumSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULinearStairBuilder, NumSteps), METADATA_PARAMS(Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_NumSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_NumSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_AddToFirstStep_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "Comment", "/** The distance below the first step */" },
		{ "ModuleRelativePath", "Classes/Builders/LinearStairBuilder.h" },
		{ "ToolTip", "The distance below the first step" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_AddToFirstStep = { "AddToFirstStep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULinearStairBuilder, AddToFirstStep), METADATA_PARAMS(Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_AddToFirstStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_AddToFirstStep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_GroupName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Builders/LinearStairBuilder.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULinearStairBuilder, GroupName), METADATA_PARAMS(Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_GroupName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULinearStairBuilder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_StepWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_NumSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_AddToFirstStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULinearStairBuilder_Statics::NewProp_GroupName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULinearStairBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULinearStairBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULinearStairBuilder_Statics::ClassParams = {
		&ULinearStairBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULinearStairBuilder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULinearStairBuilder_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULinearStairBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULinearStairBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULinearStairBuilder()
	{
		if (!Z_Registration_Info_UClass_ULinearStairBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULinearStairBuilder.OuterSingleton, Z_Construct_UClass_ULinearStairBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULinearStairBuilder.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<ULinearStairBuilder>()
	{
		return ULinearStairBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULinearStairBuilder);
	ULinearStairBuilder::~ULinearStairBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_LinearStairBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_LinearStairBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULinearStairBuilder, ULinearStairBuilder::StaticClass, TEXT("ULinearStairBuilder"), &Z_Registration_Info_UClass_ULinearStairBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULinearStairBuilder), 2155816216U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_LinearStairBuilder_h_2436099151(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_LinearStairBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_LinearStairBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
