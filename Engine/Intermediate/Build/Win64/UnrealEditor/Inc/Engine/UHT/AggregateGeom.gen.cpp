// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/LevelSetElem.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAggregateGeom() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKAggregateGeom();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKBoxElem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKConvexElem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKLevelSetElem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKSphereElem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKSphylElem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKTaperedCapsuleElem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KAggregateGeom;
class UScriptStruct* FKAggregateGeom::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KAggregateGeom.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KAggregateGeom.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKAggregateGeom, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("KAggregateGeom"));
	}
	return Z_Registration_Info_UScriptStruct_KAggregateGeom.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKAggregateGeom>()
{
	return FKAggregateGeom::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKAggregateGeom_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SphereElems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereElems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SphereElems;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxElems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxElems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoxElems;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SphylElems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphylElems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SphylElems;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConvexElems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvexElems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConvexElems;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaperedCapsuleElems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaperedCapsuleElems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TaperedCapsuleElems;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelSetElems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSetElems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelSetElems;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKAggregateGeom_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Container for an aggregate of collision shapes */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/AggregateGeom.h" },
		{ "ToolTip", "Container for an aggregate of collision shapes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKAggregateGeom>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphereElems_Inner = { "SphereElems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKSphereElem, METADATA_PARAMS(nullptr, 0) }; // 3923825620
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphereElems_MetaData[] = {
		{ "Category", "Aggregate Geometry" },
		{ "DisplayName", "Spheres" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/AggregateGeom.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphereElems = { "SphereElems", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKAggregateGeom, SphereElems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphereElems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphereElems_MetaData)) }; // 3923825620
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_BoxElems_Inner = { "BoxElems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKBoxElem, METADATA_PARAMS(nullptr, 0) }; // 1119484080
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_BoxElems_MetaData[] = {
		{ "Category", "Aggregate Geometry" },
		{ "DisplayName", "Boxes" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/AggregateGeom.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_BoxElems = { "BoxElems", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKAggregateGeom, BoxElems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_BoxElems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_BoxElems_MetaData)) }; // 1119484080
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphylElems_Inner = { "SphylElems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKSphylElem, METADATA_PARAMS(nullptr, 0) }; // 1890108108
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphylElems_MetaData[] = {
		{ "Category", "Aggregate Geometry" },
		{ "DisplayName", "Capsules" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/AggregateGeom.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphylElems = { "SphylElems", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKAggregateGeom, SphylElems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphylElems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphylElems_MetaData)) }; // 1890108108
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_ConvexElems_Inner = { "ConvexElems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKConvexElem, METADATA_PARAMS(nullptr, 0) }; // 1323963064
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_ConvexElems_MetaData[] = {
		{ "Category", "Aggregate Geometry" },
		{ "DisplayName", "Convex Elements" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/AggregateGeom.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_ConvexElems = { "ConvexElems", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKAggregateGeom, ConvexElems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_ConvexElems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_ConvexElems_MetaData)) }; // 1323963064
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_TaperedCapsuleElems_Inner = { "TaperedCapsuleElems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKTaperedCapsuleElem, METADATA_PARAMS(nullptr, 0) }; // 3409116416
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_TaperedCapsuleElems_MetaData[] = {
		{ "Category", "Aggregate Geometry" },
		{ "DisplayName", "Tapered Capsules" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/AggregateGeom.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_TaperedCapsuleElems = { "TaperedCapsuleElems", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKAggregateGeom, TaperedCapsuleElems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_TaperedCapsuleElems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_TaperedCapsuleElems_MetaData)) }; // 3409116416
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_LevelSetElems_Inner = { "LevelSetElems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKLevelSetElem, METADATA_PARAMS(nullptr, 0) }; // 2827527819
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_LevelSetElems_MetaData[] = {
		{ "Category", "Aggregate Geometry" },
		{ "DisplayName", "Level Sets" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/AggregateGeom.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_LevelSetElems = { "LevelSetElems", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKAggregateGeom, LevelSetElems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_LevelSetElems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_LevelSetElems_MetaData)) }; // 2827527819
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKAggregateGeom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphereElems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphereElems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_BoxElems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_BoxElems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphylElems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_SphylElems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_ConvexElems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_ConvexElems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_TaperedCapsuleElems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_TaperedCapsuleElems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_LevelSetElems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewProp_LevelSetElems,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKAggregateGeom_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"KAggregateGeom",
		sizeof(FKAggregateGeom),
		alignof(FKAggregateGeom),
		Z_Construct_UScriptStruct_FKAggregateGeom_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKAggregateGeom_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKAggregateGeom()
	{
		if (!Z_Registration_Info_UScriptStruct_KAggregateGeom.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KAggregateGeom.InnerSingleton, Z_Construct_UScriptStruct_FKAggregateGeom_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KAggregateGeom.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_AggregateGeom_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_AggregateGeom_h_Statics::ScriptStructInfo[] = {
		{ FKAggregateGeom::StaticStruct, Z_Construct_UScriptStruct_FKAggregateGeom_Statics::NewStructOps, TEXT("KAggregateGeom"), &Z_Registration_Info_UScriptStruct_KAggregateGeom, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKAggregateGeom), 1732694976U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_AggregateGeom_h_3943796721(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_AggregateGeom_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_AggregateGeom_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
