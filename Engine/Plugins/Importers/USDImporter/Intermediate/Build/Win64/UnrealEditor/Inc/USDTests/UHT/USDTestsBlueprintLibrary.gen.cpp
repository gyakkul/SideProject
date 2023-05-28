// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDTestsBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDTestsBlueprintLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_USDTests();
	USDSTAGE_API UClass* Z_Construct_UClass_AUsdStageActor_NoRegister();
	USDTESTS_API UClass* Z_Construct_UClass_USDTestsBlueprintLibrary();
	USDTESTS_API UClass* Z_Construct_UClass_USDTestsBlueprintLibrary_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USDTestsBlueprintLibrary::execClearTransactionHistory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USDTestsBlueprintLibrary::ClearTransactionHistory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USDTestsBlueprintLibrary::execSetUsdStageCpp)
	{
		P_GET_OBJECT(AUsdStageActor,Z_Param_StageActor);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewStageRootLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		USDTestsBlueprintLibrary::SetUsdStageCpp(Z_Param_StageActor,Z_Param_NewStageRootLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USDTestsBlueprintLibrary::execGetSubtreeMaterialSlotCount)
	{
		P_GET_OBJECT(AUsdStageActor,Z_Param_StageActor);
		P_GET_PROPERTY(FStrProperty,Z_Param_PrimPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=USDTestsBlueprintLibrary::GetSubtreeMaterialSlotCount(Z_Param_StageActor,Z_Param_PrimPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USDTestsBlueprintLibrary::execGetSubtreeVertexCount)
	{
		P_GET_OBJECT(AUsdStageActor,Z_Param_StageActor);
		P_GET_PROPERTY(FStrProperty,Z_Param_PrimPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=USDTestsBlueprintLibrary::GetSubtreeVertexCount(Z_Param_StageActor,Z_Param_PrimPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USDTestsBlueprintLibrary::execDirtyStageActorBlueprint)
	{
		P_GET_OBJECT(AUsdStageActor,Z_Param_BlueprintDerivedStageActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		USDTestsBlueprintLibrary::DirtyStageActorBlueprint(Z_Param_BlueprintDerivedStageActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USDTestsBlueprintLibrary::execRecompileBlueprintStageActor)
	{
		P_GET_OBJECT(AUsdStageActor,Z_Param_BlueprintDerivedStageActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USDTestsBlueprintLibrary::RecompileBlueprintStageActor(Z_Param_BlueprintDerivedStageActor);
		P_NATIVE_END;
	}
	void USDTestsBlueprintLibrary::StaticRegisterNativesUSDTestsBlueprintLibrary()
	{
		UClass* Class = USDTestsBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearTransactionHistory", &USDTestsBlueprintLibrary::execClearTransactionHistory },
			{ "DirtyStageActorBlueprint", &USDTestsBlueprintLibrary::execDirtyStageActorBlueprint },
			{ "GetSubtreeMaterialSlotCount", &USDTestsBlueprintLibrary::execGetSubtreeMaterialSlotCount },
			{ "GetSubtreeVertexCount", &USDTestsBlueprintLibrary::execGetSubtreeVertexCount },
			{ "RecompileBlueprintStageActor", &USDTestsBlueprintLibrary::execRecompileBlueprintStageActor },
			{ "SetUsdStageCpp", &USDTestsBlueprintLibrary::execSetUsdStageCpp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USDTestsBlueprintLibrary_ClearTransactionHistory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USDTestsBlueprintLibrary_ClearTransactionHistory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Transactions" },
		{ "Comment", "/**\n\x09 * Clears the editor transaction history (useful to be run before GC, to check for otherwise unreferenced assets)\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDTestsBlueprintLibrary.h" },
		{ "ToolTip", "Clears the editor transaction history (useful to be run before GC, to check for otherwise unreferenced assets)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDTestsBlueprintLibrary_ClearTransactionHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USDTestsBlueprintLibrary, nullptr, "ClearTransactionHistory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USDTestsBlueprintLibrary_ClearTransactionHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USDTestsBlueprintLibrary_ClearTransactionHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USDTestsBlueprintLibrary_ClearTransactionHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDTestsBlueprintLibrary_ClearTransactionHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USDTestsBlueprintLibrary_DirtyStageActorBlueprint_Statics
	{
		struct SDTestsBlueprintLibrary_eventDirtyStageActorBlueprint_Parms
		{
			AUsdStageActor* BlueprintDerivedStageActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueprintDerivedStageActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USDTestsBlueprintLibrary_DirtyStageActorBlueprint_Statics::NewProp_BlueprintDerivedStageActor = { "BlueprintDerivedStageActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SDTestsBlueprintLibrary_eventDirtyStageActorBlueprint_Parms, BlueprintDerivedStageActor), Z_Construct_UClass_AUsdStageActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDTestsBlueprintLibrary_DirtyStageActorBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDTestsBlueprintLibrary_DirtyStageActorBlueprint_Statics::NewProp_BlueprintDerivedStageActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USDTestsBlueprintLibrary_DirtyStageActorBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blueprint" },
		{ "Comment", "/**\n\x09 * Intentionally dirties the UBlueprint for the given stage actor's generated class.\n\x09 * This is useful for testing how the stage actor behaves when going into PIE with a dirty blueprint, as that usually triggers\n\x09 * a recompile at the very sensitive PIE transition\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDTestsBlueprintLibrary.h" },
		{ "ToolTip", "Intentionally dirties the UBlueprint for the given stage actor's generated class.\nThis is useful for testing how the stage actor behaves when going into PIE with a dirty blueprint, as that usually triggers\na recompile at the very sensitive PIE transition" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDTestsBlueprintLibrary_DirtyStageActorBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USDTestsBlueprintLibrary, nullptr, "DirtyStageActorBlueprint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USDTestsBlueprintLibrary_DirtyStageActorBlueprint_Statics::SDTestsBlueprintLibrary_eventDirtyStageActorBlueprint_Parms), Z_Construct_UFunction_USDTestsBlueprintLibrary_DirtyStageActorBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDTestsBlueprintLibrary_DirtyStageActorBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USDTestsBlueprintLibrary_DirtyStageActorBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USDTestsBlueprintLibrary_DirtyStageActorBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USDTestsBlueprintLibrary_DirtyStageActorBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDTestsBlueprintLibrary_DirtyStageActorBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeMaterialSlotCount_Statics
	{
		struct SDTestsBlueprintLibrary_eventGetSubtreeMaterialSlotCount_Parms
		{
			AUsdStageActor* StageActor;
			FString PrimPath;
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StageActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPath;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeMaterialSlotCount_Statics::NewProp_StageActor = { "StageActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SDTestsBlueprintLibrary_eventGetSubtreeMaterialSlotCount_Parms, StageActor), Z_Construct_UClass_AUsdStageActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeMaterialSlotCount_Statics::NewProp_PrimPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeMaterialSlotCount_Statics::NewProp_PrimPath = { "PrimPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SDTestsBlueprintLibrary_eventGetSubtreeMaterialSlotCount_Parms, PrimPath), METADATA_PARAMS(Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeMaterialSlotCount_Statics::NewProp_PrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeMaterialSlotCount_Statics::NewProp_PrimPath_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeMaterialSlotCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SDTestsBlueprintLibrary_eventGetSubtreeMaterialSlotCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeMaterialSlotCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeMaterialSlotCount_Statics::NewProp_StageActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeMaterialSlotCount_Statics::NewProp_PrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeMaterialSlotCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeMaterialSlotCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Counts" },
		{ "Comment", "/**\n\x09 * Queries a subtree material slot count using the stage actor's info cache, which is not yet exposed to blueprint.\n\x09 * May return -1 in case of an error.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDTestsBlueprintLibrary.h" },
		{ "ToolTip", "Queries a subtree material slot count using the stage actor's info cache, which is not yet exposed to blueprint.\nMay return -1 in case of an error." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeMaterialSlotCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USDTestsBlueprintLibrary, nullptr, "GetSubtreeMaterialSlotCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeMaterialSlotCount_Statics::SDTestsBlueprintLibrary_eventGetSubtreeMaterialSlotCount_Parms), Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeMaterialSlotCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeMaterialSlotCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeMaterialSlotCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeMaterialSlotCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeMaterialSlotCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeMaterialSlotCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeVertexCount_Statics
	{
		struct SDTestsBlueprintLibrary_eventGetSubtreeVertexCount_Parms
		{
			AUsdStageActor* StageActor;
			FString PrimPath;
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StageActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPath;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeVertexCount_Statics::NewProp_StageActor = { "StageActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SDTestsBlueprintLibrary_eventGetSubtreeVertexCount_Parms, StageActor), Z_Construct_UClass_AUsdStageActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeVertexCount_Statics::NewProp_PrimPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeVertexCount_Statics::NewProp_PrimPath = { "PrimPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SDTestsBlueprintLibrary_eventGetSubtreeVertexCount_Parms, PrimPath), METADATA_PARAMS(Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeVertexCount_Statics::NewProp_PrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeVertexCount_Statics::NewProp_PrimPath_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeVertexCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SDTestsBlueprintLibrary_eventGetSubtreeVertexCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeVertexCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeVertexCount_Statics::NewProp_StageActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeVertexCount_Statics::NewProp_PrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeVertexCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeVertexCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Counts" },
		{ "Comment", "/**\n\x09 * Queries a subtree vertex count using the stage actor's info cache, which is not yet exposed to blueprint.\n\x09 * May return -1 in case of an error.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDTestsBlueprintLibrary.h" },
		{ "ToolTip", "Queries a subtree vertex count using the stage actor's info cache, which is not yet exposed to blueprint.\nMay return -1 in case of an error." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeVertexCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USDTestsBlueprintLibrary, nullptr, "GetSubtreeVertexCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeVertexCount_Statics::SDTestsBlueprintLibrary_eventGetSubtreeVertexCount_Parms), Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeVertexCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeVertexCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeVertexCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeVertexCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeVertexCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeVertexCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USDTestsBlueprintLibrary_RecompileBlueprintStageActor_Statics
	{
		struct SDTestsBlueprintLibrary_eventRecompileBlueprintStageActor_Parms
		{
			AUsdStageActor* BlueprintDerivedStageActor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueprintDerivedStageActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USDTestsBlueprintLibrary_RecompileBlueprintStageActor_Statics::NewProp_BlueprintDerivedStageActor = { "BlueprintDerivedStageActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SDTestsBlueprintLibrary_eventRecompileBlueprintStageActor_Parms, BlueprintDerivedStageActor), Z_Construct_UClass_AUsdStageActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USDTestsBlueprintLibrary_RecompileBlueprintStageActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SDTestsBlueprintLibrary_eventRecompileBlueprintStageActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USDTestsBlueprintLibrary_RecompileBlueprintStageActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SDTestsBlueprintLibrary_eventRecompileBlueprintStageActor_Parms), &Z_Construct_UFunction_USDTestsBlueprintLibrary_RecompileBlueprintStageActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDTestsBlueprintLibrary_RecompileBlueprintStageActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDTestsBlueprintLibrary_RecompileBlueprintStageActor_Statics::NewProp_BlueprintDerivedStageActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDTestsBlueprintLibrary_RecompileBlueprintStageActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USDTestsBlueprintLibrary_RecompileBlueprintStageActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blueprint" },
		{ "Comment", "/**\n\x09 * Helps test the effects of blueprint recompilation on the spawned actors and assets when a stage is opened.\n\x09 * Returns whether it compiled successfully or not.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDTestsBlueprintLibrary.h" },
		{ "ToolTip", "Helps test the effects of blueprint recompilation on the spawned actors and assets when a stage is opened.\nReturns whether it compiled successfully or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDTestsBlueprintLibrary_RecompileBlueprintStageActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USDTestsBlueprintLibrary, nullptr, "RecompileBlueprintStageActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_USDTestsBlueprintLibrary_RecompileBlueprintStageActor_Statics::SDTestsBlueprintLibrary_eventRecompileBlueprintStageActor_Parms), Z_Construct_UFunction_USDTestsBlueprintLibrary_RecompileBlueprintStageActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDTestsBlueprintLibrary_RecompileBlueprintStageActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USDTestsBlueprintLibrary_RecompileBlueprintStageActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USDTestsBlueprintLibrary_RecompileBlueprintStageActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USDTestsBlueprintLibrary_RecompileBlueprintStageActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDTestsBlueprintLibrary_RecompileBlueprintStageActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USDTestsBlueprintLibrary_SetUsdStageCpp_Statics
	{
		struct SDTestsBlueprintLibrary_eventSetUsdStageCpp_Parms
		{
			AUsdStageActor* StageActor;
			FString NewStageRootLayer;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StageActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewStageRootLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewStageRootLayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USDTestsBlueprintLibrary_SetUsdStageCpp_Statics::NewProp_StageActor = { "StageActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SDTestsBlueprintLibrary_eventSetUsdStageCpp_Parms, StageActor), Z_Construct_UClass_AUsdStageActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USDTestsBlueprintLibrary_SetUsdStageCpp_Statics::NewProp_NewStageRootLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USDTestsBlueprintLibrary_SetUsdStageCpp_Statics::NewProp_NewStageRootLayer = { "NewStageRootLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SDTestsBlueprintLibrary_eventSetUsdStageCpp_Parms, NewStageRootLayer), METADATA_PARAMS(Z_Construct_UFunction_USDTestsBlueprintLibrary_SetUsdStageCpp_Statics::NewProp_NewStageRootLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USDTestsBlueprintLibrary_SetUsdStageCpp_Statics::NewProp_NewStageRootLayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USDTestsBlueprintLibrary_SetUsdStageCpp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDTestsBlueprintLibrary_SetUsdStageCpp_Statics::NewProp_StageActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USDTestsBlueprintLibrary_SetUsdStageCpp_Statics::NewProp_NewStageRootLayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USDTestsBlueprintLibrary_SetUsdStageCpp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Counts" },
		{ "Comment", "/**\n\x09 * Internally opens the provided stage and sets it on the stage actor via C++\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDTestsBlueprintLibrary.h" },
		{ "ToolTip", "Internally opens the provided stage and sets it on the stage actor via C++" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USDTestsBlueprintLibrary_SetUsdStageCpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USDTestsBlueprintLibrary, nullptr, "SetUsdStageCpp", nullptr, nullptr, sizeof(Z_Construct_UFunction_USDTestsBlueprintLibrary_SetUsdStageCpp_Statics::SDTestsBlueprintLibrary_eventSetUsdStageCpp_Parms), Z_Construct_UFunction_USDTestsBlueprintLibrary_SetUsdStageCpp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USDTestsBlueprintLibrary_SetUsdStageCpp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USDTestsBlueprintLibrary_SetUsdStageCpp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USDTestsBlueprintLibrary_SetUsdStageCpp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USDTestsBlueprintLibrary_SetUsdStageCpp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USDTestsBlueprintLibrary_SetUsdStageCpp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USDTestsBlueprintLibrary);
	UClass* Z_Construct_UClass_USDTestsBlueprintLibrary_NoRegister()
	{
		return USDTestsBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USDTestsBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USDTestsBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_USDTests,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USDTestsBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USDTestsBlueprintLibrary_ClearTransactionHistory, "ClearTransactionHistory" }, // 3232104648
		{ &Z_Construct_UFunction_USDTestsBlueprintLibrary_DirtyStageActorBlueprint, "DirtyStageActorBlueprint" }, // 2977682244
		{ &Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeMaterialSlotCount, "GetSubtreeMaterialSlotCount" }, // 421947396
		{ &Z_Construct_UFunction_USDTestsBlueprintLibrary_GetSubtreeVertexCount, "GetSubtreeVertexCount" }, // 1967320581
		{ &Z_Construct_UFunction_USDTestsBlueprintLibrary_RecompileBlueprintStageActor, "RecompileBlueprintStageActor" }, // 956965406
		{ &Z_Construct_UFunction_USDTestsBlueprintLibrary_SetUsdStageCpp, "SetUsdStageCpp" }, // 2319182767
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USDTestsBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Library of functions that can be used via Python scripting to help testing the other USD functionality\n */" },
		{ "IncludePath", "USDTestsBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/USDTestsBlueprintLibrary.h" },
		{ "ScriptName", "USDTestingLibrary" },
		{ "ToolTip", "Library of functions that can be used via Python scripting to help testing the other USD functionality" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USDTestsBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USDTestsBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USDTestsBlueprintLibrary_Statics::ClassParams = {
		&USDTestsBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USDTestsBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USDTestsBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USDTestsBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_USDTestsBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USDTestsBlueprintLibrary.OuterSingleton, Z_Construct_UClass_USDTestsBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USDTestsBlueprintLibrary.OuterSingleton;
	}
	template<> USDTESTS_API UClass* StaticClass<USDTestsBlueprintLibrary>()
	{
		return USDTestsBlueprintLibrary::StaticClass();
	}
	USDTestsBlueprintLibrary::USDTestsBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USDTestsBlueprintLibrary);
	USDTestsBlueprintLibrary::~USDTestsBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDTests_Public_USDTestsBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDTests_Public_USDTestsBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USDTestsBlueprintLibrary, USDTestsBlueprintLibrary::StaticClass, TEXT("USDTestsBlueprintLibrary"), &Z_Registration_Info_UClass_USDTestsBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USDTestsBlueprintLibrary), 2887744065U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDTests_Public_USDTestsBlueprintLibrary_h_788176526(TEXT("/Script/USDTests"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDTests_Public_USDTestsBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDTests_Public_USDTestsBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
