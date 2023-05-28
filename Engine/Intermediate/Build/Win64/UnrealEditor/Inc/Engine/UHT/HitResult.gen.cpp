// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "../../Source/Runtime/Engine/Classes/Engine/ActorInstanceHandle.h"
#include "../../Source/Runtime/Engine/Classes/Engine/NetSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitResult() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorInstanceHandle();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HitResult;
class UScriptStruct* FHitResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HitResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HitResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitResult, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("HitResult"));
	}
	return Z_Registration_Info_UScriptStruct_HitResult.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FHitResult>()
{
	return FHitResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHitResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FaceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceEnd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationDepth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyItem_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MyItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementIndex_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ElementIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBlockingHit_MetaData[];
#endif
		static void NewProp_bBlockingHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockingHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartPenetrating_MetaData[];
#endif
		static void NewProp_bStartPenetrating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartPenetrating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PhysMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitObjectHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitObjectHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MyBoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure containing information about one hit of a trace, such as point of impact and surface normal at that point.\n */" },
		{ "HasNativeBreak", "/Script/Engine.GameplayStatics.BreakHitResult" },
		{ "HasNativeMake", "/Script/Engine.GameplayStatics.MakeHitResult" },
		{ "ModuleRelativePath", "Classes/Engine/HitResult.h" },
		{ "ToolTip", "Structure containing information about one hit of a trace, such as point of impact and surface normal at that point." },
	};
#endif
	void* Z_Construct_UScriptStruct_FHitResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_FaceIndex_MetaData[] = {
		{ "Comment", "/** Face index we hit (for complex hits with triangle meshes). */" },
		{ "ModuleRelativePath", "Classes/Engine/HitResult.h" },
		{ "ToolTip", "Face index we hit (for complex hits with triangle meshes)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_FaceIndex = { "FaceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitResult, FaceIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_FaceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_FaceIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Time_MetaData[] = {
		{ "Comment", "/**\n\x09 * 'Time' of impact along trace direction (ranging from 0.0 to 1.0) if there is a hit, indicating time between TraceStart and TraceEnd.\n\x09 * For swept movement (but not queries) this may be pulled back slightly from the actual time of impact, to prevent precision problems with adjacent geometry.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/HitResult.h" },
		{ "ToolTip", "'Time' of impact along trace direction (ranging from 0.0 to 1.0) if there is a hit, indicating time between TraceStart and TraceEnd.\nFor swept movement (but not queries) this may be pulled back slightly from the actual time of impact, to prevent precision problems with adjacent geometry." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitResult, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Distance_MetaData[] = {
		{ "Comment", "/** The distance from the TraceStart to the Location in world space. This value is 0 if there was an initial overlap (trace started inside another colliding object). */" },
		{ "ModuleRelativePath", "Classes/Engine/HitResult.h" },
		{ "ToolTip", "The distance from the TraceStart to the Location in world space. This value is 0 if there was an initial overlap (trace started inside another colliding object)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitResult, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Location_MetaData[] = {
		{ "Comment", "/**\n\x09 * The location in world space where the moving shape would end up against the impacted object, if there is a hit. Equal to the point of impact for line tests.\n\x09 * Example: for a sphere trace test, this is the point where the center of the sphere would be located when it touched the other object.\n\x09 * For swept movement (but not queries) this may not equal the final location of the shape since hits are pulled back slightly to prevent precision issues from overlapping another surface.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/HitResult.h" },
		{ "ToolTip", "The location in world space where the moving shape would end up against the impacted object, if there is a hit. Equal to the point of impact for line tests.\nExample: for a sphere trace test, this is the point where the center of the sphere would be located when it touched the other object.\nFor swept movement (but not queries) this may not equal the final location of the shape since hits are pulled back slightly to prevent precision issues from overlapping another surface." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitResult, Location), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Location_MetaData)) }; // 1613593159
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_ImpactPoint_MetaData[] = {
		{ "Comment", "/**\n\x09 * Location in world space of the actual contact of the trace shape (box, sphere, ray, etc) with the impacted object.\n\x09 * Example: for a sphere trace test, this is the point where the surface of the sphere touches the other object.\n\x09 * @note: In the case of initial overlap (bStartPenetrating=true), ImpactPoint will be the same as Location because there is no meaningful single impact point to report.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/HitResult.h" },
		{ "ToolTip", "Location in world space of the actual contact of the trace shape (box, sphere, ray, etc) with the impacted object.\nExample: for a sphere trace test, this is the point where the surface of the sphere touches the other object.\n@note: In the case of initial overlap (bStartPenetrating=true), ImpactPoint will be the same as Location because there is no meaningful single impact point to report." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_ImpactPoint = { "ImpactPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitResult, ImpactPoint), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_ImpactPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_ImpactPoint_MetaData)) }; // 1613593159
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Normal_MetaData[] = {
		{ "Comment", "/**\n\x09 * Normal of the hit in world space, for the object that was swept. Equal to ImpactNormal for line tests.\n\x09 * This is computed for capsules and spheres, otherwise it will be the same as ImpactNormal.\n\x09 * Example: for a sphere trace test, this is a normalized vector pointing in towards the center of the sphere at the point of impact.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/HitResult.h" },
		{ "ToolTip", "Normal of the hit in world space, for the object that was swept. Equal to ImpactNormal for line tests.\nThis is computed for capsules and spheres, otherwise it will be the same as ImpactNormal.\nExample: for a sphere trace test, this is a normalized vector pointing in towards the center of the sphere at the point of impact." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitResult, Normal), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Normal_MetaData)) }; // 903499713
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_ImpactNormal_MetaData[] = {
		{ "Comment", "/**\n\x09 * Normal of the hit in world space, for the object that was hit by the sweep, if any.\n\x09 * For example if a sphere hits a flat plane, this is a normalized vector pointing out from the plane.\n\x09 * In the case of impact with a corner or edge of a surface, usually the \"most opposing\" normal (opposed to the query direction) is chosen.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/HitResult.h" },
		{ "ToolTip", "Normal of the hit in world space, for the object that was hit by the sweep, if any.\nFor example if a sphere hits a flat plane, this is a normalized vector pointing out from the plane.\nIn the case of impact with a corner or edge of a surface, usually the \"most opposing\" normal (opposed to the query direction) is chosen." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_ImpactNormal = { "ImpactNormal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitResult, ImpactNormal), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_ImpactNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_ImpactNormal_MetaData)) }; // 903499713
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_TraceStart_MetaData[] = {
		{ "Comment", "/**\n\x09 * Start location of the trace.\n\x09 * For example if a sphere is swept against the world, this is the starting location of the center of the sphere.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/HitResult.h" },
		{ "ToolTip", "Start location of the trace.\nFor example if a sphere is swept against the world, this is the starting location of the center of the sphere." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitResult, TraceStart), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_TraceStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_TraceStart_MetaData)) }; // 1613593159
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_TraceEnd_MetaData[] = {
		{ "Comment", "/**\n\x09 * End location of the trace; this is NOT where the impact occurred (if any), but the furthest point in the attempted sweep.\n\x09 * For example if a sphere is swept against the world, this would be the center of the sphere if there was no blocking hit.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/HitResult.h" },
		{ "ToolTip", "End location of the trace; this is NOT where the impact occurred (if any), but the furthest point in the attempted sweep.\nFor example if a sphere is swept against the world, this would be the center of the sphere if there was no blocking hit." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitResult, TraceEnd), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_TraceEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_TraceEnd_MetaData)) }; // 1613593159
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_PenetrationDepth_MetaData[] = {
		{ "Comment", "/**\n\x09  * If this test started in penetration (bStartPenetrating is true) and a depenetration vector can be computed,\n\x09  * this value is the distance along Normal that will result in moving out of penetration.\n\x09  * If the distance cannot be computed, this distance will be zero.\n\x09  */" },
		{ "ModuleRelativePath", "Classes/Engine/HitResult.h" },
		{ "ToolTip", "If this test started in penetration (bStartPenetrating is true) and a depenetration vector can be computed,\nthis value is the distance along Normal that will result in moving out of penetration.\nIf the distance cannot be computed, this distance will be zero." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_PenetrationDepth = { "PenetrationDepth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitResult, PenetrationDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_PenetrationDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_PenetrationDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_MyItem_MetaData[] = {
		{ "Comment", "/** If the hit result is from a collision this will have extra info about the item that hit the second item. */" },
		{ "ModuleRelativePath", "Classes/Engine/HitResult.h" },
		{ "ToolTip", "If the hit result is from a collision this will have extra info about the item that hit the second item." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_MyItem = { "MyItem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitResult, MyItem), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_MyItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_MyItem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Item_MetaData[] = {
		{ "Comment", "/** Extra data about item that was hit (hit primitive specific). */" },
		{ "ModuleRelativePath", "Classes/Engine/HitResult.h" },
		{ "ToolTip", "Extra data about item that was hit (hit primitive specific)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitResult, Item), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Item_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_ElementIndex_MetaData[] = {
		{ "Comment", "/** Index to item that was hit, also hit primitive specific. */" },
		{ "ModuleRelativePath", "Classes/Engine/HitResult.h" },
		{ "ToolTip", "Index to item that was hit, also hit primitive specific." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_ElementIndex = { "ElementIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitResult, ElementIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_ElementIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_ElementIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_bBlockingHit_MetaData[] = {
		{ "Comment", "/** Indicates if this hit was a result of blocking collision. If false, there was no hit or it was an overlap/touch instead. */" },
		{ "ModuleRelativePath", "Classes/Engine/HitResult.h" },
		{ "ToolTip", "Indicates if this hit was a result of blocking collision. If false, there was no hit or it was an overlap/touch instead." },
	};
#endif
	void Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_bBlockingHit_SetBit(void* Obj)
	{
		((FHitResult*)Obj)->bBlockingHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_bBlockingHit = { "bBlockingHit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FHitResult), &Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_bBlockingHit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_bBlockingHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_bBlockingHit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_bStartPenetrating_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether the trace started in penetration, i.e. with an initial blocking overlap.\n\x09 * In the case of penetration, if PenetrationDepth > 0.f, then it will represent the distance along the Normal vector that will result in\n\x09 * minimal contact between the swept shape and the object that was hit. In this case, ImpactNormal will be the normal opposed to movement at that location\n\x09 * (ie, Normal may not equal ImpactNormal). ImpactPoint will be the same as Location, since there is no single impact point to report.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/HitResult.h" },
		{ "ToolTip", "Whether the trace started in penetration, i.e. with an initial blocking overlap.\nIn the case of penetration, if PenetrationDepth > 0.f, then it will represent the distance along the Normal vector that will result in\nminimal contact between the swept shape and the object that was hit. In this case, ImpactNormal will be the normal opposed to movement at that location\n(ie, Normal may not equal ImpactNormal). ImpactPoint will be the same as Location, since there is no single impact point to report." },
	};
#endif
	void Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_bStartPenetrating_SetBit(void* Obj)
	{
		((FHitResult*)Obj)->bStartPenetrating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_bStartPenetrating = { "bStartPenetrating", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FHitResult), &Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_bStartPenetrating_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_bStartPenetrating_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_bStartPenetrating_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_PhysMaterial_MetaData[] = {
		{ "Comment", "/**\n\x09 * Physical material that was hit.\n\x09 * @note Must set bReturnPhysicalMaterial on the swept PrimitiveComponent or in the query params for this to be returned.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/HitResult.h" },
		{ "ToolTip", "Physical material that was hit.\n@note Must set bReturnPhysicalMaterial on the swept PrimitiveComponent or in the query params for this to be returned." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitResult, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_PhysMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_PhysMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_HitObjectHandle_MetaData[] = {
		{ "Comment", "/** Handle to the object hit by the trace. */" },
		{ "ModuleRelativePath", "Classes/Engine/HitResult.h" },
		{ "ToolTip", "Handle to the object hit by the trace." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_HitObjectHandle = { "HitObjectHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitResult, HitObjectHandle), Z_Construct_UScriptStruct_FActorInstanceHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_HitObjectHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_HitObjectHandle_MetaData)) }; // 3551898001
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Component_MetaData[] = {
		{ "Comment", "/** PrimitiveComponent hit by the trace. */" },
		{ "ModuleRelativePath", "Classes/Engine/HitResult.h" },
		{ "ToolTip", "PrimitiveComponent hit by the trace." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitResult, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_BoneName_MetaData[] = {
		{ "Comment", "/** Name of bone we hit (for skeletal meshes). */" },
		{ "ModuleRelativePath", "Classes/Engine/HitResult.h" },
		{ "ToolTip", "Name of bone we hit (for skeletal meshes)." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitResult, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_MyBoneName_MetaData[] = {
		{ "Comment", "/** Name of the _my_ bone which took part in hit event (in case of two skeletal meshes colliding). */" },
		{ "ModuleRelativePath", "Classes/Engine/HitResult.h" },
		{ "ToolTip", "Name of the _my_ bone which took part in hit event (in case of two skeletal meshes colliding)." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_MyBoneName = { "MyBoneName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitResult, MyBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_MyBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_MyBoneName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHitResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_FaceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_ImpactPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_ImpactNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_TraceStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_TraceEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_PenetrationDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_MyItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_ElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_bBlockingHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_bStartPenetrating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_PhysMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_HitObjectHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitResult_Statics::NewProp_MyBoneName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHitResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"HitResult",
		sizeof(FHitResult),
		alignof(FHitResult),
		Z_Construct_UScriptStruct_FHitResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHitResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHitResult()
	{
		if (!Z_Registration_Info_UScriptStruct_HitResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HitResult.InnerSingleton, Z_Construct_UScriptStruct_FHitResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HitResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_HitResult_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_HitResult_h_Statics::ScriptStructInfo[] = {
		{ FHitResult::StaticStruct, Z_Construct_UScriptStruct_FHitResult_Statics::NewStructOps, TEXT("HitResult"), &Z_Registration_Info_UScriptStruct_HitResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHitResult), 1287526515U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_HitResult_h_3671796363(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_HitResult_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_HitResult_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
