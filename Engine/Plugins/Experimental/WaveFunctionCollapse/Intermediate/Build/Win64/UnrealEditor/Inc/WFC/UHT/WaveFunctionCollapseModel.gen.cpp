// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveFunctionCollapseModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveFunctionCollapseModel() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WaveFunctionCollapse();
	WAVEFUNCTIONCOLLAPSE_API UClass* Z_Construct_UClass_UWaveFunctionCollapseModel();
	WAVEFUNCTIONCOLLAPSE_API UClass* Z_Construct_UClass_UWaveFunctionCollapseModel_NoRegister();
	WAVEFUNCTIONCOLLAPSE_API UEnum* Z_Construct_UEnum_WaveFunctionCollapse_EWaveFunctionCollapseAdjacency();
	WAVEFUNCTIONCOLLAPSE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap();
	WAVEFUNCTIONCOLLAPSE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveFunctionCollapseOption();
	WAVEFUNCTIONCOLLAPSE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveFunctionCollapseOptions();
	WAVEFUNCTIONCOLLAPSE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement();
	WAVEFUNCTIONCOLLAPSE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveFunctionCollapseTile();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWaveFunctionCollapseAdjacency;
	static UEnum* EWaveFunctionCollapseAdjacency_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWaveFunctionCollapseAdjacency.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWaveFunctionCollapseAdjacency.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WaveFunctionCollapse_EWaveFunctionCollapseAdjacency, (UObject*)Z_Construct_UPackage__Script_WaveFunctionCollapse(), TEXT("EWaveFunctionCollapseAdjacency"));
		}
		return Z_Registration_Info_UEnum_EWaveFunctionCollapseAdjacency.OuterSingleton;
	}
	template<> WAVEFUNCTIONCOLLAPSE_API UEnum* StaticEnum<EWaveFunctionCollapseAdjacency>()
	{
		return EWaveFunctionCollapseAdjacency_StaticEnum();
	}
	struct Z_Construct_UEnum_WaveFunctionCollapse_EWaveFunctionCollapseAdjacency_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WaveFunctionCollapse_EWaveFunctionCollapseAdjacency_Statics::Enumerators[] = {
		{ "EWaveFunctionCollapseAdjacency::Front", (int64)EWaveFunctionCollapseAdjacency::Front },
		{ "EWaveFunctionCollapseAdjacency::Back", (int64)EWaveFunctionCollapseAdjacency::Back },
		{ "EWaveFunctionCollapseAdjacency::Right", (int64)EWaveFunctionCollapseAdjacency::Right },
		{ "EWaveFunctionCollapseAdjacency::Left", (int64)EWaveFunctionCollapseAdjacency::Left },
		{ "EWaveFunctionCollapseAdjacency::Up", (int64)EWaveFunctionCollapseAdjacency::Up },
		{ "EWaveFunctionCollapseAdjacency::Down", (int64)EWaveFunctionCollapseAdjacency::Down },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WaveFunctionCollapse_EWaveFunctionCollapseAdjacency_Statics::Enum_MetaDataParams[] = {
		{ "Back.DisplayName", "X- Back" },
		{ "Back.Name", "EWaveFunctionCollapseAdjacency::Back" },
		{ "BlueprintType", "true" },
		{ "Down.DisplayName", "Z- Down" },
		{ "Down.Name", "EWaveFunctionCollapseAdjacency::Down" },
		{ "Front.DisplayName", "X+ Front" },
		{ "Front.Name", "EWaveFunctionCollapseAdjacency::Front" },
		{ "Left.DisplayName", "Y- Left" },
		{ "Left.Name", "EWaveFunctionCollapseAdjacency::Left" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
		{ "Right.DisplayName", "Y+ Right" },
		{ "Right.Name", "EWaveFunctionCollapseAdjacency::Right" },
		{ "Up.DisplayName", "Z+ Up" },
		{ "Up.Name", "EWaveFunctionCollapseAdjacency::Up" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WaveFunctionCollapse_EWaveFunctionCollapseAdjacency_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WaveFunctionCollapse,
		nullptr,
		"EWaveFunctionCollapseAdjacency",
		"EWaveFunctionCollapseAdjacency",
		Z_Construct_UEnum_WaveFunctionCollapse_EWaveFunctionCollapseAdjacency_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WaveFunctionCollapse_EWaveFunctionCollapseAdjacency_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WaveFunctionCollapse_EWaveFunctionCollapseAdjacency_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WaveFunctionCollapse_EWaveFunctionCollapseAdjacency_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WaveFunctionCollapse_EWaveFunctionCollapseAdjacency()
	{
		if (!Z_Registration_Info_UEnum_EWaveFunctionCollapseAdjacency.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWaveFunctionCollapseAdjacency.InnerSingleton, Z_Construct_UEnum_WaveFunctionCollapse_EWaveFunctionCollapseAdjacency_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWaveFunctionCollapseAdjacency.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaveFunctionCollapseOption;
class UScriptStruct* FWaveFunctionCollapseOption::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaveFunctionCollapseOption.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaveFunctionCollapseOption.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveFunctionCollapseOption, (UObject*)Z_Construct_UPackage__Script_WaveFunctionCollapse(), TEXT("WaveFunctionCollapseOption"));
	}
	return Z_Registration_Info_UScriptStruct_WaveFunctionCollapseOption.OuterSingleton;
}
template<> WAVEFUNCTIONCOLLAPSE_API UScriptStruct* StaticStruct<FWaveFunctionCollapseOption>()
{
	return FWaveFunctionCollapseOption::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseRotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseRotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseScale3D_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseScale3D;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Base Option Struct which holds an object, its orientation and scale\n*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
		{ "ToolTip", "Base Option Struct which holds an object, its orientation and scale" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveFunctionCollapseOption>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics::NewProp_BaseObject_MetaData[] = {
		{ "AllowedClasses", "StaticMesh, Blueprint" },
		{ "Category", "WaveFunctionCollapse" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics::NewProp_BaseObject = { "BaseObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveFunctionCollapseOption, BaseObject), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics::NewProp_BaseObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics::NewProp_BaseObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics::NewProp_BaseRotator_MetaData[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics::NewProp_BaseRotator = { "BaseRotator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveFunctionCollapseOption, BaseRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics::NewProp_BaseRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics::NewProp_BaseRotator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics::NewProp_BaseScale3D_MetaData[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics::NewProp_BaseScale3D = { "BaseScale3D", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveFunctionCollapseOption, BaseScale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics::NewProp_BaseScale3D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics::NewProp_BaseScale3D_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics::NewProp_BaseObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics::NewProp_BaseRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics::NewProp_BaseScale3D,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WaveFunctionCollapse,
		nullptr,
		&NewStructOps,
		"WaveFunctionCollapseOption",
		sizeof(FWaveFunctionCollapseOption),
		alignof(FWaveFunctionCollapseOption),
		Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaveFunctionCollapseOption()
	{
		if (!Z_Registration_Info_UScriptStruct_WaveFunctionCollapseOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaveFunctionCollapseOption.InnerSingleton, Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaveFunctionCollapseOption.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaveFunctionCollapseOptions;
class UScriptStruct* FWaveFunctionCollapseOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaveFunctionCollapseOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaveFunctionCollapseOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveFunctionCollapseOptions, (UObject*)Z_Construct_UPackage__Script_WaveFunctionCollapse(), TEXT("WaveFunctionCollapseOptions"));
	}
	return Z_Registration_Info_UScriptStruct_WaveFunctionCollapseOptions.OuterSingleton;
}
template<> WAVEFUNCTIONCOLLAPSE_API UScriptStruct* StaticStruct<FWaveFunctionCollapseOptions>()
{
	return FWaveFunctionCollapseOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaveFunctionCollapseOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveFunctionCollapseOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Container struct for array of Options\n*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
		{ "ToolTip", "Container struct for array of Options" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaveFunctionCollapseOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveFunctionCollapseOptions>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseOptions_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWaveFunctionCollapseOption, METADATA_PARAMS(nullptr, 0) }; // 919664607
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveFunctionCollapseOptions_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseOptions_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveFunctionCollapseOptions, Options), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveFunctionCollapseOptions_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseOptions_Statics::NewProp_Options_MetaData)) }; // 919664607
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveFunctionCollapseOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseOptions_Statics::NewProp_Options_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseOptions_Statics::NewProp_Options,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveFunctionCollapseOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WaveFunctionCollapse,
		nullptr,
		&NewStructOps,
		"WaveFunctionCollapseOptions",
		sizeof(FWaveFunctionCollapseOptions),
		alignof(FWaveFunctionCollapseOptions),
		Z_Construct_UScriptStruct_FWaveFunctionCollapseOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveFunctionCollapseOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaveFunctionCollapseOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_WaveFunctionCollapseOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaveFunctionCollapseOptions.InnerSingleton, Z_Construct_UScriptStruct_FWaveFunctionCollapseOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaveFunctionCollapseOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaveFunctionCollapseAdjacencyToOptionsMap;
class UScriptStruct* FWaveFunctionCollapseAdjacencyToOptionsMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaveFunctionCollapseAdjacencyToOptionsMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaveFunctionCollapseAdjacencyToOptionsMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap, (UObject*)Z_Construct_UPackage__Script_WaveFunctionCollapse(), TEXT("WaveFunctionCollapseAdjacencyToOptionsMap"));
	}
	return Z_Registration_Info_UScriptStruct_WaveFunctionCollapseAdjacencyToOptionsMap.OuterSingleton;
}
template<> WAVEFUNCTIONCOLLAPSE_API UScriptStruct* StaticStruct<FWaveFunctionCollapseAdjacencyToOptionsMap>()
{
	return FWaveFunctionCollapseAdjacencyToOptionsMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Contribution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Contribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdjacencyToOptionsMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AdjacencyToOptionsMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AdjacencyToOptionsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjacencyToOptionsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AdjacencyToOptionsMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Container struct for AdjacencyToOptionsMap\n* Stores the weight and contribution of an option\n*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
		{ "ToolTip", "Container struct for AdjacencyToOptionsMap\nStores the weight and contribution of an option" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveFunctionCollapseAdjacencyToOptionsMap>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::NewProp_Contribution_MetaData[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09* The amount of times an option is present when deriving a model.\n\x09* This value is used to calculate its weight.\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
		{ "ToolTip", "The amount of times an option is present when deriving a model.\nThis value is used to calculate its weight." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::NewProp_Contribution = { "Contribution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveFunctionCollapseAdjacencyToOptionsMap, Contribution), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::NewProp_Contribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::NewProp_Contribution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09* The weight of an option calculated by dividing this Contribution by the sum of all contributions of all options.\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
		{ "ToolTip", "The weight of an option calculated by dividing this Contribution by the sum of all contributions of all options." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveFunctionCollapseAdjacencyToOptionsMap, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::NewProp_Weight_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::NewProp_AdjacencyToOptionsMap_ValueProp = { "AdjacencyToOptionsMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FWaveFunctionCollapseOptions, METADATA_PARAMS(nullptr, 0) }; // 32218383
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::NewProp_AdjacencyToOptionsMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::NewProp_AdjacencyToOptionsMap_Key_KeyProp = { "AdjacencyToOptionsMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_WaveFunctionCollapse_EWaveFunctionCollapseAdjacency, METADATA_PARAMS(nullptr, 0) }; // 1823471256
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::NewProp_AdjacencyToOptionsMap_MetaData[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::NewProp_AdjacencyToOptionsMap = { "AdjacencyToOptionsMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveFunctionCollapseAdjacencyToOptionsMap, AdjacencyToOptionsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::NewProp_AdjacencyToOptionsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::NewProp_AdjacencyToOptionsMap_MetaData)) }; // 1823471256 32218383
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::NewProp_Contribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::NewProp_AdjacencyToOptionsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::NewProp_AdjacencyToOptionsMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::NewProp_AdjacencyToOptionsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::NewProp_AdjacencyToOptionsMap,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WaveFunctionCollapse,
		nullptr,
		&NewStructOps,
		"WaveFunctionCollapseAdjacencyToOptionsMap",
		sizeof(FWaveFunctionCollapseAdjacencyToOptionsMap),
		alignof(FWaveFunctionCollapseAdjacencyToOptionsMap),
		Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap()
	{
		if (!Z_Registration_Info_UScriptStruct_WaveFunctionCollapseAdjacencyToOptionsMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaveFunctionCollapseAdjacencyToOptionsMap.InnerSingleton, Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaveFunctionCollapseAdjacencyToOptionsMap.InnerSingleton;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseModel::execSwapMeshes)
	{
		P_GET_TMAP(UStaticMesh*,UStaticMesh*,Z_Param_SourceToTargetMeshMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwapMeshes(Z_Param_SourceToTargetMeshMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseModel::execGetConstraintCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetConstraintCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseModel::execGetOptionContribution)
	{
		P_GET_STRUCT_REF(FWaveFunctionCollapseOption,Z_Param_Out_Option);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetOptionContribution(Z_Param_Out_Option);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseModel::execGetOptionWeight)
	{
		P_GET_STRUCT_REF(FWaveFunctionCollapseOption,Z_Param_Out_Option);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetOptionWeight(Z_Param_Out_Option);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseModel::execSetOptionContribution)
	{
		P_GET_STRUCT_REF(FWaveFunctionCollapseOption,Z_Param_Out_Option);
		P_GET_PROPERTY(FIntProperty,Z_Param_Contribution);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOptionContribution(Z_Param_Out_Option,Z_Param_Contribution);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseModel::execSetAllContributions)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Contribution);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllContributions(Z_Param_Contribution);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseModel::execSetAllWeights)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Weight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllWeights(Z_Param_Weight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseModel::execSetWeightsFromContributions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWeightsFromContributions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseModel::execGetOptions)
	{
		P_GET_STRUCT_REF(FWaveFunctionCollapseOption,Z_Param_Out_KeyOption);
		P_GET_ENUM(EWaveFunctionCollapseAdjacency,Z_Param_Adjacency);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWaveFunctionCollapseOptions*)Z_Param__Result=P_THIS->GetOptions(Z_Param_Out_KeyOption,EWaveFunctionCollapseAdjacency(Z_Param_Adjacency));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWaveFunctionCollapseModel::execAddConstraint)
	{
		P_GET_STRUCT_REF(FWaveFunctionCollapseOption,Z_Param_Out_KeyOption);
		P_GET_ENUM(EWaveFunctionCollapseAdjacency,Z_Param_Adjacency);
		P_GET_STRUCT_REF(FWaveFunctionCollapseOption,Z_Param_Out_AdjacentOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddConstraint(Z_Param_Out_KeyOption,EWaveFunctionCollapseAdjacency(Z_Param_Adjacency),Z_Param_Out_AdjacentOption);
		P_NATIVE_END;
	}
	void UWaveFunctionCollapseModel::StaticRegisterNativesUWaveFunctionCollapseModel()
	{
		UClass* Class = UWaveFunctionCollapseModel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddConstraint", &UWaveFunctionCollapseModel::execAddConstraint },
			{ "GetConstraintCount", &UWaveFunctionCollapseModel::execGetConstraintCount },
			{ "GetOptionContribution", &UWaveFunctionCollapseModel::execGetOptionContribution },
			{ "GetOptions", &UWaveFunctionCollapseModel::execGetOptions },
			{ "GetOptionWeight", &UWaveFunctionCollapseModel::execGetOptionWeight },
			{ "SetAllContributions", &UWaveFunctionCollapseModel::execSetAllContributions },
			{ "SetAllWeights", &UWaveFunctionCollapseModel::execSetAllWeights },
			{ "SetOptionContribution", &UWaveFunctionCollapseModel::execSetOptionContribution },
			{ "SetWeightsFromContributions", &UWaveFunctionCollapseModel::execSetWeightsFromContributions },
			{ "SwapMeshes", &UWaveFunctionCollapseModel::execSwapMeshes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseModel_AddConstraint_Statics
	{
		struct WaveFunctionCollapseModel_eventAddConstraint_Parms
		{
			FWaveFunctionCollapseOption KeyOption;
			EWaveFunctionCollapseAdjacency Adjacency;
			FWaveFunctionCollapseOption AdjacentOption;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyOption_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyOption;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Adjacency_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Adjacency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjacentOption_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdjacentOption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseModel_AddConstraint_Statics::NewProp_KeyOption_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseModel_AddConstraint_Statics::NewProp_KeyOption = { "KeyOption", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseModel_eventAddConstraint_Parms, KeyOption), Z_Construct_UScriptStruct_FWaveFunctionCollapseOption, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseModel_AddConstraint_Statics::NewProp_KeyOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseModel_AddConstraint_Statics::NewProp_KeyOption_MetaData)) }; // 919664607
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWaveFunctionCollapseModel_AddConstraint_Statics::NewProp_Adjacency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseModel_AddConstraint_Statics::NewProp_Adjacency = { "Adjacency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseModel_eventAddConstraint_Parms, Adjacency), Z_Construct_UEnum_WaveFunctionCollapse_EWaveFunctionCollapseAdjacency, METADATA_PARAMS(nullptr, 0) }; // 1823471256
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseModel_AddConstraint_Statics::NewProp_AdjacentOption_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseModel_AddConstraint_Statics::NewProp_AdjacentOption = { "AdjacentOption", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseModel_eventAddConstraint_Parms, AdjacentOption), Z_Construct_UScriptStruct_FWaveFunctionCollapseOption, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseModel_AddConstraint_Statics::NewProp_AdjacentOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseModel_AddConstraint_Statics::NewProp_AdjacentOption_MetaData)) }; // 919664607
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseModel_AddConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseModel_AddConstraint_Statics::NewProp_KeyOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseModel_AddConstraint_Statics::NewProp_Adjacency_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseModel_AddConstraint_Statics::NewProp_Adjacency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseModel_AddConstraint_Statics::NewProp_AdjacentOption,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseModel_AddConstraint_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Create a constraint\n\x09* @param KeyOption Key option\n\x09* @param Adjacency Adjacency from KeyOption to AdjacentOption\n\x09* @param AdjacentOption Adjacent option\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
		{ "ToolTip", "Create a constraint\n@param KeyOption Key option\n@param Adjacency Adjacency from KeyOption to AdjacentOption\n@param AdjacentOption Adjacent option" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseModel_AddConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseModel, nullptr, "AddConstraint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseModel_AddConstraint_Statics::WaveFunctionCollapseModel_eventAddConstraint_Parms), Z_Construct_UFunction_UWaveFunctionCollapseModel_AddConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseModel_AddConstraint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseModel_AddConstraint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseModel_AddConstraint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseModel_AddConstraint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseModel_AddConstraint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseModel_GetConstraintCount_Statics
	{
		struct WaveFunctionCollapseModel_eventGetConstraintCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseModel_GetConstraintCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseModel_eventGetConstraintCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseModel_GetConstraintCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseModel_GetConstraintCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseModel_GetConstraintCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Get the total count of constraints in this model\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
		{ "ToolTip", "Get the total count of constraints in this model" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseModel_GetConstraintCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseModel, nullptr, "GetConstraintCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseModel_GetConstraintCount_Statics::WaveFunctionCollapseModel_eventGetConstraintCount_Parms), Z_Construct_UFunction_UWaveFunctionCollapseModel_GetConstraintCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseModel_GetConstraintCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseModel_GetConstraintCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseModel_GetConstraintCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseModel_GetConstraintCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseModel_GetConstraintCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionContribution_Statics
	{
		struct WaveFunctionCollapseModel_eventGetOptionContribution_Parms
		{
			FWaveFunctionCollapseOption Option;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Option;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionContribution_Statics::NewProp_Option_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionContribution_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseModel_eventGetOptionContribution_Parms, Option), Z_Construct_UScriptStruct_FWaveFunctionCollapseOption, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionContribution_Statics::NewProp_Option_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionContribution_Statics::NewProp_Option_MetaData)) }; // 919664607
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionContribution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseModel_eventGetOptionContribution_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionContribution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionContribution_Statics::NewProp_Option,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionContribution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionContribution_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Get the contribution value of an option\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
		{ "ToolTip", "Get the contribution value of an option" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionContribution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseModel, nullptr, "GetOptionContribution", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionContribution_Statics::WaveFunctionCollapseModel_eventGetOptionContribution_Parms), Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionContribution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionContribution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionContribution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionContribution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionContribution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionContribution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptions_Statics
	{
		struct WaveFunctionCollapseModel_eventGetOptions_Parms
		{
			FWaveFunctionCollapseOption KeyOption;
			EWaveFunctionCollapseAdjacency Adjacency;
			FWaveFunctionCollapseOptions ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyOption_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyOption;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Adjacency_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Adjacency;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptions_Statics::NewProp_KeyOption_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptions_Statics::NewProp_KeyOption = { "KeyOption", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseModel_eventGetOptions_Parms, KeyOption), Z_Construct_UScriptStruct_FWaveFunctionCollapseOption, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptions_Statics::NewProp_KeyOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptions_Statics::NewProp_KeyOption_MetaData)) }; // 919664607
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptions_Statics::NewProp_Adjacency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptions_Statics::NewProp_Adjacency = { "Adjacency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseModel_eventGetOptions_Parms, Adjacency), Z_Construct_UEnum_WaveFunctionCollapse_EWaveFunctionCollapseAdjacency, METADATA_PARAMS(nullptr, 0) }; // 1823471256
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseModel_eventGetOptions_Parms, ReturnValue), Z_Construct_UScriptStruct_FWaveFunctionCollapseOptions, METADATA_PARAMS(nullptr, 0) }; // 32218383
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptions_Statics::NewProp_KeyOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptions_Statics::NewProp_Adjacency_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptions_Statics::NewProp_Adjacency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Get all options for a given key option in a given adjacency\n\x09* @param KeyOption Key option\n\x09* @param Adjacency Adjacency from KeyOption to AdjacentOption\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
		{ "ToolTip", "Get all options for a given key option in a given adjacency\n@param KeyOption Key option\n@param Adjacency Adjacency from KeyOption to AdjacentOption" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseModel, nullptr, "GetOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptions_Statics::WaveFunctionCollapseModel_eventGetOptions_Parms), Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionWeight_Statics
	{
		struct WaveFunctionCollapseModel_eventGetOptionWeight_Parms
		{
			FWaveFunctionCollapseOption Option;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Option;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionWeight_Statics::NewProp_Option_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionWeight_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseModel_eventGetOptionWeight_Parms, Option), Z_Construct_UScriptStruct_FWaveFunctionCollapseOption, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionWeight_Statics::NewProp_Option_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionWeight_Statics::NewProp_Option_MetaData)) }; // 919664607
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseModel_eventGetOptionWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionWeight_Statics::NewProp_Option,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Get the weight value of an option\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
		{ "ToolTip", "Get the weight value of an option" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseModel, nullptr, "GetOptionWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionWeight_Statics::WaveFunctionCollapseModel_eventGetOptionWeight_Parms), Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllContributions_Statics
	{
		struct WaveFunctionCollapseModel_eventSetAllContributions_Parms
		{
			int32 Contribution;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Contribution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllContributions_Statics::NewProp_Contribution = { "Contribution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseModel_eventSetAllContributions_Parms, Contribution), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllContributions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllContributions_Statics::NewProp_Contribution,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllContributions_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Set the contribution values of key objects to a given value\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
		{ "ToolTip", "Set the contribution values of key objects to a given value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllContributions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseModel, nullptr, "SetAllContributions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllContributions_Statics::WaveFunctionCollapseModel_eventSetAllContributions_Parms), Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllContributions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllContributions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllContributions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllContributions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllContributions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllContributions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllWeights_Statics
	{
		struct WaveFunctionCollapseModel_eventSetAllWeights_Parms
		{
			float Weight;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllWeights_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseModel_eventSetAllWeights_Parms, Weight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllWeights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllWeights_Statics::NewProp_Weight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllWeights_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Set the weights of key objects to a given value\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
		{ "ToolTip", "Set the weights of key objects to a given value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllWeights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseModel, nullptr, "SetAllWeights", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllWeights_Statics::WaveFunctionCollapseModel_eventSetAllWeights_Parms), Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllWeights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllWeights_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllWeights_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllWeights_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllWeights()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllWeights_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseModel_SetOptionContribution_Statics
	{
		struct WaveFunctionCollapseModel_eventSetOptionContribution_Parms
		{
			FWaveFunctionCollapseOption Option;
			int32 Contribution;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Option_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Option;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Contribution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseModel_SetOptionContribution_Statics::NewProp_Option_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseModel_SetOptionContribution_Statics::NewProp_Option = { "Option", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseModel_eventSetOptionContribution_Parms, Option), Z_Construct_UScriptStruct_FWaveFunctionCollapseOption, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseModel_SetOptionContribution_Statics::NewProp_Option_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseModel_SetOptionContribution_Statics::NewProp_Option_MetaData)) }; // 919664607
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseModel_SetOptionContribution_Statics::NewProp_Contribution = { "Contribution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseModel_eventSetOptionContribution_Parms, Contribution), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseModel_SetOptionContribution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseModel_SetOptionContribution_Statics::NewProp_Option,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseModel_SetOptionContribution_Statics::NewProp_Contribution,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseModel_SetOptionContribution_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Set the contribution value of a key object to a given value\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
		{ "ToolTip", "Set the contribution value of a key object to a given value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseModel_SetOptionContribution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseModel, nullptr, "SetOptionContribution", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseModel_SetOptionContribution_Statics::WaveFunctionCollapseModel_eventSetOptionContribution_Parms), Z_Construct_UFunction_UWaveFunctionCollapseModel_SetOptionContribution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseModel_SetOptionContribution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseModel_SetOptionContribution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseModel_SetOptionContribution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseModel_SetOptionContribution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseModel_SetOptionContribution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseModel_SetWeightsFromContributions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseModel_SetWeightsFromContributions_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Set the weights of key objects based on their contribution values\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
		{ "ToolTip", "Set the weights of key objects based on their contribution values" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseModel_SetWeightsFromContributions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseModel, nullptr, "SetWeightsFromContributions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseModel_SetWeightsFromContributions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseModel_SetWeightsFromContributions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseModel_SetWeightsFromContributions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseModel_SetWeightsFromContributions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWaveFunctionCollapseModel_SwapMeshes_Statics
	{
		struct WaveFunctionCollapseModel_eventSwapMeshes_Parms
		{
			TMap<UStaticMesh*,UStaticMesh*> SourceToTargetMeshMap;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceToTargetMeshMap_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceToTargetMeshMap_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_SourceToTargetMeshMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseModel_SwapMeshes_Statics::NewProp_SourceToTargetMeshMap_ValueProp = { "SourceToTargetMeshMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseModel_SwapMeshes_Statics::NewProp_SourceToTargetMeshMap_Key_KeyProp = { "SourceToTargetMeshMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UWaveFunctionCollapseModel_SwapMeshes_Statics::NewProp_SourceToTargetMeshMap = { "SourceToTargetMeshMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaveFunctionCollapseModel_eventSwapMeshes_Parms, SourceToTargetMeshMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaveFunctionCollapseModel_SwapMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseModel_SwapMeshes_Statics::NewProp_SourceToTargetMeshMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseModel_SwapMeshes_Statics::NewProp_SourceToTargetMeshMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaveFunctionCollapseModel_SwapMeshes_Statics::NewProp_SourceToTargetMeshMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaveFunctionCollapseModel_SwapMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Swap meshes in the model with other meshes based on a map.  \n\x09* This is useful when working with template meshes that need to be swapped.\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
		{ "ToolTip", "Swap meshes in the model with other meshes based on a map.\nThis is useful when working with template meshes that need to be swapped." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaveFunctionCollapseModel_SwapMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaveFunctionCollapseModel, nullptr, "SwapMeshes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaveFunctionCollapseModel_SwapMeshes_Statics::WaveFunctionCollapseModel_eventSwapMeshes_Parms), Z_Construct_UFunction_UWaveFunctionCollapseModel_SwapMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseModel_SwapMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaveFunctionCollapseModel_SwapMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaveFunctionCollapseModel_SwapMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaveFunctionCollapseModel_SwapMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaveFunctionCollapseModel_SwapMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveFunctionCollapseModel);
	UClass* Z_Construct_UClass_UWaveFunctionCollapseModel_NoRegister()
	{
		return UWaveFunctionCollapseModel::StaticClass();
	}
	struct Z_Construct_UClass_UWaveFunctionCollapseModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Constraints_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Constraints_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Constraints_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Constraints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnExclusion_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnExclusion_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnExclusion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_WaveFunctionCollapse,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWaveFunctionCollapseModel_AddConstraint, "AddConstraint" }, // 2021122131
		{ &Z_Construct_UFunction_UWaveFunctionCollapseModel_GetConstraintCount, "GetConstraintCount" }, // 2905432792
		{ &Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionContribution, "GetOptionContribution" }, // 1266934611
		{ &Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptions, "GetOptions" }, // 1024916607
		{ &Z_Construct_UFunction_UWaveFunctionCollapseModel_GetOptionWeight, "GetOptionWeight" }, // 540180503
		{ &Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllContributions, "SetAllContributions" }, // 3012387709
		{ &Z_Construct_UFunction_UWaveFunctionCollapseModel_SetAllWeights, "SetAllWeights" }, // 2105331806
		{ &Z_Construct_UFunction_UWaveFunctionCollapseModel_SetOptionContribution, "SetOptionContribution" }, // 2857703688
		{ &Z_Construct_UFunction_UWaveFunctionCollapseModel_SetWeightsFromContributions, "SetWeightsFromContributions" }, // 1586092963
		{ &Z_Construct_UFunction_UWaveFunctionCollapseModel_SwapMeshes, "SwapMeshes" }, // 576276341
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* A Model of WFC constraints.\n* This data asset should contain all necessary data to allow for a WFC solve of an arbitrary grid size.\n*/" },
		{ "IncludePath", "WaveFunctionCollapseModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
		{ "ToolTip", "A Model of WFC constraints.\nThis data asset should contain all necessary data to allow for a WFC solve of an arbitrary grid size." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::NewProp_TileSize_MetaData[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "Comment", "/**\n\x09* Grid Tile Size in cm^3\n\x09*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
		{ "ToolTip", "Grid Tile Size in cm^3" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveFunctionCollapseModel, TileSize), METADATA_PARAMS(Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::NewProp_TileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::NewProp_TileSize_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::NewProp_Constraints_ValueProp = { "Constraints", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap, METADATA_PARAMS(nullptr, 0) }; // 2155592163
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::NewProp_Constraints_Key_KeyProp = { "Constraints_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWaveFunctionCollapseOption, METADATA_PARAMS(nullptr, 0) }; // 919664607
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::NewProp_Constraints_MetaData[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::NewProp_Constraints = { "Constraints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveFunctionCollapseModel, Constraints), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::NewProp_Constraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::NewProp_Constraints_MetaData)) }; // 919664607 2155592163
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::NewProp_SpawnExclusion_Inner = { "SpawnExclusion", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::NewProp_SpawnExclusion_MetaData[] = {
		{ "AllowedClasses", "StaticMesh, Blueprint" },
		{ "Category", "WaveFunctionCollapse" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::NewProp_SpawnExclusion = { "SpawnExclusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveFunctionCollapseModel, SpawnExclusion), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::NewProp_SpawnExclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::NewProp_SpawnExclusion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::NewProp_TileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::NewProp_Constraints_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::NewProp_Constraints_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::NewProp_Constraints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::NewProp_SpawnExclusion_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::NewProp_SpawnExclusion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveFunctionCollapseModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::ClassParams = {
		&UWaveFunctionCollapseModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaveFunctionCollapseModel()
	{
		if (!Z_Registration_Info_UClass_UWaveFunctionCollapseModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveFunctionCollapseModel.OuterSingleton, Z_Construct_UClass_UWaveFunctionCollapseModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaveFunctionCollapseModel.OuterSingleton;
	}
	template<> WAVEFUNCTIONCOLLAPSE_API UClass* StaticClass<UWaveFunctionCollapseModel>()
	{
		return UWaveFunctionCollapseModel::StaticClass();
	}
	UWaveFunctionCollapseModel::UWaveFunctionCollapseModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveFunctionCollapseModel);
	UWaveFunctionCollapseModel::~UWaveFunctionCollapseModel() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaveFunctionCollapseTile;
class UScriptStruct* FWaveFunctionCollapseTile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaveFunctionCollapseTile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaveFunctionCollapseTile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveFunctionCollapseTile, (UObject*)Z_Construct_UPackage__Script_WaveFunctionCollapse(), TEXT("WaveFunctionCollapseTile"));
	}
	return Z_Registration_Info_UScriptStruct_WaveFunctionCollapseTile.OuterSingleton;
}
template<> WAVEFUNCTIONCOLLAPSE_API UScriptStruct* StaticStruct<FWaveFunctionCollapseTile>()
{
	return FWaveFunctionCollapseTile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaveFunctionCollapseTile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShannonEntropy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShannonEntropy;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemainingOptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemainingOptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemainingOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveFunctionCollapseTile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Base Tile Struct which holds an array of remaining Options and its Shannon Entropy value\n*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
		{ "ToolTip", "Base Tile Struct which holds an array of remaining Options and its Shannon Entropy value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaveFunctionCollapseTile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveFunctionCollapseTile>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveFunctionCollapseTile_Statics::NewProp_ShannonEntropy_MetaData[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseTile_Statics::NewProp_ShannonEntropy = { "ShannonEntropy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveFunctionCollapseTile, ShannonEntropy), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveFunctionCollapseTile_Statics::NewProp_ShannonEntropy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseTile_Statics::NewProp_ShannonEntropy_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseTile_Statics::NewProp_RemainingOptions_Inner = { "RemainingOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWaveFunctionCollapseOption, METADATA_PARAMS(nullptr, 0) }; // 919664607
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveFunctionCollapseTile_Statics::NewProp_RemainingOptions_MetaData[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseTile_Statics::NewProp_RemainingOptions = { "RemainingOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveFunctionCollapseTile, RemainingOptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveFunctionCollapseTile_Statics::NewProp_RemainingOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseTile_Statics::NewProp_RemainingOptions_MetaData)) }; // 919664607
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveFunctionCollapseTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseTile_Statics::NewProp_ShannonEntropy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseTile_Statics::NewProp_RemainingOptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseTile_Statics::NewProp_RemainingOptions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveFunctionCollapseTile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WaveFunctionCollapse,
		nullptr,
		&NewStructOps,
		"WaveFunctionCollapseTile",
		sizeof(FWaveFunctionCollapseTile),
		alignof(FWaveFunctionCollapseTile),
		Z_Construct_UScriptStruct_FWaveFunctionCollapseTile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseTile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveFunctionCollapseTile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseTile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaveFunctionCollapseTile()
	{
		if (!Z_Registration_Info_UScriptStruct_WaveFunctionCollapseTile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaveFunctionCollapseTile.InnerSingleton, Z_Construct_UScriptStruct_FWaveFunctionCollapseTile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaveFunctionCollapseTile.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaveFunctionCollapseQueueElement;
class UScriptStruct* FWaveFunctionCollapseQueueElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaveFunctionCollapseQueueElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaveFunctionCollapseQueueElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement, (UObject*)Z_Construct_UPackage__Script_WaveFunctionCollapse(), TEXT("WaveFunctionCollapseQueueElement"));
	}
	return Z_Registration_Info_UScriptStruct_WaveFunctionCollapseQueueElement.OuterSingleton;
}
template<> WAVEFUNCTIONCOLLAPSE_API UScriptStruct* StaticStruct<FWaveFunctionCollapseQueueElement>()
{
	return FWaveFunctionCollapseQueueElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterObjectIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CenterObjectIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Adjacency_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Adjacency_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Adjacency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* A helper struct used for queuing during Observation and Propagation phases\n*/" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
		{ "ToolTip", "A helper struct used for queuing during Observation and Propagation phases" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveFunctionCollapseQueueElement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement_Statics::NewProp_CenterObjectIndex_MetaData[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement_Statics::NewProp_CenterObjectIndex = { "CenterObjectIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveFunctionCollapseQueueElement, CenterObjectIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement_Statics::NewProp_CenterObjectIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement_Statics::NewProp_CenterObjectIndex_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement_Statics::NewProp_Adjacency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement_Statics::NewProp_Adjacency_MetaData[] = {
		{ "Category", "WaveFunctionCollapse" },
		{ "ModuleRelativePath", "Public/WaveFunctionCollapseModel.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement_Statics::NewProp_Adjacency = { "Adjacency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveFunctionCollapseQueueElement, Adjacency), Z_Construct_UEnum_WaveFunctionCollapse_EWaveFunctionCollapseAdjacency, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement_Statics::NewProp_Adjacency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement_Statics::NewProp_Adjacency_MetaData)) }; // 1823471256
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement_Statics::NewProp_CenterObjectIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement_Statics::NewProp_Adjacency_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement_Statics::NewProp_Adjacency,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WaveFunctionCollapse,
		nullptr,
		&NewStructOps,
		"WaveFunctionCollapseQueueElement",
		sizeof(FWaveFunctionCollapseQueueElement),
		alignof(FWaveFunctionCollapseQueueElement),
		Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement()
	{
		if (!Z_Registration_Info_UScriptStruct_WaveFunctionCollapseQueueElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaveFunctionCollapseQueueElement.InnerSingleton, Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaveFunctionCollapseQueueElement.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_Statics::EnumInfo[] = {
		{ EWaveFunctionCollapseAdjacency_StaticEnum, TEXT("EWaveFunctionCollapseAdjacency"), &Z_Registration_Info_UEnum_EWaveFunctionCollapseAdjacency, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1823471256U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_Statics::ScriptStructInfo[] = {
		{ FWaveFunctionCollapseOption::StaticStruct, Z_Construct_UScriptStruct_FWaveFunctionCollapseOption_Statics::NewStructOps, TEXT("WaveFunctionCollapseOption"), &Z_Registration_Info_UScriptStruct_WaveFunctionCollapseOption, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaveFunctionCollapseOption), 919664607U) },
		{ FWaveFunctionCollapseOptions::StaticStruct, Z_Construct_UScriptStruct_FWaveFunctionCollapseOptions_Statics::NewStructOps, TEXT("WaveFunctionCollapseOptions"), &Z_Registration_Info_UScriptStruct_WaveFunctionCollapseOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaveFunctionCollapseOptions), 32218383U) },
		{ FWaveFunctionCollapseAdjacencyToOptionsMap::StaticStruct, Z_Construct_UScriptStruct_FWaveFunctionCollapseAdjacencyToOptionsMap_Statics::NewStructOps, TEXT("WaveFunctionCollapseAdjacencyToOptionsMap"), &Z_Registration_Info_UScriptStruct_WaveFunctionCollapseAdjacencyToOptionsMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaveFunctionCollapseAdjacencyToOptionsMap), 2155592163U) },
		{ FWaveFunctionCollapseTile::StaticStruct, Z_Construct_UScriptStruct_FWaveFunctionCollapseTile_Statics::NewStructOps, TEXT("WaveFunctionCollapseTile"), &Z_Registration_Info_UScriptStruct_WaveFunctionCollapseTile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaveFunctionCollapseTile), 609973873U) },
		{ FWaveFunctionCollapseQueueElement::StaticStruct, Z_Construct_UScriptStruct_FWaveFunctionCollapseQueueElement_Statics::NewStructOps, TEXT("WaveFunctionCollapseQueueElement"), &Z_Registration_Info_UScriptStruct_WaveFunctionCollapseQueueElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaveFunctionCollapseQueueElement), 1751827437U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaveFunctionCollapseModel, UWaveFunctionCollapseModel::StaticClass, TEXT("UWaveFunctionCollapseModel"), &Z_Registration_Info_UClass_UWaveFunctionCollapseModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveFunctionCollapseModel), 3527820054U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_1881932622(TEXT("/Script/WaveFunctionCollapse"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WaveFunctionCollapse_Source_WaveFunctionCollapse_Public_WaveFunctionCollapseModel_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
