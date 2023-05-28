// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CausticsGeneratorActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCausticsGeneratorActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WaterEditor();
	WATEREDITOR_API UClass* Z_Construct_UClass_ACausticsGeneratorActor();
	WATEREDITOR_API UClass* Z_Construct_UClass_ACausticsGeneratorActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACausticsGeneratorActor::execSpawnCausticParticleGrid)
	{
		P_GET_OBJECT(UHierarchicalInstancedStaticMeshComponent,Z_Param_HISMC);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GridSize);
		P_GET_PROPERTY(FIntProperty,Z_Param_GridTiles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnCausticParticleGrid(Z_Param_HISMC,Z_Param_GridSize,Z_Param_GridTiles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACausticsGeneratorActor::execSpawnWaterPreviewGrid)
	{
		P_GET_OBJECT(UHierarchicalInstancedStaticMeshComponent,Z_Param_HISMC);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GridSize);
		P_GET_PROPERTY(FIntProperty,Z_Param_GridTiles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnWaterPreviewGrid(Z_Param_HISMC,Z_Param_GridSize,Z_Param_GridTiles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACausticsGeneratorActor::execSetEditorTickEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEditorTickEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACausticsGeneratorActor::execEditorTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EditorTick_Implementation(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	struct CausticsGeneratorActor_eventEditorTick_Parms
	{
		float DeltaSeconds;
	};
	static FName NAME_ACausticsGeneratorActor_EditorTick = FName(TEXT("EditorTick"));
	void ACausticsGeneratorActor::EditorTick(float DeltaSeconds)
	{
		CausticsGeneratorActor_eventEditorTick_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_ACausticsGeneratorActor_EditorTick),&Parms);
	}
	void ACausticsGeneratorActor::StaticRegisterNativesACausticsGeneratorActor()
	{
		UClass* Class = ACausticsGeneratorActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EditorTick", &ACausticsGeneratorActor::execEditorTick },
			{ "SetEditorTickEnabled", &ACausticsGeneratorActor::execSetEditorTickEnabled },
			{ "SpawnCausticParticleGrid", &ACausticsGeneratorActor::execSpawnCausticParticleGrid },
			{ "SpawnWaterPreviewGrid", &ACausticsGeneratorActor::execSpawnWaterPreviewGrid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACausticsGeneratorActor_EditorTick_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACausticsGeneratorActor_EditorTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CausticsGeneratorActor_eventEditorTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACausticsGeneratorActor_EditorTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACausticsGeneratorActor_EditorTick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACausticsGeneratorActor_EditorTick_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Tick" },
		{ "ModuleRelativePath", "Public/CausticsGeneratorActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACausticsGeneratorActor_EditorTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACausticsGeneratorActor, nullptr, "EditorTick", nullptr, nullptr, sizeof(CausticsGeneratorActor_eventEditorTick_Parms), Z_Construct_UFunction_ACausticsGeneratorActor_EditorTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACausticsGeneratorActor_EditorTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACausticsGeneratorActor_EditorTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACausticsGeneratorActor_EditorTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACausticsGeneratorActor_EditorTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACausticsGeneratorActor_EditorTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACausticsGeneratorActor_SetEditorTickEnabled_Statics
	{
		struct CausticsGeneratorActor_eventSetEditorTickEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACausticsGeneratorActor_SetEditorTickEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((CausticsGeneratorActor_eventSetEditorTickEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACausticsGeneratorActor_SetEditorTickEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CausticsGeneratorActor_eventSetEditorTickEnabled_Parms), &Z_Construct_UFunction_ACausticsGeneratorActor_SetEditorTickEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACausticsGeneratorActor_SetEditorTickEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACausticsGeneratorActor_SetEditorTickEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACausticsGeneratorActor_SetEditorTickEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/CausticsGeneratorActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACausticsGeneratorActor_SetEditorTickEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACausticsGeneratorActor, nullptr, "SetEditorTickEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACausticsGeneratorActor_SetEditorTickEnabled_Statics::CausticsGeneratorActor_eventSetEditorTickEnabled_Parms), Z_Construct_UFunction_ACausticsGeneratorActor_SetEditorTickEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACausticsGeneratorActor_SetEditorTickEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACausticsGeneratorActor_SetEditorTickEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACausticsGeneratorActor_SetEditorTickEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACausticsGeneratorActor_SetEditorTickEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACausticsGeneratorActor_SetEditorTickEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACausticsGeneratorActor_SpawnCausticParticleGrid_Statics
	{
		struct CausticsGeneratorActor_eventSpawnCausticParticleGrid_Parms
		{
			UHierarchicalInstancedStaticMeshComponent* HISMC;
			float GridSize;
			int32 GridTiles;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HISMC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HISMC;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GridSize;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_GridTiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACausticsGeneratorActor_SpawnCausticParticleGrid_Statics::NewProp_HISMC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACausticsGeneratorActor_SpawnCausticParticleGrid_Statics::NewProp_HISMC = { "HISMC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CausticsGeneratorActor_eventSpawnCausticParticleGrid_Parms, HISMC), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACausticsGeneratorActor_SpawnCausticParticleGrid_Statics::NewProp_HISMC_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACausticsGeneratorActor_SpawnCausticParticleGrid_Statics::NewProp_HISMC_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACausticsGeneratorActor_SpawnCausticParticleGrid_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CausticsGeneratorActor_eventSpawnCausticParticleGrid_Parms, GridSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ACausticsGeneratorActor_SpawnCausticParticleGrid_Statics::NewProp_GridTiles = { "GridTiles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CausticsGeneratorActor_eventSpawnCausticParticleGrid_Parms, GridTiles), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACausticsGeneratorActor_SpawnCausticParticleGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACausticsGeneratorActor_SpawnCausticParticleGrid_Statics::NewProp_HISMC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACausticsGeneratorActor_SpawnCausticParticleGrid_Statics::NewProp_GridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACausticsGeneratorActor_SpawnCausticParticleGrid_Statics::NewProp_GridTiles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACausticsGeneratorActor_SpawnCausticParticleGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water Mesh Preview" },
		{ "ModuleRelativePath", "Public/CausticsGeneratorActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACausticsGeneratorActor_SpawnCausticParticleGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACausticsGeneratorActor, nullptr, "SpawnCausticParticleGrid", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACausticsGeneratorActor_SpawnCausticParticleGrid_Statics::CausticsGeneratorActor_eventSpawnCausticParticleGrid_Parms), Z_Construct_UFunction_ACausticsGeneratorActor_SpawnCausticParticleGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACausticsGeneratorActor_SpawnCausticParticleGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACausticsGeneratorActor_SpawnCausticParticleGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACausticsGeneratorActor_SpawnCausticParticleGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACausticsGeneratorActor_SpawnCausticParticleGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACausticsGeneratorActor_SpawnCausticParticleGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACausticsGeneratorActor_SpawnWaterPreviewGrid_Statics
	{
		struct CausticsGeneratorActor_eventSpawnWaterPreviewGrid_Parms
		{
			UHierarchicalInstancedStaticMeshComponent* HISMC;
			float GridSize;
			int32 GridTiles;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HISMC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HISMC;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GridSize;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_GridTiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACausticsGeneratorActor_SpawnWaterPreviewGrid_Statics::NewProp_HISMC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACausticsGeneratorActor_SpawnWaterPreviewGrid_Statics::NewProp_HISMC = { "HISMC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CausticsGeneratorActor_eventSpawnWaterPreviewGrid_Parms, HISMC), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACausticsGeneratorActor_SpawnWaterPreviewGrid_Statics::NewProp_HISMC_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACausticsGeneratorActor_SpawnWaterPreviewGrid_Statics::NewProp_HISMC_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACausticsGeneratorActor_SpawnWaterPreviewGrid_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CausticsGeneratorActor_eventSpawnWaterPreviewGrid_Parms, GridSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ACausticsGeneratorActor_SpawnWaterPreviewGrid_Statics::NewProp_GridTiles = { "GridTiles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CausticsGeneratorActor_eventSpawnWaterPreviewGrid_Parms, GridTiles), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACausticsGeneratorActor_SpawnWaterPreviewGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACausticsGeneratorActor_SpawnWaterPreviewGrid_Statics::NewProp_HISMC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACausticsGeneratorActor_SpawnWaterPreviewGrid_Statics::NewProp_GridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACausticsGeneratorActor_SpawnWaterPreviewGrid_Statics::NewProp_GridTiles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACausticsGeneratorActor_SpawnWaterPreviewGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water Mesh Preview" },
		{ "ModuleRelativePath", "Public/CausticsGeneratorActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACausticsGeneratorActor_SpawnWaterPreviewGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACausticsGeneratorActor, nullptr, "SpawnWaterPreviewGrid", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACausticsGeneratorActor_SpawnWaterPreviewGrid_Statics::CausticsGeneratorActor_eventSpawnWaterPreviewGrid_Parms), Z_Construct_UFunction_ACausticsGeneratorActor_SpawnWaterPreviewGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACausticsGeneratorActor_SpawnWaterPreviewGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACausticsGeneratorActor_SpawnWaterPreviewGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACausticsGeneratorActor_SpawnWaterPreviewGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACausticsGeneratorActor_SpawnWaterPreviewGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACausticsGeneratorActor_SpawnWaterPreviewGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACausticsGeneratorActor);
	UClass* Z_Construct_UClass_ACausticsGeneratorActor_NoRegister()
	{
		return ACausticsGeneratorActor::StaticClass();
	}
	struct Z_Construct_UClass_ACausticsGeneratorActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultSceneRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorTickIsEnabled_MetaData[];
#endif
		static void NewProp_EditorTickIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EditorTickIsEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACausticsGeneratorActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACausticsGeneratorActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACausticsGeneratorActor_EditorTick, "EditorTick" }, // 3306409939
		{ &Z_Construct_UFunction_ACausticsGeneratorActor_SetEditorTickEnabled, "SetEditorTickEnabled" }, // 3686668301
		{ &Z_Construct_UFunction_ACausticsGeneratorActor_SpawnCausticParticleGrid, "SpawnCausticParticleGrid" }, // 3811830751
		{ &Z_Construct_UFunction_ACausticsGeneratorActor_SpawnWaterPreviewGrid, "SpawnWaterPreviewGrid" }, // 3000704303
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACausticsGeneratorActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Replication Input LOD Actor Cooking Rendering Collision" },
		{ "IncludePath", "CausticsGeneratorActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CausticsGeneratorActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACausticsGeneratorActor_Statics::NewProp_DefaultSceneRoot_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//UPROPERTY(BlueprintReadWrite, NonTransactional, meta = (Category = \"Default\"))\n//UHierarchicalInstancedStaticMeshComponent* CausticParticlesGridHISMC;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CausticsGeneratorActor.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, NonTransactional, meta = (Category = \"Default\"))\nUHierarchicalInstancedStaticMeshComponent* CausticParticlesGridHISMC;" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACausticsGeneratorActor_Statics::NewProp_DefaultSceneRoot = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001400040008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACausticsGeneratorActor, DefaultSceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACausticsGeneratorActor_Statics::NewProp_DefaultSceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACausticsGeneratorActor_Statics::NewProp_DefaultSceneRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACausticsGeneratorActor_Statics::NewProp_EditorTickIsEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/CausticsGeneratorActor.h" },
	};
#endif
	void Z_Construct_UClass_ACausticsGeneratorActor_Statics::NewProp_EditorTickIsEnabled_SetBit(void* Obj)
	{
		((ACausticsGeneratorActor*)Obj)->EditorTickIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACausticsGeneratorActor_Statics::NewProp_EditorTickIsEnabled = { "EditorTickIsEnabled", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACausticsGeneratorActor), &Z_Construct_UClass_ACausticsGeneratorActor_Statics::NewProp_EditorTickIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACausticsGeneratorActor_Statics::NewProp_EditorTickIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACausticsGeneratorActor_Statics::NewProp_EditorTickIsEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACausticsGeneratorActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACausticsGeneratorActor_Statics::NewProp_DefaultSceneRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACausticsGeneratorActor_Statics::NewProp_EditorTickIsEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACausticsGeneratorActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACausticsGeneratorActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACausticsGeneratorActor_Statics::ClassParams = {
		&ACausticsGeneratorActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACausticsGeneratorActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACausticsGeneratorActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACausticsGeneratorActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACausticsGeneratorActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACausticsGeneratorActor()
	{
		if (!Z_Registration_Info_UClass_ACausticsGeneratorActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACausticsGeneratorActor.OuterSingleton, Z_Construct_UClass_ACausticsGeneratorActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACausticsGeneratorActor.OuterSingleton;
	}
	template<> WATEREDITOR_API UClass* StaticClass<ACausticsGeneratorActor>()
	{
		return ACausticsGeneratorActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACausticsGeneratorActor);
	ACausticsGeneratorActor::~ACausticsGeneratorActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACausticsGeneratorActor, ACausticsGeneratorActor::StaticClass, TEXT("ACausticsGeneratorActor"), &Z_Registration_Info_UClass_ACausticsGeneratorActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACausticsGeneratorActor), 3880203656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_2487146125(TEXT("/Script/WaterEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
