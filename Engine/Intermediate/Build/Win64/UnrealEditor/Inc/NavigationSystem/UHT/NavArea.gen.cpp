// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavAreas/NavArea.h"
#include "../../Source/Runtime/Engine/Classes/AI/Navigation/NavAgentSelector.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavArea() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UNavAreaBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentSelector();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void UNavArea::StaticRegisterNativesUNavArea()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavArea);
	UClass* Z_Construct_UClass_UNavArea_NoRegister()
	{
		return UNavArea::StaticClass();
	}
	struct Z_Construct_UClass_UNavArea_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixedAreaEnteringCost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedAreaEnteringCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrawColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedAgents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SupportedAgents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent0_MetaData[];
#endif
		static void NewProp_bSupportsAgent0_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent1_MetaData[];
#endif
		static void NewProp_bSupportsAgent1_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent2_MetaData[];
#endif
		static void NewProp_bSupportsAgent2_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent3_MetaData[];
#endif
		static void NewProp_bSupportsAgent3_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent4_MetaData[];
#endif
		static void NewProp_bSupportsAgent4_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent5_MetaData[];
#endif
		static void NewProp_bSupportsAgent5_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent5;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent6_MetaData[];
#endif
		static void NewProp_bSupportsAgent6_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent6;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent7_MetaData[];
#endif
		static void NewProp_bSupportsAgent7_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent7;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent8_MetaData[];
#endif
		static void NewProp_bSupportsAgent8_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent8;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent9_MetaData[];
#endif
		static void NewProp_bSupportsAgent9_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent9;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent10_MetaData[];
#endif
		static void NewProp_bSupportsAgent10_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent10;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent11_MetaData[];
#endif
		static void NewProp_bSupportsAgent11_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent11;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent12_MetaData[];
#endif
		static void NewProp_bSupportsAgent12_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent12;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent13_MetaData[];
#endif
		static void NewProp_bSupportsAgent13_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent13;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent14_MetaData[];
#endif
		static void NewProp_bSupportsAgent14_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent14;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsAgent15_MetaData[];
#endif
		static void NewProp_bSupportsAgent15_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsAgent15;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavAreaBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Class containing definition of a navigation area */" },
		{ "IncludePath", "NavAreas/NavArea.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Class containing definition of a navigation area" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Statics::NewProp_DefaultCost_MetaData[] = {
		{ "Category", "NavArea" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** travel cost multiplier for path distance */" },
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
		{ "ToolTip", "travel cost multiplier for path distance" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_DefaultCost = { "DefaultCost", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavArea, DefaultCost), METADATA_PARAMS(Z_Construct_UClass_UNavArea_Statics::NewProp_DefaultCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Statics::NewProp_DefaultCost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Statics::NewProp_FixedAreaEnteringCost_MetaData[] = {
		{ "Category", "NavArea" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** entering cost */" },
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
		{ "ToolTip", "entering cost" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_FixedAreaEnteringCost = { "FixedAreaEnteringCost", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavArea, FixedAreaEnteringCost), METADATA_PARAMS(Z_Construct_UClass_UNavArea_Statics::NewProp_FixedAreaEnteringCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Statics::NewProp_FixedAreaEnteringCost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Statics::NewProp_DrawColor_MetaData[] = {
		{ "Category", "NavArea" },
		{ "Comment", "/** area color in navigation view */" },
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
		{ "ToolTip", "area color in navigation view" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_DrawColor = { "DrawColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavArea, DrawColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UNavArea_Statics::NewProp_DrawColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Statics::NewProp_DrawColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Statics::NewProp_SupportedAgents_MetaData[] = {
		{ "Category", "NavArea" },
		{ "Comment", "/** restrict area only to specified agents */" },
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
		{ "ToolTip", "restrict area only to specified agents" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_SupportedAgents = { "SupportedAgents", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavArea, SupportedAgents), Z_Construct_UScriptStruct_FNavAgentSelector, METADATA_PARAMS(Z_Construct_UClass_UNavArea_Statics::NewProp_SupportedAgents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Statics::NewProp_SupportedAgents_MetaData)) }; // 1383248333
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent0_MetaData[] = {
		{ "Comment", "// DEPRECATED AGENT CONFIG\n" },
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
		{ "ToolTip", "DEPRECATED AGENT CONFIG" },
	};
#endif
	void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent0_SetBit(void* Obj)
	{
		((UNavArea*)Obj)->bSupportsAgent0 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent0 = { "bSupportsAgent0", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent0_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent0_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent1_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
#endif
	void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent1_SetBit(void* Obj)
	{
		((UNavArea*)Obj)->bSupportsAgent1 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent1 = { "bSupportsAgent1", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent1_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent2_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
#endif
	void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent2_SetBit(void* Obj)
	{
		((UNavArea*)Obj)->bSupportsAgent2 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent2 = { "bSupportsAgent2", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent2_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent3_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
#endif
	void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent3_SetBit(void* Obj)
	{
		((UNavArea*)Obj)->bSupportsAgent3 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent3 = { "bSupportsAgent3", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent3_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent4_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
#endif
	void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent4_SetBit(void* Obj)
	{
		((UNavArea*)Obj)->bSupportsAgent4 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent4 = { "bSupportsAgent4", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent4_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent5_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
#endif
	void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent5_SetBit(void* Obj)
	{
		((UNavArea*)Obj)->bSupportsAgent5 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent5 = { "bSupportsAgent5", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent5_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent5_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent5_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent6_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
#endif
	void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent6_SetBit(void* Obj)
	{
		((UNavArea*)Obj)->bSupportsAgent6 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent6 = { "bSupportsAgent6", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent6_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent6_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent6_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent7_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
#endif
	void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent7_SetBit(void* Obj)
	{
		((UNavArea*)Obj)->bSupportsAgent7 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent7 = { "bSupportsAgent7", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent7_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent7_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent7_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent8_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
#endif
	void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent8_SetBit(void* Obj)
	{
		((UNavArea*)Obj)->bSupportsAgent8 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent8 = { "bSupportsAgent8", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent8_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent8_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent8_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent9_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
#endif
	void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent9_SetBit(void* Obj)
	{
		((UNavArea*)Obj)->bSupportsAgent9 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent9 = { "bSupportsAgent9", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent9_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent9_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent9_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent10_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
#endif
	void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent10_SetBit(void* Obj)
	{
		((UNavArea*)Obj)->bSupportsAgent10 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent10 = { "bSupportsAgent10", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent10_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent10_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent10_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent11_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
#endif
	void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent11_SetBit(void* Obj)
	{
		((UNavArea*)Obj)->bSupportsAgent11 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent11 = { "bSupportsAgent11", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent11_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent11_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent11_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent12_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
#endif
	void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent12_SetBit(void* Obj)
	{
		((UNavArea*)Obj)->bSupportsAgent12 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent12 = { "bSupportsAgent12", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent12_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent12_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent12_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent13_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
#endif
	void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent13_SetBit(void* Obj)
	{
		((UNavArea*)Obj)->bSupportsAgent13 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent13 = { "bSupportsAgent13", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent13_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent13_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent13_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent14_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
#endif
	void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent14_SetBit(void* Obj)
	{
		((UNavArea*)Obj)->bSupportsAgent14 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent14 = { "bSupportsAgent14", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent14_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent14_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent14_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent15_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavAreas/NavArea.h" },
	};
#endif
	void Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent15_SetBit(void* Obj)
	{
		((UNavArea*)Obj)->bSupportsAgent15 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent15 = { "bSupportsAgent15", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavArea), &Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent15_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent15_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent15_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_DefaultCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_FixedAreaEnteringCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_DrawColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_SupportedAgents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent6,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent7,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent9,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent10,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent11,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent12,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent13,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent14,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavArea_Statics::NewProp_bSupportsAgent15,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavArea>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavArea_Statics::ClassParams = {
		&UNavArea::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNavArea_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Statics::PropPointers),
		0,
		0x003000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UNavArea_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavArea_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavArea()
	{
		if (!Z_Registration_Info_UClass_UNavArea.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavArea.OuterSingleton, Z_Construct_UClass_UNavArea_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNavArea.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavArea>()
	{
		return UNavArea::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavArea);
	UNavArea::~UNavArea() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNavArea)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNavArea, UNavArea::StaticClass, TEXT("UNavArea"), &Z_Registration_Info_UClass_UNavArea, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavArea), 1532332665U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_3076245066(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
