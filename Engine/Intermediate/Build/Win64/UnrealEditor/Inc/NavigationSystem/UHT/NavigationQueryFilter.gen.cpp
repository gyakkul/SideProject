// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavFilters/NavigationQueryFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationQueryFilter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	NAVIGATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationFilterArea();
	NAVIGATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationFilterFlags();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavigationFilterArea;
class UScriptStruct* FNavigationFilterArea::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavigationFilterArea.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavigationFilterArea.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavigationFilterArea, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("NavigationFilterArea"));
	}
	return Z_Registration_Info_UScriptStruct_NavigationFilterArea.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<FNavigationFilterArea>()
{
	return FNavigationFilterArea::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNavigationFilterArea_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AreaClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TravelCostOverride_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TravelCostOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnteringCostOverride_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnteringCostOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsExcluded_MetaData[];
#endif
		static void NewProp_bIsExcluded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExcluded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideTravelCost_MetaData[];
#endif
		static void NewProp_bOverrideTravelCost_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideTravelCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideEnteringCost_MetaData[];
#endif
		static void NewProp_bOverrideEnteringCost_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideEnteringCost;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavigationFilterArea>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_AreaClass_MetaData[] = {
		{ "Category", "Area" },
		{ "Comment", "/** navigation area class */" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "navigation area class" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavigationFilterArea, AreaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavArea_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_AreaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_AreaClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_TravelCostOverride_MetaData[] = {
		{ "Category", "Area" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** override for travel cost */" },
		{ "EditCondition", "bOverrideTravelCost" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "override for travel cost" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_TravelCostOverride = { "TravelCostOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavigationFilterArea, TravelCostOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_TravelCostOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_TravelCostOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_EnteringCostOverride_MetaData[] = {
		{ "Category", "Area" },
		{ "ClampMin", "0" },
		{ "Comment", "/** override for entering cost */" },
		{ "EditCondition", "bOverrideEnteringCost" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "override for entering cost" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_EnteringCostOverride = { "EnteringCostOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavigationFilterArea, EnteringCostOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_EnteringCostOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_EnteringCostOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bIsExcluded_MetaData[] = {
		{ "Category", "Area" },
		{ "Comment", "/** mark as excluded */" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "mark as excluded" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bIsExcluded_SetBit(void* Obj)
	{
		((FNavigationFilterArea*)Obj)->bIsExcluded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bIsExcluded = { "bIsExcluded", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationFilterArea), &Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bIsExcluded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bIsExcluded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bIsExcluded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideTravelCost_MetaData[] = {
		{ "Category", "Area" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideTravelCost_SetBit(void* Obj)
	{
		((FNavigationFilterArea*)Obj)->bOverrideTravelCost = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideTravelCost = { "bOverrideTravelCost", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationFilterArea), &Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideTravelCost_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideTravelCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideTravelCost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideEnteringCost_MetaData[] = {
		{ "Category", "Area" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideEnteringCost_SetBit(void* Obj)
	{
		((FNavigationFilterArea*)Obj)->bOverrideEnteringCost = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideEnteringCost = { "bOverrideEnteringCost", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationFilterArea), &Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideEnteringCost_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideEnteringCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideEnteringCost_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_AreaClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_TravelCostOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_EnteringCostOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bIsExcluded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideTravelCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewProp_bOverrideEnteringCost,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
		nullptr,
		&NewStructOps,
		"NavigationFilterArea",
		sizeof(FNavigationFilterArea),
		alignof(FNavigationFilterArea),
		Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavigationFilterArea()
	{
		if (!Z_Registration_Info_UScriptStruct_NavigationFilterArea.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavigationFilterArea.InnerSingleton, Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NavigationFilterArea.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavigationFilterFlags;
class UScriptStruct* FNavigationFilterFlags::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavigationFilterFlags.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavigationFilterFlags.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavigationFilterFlags, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("NavigationFilterFlags"));
	}
	return Z_Registration_Info_UScriptStruct_NavigationFilterFlags.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<FNavigationFilterFlags>()
{
	return FNavigationFilterFlags::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag0_MetaData[];
#endif
		static void NewProp_bNavFlag0_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag1_MetaData[];
#endif
		static void NewProp_bNavFlag1_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag2_MetaData[];
#endif
		static void NewProp_bNavFlag2_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag3_MetaData[];
#endif
		static void NewProp_bNavFlag3_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag4_MetaData[];
#endif
		static void NewProp_bNavFlag4_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag5_MetaData[];
#endif
		static void NewProp_bNavFlag5_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag5;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag6_MetaData[];
#endif
		static void NewProp_bNavFlag6_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag6;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag7_MetaData[];
#endif
		static void NewProp_bNavFlag7_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag7;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag8_MetaData[];
#endif
		static void NewProp_bNavFlag8_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag8;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag9_MetaData[];
#endif
		static void NewProp_bNavFlag9_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag9;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag10_MetaData[];
#endif
		static void NewProp_bNavFlag10_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag10;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag11_MetaData[];
#endif
		static void NewProp_bNavFlag11_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag11;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag12_MetaData[];
#endif
		static void NewProp_bNavFlag12_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag12;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag13_MetaData[];
#endif
		static void NewProp_bNavFlag13_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag13;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag14_MetaData[];
#endif
		static void NewProp_bNavFlag14_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag14;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNavFlag15_MetaData[];
#endif
		static void NewProp_bNavFlag15_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavFlag15;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// \n// Use UNavigationSystemV1.DescribeFilterFlags() to setup user friendly names of flags\n// \n" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "Use UNavigationSystemV1.DescribeFilterFlags() to setup user friendly names of flags" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavigationFilterFlags>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag0_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag0_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag0 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag0 = { "bNavFlag0", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag0_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag1_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag1_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag1 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag1 = { "bNavFlag1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag1_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag2_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag2_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag2 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag2 = { "bNavFlag2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag2_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag3_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag3_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag3 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag3 = { "bNavFlag3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag3_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag4_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag4_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag4 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag4 = { "bNavFlag4", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag4_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag5_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag5_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag5 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag5 = { "bNavFlag5", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag5_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag5_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag5_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag6_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag6_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag6 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag6 = { "bNavFlag6", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag6_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag6_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag6_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag7_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag7_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag7 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag7 = { "bNavFlag7", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag7_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag7_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag7_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag8_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag8_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag8 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag8 = { "bNavFlag8", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag8_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag8_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag8_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag9_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag9_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag9 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag9 = { "bNavFlag9", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag9_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag9_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag9_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag10_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag10_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag10 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag10 = { "bNavFlag10", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag10_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag10_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag10_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag11_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag11_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag11 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag11 = { "bNavFlag11", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag11_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag11_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag11_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag12_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag12_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag12 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag12 = { "bNavFlag12", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag12_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag12_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag12_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag13_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag13_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag13 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag13 = { "bNavFlag13", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag13_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag13_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag13_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag14_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag14_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag14 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag14 = { "bNavFlag14", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag14_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag14_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag14_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag15_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag15_SetBit(void* Obj)
	{
		((FNavigationFilterFlags*)Obj)->bNavFlag15 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag15 = { "bNavFlag15", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationFilterFlags), &Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag15_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag15_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag15_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag6,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag7,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag9,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag10,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag11,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag12,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag13,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag14,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewProp_bNavFlag15,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
		nullptr,
		&NewStructOps,
		"NavigationFilterFlags",
		sizeof(FNavigationFilterFlags),
		alignof(FNavigationFilterFlags),
		Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavigationFilterFlags()
	{
		if (!Z_Registration_Info_UScriptStruct_NavigationFilterFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavigationFilterFlags.InnerSingleton, Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NavigationFilterFlags.InnerSingleton;
	}
	void UNavigationQueryFilter::StaticRegisterNativesUNavigationQueryFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigationQueryFilter);
	UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister()
	{
		return UNavigationQueryFilter::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationQueryFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Areas_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Areas_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Areas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeFlags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IncludeFlags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeFlags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludeFlags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationQueryFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationQueryFilter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Class containing definition of a navigation query filter */" },
		{ "IncludePath", "NavFilters/NavigationQueryFilter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "Class containing definition of a navigation query filter" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_Areas_Inner = { "Areas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNavigationFilterArea, METADATA_PARAMS(nullptr, 0) }; // 2088418530
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_Areas_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/** list of overrides for navigation areas */" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "list of overrides for navigation areas" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_Areas = { "Areas", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationQueryFilter, Areas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_Areas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_Areas_MetaData)) }; // 2088418530
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_IncludeFlags_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/** required flags of navigation nodes */" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "required flags of navigation nodes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_IncludeFlags = { "IncludeFlags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationQueryFilter, IncludeFlags), Z_Construct_UScriptStruct_FNavigationFilterFlags, METADATA_PARAMS(Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_IncludeFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_IncludeFlags_MetaData)) }; // 1255913158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_ExcludeFlags_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "/** forbidden flags of navigation nodes */" },
		{ "ModuleRelativePath", "Public/NavFilters/NavigationQueryFilter.h" },
		{ "ToolTip", "forbidden flags of navigation nodes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_ExcludeFlags = { "ExcludeFlags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationQueryFilter, ExcludeFlags), Z_Construct_UScriptStruct_FNavigationFilterFlags, METADATA_PARAMS(Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_ExcludeFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_ExcludeFlags_MetaData)) }; // 1255913158
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationQueryFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_Areas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_Areas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_IncludeFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationQueryFilter_Statics::NewProp_ExcludeFlags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationQueryFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationQueryFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationQueryFilter_Statics::ClassParams = {
		&UNavigationQueryFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNavigationQueryFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationQueryFilter_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNavigationQueryFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationQueryFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationQueryFilter()
	{
		if (!Z_Registration_Info_UClass_UNavigationQueryFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationQueryFilter.OuterSingleton, Z_Construct_UClass_UNavigationQueryFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNavigationQueryFilter.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavigationQueryFilter>()
	{
		return UNavigationQueryFilter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationQueryFilter);
	UNavigationQueryFilter::~UNavigationQueryFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_Statics::ScriptStructInfo[] = {
		{ FNavigationFilterArea::StaticStruct, Z_Construct_UScriptStruct_FNavigationFilterArea_Statics::NewStructOps, TEXT("NavigationFilterArea"), &Z_Registration_Info_UScriptStruct_NavigationFilterArea, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavigationFilterArea), 2088418530U) },
		{ FNavigationFilterFlags::StaticStruct, Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics::NewStructOps, TEXT("NavigationFilterFlags"), &Z_Registration_Info_UScriptStruct_NavigationFilterFlags, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavigationFilterFlags), 1255913158U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNavigationQueryFilter, UNavigationQueryFilter::StaticClass, TEXT("UNavigationQueryFilter"), &Z_Registration_Info_UClass_UNavigationQueryFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationQueryFilter), 2980344220U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_3556526086(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
