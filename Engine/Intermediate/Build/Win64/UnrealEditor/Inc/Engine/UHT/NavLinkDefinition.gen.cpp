// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/AI/Navigation/NavLinkDefinition.h"
#include "../../Source/Runtime/Engine/Classes/AI/Navigation/NavAgentSelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkDefinition() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UNavAreaBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavLinkDefinition();
	ENGINE_API UClass* Z_Construct_UClass_UNavLinkDefinition_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavLinkDirection();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentSelector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationLinkBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationSegmentLink();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENavLinkDirection;
	static UEnum* ENavLinkDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENavLinkDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENavLinkDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENavLinkDirection, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENavLinkDirection"));
		}
		return Z_Registration_Info_UEnum_ENavLinkDirection.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENavLinkDirection::Type>()
	{
		return ENavLinkDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ENavLinkDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ENavLinkDirection_Statics::Enumerators[] = {
		{ "ENavLinkDirection::BothWays", (int64)ENavLinkDirection::BothWays },
		{ "ENavLinkDirection::LeftToRight", (int64)ENavLinkDirection::LeftToRight },
		{ "ENavLinkDirection::RightToLeft", (int64)ENavLinkDirection::RightToLeft },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ENavLinkDirection_Statics::Enum_MetaDataParams[] = {
		{ "BothWays.Name", "ENavLinkDirection::BothWays" },
		{ "LeftToRight.Name", "ENavLinkDirection::LeftToRight" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "RightToLeft.Name", "ENavLinkDirection::RightToLeft" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENavLinkDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ENavLinkDirection",
		"ENavLinkDirection::Type",
		Z_Construct_UEnum_Engine_ENavLinkDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavLinkDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ENavLinkDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavLinkDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ENavLinkDirection()
	{
		if (!Z_Registration_Info_UEnum_ENavLinkDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENavLinkDirection.InnerSingleton, Z_Construct_UEnum_Engine_ENavLinkDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENavLinkDirection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavigationLinkBase;
class UScriptStruct* FNavigationLinkBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavigationLinkBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavigationLinkBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavigationLinkBase, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NavigationLinkBase"));
	}
	return Z_Registration_Info_UScriptStruct_NavigationLinkBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNavigationLinkBase>()
{
	return FNavigationLinkBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNavigationLinkBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftProjectHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftProjectHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxFallDownLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFallDownLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapHeight;
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
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSnapHeight_MetaData[];
#endif
		static void NewProp_bUseSnapHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSnapHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToCheapestArea_MetaData[];
#endif
		static void NewProp_bSnapToCheapestArea_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToCheapestArea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCustomFlag0_MetaData[];
#endif
		static void NewProp_bCustomFlag0_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomFlag0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCustomFlag1_MetaData[];
#endif
		static void NewProp_bCustomFlag1_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomFlag1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCustomFlag2_MetaData[];
#endif
		static void NewProp_bCustomFlag2_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomFlag2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCustomFlag3_MetaData[];
#endif
		static void NewProp_bCustomFlag3_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomFlag3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCustomFlag4_MetaData[];
#endif
		static void NewProp_bCustomFlag4_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomFlag4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCustomFlag5_MetaData[];
#endif
		static void NewProp_bCustomFlag5_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomFlag5;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCustomFlag6_MetaData[];
#endif
		static void NewProp_bCustomFlag6_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomFlag6;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCustomFlag7_MetaData[];
#endif
		static void NewProp_bCustomFlag7_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomFlag7;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AreaClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavigationLinkBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_LeftProjectHeight_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** if greater than 0 nav system will attempt to project navlink's start point on geometry below */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "if greater than 0 nav system will attempt to project navlink's start point on geometry below" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_LeftProjectHeight = { "LeftProjectHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavigationLinkBase, LeftProjectHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_LeftProjectHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_LeftProjectHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_MaxFallDownLength_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** if greater than 0 nav system will attempt to project navlink's end point on geometry below */" },
		{ "DisplayName", "Right Project Height" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "if greater than 0 nav system will attempt to project navlink's end point on geometry below" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_MaxFallDownLength = { "MaxFallDownLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavigationLinkBase, MaxFallDownLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_MaxFallDownLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_MaxFallDownLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SnapRadius_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SnapRadius = { "SnapRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavigationLinkBase, SnapRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SnapRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SnapRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SnapHeight_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMin", "1.0" },
		{ "EditCondition", "bUseSnapHeight" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SnapHeight = { "SnapHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavigationLinkBase, SnapHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SnapHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SnapHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SupportedAgents_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** restrict area only to specified agents */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "restrict area only to specified agents" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SupportedAgents = { "SupportedAgents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavigationLinkBase, SupportedAgents), Z_Construct_UScriptStruct_FNavAgentSelector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SupportedAgents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SupportedAgents_MetaData)) }; // 1383248333
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent0_MetaData[] = {
		{ "Comment", "// DEPRECATED AGENT CONFIG\n" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "DEPRECATED AGENT CONFIG" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent0_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent0 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent0 = { "bSupportsAgent0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent0_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent1_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent1 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent1 = { "bSupportsAgent1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent1_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent2_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent2 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent2 = { "bSupportsAgent2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent2_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent3_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent3_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent3 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent3 = { "bSupportsAgent3", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent3_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent4_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent4_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent4 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent4 = { "bSupportsAgent4", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent4_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent5_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent5_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent5 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent5 = { "bSupportsAgent5", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent5_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent5_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent5_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent6_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent6_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent6 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent6 = { "bSupportsAgent6", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent6_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent6_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent6_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent7_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent7_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent7 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent7 = { "bSupportsAgent7", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent7_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent7_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent7_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent8_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent8_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent8 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent8 = { "bSupportsAgent8", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent8_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent8_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent8_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent9_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent9_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent9 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent9 = { "bSupportsAgent9", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent9_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent9_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent9_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent10_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent10_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent10 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent10 = { "bSupportsAgent10", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent10_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent10_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent10_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent11_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent11_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent11 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent11 = { "bSupportsAgent11", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent11_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent11_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent11_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent12_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent12_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent12 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent12 = { "bSupportsAgent12", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent12_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent12_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent12_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent13_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent13_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent13 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent13 = { "bSupportsAgent13", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent13_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent13_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent13_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent14_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent14_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent14 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent14 = { "bSupportsAgent14", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent14_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent14_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent14_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent15_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent15_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSupportsAgent15 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent15 = { "bSupportsAgent15", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent15_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent15_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent15_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** this is an editor-only property to put descriptions in navlinks setup, to be able to identify it easier */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "this is an editor-only property to put descriptions in navlinks setup, to be able to identify it easier" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavigationLinkBase, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_Description_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavigationLinkBase, Direction), Z_Construct_UEnum_Engine_ENavLinkDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_Direction_MetaData)) }; // 942439066
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bUseSnapHeight_MetaData[] = {
		{ "Category", "Default" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bUseSnapHeight_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bUseSnapHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bUseSnapHeight = { "bUseSnapHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bUseSnapHeight_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bUseSnapHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bUseSnapHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSnapToCheapestArea_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** If set, link will try to snap to cheapest area in given radius */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "If set, link will try to snap to cheapest area in given radius" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSnapToCheapestArea_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bSnapToCheapestArea = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSnapToCheapestArea = { "bSnapToCheapestArea", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSnapToCheapestArea_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSnapToCheapestArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSnapToCheapestArea_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag0_MetaData[] = {
		{ "Comment", "/** custom flag, check DescribeCustomFlags for details */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "custom flag, check DescribeCustomFlags for details" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag0_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bCustomFlag0 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag0 = { "bCustomFlag0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag0_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag1_MetaData[] = {
		{ "Comment", "/** custom flag, check DescribeCustomFlags for details */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "custom flag, check DescribeCustomFlags for details" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag1_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bCustomFlag1 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag1 = { "bCustomFlag1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag1_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag2_MetaData[] = {
		{ "Comment", "/** custom flag, check DescribeCustomFlags for details */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "custom flag, check DescribeCustomFlags for details" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag2_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bCustomFlag2 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag2 = { "bCustomFlag2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag2_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag3_MetaData[] = {
		{ "Comment", "/** custom flag, check DescribeCustomFlags for details */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "custom flag, check DescribeCustomFlags for details" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag3_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bCustomFlag3 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag3 = { "bCustomFlag3", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag3_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag4_MetaData[] = {
		{ "Comment", "/** custom flag, check DescribeCustomFlags for details */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "custom flag, check DescribeCustomFlags for details" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag4_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bCustomFlag4 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag4 = { "bCustomFlag4", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag4_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag5_MetaData[] = {
		{ "Comment", "/** custom flag, check DescribeCustomFlags for details */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "custom flag, check DescribeCustomFlags for details" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag5_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bCustomFlag5 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag5 = { "bCustomFlag5", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag5_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag5_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag5_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag6_MetaData[] = {
		{ "Comment", "/** custom flag, check DescribeCustomFlags for details */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "custom flag, check DescribeCustomFlags for details" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag6_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bCustomFlag6 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag6 = { "bCustomFlag6", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag6_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag6_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag6_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag7_MetaData[] = {
		{ "Comment", "/** custom flag, check DescribeCustomFlags for details */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "custom flag, check DescribeCustomFlags for details" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag7_SetBit(void* Obj)
	{
		((FNavigationLinkBase*)Obj)->bCustomFlag7 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag7 = { "bCustomFlag7", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNavigationLinkBase), &Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag7_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag7_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag7_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_AreaClass_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Area type of this link (empty = default) */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "Area type of this link (empty = default)" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavigationLinkBase, AreaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavAreaBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_AreaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_AreaClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_LeftProjectHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_MaxFallDownLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SnapRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SnapHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_SupportedAgents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent6,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent7,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent9,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent10,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent11,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent12,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent13,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent14,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSupportsAgent15,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_Description,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bUseSnapHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bSnapToCheapestArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag6,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_bCustomFlag7,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewProp_AreaClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NavigationLinkBase",
		sizeof(FNavigationLinkBase),
		alignof(FNavigationLinkBase),
		Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavigationLinkBase()
	{
		if (!Z_Registration_Info_UScriptStruct_NavigationLinkBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavigationLinkBase.InnerSingleton, Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NavigationLinkBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNavigationLink>() == std::is_polymorphic<FNavigationLinkBase>(), "USTRUCT FNavigationLink cannot be polymorphic unless super FNavigationLinkBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavigationLink;
class UScriptStruct* FNavigationLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavigationLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavigationLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavigationLink, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NavigationLink"));
	}
	return Z_Registration_Info_UScriptStruct_NavigationLink.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNavigationLink>()
{
	return FNavigationLink::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNavigationLink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLink_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavigationLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavigationLink>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLink_Statics::NewProp_Left_MetaData[] = {
		{ "Category", "Default" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavigationLink_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavigationLink, Left), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLink_Statics::NewProp_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLink_Statics::NewProp_Left_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationLink_Statics::NewProp_Right_MetaData[] = {
		{ "Category", "Default" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavigationLink_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavigationLink, Right), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLink_Statics::NewProp_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLink_Statics::NewProp_Right_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavigationLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLink_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationLink_Statics::NewProp_Right,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavigationLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FNavigationLinkBase,
		&NewStructOps,
		"NavigationLink",
		sizeof(FNavigationLink),
		alignof(FNavigationLink),
		Z_Construct_UScriptStruct_FNavigationLink_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLink_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavigationLink()
	{
		if (!Z_Registration_Info_UScriptStruct_NavigationLink.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavigationLink.InnerSingleton, Z_Construct_UScriptStruct_FNavigationLink_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NavigationLink.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNavigationSegmentLink>() == std::is_polymorphic<FNavigationLinkBase>(), "USTRUCT FNavigationSegmentLink cannot be polymorphic unless super FNavigationLinkBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavigationSegmentLink;
class UScriptStruct* FNavigationSegmentLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavigationSegmentLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavigationSegmentLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavigationSegmentLink, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NavigationSegmentLink"));
	}
	return Z_Registration_Info_UScriptStruct_NavigationSegmentLink.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNavigationSegmentLink>()
{
	return FNavigationSegmentLink::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftEnd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightEnd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavigationSegmentLink>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_LeftStart_MetaData[] = {
		{ "Category", "Default" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_LeftStart = { "LeftStart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavigationSegmentLink, LeftStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_LeftStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_LeftStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_LeftEnd_MetaData[] = {
		{ "Category", "Default" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_LeftEnd = { "LeftEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavigationSegmentLink, LeftEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_LeftEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_LeftEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_RightStart_MetaData[] = {
		{ "Category", "Default" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_RightStart = { "RightStart", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavigationSegmentLink, RightStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_RightStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_RightStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_RightEnd_MetaData[] = {
		{ "Category", "Default" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_RightEnd = { "RightEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavigationSegmentLink, RightEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_RightEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_RightEnd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_LeftStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_LeftEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_RightStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewProp_RightEnd,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FNavigationLinkBase,
		&NewStructOps,
		"NavigationSegmentLink",
		sizeof(FNavigationSegmentLink),
		alignof(FNavigationSegmentLink),
		Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavigationSegmentLink()
	{
		if (!Z_Registration_Info_UScriptStruct_NavigationSegmentLink.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavigationSegmentLink.InnerSingleton, Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NavigationSegmentLink.InnerSingleton;
	}
	void UNavLinkDefinition::StaticRegisterNativesUNavLinkDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavLinkDefinition);
	UClass* Z_Construct_UClass_UNavLinkDefinition_NoRegister()
	{
		return UNavLinkDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UNavLinkDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Links_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Links_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Links;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentLinks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentLinks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SegmentLinks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavLinkDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkDefinition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Class containing definition of a navigation area */" },
		{ "IncludePath", "AI/Navigation/NavLinkDefinition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
		{ "ToolTip", "Class containing definition of a navigation area" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_Links_Inner = { "Links", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNavigationLink, METADATA_PARAMS(nullptr, 0) }; // 437560671
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_Links_MetaData[] = {
		{ "Category", "OffMeshLinks" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_Links = { "Links", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavLinkDefinition, Links), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_Links_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_Links_MetaData)) }; // 437560671
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_SegmentLinks_Inner = { "SegmentLinks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNavigationSegmentLink, METADATA_PARAMS(nullptr, 0) }; // 1039461076
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_SegmentLinks_MetaData[] = {
		{ "Category", "OffMeshLinks" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavLinkDefinition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_SegmentLinks = { "SegmentLinks", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavLinkDefinition, SegmentLinks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_SegmentLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_SegmentLinks_MetaData)) }; // 1039461076
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavLinkDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_Links_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_Links,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_SegmentLinks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavLinkDefinition_Statics::NewProp_SegmentLinks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavLinkDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavLinkDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavLinkDefinition_Statics::ClassParams = {
		&UNavLinkDefinition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNavLinkDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNavLinkDefinition_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNavLinkDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavLinkDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavLinkDefinition()
	{
		if (!Z_Registration_Info_UClass_UNavLinkDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavLinkDefinition.OuterSingleton, Z_Construct_UClass_UNavLinkDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNavLinkDefinition.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UNavLinkDefinition>()
	{
		return UNavLinkDefinition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavLinkDefinition);
	UNavLinkDefinition::~UNavLinkDefinition() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_Statics::EnumInfo[] = {
		{ ENavLinkDirection_StaticEnum, TEXT("ENavLinkDirection"), &Z_Registration_Info_UEnum_ENavLinkDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 942439066U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_Statics::ScriptStructInfo[] = {
		{ FNavigationLinkBase::StaticStruct, Z_Construct_UScriptStruct_FNavigationLinkBase_Statics::NewStructOps, TEXT("NavigationLinkBase"), &Z_Registration_Info_UScriptStruct_NavigationLinkBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavigationLinkBase), 741508564U) },
		{ FNavigationLink::StaticStruct, Z_Construct_UScriptStruct_FNavigationLink_Statics::NewStructOps, TEXT("NavigationLink"), &Z_Registration_Info_UScriptStruct_NavigationLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavigationLink), 437560671U) },
		{ FNavigationSegmentLink::StaticStruct, Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics::NewStructOps, TEXT("NavigationSegmentLink"), &Z_Registration_Info_UScriptStruct_NavigationSegmentLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavigationSegmentLink), 1039461076U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNavLinkDefinition, UNavLinkDefinition::StaticClass, TEXT("UNavLinkDefinition"), &Z_Registration_Info_UClass_UNavLinkDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavLinkDefinition), 1014682995U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_2155986280(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
