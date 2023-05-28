// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/ZoneGraphAnnotations/Source/ZoneGraphAnnotations/Public/Annotations/ZoneGraphDisturbanceAnnotation.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoneGraphDisturbanceAnnotation() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ZoneGraphAnnotations();
	ZONEGRAPH_API UClass* Z_Construct_UClass_UZoneGraphSubsystem_NoRegister();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTag();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagFilter();
	ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_UZoneGraphAnnotationComponent();
	ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_UZoneGraphAnnotationTest();
	ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_UZoneGraphDisturbanceAnnotation();
	ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_NoRegister();
	ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest();
	ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_NoRegister();
	ZONEGRAPHANNOTATIONS_API UEnum* Z_Construct_UEnum_ZoneGraphAnnotations_EZoneGraphObstacleDisturbanceAreaAction();
	ZONEGRAPHANNOTATIONS_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphAnnotationEventBase();
	ZONEGRAPHANNOTATIONS_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea();
	ZONEGRAPHANNOTATIONS_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea();
// End Cross Module References

static_assert(std::is_polymorphic<FZoneGraphDisturbanceArea>() == std::is_polymorphic<FZoneGraphAnnotationEventBase>(), "USTRUCT FZoneGraphDisturbanceArea cannot be polymorphic unless super FZoneGraphAnnotationEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphDisturbanceArea;
class UScriptStruct* FZoneGraphDisturbanceArea::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphDisturbanceArea.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphDisturbanceArea.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea, (UObject*)Z_Construct_UPackage__Script_ZoneGraphAnnotations(), TEXT("ZoneGraphDisturbanceArea"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphDisturbanceArea.OuterSingleton;
}
template<> ZONEGRAPHANNOTATIONS_API UScriptStruct* StaticStruct<FZoneGraphDisturbanceArea>()
{
	return FZoneGraphDisturbanceArea::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstigatorID_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_InstigatorID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Event for indicating an area of disturbance. */" },
		{ "ModuleRelativePath", "Public/Annotations/ZoneGraphDisturbanceAnnotation.h" },
		{ "ToolTip", "Event for indicating an area of disturbance." },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphDisturbanceArea>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::NewProp_Position_MetaData[] = {
		{ "Comment", "/** Center of the area. */" },
		{ "ModuleRelativePath", "Public/Annotations/ZoneGraphDisturbanceAnnotation.h" },
		{ "ToolTip", "Center of the area." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphDisturbanceArea, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::NewProp_Radius_MetaData[] = {
		{ "Comment", "/** Radius of the effect. */" },
		{ "ModuleRelativePath", "Public/Annotations/ZoneGraphDisturbanceAnnotation.h" },
		{ "ToolTip", "Radius of the effect." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphDisturbanceArea, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::NewProp_Duration_MetaData[] = {
		{ "Comment", "/** Duration of the danger. */" },
		{ "ModuleRelativePath", "Public/Annotations/ZoneGraphDisturbanceAnnotation.h" },
		{ "ToolTip", "Duration of the danger." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphDisturbanceArea, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::NewProp_InstigatorID_MetaData[] = {
		{ "Comment", "/** ID of the instigator of this event, events from the same instigator are combined. */" },
		{ "ModuleRelativePath", "Public/Annotations/ZoneGraphDisturbanceAnnotation.h" },
		{ "ToolTip", "ID of the instigator of this event, events from the same instigator are combined." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::NewProp_InstigatorID = { "InstigatorID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphDisturbanceArea, InstigatorID), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::NewProp_InstigatorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::NewProp_InstigatorID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::NewProp_InstigatorID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraphAnnotations,
		Z_Construct_UScriptStruct_FZoneGraphAnnotationEventBase,
		&NewStructOps,
		"ZoneGraphDisturbanceArea",
		sizeof(FZoneGraphDisturbanceArea),
		alignof(FZoneGraphDisturbanceArea),
		Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphDisturbanceArea.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphDisturbanceArea.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphDisturbanceArea.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EZoneGraphObstacleDisturbanceAreaAction;
	static UEnum* EZoneGraphObstacleDisturbanceAreaAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EZoneGraphObstacleDisturbanceAreaAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EZoneGraphObstacleDisturbanceAreaAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ZoneGraphAnnotations_EZoneGraphObstacleDisturbanceAreaAction, (UObject*)Z_Construct_UPackage__Script_ZoneGraphAnnotations(), TEXT("EZoneGraphObstacleDisturbanceAreaAction"));
		}
		return Z_Registration_Info_UEnum_EZoneGraphObstacleDisturbanceAreaAction.OuterSingleton;
	}
	template<> ZONEGRAPHANNOTATIONS_API UEnum* StaticEnum<EZoneGraphObstacleDisturbanceAreaAction>()
	{
		return EZoneGraphObstacleDisturbanceAreaAction_StaticEnum();
	}
	struct Z_Construct_UEnum_ZoneGraphAnnotations_EZoneGraphObstacleDisturbanceAreaAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ZoneGraphAnnotations_EZoneGraphObstacleDisturbanceAreaAction_Statics::Enumerators[] = {
		{ "EZoneGraphObstacleDisturbanceAreaAction::Add", (int64)EZoneGraphObstacleDisturbanceAreaAction::Add },
		{ "EZoneGraphObstacleDisturbanceAreaAction::Remove", (int64)EZoneGraphObstacleDisturbanceAreaAction::Remove },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ZoneGraphAnnotations_EZoneGraphObstacleDisturbanceAreaAction_Statics::Enum_MetaDataParams[] = {
		{ "Add.Name", "EZoneGraphObstacleDisturbanceAreaAction::Add" },
		{ "Comment", "/** Actions for disturbances. */" },
		{ "ModuleRelativePath", "Public/Annotations/ZoneGraphDisturbanceAnnotation.h" },
		{ "Remove.Comment", "// Add\n" },
		{ "Remove.Name", "EZoneGraphObstacleDisturbanceAreaAction::Remove" },
		{ "Remove.ToolTip", "Add" },
		{ "ToolTip", "Actions for disturbances." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ZoneGraphAnnotations_EZoneGraphObstacleDisturbanceAreaAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ZoneGraphAnnotations,
		nullptr,
		"EZoneGraphObstacleDisturbanceAreaAction",
		"EZoneGraphObstacleDisturbanceAreaAction",
		Z_Construct_UEnum_ZoneGraphAnnotations_EZoneGraphObstacleDisturbanceAreaAction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ZoneGraphAnnotations_EZoneGraphObstacleDisturbanceAreaAction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ZoneGraphAnnotations_EZoneGraphObstacleDisturbanceAreaAction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ZoneGraphAnnotations_EZoneGraphObstacleDisturbanceAreaAction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ZoneGraphAnnotations_EZoneGraphObstacleDisturbanceAreaAction()
	{
		if (!Z_Registration_Info_UEnum_EZoneGraphObstacleDisturbanceAreaAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EZoneGraphObstacleDisturbanceAreaAction.InnerSingleton, Z_Construct_UEnum_ZoneGraphAnnotations_EZoneGraphObstacleDisturbanceAreaAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EZoneGraphObstacleDisturbanceAreaAction.InnerSingleton;
	}

static_assert(std::is_polymorphic<FZoneGraphObstacleDisturbanceArea>() == std::is_polymorphic<FZoneGraphAnnotationEventBase>(), "USTRUCT FZoneGraphObstacleDisturbanceArea cannot be polymorphic unless super FZoneGraphAnnotationEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphObstacleDisturbanceArea;
class UScriptStruct* FZoneGraphObstacleDisturbanceArea::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphObstacleDisturbanceArea.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphObstacleDisturbanceArea.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea, (UObject*)Z_Construct_UPackage__Script_ZoneGraphAnnotations(), TEXT("ZoneGraphObstacleDisturbanceArea"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphObstacleDisturbanceArea.OuterSingleton;
}
template<> ZONEGRAPHANNOTATIONS_API UScriptStruct* StaticStruct<FZoneGraphObstacleDisturbanceArea>()
{
	return FZoneGraphObstacleDisturbanceArea::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleRadius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Action;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Event for indicating an obstacle. */" },
		{ "ModuleRelativePath", "Public/Annotations/ZoneGraphDisturbanceAnnotation.h" },
		{ "ToolTip", "Event for indicating an obstacle." },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphObstacleDisturbanceArea>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::NewProp_Position_MetaData[] = {
		{ "Comment", "/** Center of the obstacle. */" },
		{ "ModuleRelativePath", "Public/Annotations/ZoneGraphDisturbanceAnnotation.h" },
		{ "ToolTip", "Center of the obstacle." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphObstacleDisturbanceArea, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::NewProp_Radius_MetaData[] = {
		{ "Comment", "/** Radius of the effect of the disturbance. */" },
		{ "ModuleRelativePath", "Public/Annotations/ZoneGraphDisturbanceAnnotation.h" },
		{ "ToolTip", "Radius of the effect of the disturbance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphObstacleDisturbanceArea, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::NewProp_ObstacleRadius_MetaData[] = {
		{ "Comment", "/** Radius of the obstacle. */" },
		{ "ModuleRelativePath", "Public/Annotations/ZoneGraphDisturbanceAnnotation.h" },
		{ "ToolTip", "Radius of the obstacle." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::NewProp_ObstacleRadius = { "ObstacleRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphObstacleDisturbanceArea, ObstacleRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::NewProp_ObstacleRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::NewProp_ObstacleRadius_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::NewProp_Action_MetaData[] = {
		{ "Comment", "/** Disturbance event action (ex: add/remove). */" },
		{ "ModuleRelativePath", "Public/Annotations/ZoneGraphDisturbanceAnnotation.h" },
		{ "ToolTip", "Disturbance event action (ex: add/remove)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphObstacleDisturbanceArea, Action), Z_Construct_UEnum_ZoneGraphAnnotations_EZoneGraphObstacleDisturbanceAreaAction, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::NewProp_Action_MetaData)) }; // 4032159694
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::NewProp_ObstacleRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::NewProp_Action_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::NewProp_Action,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraphAnnotations,
		Z_Construct_UScriptStruct_FZoneGraphAnnotationEventBase,
		&NewStructOps,
		"ZoneGraphObstacleDisturbanceArea",
		sizeof(FZoneGraphObstacleDisturbanceArea),
		alignof(FZoneGraphObstacleDisturbanceArea),
		Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphObstacleDisturbanceArea.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphObstacleDisturbanceArea.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphObstacleDisturbanceArea.InnerSingleton;
	}
	void UZoneGraphDisturbanceAnnotation::StaticRegisterNativesUZoneGraphDisturbanceAnnotation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZoneGraphDisturbanceAnnotation);
	UClass* Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_NoRegister()
	{
		return UZoneGraphDisturbanceAnnotation::StaticClass();
	}
	struct Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DangerAnnotationTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DangerAnnotationTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleAnnotationTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObstacleAnnotationTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AffectedLaneTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AffectedLaneTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EscapeLaneTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EscapeLaneTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdealSpanLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IdealSpanLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ZoneGraphSubsystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UZoneGraphAnnotationComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraphAnnotations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AI" },
		{ "Comment", "/**\n * ZoneGraph Disturbance Annotation\n */" },
		{ "HideCategories", "Activation AssetUserData Collision Cooking HLOD Lighting LOD Mobile Navigation Physics RayTracing Rendering Tags TextureStreaming Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Annotations/ZoneGraphDisturbanceAnnotation.h" },
		{ "ModuleRelativePath", "Public/Annotations/ZoneGraphDisturbanceAnnotation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ZoneGraph Disturbance Annotation" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_DangerAnnotationTag_MetaData[] = {
		{ "Category", "Annotation" },
		{ "Comment", "/** Tag to mark the lanes that should be fled. */" },
		{ "ModuleRelativePath", "Public/Annotations/ZoneGraphDisturbanceAnnotation.h" },
		{ "ToolTip", "Tag to mark the lanes that should be fled." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_DangerAnnotationTag = { "DangerAnnotationTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphDisturbanceAnnotation, DangerAnnotationTag), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_DangerAnnotationTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_DangerAnnotationTag_MetaData)) }; // 1504622355
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_ObstacleAnnotationTag_MetaData[] = {
		{ "Category", "Annotation" },
		{ "Comment", "/** Tag to mark the lanes influenced by an obstacle. */" },
		{ "ModuleRelativePath", "Public/Annotations/ZoneGraphDisturbanceAnnotation.h" },
		{ "ToolTip", "Tag to mark the lanes influenced by an obstacle." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_ObstacleAnnotationTag = { "ObstacleAnnotationTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphDisturbanceAnnotation, ObstacleAnnotationTag), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_ObstacleAnnotationTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_ObstacleAnnotationTag_MetaData)) }; // 1504622355
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_AffectedLaneTags_MetaData[] = {
		{ "Category", "Annotation" },
		{ "Comment", "/** Filter specifying which lanes the Annotation is applied to. */" },
		{ "ModuleRelativePath", "Public/Annotations/ZoneGraphDisturbanceAnnotation.h" },
		{ "ToolTip", "Filter specifying which lanes the Annotation is applied to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_AffectedLaneTags = { "AffectedLaneTags", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphDisturbanceAnnotation, AffectedLaneTags), Z_Construct_UScriptStruct_FZoneGraphTagFilter, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_AffectedLaneTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_AffectedLaneTags_MetaData)) }; // 58618928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_EscapeLaneTags_MetaData[] = {
		{ "Category", "Annotation" },
		{ "Comment", "/** Filter specifying which lanes can be used during Disturbance. */" },
		{ "ModuleRelativePath", "Public/Annotations/ZoneGraphDisturbanceAnnotation.h" },
		{ "ToolTip", "Filter specifying which lanes can be used during Disturbance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_EscapeLaneTags = { "EscapeLaneTags", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphDisturbanceAnnotation, EscapeLaneTags), Z_Construct_UScriptStruct_FZoneGraphTagFilter, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_EscapeLaneTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_EscapeLaneTags_MetaData)) }; // 58618928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_IdealSpanLength_MetaData[] = {
		{ "Category", "Annotation" },
		{ "Comment", "/** Ideal span length for lane subdivision. Each lane will have between 2 and 8 spans. */" },
		{ "ModuleRelativePath", "Public/Annotations/ZoneGraphDisturbanceAnnotation.h" },
		{ "ToolTip", "Ideal span length for lane subdivision. Each lane will have between 2 and 8 spans." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_IdealSpanLength = { "IdealSpanLength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphDisturbanceAnnotation, IdealSpanLength), METADATA_PARAMS(Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_IdealSpanLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_IdealSpanLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_ZoneGraphSubsystem_MetaData[] = {
		{ "Comment", "/** Cached ZoneGraphSubsystem */" },
		{ "ModuleRelativePath", "Public/Annotations/ZoneGraphDisturbanceAnnotation.h" },
		{ "ToolTip", "Cached ZoneGraphSubsystem" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_ZoneGraphSubsystem = { "ZoneGraphSubsystem", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphDisturbanceAnnotation, ZoneGraphSubsystem), Z_Construct_UClass_UZoneGraphSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_ZoneGraphSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_ZoneGraphSubsystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_DangerAnnotationTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_ObstacleAnnotationTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_AffectedLaneTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_EscapeLaneTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_IdealSpanLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::NewProp_ZoneGraphSubsystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZoneGraphDisturbanceAnnotation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::ClassParams = {
		&UZoneGraphDisturbanceAnnotation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZoneGraphDisturbanceAnnotation()
	{
		if (!Z_Registration_Info_UClass_UZoneGraphDisturbanceAnnotation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZoneGraphDisturbanceAnnotation.OuterSingleton, Z_Construct_UClass_UZoneGraphDisturbanceAnnotation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZoneGraphDisturbanceAnnotation.OuterSingleton;
	}
	template<> ZONEGRAPHANNOTATIONS_API UClass* StaticClass<UZoneGraphDisturbanceAnnotation>()
	{
		return UZoneGraphDisturbanceAnnotation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZoneGraphDisturbanceAnnotation);
	UZoneGraphDisturbanceAnnotation::~UZoneGraphDisturbanceAnnotation() {}
	void UZoneGraphDisturbanceAnnotationTest::StaticRegisterNativesUZoneGraphDisturbanceAnnotationTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZoneGraphDisturbanceAnnotationTest);
	UClass* Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_NoRegister()
	{
		return UZoneGraphDisturbanceAnnotationTest::StaticClass();
	}
	struct Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DangerRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DangerRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UZoneGraphAnnotationTest,
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraphAnnotations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Test for Disturbance Annotation\n */" },
		{ "IncludePath", "Annotations/ZoneGraphDisturbanceAnnotation.h" },
		{ "ModuleRelativePath", "Public/Annotations/ZoneGraphDisturbanceAnnotation.h" },
		{ "ToolTip", "Test for Disturbance Annotation" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/Annotations/ZoneGraphDisturbanceAnnotation.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphDisturbanceAnnotationTest, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/Annotations/ZoneGraphDisturbanceAnnotation.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphDisturbanceAnnotationTest, Duration), METADATA_PARAMS(Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_Statics::NewProp_DangerRadius_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/Annotations/ZoneGraphDisturbanceAnnotation.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_Statics::NewProp_DangerRadius = { "DangerRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphDisturbanceAnnotationTest, DangerRadius), METADATA_PARAMS(Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_Statics::NewProp_DangerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_Statics::NewProp_DangerRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_Statics::NewProp_DangerRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZoneGraphDisturbanceAnnotationTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_Statics::ClassParams = {
		&UZoneGraphDisturbanceAnnotationTest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest()
	{
		if (!Z_Registration_Info_UClass_UZoneGraphDisturbanceAnnotationTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZoneGraphDisturbanceAnnotationTest.OuterSingleton, Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZoneGraphDisturbanceAnnotationTest.OuterSingleton;
	}
	template<> ZONEGRAPHANNOTATIONS_API UClass* StaticClass<UZoneGraphDisturbanceAnnotationTest>()
	{
		return UZoneGraphDisturbanceAnnotationTest::StaticClass();
	}
	UZoneGraphDisturbanceAnnotationTest::UZoneGraphDisturbanceAnnotationTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZoneGraphDisturbanceAnnotationTest);
	UZoneGraphDisturbanceAnnotationTest::~UZoneGraphDisturbanceAnnotationTest() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_Annotations_ZoneGraphDisturbanceAnnotation_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_Annotations_ZoneGraphDisturbanceAnnotation_h_Statics::EnumInfo[] = {
		{ EZoneGraphObstacleDisturbanceAreaAction_StaticEnum, TEXT("EZoneGraphObstacleDisturbanceAreaAction"), &Z_Registration_Info_UEnum_EZoneGraphObstacleDisturbanceAreaAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4032159694U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_Annotations_ZoneGraphDisturbanceAnnotation_h_Statics::ScriptStructInfo[] = {
		{ FZoneGraphDisturbanceArea::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphDisturbanceArea_Statics::NewStructOps, TEXT("ZoneGraphDisturbanceArea"), &Z_Registration_Info_UScriptStruct_ZoneGraphDisturbanceArea, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphDisturbanceArea), 1284639318U) },
		{ FZoneGraphObstacleDisturbanceArea::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphObstacleDisturbanceArea_Statics::NewStructOps, TEXT("ZoneGraphObstacleDisturbanceArea"), &Z_Registration_Info_UScriptStruct_ZoneGraphObstacleDisturbanceArea, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphObstacleDisturbanceArea), 258495955U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_Annotations_ZoneGraphDisturbanceAnnotation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZoneGraphDisturbanceAnnotation, UZoneGraphDisturbanceAnnotation::StaticClass, TEXT("UZoneGraphDisturbanceAnnotation"), &Z_Registration_Info_UClass_UZoneGraphDisturbanceAnnotation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZoneGraphDisturbanceAnnotation), 3094474619U) },
		{ Z_Construct_UClass_UZoneGraphDisturbanceAnnotationTest, UZoneGraphDisturbanceAnnotationTest::StaticClass, TEXT("UZoneGraphDisturbanceAnnotationTest"), &Z_Registration_Info_UClass_UZoneGraphDisturbanceAnnotationTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZoneGraphDisturbanceAnnotationTest), 59060241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_Annotations_ZoneGraphDisturbanceAnnotation_h_2572597873(TEXT("/Script/ZoneGraphAnnotations"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_Annotations_ZoneGraphDisturbanceAnnotation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_Annotations_ZoneGraphDisturbanceAnnotation_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_Annotations_ZoneGraphDisturbanceAnnotation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_Annotations_ZoneGraphDisturbanceAnnotation_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_Annotations_ZoneGraphDisturbanceAnnotation_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_Annotations_ZoneGraphDisturbanceAnnotation_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
