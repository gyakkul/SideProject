// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/CharacterMovementComponentAsync.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterMovementComponentAsync() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFindFloorResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FindFloorResult;
class UScriptStruct* FFindFloorResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FindFloorResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FindFloorResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFindFloorResult, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("FindFloorResult"));
	}
	return Z_Registration_Info_UScriptStruct_FindFloorResult.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFindFloorResult>()
{
	return FFindFloorResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFindFloorResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBlockingHit_MetaData[];
#endif
		static void NewProp_bBlockingHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockingHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWalkableFloor_MetaData[];
#endif
		static void NewProp_bWalkableFloor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWalkableFloor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLineTrace_MetaData[];
#endif
		static void NewProp_bLineTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLineTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorDist_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorDist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineDist_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LineDist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFindFloorResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Data about the floor for walking movement, used by CharacterMovementComponent. */" },
		{ "ModuleRelativePath", "Public/CharacterMovementComponentAsync.h" },
		{ "ToolTip", "Data about the floor for walking movement, used by CharacterMovementComponent." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFindFloorResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bBlockingHit_MetaData[] = {
		{ "Category", "CharacterFloor" },
		{ "Comment", "/**\n\x09\x09* True if there was a blocking hit in the floor test that was NOT in initial penetration.\n\x09\x09* The HitResult can give more info about other circumstances.\n\x09\x09*/" },
		{ "ModuleRelativePath", "Public/CharacterMovementComponentAsync.h" },
		{ "ToolTip", "True if there was a blocking hit in the floor test that was NOT in initial penetration.\nThe HitResult can give more info about other circumstances." },
	};
#endif
	void Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bBlockingHit_SetBit(void* Obj)
	{
		((FFindFloorResult*)Obj)->bBlockingHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bBlockingHit = { "bBlockingHit", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FFindFloorResult), &Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bBlockingHit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bBlockingHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bBlockingHit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bWalkableFloor_MetaData[] = {
		{ "Category", "CharacterFloor" },
		{ "Comment", "/** True if the hit found a valid walkable floor. */" },
		{ "ModuleRelativePath", "Public/CharacterMovementComponentAsync.h" },
		{ "ToolTip", "True if the hit found a valid walkable floor." },
	};
#endif
	void Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bWalkableFloor_SetBit(void* Obj)
	{
		((FFindFloorResult*)Obj)->bWalkableFloor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bWalkableFloor = { "bWalkableFloor", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FFindFloorResult), &Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bWalkableFloor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bWalkableFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bWalkableFloor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bLineTrace_MetaData[] = {
		{ "Category", "CharacterFloor" },
		{ "Comment", "/** True if the hit found a valid walkable floor using a line trace (rather than a sweep test, which happens when the sweep test fails to yield a walkable surface). */" },
		{ "ModuleRelativePath", "Public/CharacterMovementComponentAsync.h" },
		{ "ToolTip", "True if the hit found a valid walkable floor using a line trace (rather than a sweep test, which happens when the sweep test fails to yield a walkable surface)." },
	};
#endif
	void Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bLineTrace_SetBit(void* Obj)
	{
		((FFindFloorResult*)Obj)->bLineTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bLineTrace = { "bLineTrace", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FFindFloorResult), &Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bLineTrace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bLineTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bLineTrace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_FloorDist_MetaData[] = {
		{ "Category", "CharacterFloor" },
		{ "Comment", "/** The distance to the floor, computed from the swept capsule trace. */" },
		{ "ModuleRelativePath", "Public/CharacterMovementComponentAsync.h" },
		{ "ToolTip", "The distance to the floor, computed from the swept capsule trace." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_FloorDist = { "FloorDist", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFindFloorResult, FloorDist), METADATA_PARAMS(Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_FloorDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_FloorDist_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_LineDist_MetaData[] = {
		{ "Category", "CharacterFloor" },
		{ "Comment", "/** The distance to the floor, computed from the trace. Only valid if bLineTrace is true. */" },
		{ "ModuleRelativePath", "Public/CharacterMovementComponentAsync.h" },
		{ "ToolTip", "The distance to the floor, computed from the trace. Only valid if bLineTrace is true." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_LineDist = { "LineDist", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFindFloorResult, LineDist), METADATA_PARAMS(Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_LineDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_LineDist_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_HitResult_MetaData[] = {
		{ "Category", "CharacterFloor" },
		{ "Comment", "/** Hit result of the test that found a floor. Includes more specific data about the point of impact and surface normal at that point. */" },
		{ "ModuleRelativePath", "Public/CharacterMovementComponentAsync.h" },
		{ "ToolTip", "Hit result of the test that found a floor. Includes more specific data about the point of impact and surface normal at that point." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000020815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFindFloorResult, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_HitResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFindFloorResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bBlockingHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bWalkableFloor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_bLineTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_FloorDist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_LineDist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewProp_HitResult,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFindFloorResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"FindFloorResult",
		sizeof(FFindFloorResult),
		alignof(FFindFloorResult),
		Z_Construct_UScriptStruct_FFindFloorResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindFloorResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFindFloorResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindFloorResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFindFloorResult()
	{
		if (!Z_Registration_Info_UScriptStruct_FindFloorResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FindFloorResult.InnerSingleton, Z_Construct_UScriptStruct_FFindFloorResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FindFloorResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_CharacterMovementComponentAsync_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_CharacterMovementComponentAsync_h_Statics::ScriptStructInfo[] = {
		{ FFindFloorResult::StaticStruct, Z_Construct_UScriptStruct_FFindFloorResult_Statics::NewStructOps, TEXT("FindFloorResult"), &Z_Registration_Info_UScriptStruct_FindFloorResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFindFloorResult), 3593827922U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_CharacterMovementComponentAsync_h_3761448073(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_CharacterMovementComponentAsync_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_CharacterMovementComponentAsync_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
