// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationData.h"
#include "../../Source/Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationDataInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavDataConfig();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationData();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationData_NoRegister();
	NAVIGATIONSYSTEM_API UEnum* Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType();
	NAVIGATIONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSupportedAreaData();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SupportedAreaData;
class UScriptStruct* FSupportedAreaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SupportedAreaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SupportedAreaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSupportedAreaData, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("SupportedAreaData"));
	}
	return Z_Registration_Info_UScriptStruct_SupportedAreaData.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<FSupportedAreaData>()
{
	return FSupportedAreaData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSupportedAreaData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AreaClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AreaID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_AreaClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSupportedAreaData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavigationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSupportedAreaData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaClassName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaClassName = { "AreaClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSupportedAreaData, AreaClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaID_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaID = { "AreaID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSupportedAreaData, AreaID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSupportedAreaData, AreaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSupportedAreaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewProp_AreaClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSupportedAreaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
		nullptr,
		&NewStructOps,
		"SupportedAreaData",
		sizeof(FSupportedAreaData),
		alignof(FSupportedAreaData),
		Z_Construct_UScriptStruct_FSupportedAreaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportedAreaData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSupportedAreaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportedAreaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSupportedAreaData()
	{
		if (!Z_Registration_Info_UScriptStruct_SupportedAreaData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SupportedAreaData.InnerSingleton, Z_Construct_UScriptStruct_FSupportedAreaData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SupportedAreaData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERuntimeGenerationType;
	static UEnum* ERuntimeGenerationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERuntimeGenerationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERuntimeGenerationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("ERuntimeGenerationType"));
		}
		return Z_Registration_Info_UEnum_ERuntimeGenerationType.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UEnum* StaticEnum<ERuntimeGenerationType>()
	{
		return ERuntimeGenerationType_StaticEnum();
	}
	struct Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType_Statics::Enumerators[] = {
		{ "ERuntimeGenerationType::Static", (int64)ERuntimeGenerationType::Static },
		{ "ERuntimeGenerationType::DynamicModifiersOnly", (int64)ERuntimeGenerationType::DynamicModifiersOnly },
		{ "ERuntimeGenerationType::Dynamic", (int64)ERuntimeGenerationType::Dynamic },
		{ "ERuntimeGenerationType::LegacyGeneration", (int64)ERuntimeGenerationType::LegacyGeneration },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** \n *  Supported options for runtime navigation data generation\n */" },
		{ "Dynamic.Comment", "// Fully dynamic, supports geometry changes along with navigation modifiers\n" },
		{ "Dynamic.Name", "ERuntimeGenerationType::Dynamic" },
		{ "Dynamic.ToolTip", "Fully dynamic, supports geometry changes along with navigation modifiers" },
		{ "DynamicModifiersOnly.Comment", "// Supports only navigation modifiers updates\n" },
		{ "DynamicModifiersOnly.Name", "ERuntimeGenerationType::DynamicModifiersOnly" },
		{ "DynamicModifiersOnly.ToolTip", "Supports only navigation modifiers updates" },
		{ "LegacyGeneration.Comment", "// Only for legacy loading don't use it!\n" },
		{ "LegacyGeneration.Hidden", "" },
		{ "LegacyGeneration.Name", "ERuntimeGenerationType::LegacyGeneration" },
		{ "LegacyGeneration.ToolTip", "Only for legacy loading don't use it!" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "Static.Comment", "// No runtime generation, fully static navigation data\n" },
		{ "Static.Name", "ERuntimeGenerationType::Static" },
		{ "Static.ToolTip", "No runtime generation, fully static navigation data" },
		{ "ToolTip", "Supported options for runtime navigation data generation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NavigationSystem,
		nullptr,
		"ERuntimeGenerationType",
		"ERuntimeGenerationType",
		Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType()
	{
		if (!Z_Registration_Info_UEnum_ERuntimeGenerationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERuntimeGenerationType.InnerSingleton, Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERuntimeGenerationType.InnerSingleton;
	}
	void ANavigationData::StaticRegisterNativesANavigationData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavigationData);
	UClass* Z_Construct_UClass_ANavigationData_NoRegister()
	{
		return ANavigationData::StaticClass();
	}
	struct Z_Construct_UClass_ANavigationData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderingComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavDataConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NavDataConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDrawing_MetaData[];
#endif
		static void NewProp_bEnableDrawing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDrawing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceRebuildOnLoad_MetaData[];
#endif
		static void NewProp_bForceRebuildOnLoad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRebuildOnLoad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroyWhenNoNavigation_MetaData[];
#endif
		static void NewProp_bAutoDestroyWhenNoNavigation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroyWhenNoNavigation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeMainNavData_MetaData[];
#endif
		static void NewProp_bCanBeMainNavData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeMainNavData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanSpawnOnRebuild_MetaData[];
#endif
		static void NewProp_bCanSpawnOnRebuild_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanSpawnOnRebuild;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRebuildAtRuntime_MetaData[];
#endif
		static void NewProp_bRebuildAtRuntime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebuildAtRuntime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RuntimeGeneration_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeGeneration_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RuntimeGeneration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObservedPathsTickInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ObservedPathsTickInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataVersion_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DataVersion;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SupportedAreas_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedAreas_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportedAreas;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavigationData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n *\x09Represents abstract Navigation Data (sub-classed as NavMesh, NavGraph, etc)\n *\x09Used as a common interface for all navigation types handled by NavigationSystem\n */" },
		{ "IncludePath", "NavigationData.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "Represents abstract Navigation Data (sub-classed as NavMesh, NavGraph, etc)\nUsed as a common interface for all navigation types handled by NavigationSystem" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationData_Statics::NewProp_RenderingComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_RenderingComp = { "RenderingComp", nullptr, (EPropertyFlags)0x0014000000282008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationData, RenderingComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavigationData_Statics::NewProp_RenderingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::NewProp_RenderingComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationData_Statics::NewProp_NavDataConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_NavDataConfig = { "NavDataConfig", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationData, NavDataConfig), Z_Construct_UScriptStruct_FNavDataConfig, METADATA_PARAMS(Z_Construct_UClass_ANavigationData_Statics::NewProp_NavDataConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::NewProp_NavDataConfig_MetaData)) }; // 3162828895
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationData_Statics::NewProp_bEnableDrawing_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** if set to true then this navigation data will be drawing itself when requested as part of \"show navigation\" */" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "if set to true then this navigation data will be drawing itself when requested as part of \"show navigation\"" },
	};
#endif
	void Z_Construct_UClass_ANavigationData_Statics::NewProp_bEnableDrawing_SetBit(void* Obj)
	{
		((ANavigationData*)Obj)->bEnableDrawing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_bEnableDrawing = { "bEnableDrawing", nullptr, (EPropertyFlags)0x0020080000002001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANavigationData), &Z_Construct_UClass_ANavigationData_Statics::NewProp_bEnableDrawing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationData_Statics::NewProp_bEnableDrawing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::NewProp_bEnableDrawing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationData_Statics::NewProp_bForceRebuildOnLoad_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** By default navigation will skip the first update after being successfully loaded\n\x09*  setting bForceRebuildOnLoad to false can override this behavior */" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "By default navigation will skip the first update after being successfully loaded\nsetting bForceRebuildOnLoad to false can override this behavior" },
	};
#endif
	void Z_Construct_UClass_ANavigationData_Statics::NewProp_bForceRebuildOnLoad_SetBit(void* Obj)
	{
		((ANavigationData*)Obj)->bForceRebuildOnLoad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_bForceRebuildOnLoad = { "bForceRebuildOnLoad", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANavigationData), &Z_Construct_UClass_ANavigationData_Statics::NewProp_bForceRebuildOnLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationData_Statics::NewProp_bForceRebuildOnLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::NewProp_bForceRebuildOnLoad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationData_Statics::NewProp_bAutoDestroyWhenNoNavigation_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** Should this instance auto-destroy when there's no navigation system on\n\x09 *\x09world when it gets created/loaded */" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "Should this instance auto-destroy when there's no navigation system on\n    world when it gets created/loaded" },
	};
#endif
	void Z_Construct_UClass_ANavigationData_Statics::NewProp_bAutoDestroyWhenNoNavigation_SetBit(void* Obj)
	{
		((ANavigationData*)Obj)->bAutoDestroyWhenNoNavigation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_bAutoDestroyWhenNoNavigation = { "bAutoDestroyWhenNoNavigation", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANavigationData), &Z_Construct_UClass_ANavigationData_Statics::NewProp_bAutoDestroyWhenNoNavigation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationData_Statics::NewProp_bAutoDestroyWhenNoNavigation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::NewProp_bAutoDestroyWhenNoNavigation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanBeMainNavData_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** If set, navigation data can act as default one in navigation system's queries */" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "If set, navigation data can act as default one in navigation system's queries" },
	};
#endif
	void Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanBeMainNavData_SetBit(void* Obj)
	{
		((ANavigationData*)Obj)->bCanBeMainNavData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanBeMainNavData = { "bCanBeMainNavData", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANavigationData), &Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanBeMainNavData_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanBeMainNavData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanBeMainNavData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanSpawnOnRebuild_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** If set, navigation data will be spawned in persistent level during rebuild if actor doesn't exist */" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "If set, navigation data will be spawned in persistent level during rebuild if actor doesn't exist" },
	};
#endif
	void Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanSpawnOnRebuild_SetBit(void* Obj)
	{
		((ANavigationData*)Obj)->bCanSpawnOnRebuild = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanSpawnOnRebuild = { "bCanSpawnOnRebuild", nullptr, (EPropertyFlags)0x00200c0000024001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANavigationData), &Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanSpawnOnRebuild_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanSpawnOnRebuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanSpawnOnRebuild_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationData_Statics::NewProp_bRebuildAtRuntime_MetaData[] = {
		{ "Comment", "/** If true, the NavMesh can be dynamically rebuilt at runtime. */" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "If true, the NavMesh can be dynamically rebuilt at runtime." },
	};
#endif
	void Z_Construct_UClass_ANavigationData_Statics::NewProp_bRebuildAtRuntime_SetBit(void* Obj)
	{
		((ANavigationData*)Obj)->bRebuildAtRuntime_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_bRebuildAtRuntime = { "bRebuildAtRuntime", nullptr, (EPropertyFlags)0x0020080020004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANavigationData), &Z_Construct_UClass_ANavigationData_Statics::NewProp_bRebuildAtRuntime_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationData_Statics::NewProp_bRebuildAtRuntime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::NewProp_bRebuildAtRuntime_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_RuntimeGeneration_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationData_Statics::NewProp_RuntimeGeneration_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** Navigation data runtime generation options */" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "Navigation data runtime generation options" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_RuntimeGeneration = { "RuntimeGeneration", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationData, RuntimeGeneration), Z_Construct_UEnum_NavigationSystem_ERuntimeGenerationType, METADATA_PARAMS(Z_Construct_UClass_ANavigationData_Statics::NewProp_RuntimeGeneration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::NewProp_RuntimeGeneration_MetaData)) }; // 542054056
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationData_Statics::NewProp_ObservedPathsTickInterval_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** all observed paths will be processed every ObservedPathsTickInterval seconds */" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "all observed paths will be processed every ObservedPathsTickInterval seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_ObservedPathsTickInterval = { "ObservedPathsTickInterval", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationData, ObservedPathsTickInterval), METADATA_PARAMS(Z_Construct_UClass_ANavigationData_Statics::NewProp_ObservedPathsTickInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::NewProp_ObservedPathsTickInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationData_Statics::NewProp_DataVersion_MetaData[] = {
		{ "Comment", "/** Navigation data versioning. */" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "Navigation data versioning." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_DataVersion = { "DataVersion", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationData, DataVersion), METADATA_PARAMS(Z_Construct_UClass_ANavigationData_Statics::NewProp_DataVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::NewProp_DataVersion_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_SupportedAreas_Inner = { "SupportedAreas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSupportedAreaData, METADATA_PARAMS(nullptr, 0) }; // 1930304847
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationData_Statics::NewProp_SupportedAreas_MetaData[] = {
		{ "Comment", "/** serialized area class - ID mapping */" },
		{ "ModuleRelativePath", "Public/NavigationData.h" },
		{ "ToolTip", "serialized area class - ID mapping" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANavigationData_Statics::NewProp_SupportedAreas = { "SupportedAreas", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationData, SupportedAreas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANavigationData_Statics::NewProp_SupportedAreas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::NewProp_SupportedAreas_MetaData)) }; // 1930304847
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavigationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_RenderingComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_NavDataConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_bEnableDrawing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_bForceRebuildOnLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_bAutoDestroyWhenNoNavigation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanBeMainNavData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_bCanSpawnOnRebuild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_bRebuildAtRuntime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_RuntimeGeneration_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_RuntimeGeneration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_ObservedPathsTickInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_DataVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_SupportedAreas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationData_Statics::NewProp_SupportedAreas,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANavigationData_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavigationDataInterface_NoRegister, (int32)VTABLE_OFFSET(ANavigationData, INavigationDataInterface), false },  // 3020425656
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavigationData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavigationData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavigationData_Statics::ClassParams = {
		&ANavigationData::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANavigationData_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A7u,
		METADATA_PARAMS(Z_Construct_UClass_ANavigationData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavigationData()
	{
		if (!Z_Registration_Info_UClass_ANavigationData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavigationData.OuterSingleton, Z_Construct_UClass_ANavigationData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANavigationData.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<ANavigationData>()
	{
		return ANavigationData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavigationData);
	ANavigationData::~ANavigationData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_Statics::EnumInfo[] = {
		{ ERuntimeGenerationType_StaticEnum, TEXT("ERuntimeGenerationType"), &Z_Registration_Info_UEnum_ERuntimeGenerationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 542054056U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_Statics::ScriptStructInfo[] = {
		{ FSupportedAreaData::StaticStruct, Z_Construct_UScriptStruct_FSupportedAreaData_Statics::NewStructOps, TEXT("SupportedAreaData"), &Z_Registration_Info_UScriptStruct_SupportedAreaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSupportedAreaData), 1930304847U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANavigationData, ANavigationData::StaticClass, TEXT("ANavigationData"), &Z_Registration_Info_UClass_ANavigationData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavigationData), 3430520806U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_1856500012(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
