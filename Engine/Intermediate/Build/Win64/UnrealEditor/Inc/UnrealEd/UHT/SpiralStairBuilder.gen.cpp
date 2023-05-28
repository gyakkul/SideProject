// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Builders/SpiralStairBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpiralStairBuilder() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UEditorBrushBuilder();
	UNREALED_API UClass* Z_Construct_UClass_USpiralStairBuilder();
	UNREALED_API UClass* Z_Construct_UClass_USpiralStairBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USpiralStairBuilder::StaticRegisterNativesUSpiralStairBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpiralStairBuilder);
	UClass* Z_Construct_UClass_USpiralStairBuilder_NoRegister()
	{
		return USpiralStairBuilder::StaticClass();
	}
	struct Z_Construct_UClass_USpiralStairBuilder_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepThickness_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumStepsPer360_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumStepsPer360;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSteps_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlopedCeiling_MetaData[];
#endif
		static void NewProp_SlopedCeiling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SlopedCeiling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlopedFloor_MetaData[];
#endif
		static void NewProp_SlopedFloor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SlopedFloor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CounterClockwise_MetaData[];
#endif
		static void NewProp_CounterClockwise_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CounterClockwise;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpiralStairBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorBrushBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralStairBuilder_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "BrushSettings" },
		{ "DisplayName", "Spiral Stair" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Builders/SpiralStairBuilder.h" },
		{ "ModuleRelativePath", "Classes/Builders/SpiralStairBuilder.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_InnerRadius_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The radius of the inner curve of the stair */" },
		{ "ModuleRelativePath", "Classes/Builders/SpiralStairBuilder.h" },
		{ "ToolTip", "The radius of the inner curve of the stair" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_InnerRadius = { "InnerRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpiralStairBuilder, InnerRadius), METADATA_PARAMS(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_InnerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_InnerRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepWidth_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The width of each step */" },
		{ "ModuleRelativePath", "Classes/Builders/SpiralStairBuilder.h" },
		{ "ToolTip", "The width of each step" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepWidth = { "StepWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpiralStairBuilder, StepWidth), METADATA_PARAMS(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepHeight_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The height of each step */" },
		{ "ModuleRelativePath", "Classes/Builders/SpiralStairBuilder.h" },
		{ "ToolTip", "The height of each step" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepHeight = { "StepHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpiralStairBuilder, StepHeight), METADATA_PARAMS(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepThickness_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The thickness of each step */" },
		{ "ModuleRelativePath", "Classes/Builders/SpiralStairBuilder.h" },
		{ "ToolTip", "The thickness of each step" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepThickness = { "StepThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpiralStairBuilder, StepThickness), METADATA_PARAMS(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_NumStepsPer360_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "3" },
		{ "Comment", "/** The number of steps in one whole spiral rotation */" },
		{ "ModuleRelativePath", "Classes/Builders/SpiralStairBuilder.h" },
		{ "ToolTip", "The number of steps in one whole spiral rotation" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_NumStepsPer360 = { "NumStepsPer360", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpiralStairBuilder, NumStepsPer360), METADATA_PARAMS(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_NumStepsPer360_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_NumStepsPer360_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_NumSteps_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The total number of steps */" },
		{ "ModuleRelativePath", "Classes/Builders/SpiralStairBuilder.h" },
		{ "ToolTip", "The total number of steps" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_NumSteps = { "NumSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpiralStairBuilder, NumSteps), METADATA_PARAMS(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_NumSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_NumSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_GroupName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Builders/SpiralStairBuilder.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpiralStairBuilder, GroupName), METADATA_PARAMS(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedCeiling_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "Comment", "/** Whether the underside of the spiral is sloped or stepped */" },
		{ "ModuleRelativePath", "Classes/Builders/SpiralStairBuilder.h" },
		{ "ToolTip", "Whether the underside of the spiral is sloped or stepped" },
	};
#endif
	void Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedCeiling_SetBit(void* Obj)
	{
		((USpiralStairBuilder*)Obj)->SlopedCeiling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedCeiling = { "SlopedCeiling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USpiralStairBuilder), &Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedCeiling_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedCeiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedCeiling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedFloor_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "Comment", "/** Whether the surface of the spiral is sloped or stepped */" },
		{ "ModuleRelativePath", "Classes/Builders/SpiralStairBuilder.h" },
		{ "ToolTip", "Whether the surface of the spiral is sloped or stepped" },
	};
#endif
	void Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedFloor_SetBit(void* Obj)
	{
		((USpiralStairBuilder*)Obj)->SlopedFloor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedFloor = { "SlopedFloor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USpiralStairBuilder), &Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedFloor_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedFloor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_CounterClockwise_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "Comment", "/** Whether the stair curves clockwise or counter-clockwise */" },
		{ "ModuleRelativePath", "Classes/Builders/SpiralStairBuilder.h" },
		{ "ToolTip", "Whether the stair curves clockwise or counter-clockwise" },
	};
#endif
	void Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_CounterClockwise_SetBit(void* Obj)
	{
		((USpiralStairBuilder*)Obj)->CounterClockwise = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_CounterClockwise = { "CounterClockwise", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USpiralStairBuilder), &Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_CounterClockwise_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_CounterClockwise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_CounterClockwise_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpiralStairBuilder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_InnerRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_StepThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_NumStepsPer360,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_NumSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedCeiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_SlopedFloor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiralStairBuilder_Statics::NewProp_CounterClockwise,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpiralStairBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpiralStairBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpiralStairBuilder_Statics::ClassParams = {
		&USpiralStairBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpiralStairBuilder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpiralStairBuilder_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpiralStairBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpiralStairBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpiralStairBuilder()
	{
		if (!Z_Registration_Info_UClass_USpiralStairBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpiralStairBuilder.OuterSingleton, Z_Construct_UClass_USpiralStairBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpiralStairBuilder.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<USpiralStairBuilder>()
	{
		return USpiralStairBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpiralStairBuilder);
	USpiralStairBuilder::~USpiralStairBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SpiralStairBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SpiralStairBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpiralStairBuilder, USpiralStairBuilder::StaticClass, TEXT("USpiralStairBuilder"), &Z_Registration_Info_UClass_USpiralStairBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpiralStairBuilder), 988837172U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SpiralStairBuilder_h_836471239(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SpiralStairBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SpiralStairBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
