// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryActors/GeneratedDynamicMeshActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratedDynamicMeshActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_ADynamicMeshActor();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGEDITOR_API UClass* Z_Construct_UClass_AGeneratedDynamicMeshActor();
	GEOMETRYSCRIPTINGEDITOR_API UClass* Z_Construct_UClass_AGeneratedDynamicMeshActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingEditor();
// End Cross Module References
	DEFINE_FUNCTION(AGeneratedDynamicMeshActor::execIncrementProgress)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumSteps);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncrementProgress(Z_Param_NumSteps,Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeneratedDynamicMeshActor::execCopyPropertiesFromStaticMesh)
	{
		P_GET_OBJECT(AStaticMeshActor,Z_Param_StaticMeshActor);
		P_GET_UBOOL(Z_Param_bCopyComponentMaterials);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyPropertiesFromStaticMesh(Z_Param_StaticMeshActor,Z_Param_bCopyComponentMaterials);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGeneratedDynamicMeshActor::execCopyPropertiesToStaticMesh)
	{
		P_GET_OBJECT(AStaticMeshActor,Z_Param_StaticMeshActor);
		P_GET_UBOOL(Z_Param_bCopyComponentMaterials);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyPropertiesToStaticMesh(Z_Param_StaticMeshActor,Z_Param_bCopyComponentMaterials);
		P_NATIVE_END;
	}
	struct GeneratedDynamicMeshActor_eventOnRebuildGeneratedMesh_Parms
	{
		UDynamicMesh* TargetMesh;
	};
	static FName NAME_AGeneratedDynamicMeshActor_OnRebuildGeneratedMesh = FName(TEXT("OnRebuildGeneratedMesh"));
	void AGeneratedDynamicMeshActor::OnRebuildGeneratedMesh(UDynamicMesh* TargetMesh)
	{
		GeneratedDynamicMeshActor_eventOnRebuildGeneratedMesh_Parms Parms;
		Parms.TargetMesh=TargetMesh;
		ProcessEvent(FindFunctionChecked(NAME_AGeneratedDynamicMeshActor_OnRebuildGeneratedMesh),&Parms);
	}
	void AGeneratedDynamicMeshActor::StaticRegisterNativesAGeneratedDynamicMeshActor()
	{
		UClass* Class = AGeneratedDynamicMeshActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyPropertiesFromStaticMesh", &AGeneratedDynamicMeshActor::execCopyPropertiesFromStaticMesh },
			{ "CopyPropertiesToStaticMesh", &AGeneratedDynamicMeshActor::execCopyPropertiesToStaticMesh },
			{ "IncrementProgress", &AGeneratedDynamicMeshActor::execIncrementProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesFromStaticMesh_Statics
	{
		struct GeneratedDynamicMeshActor_eventCopyPropertiesFromStaticMesh_Parms
		{
			AStaticMeshActor* StaticMeshActor;
			bool bCopyComponentMaterials;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshActor;
		static void NewProp_bCopyComponentMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyComponentMaterials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesFromStaticMesh_Statics::NewProp_StaticMeshActor = { "StaticMeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeneratedDynamicMeshActor_eventCopyPropertiesFromStaticMesh_Parms, StaticMeshActor), Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesFromStaticMesh_Statics::NewProp_bCopyComponentMaterials_SetBit(void* Obj)
	{
		((GeneratedDynamicMeshActor_eventCopyPropertiesFromStaticMesh_Parms*)Obj)->bCopyComponentMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesFromStaticMesh_Statics::NewProp_bCopyComponentMaterials = { "bCopyComponentMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeneratedDynamicMeshActor_eventCopyPropertiesFromStaticMesh_Parms), &Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesFromStaticMesh_Statics::NewProp_bCopyComponentMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesFromStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesFromStaticMesh_Statics::NewProp_StaticMeshActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesFromStaticMesh_Statics::NewProp_bCopyComponentMaterials,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesFromStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicMeshActor" },
		{ "Comment", "/**\n\x09 * Attempt to copy Actor Properties from a StaticMeshActor. Optionally copy DynamicMeshComponent material list to the StaticMeshComponent.\n\x09 * This function is useful when (eg) swapping from a StaticMeshActor to a DynamicMeshActor as it will allow\n\x09 * many configured Actor settings to be preserved (like assigned DataLayers, etc) \n\x09 */" },
		{ "CPP_Default_bCopyComponentMaterials", "false" },
		{ "ModuleRelativePath", "Public/GeometryActors/GeneratedDynamicMeshActor.h" },
		{ "ToolTip", "Attempt to copy Actor Properties from a StaticMeshActor. Optionally copy DynamicMeshComponent material list to the StaticMeshComponent.\nThis function is useful when (eg) swapping from a StaticMeshActor to a DynamicMeshActor as it will allow\nmany configured Actor settings to be preserved (like assigned DataLayers, etc)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesFromStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratedDynamicMeshActor, nullptr, "CopyPropertiesFromStaticMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesFromStaticMesh_Statics::GeneratedDynamicMeshActor_eventCopyPropertiesFromStaticMesh_Parms), Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesFromStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesFromStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesFromStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesFromStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesFromStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesFromStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesToStaticMesh_Statics
	{
		struct GeneratedDynamicMeshActor_eventCopyPropertiesToStaticMesh_Parms
		{
			AStaticMeshActor* StaticMeshActor;
			bool bCopyComponentMaterials;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshActor;
		static void NewProp_bCopyComponentMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyComponentMaterials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesToStaticMesh_Statics::NewProp_StaticMeshActor = { "StaticMeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeneratedDynamicMeshActor_eventCopyPropertiesToStaticMesh_Parms, StaticMeshActor), Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesToStaticMesh_Statics::NewProp_bCopyComponentMaterials_SetBit(void* Obj)
	{
		((GeneratedDynamicMeshActor_eventCopyPropertiesToStaticMesh_Parms*)Obj)->bCopyComponentMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesToStaticMesh_Statics::NewProp_bCopyComponentMaterials = { "bCopyComponentMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeneratedDynamicMeshActor_eventCopyPropertiesToStaticMesh_Parms), &Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesToStaticMesh_Statics::NewProp_bCopyComponentMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesToStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesToStaticMesh_Statics::NewProp_StaticMeshActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesToStaticMesh_Statics::NewProp_bCopyComponentMaterials,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesToStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicMeshActor" },
		{ "Comment", "/** \n\x09 * Attempt to copy Actor Properties to a StaticMeshActor. Optionally copy DynamicMeshComponent material list to the StaticMeshComponent.\n\x09 * This function is useful when (eg) swapping from a DynamicMeshActor to a StaticMeshActor as it will allow\n\x09 * many configured Actor settings to be preserved (like assigned DataLayers, etc)\n\x09 */" },
		{ "CPP_Default_bCopyComponentMaterials", "false" },
		{ "ModuleRelativePath", "Public/GeometryActors/GeneratedDynamicMeshActor.h" },
		{ "ToolTip", "Attempt to copy Actor Properties to a StaticMeshActor. Optionally copy DynamicMeshComponent material list to the StaticMeshComponent.\nThis function is useful when (eg) swapping from a DynamicMeshActor to a StaticMeshActor as it will allow\nmany configured Actor settings to be preserved (like assigned DataLayers, etc)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesToStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratedDynamicMeshActor, nullptr, "CopyPropertiesToStaticMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesToStaticMesh_Statics::GeneratedDynamicMeshActor_eventCopyPropertiesToStaticMesh_Parms), Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesToStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesToStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesToStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesToStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesToStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesToStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratedDynamicMeshActor_IncrementProgress_Statics
	{
		struct GeneratedDynamicMeshActor_eventIncrementProgress_Parms
		{
			int32 NumSteps;
			FString Message;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumSteps;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGeneratedDynamicMeshActor_IncrementProgress_Statics::NewProp_NumSteps = { "NumSteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeneratedDynamicMeshActor_eventIncrementProgress_Parms, NumSteps), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AGeneratedDynamicMeshActor_IncrementProgress_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeneratedDynamicMeshActor_eventIncrementProgress_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratedDynamicMeshActor_IncrementProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratedDynamicMeshActor_IncrementProgress_Statics::NewProp_NumSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratedDynamicMeshActor_IncrementProgress_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratedDynamicMeshActor_IncrementProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "DynamicMeshActor|Progress" },
		{ "Comment", "/** Call this function from within OnRebuildGeneratedMesh to update progress tracking. */" },
		{ "ModuleRelativePath", "Public/GeometryActors/GeneratedDynamicMeshActor.h" },
		{ "ToolTip", "Call this function from within OnRebuildGeneratedMesh to update progress tracking." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratedDynamicMeshActor_IncrementProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratedDynamicMeshActor, nullptr, "IncrementProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGeneratedDynamicMeshActor_IncrementProgress_Statics::GeneratedDynamicMeshActor_eventIncrementProgress_Parms), Z_Construct_UFunction_AGeneratedDynamicMeshActor_IncrementProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratedDynamicMeshActor_IncrementProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratedDynamicMeshActor_IncrementProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratedDynamicMeshActor_IncrementProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratedDynamicMeshActor_IncrementProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeneratedDynamicMeshActor_IncrementProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGeneratedDynamicMeshActor_OnRebuildGeneratedMesh_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGeneratedDynamicMeshActor_OnRebuildGeneratedMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeneratedDynamicMeshActor_eventOnRebuildGeneratedMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeneratedDynamicMeshActor_OnRebuildGeneratedMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeneratedDynamicMeshActor_OnRebuildGeneratedMesh_Statics::NewProp_TargetMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeneratedDynamicMeshActor_OnRebuildGeneratedMesh_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Events" },
		{ "Comment", "/**\n\x09 * This event will be fired to notify the BP that the generated Mesh should\n\x09 * be rebuilt. GeneratedDynamicMeshActor BP subclasses should rebuild their \n\x09 * meshes on this event, instead of doing so directly from the Construction Script.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryActors/GeneratedDynamicMeshActor.h" },
		{ "ToolTip", "This event will be fired to notify the BP that the generated Mesh should\nbe rebuilt. GeneratedDynamicMeshActor BP subclasses should rebuild their\nmeshes on this event, instead of doing so directly from the Construction Script." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeneratedDynamicMeshActor_OnRebuildGeneratedMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeneratedDynamicMeshActor, nullptr, "OnRebuildGeneratedMesh", nullptr, nullptr, sizeof(GeneratedDynamicMeshActor_eventOnRebuildGeneratedMesh_Parms), Z_Construct_UFunction_AGeneratedDynamicMeshActor_OnRebuildGeneratedMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratedDynamicMeshActor_OnRebuildGeneratedMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeneratedDynamicMeshActor_OnRebuildGeneratedMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeneratedDynamicMeshActor_OnRebuildGeneratedMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeneratedDynamicMeshActor_OnRebuildGeneratedMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeneratedDynamicMeshActor_OnRebuildGeneratedMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeneratedDynamicMeshActor);
	UClass* Z_Construct_UClass_AGeneratedDynamicMeshActor_NoRegister()
	{
		return AGeneratedDynamicMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFrozen_MetaData[];
#endif
		static void NewProp_bFrozen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFrozen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetOnRebuild_MetaData[];
#endif
		static void NewProp_bResetOnRebuild_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetOnRebuild;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRebuildProgress_MetaData[];
#endif
		static void NewProp_bEnableRebuildProgress_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRebuildProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DialogDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumProgressSteps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumProgressSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProgressMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADynamicMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesFromStaticMesh, "CopyPropertiesFromStaticMesh" }, // 1897757657
		{ &Z_Construct_UFunction_AGeneratedDynamicMeshActor_CopyPropertiesToStaticMesh, "CopyPropertiesToStaticMesh" }, // 3287441963
		{ &Z_Construct_UFunction_AGeneratedDynamicMeshActor_IncrementProgress, "IncrementProgress" }, // 447690930
		{ &Z_Construct_UFunction_AGeneratedDynamicMeshActor_OnRebuildGeneratedMesh, "OnRebuildGeneratedMesh" }, // 2797439794
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * AGeneratedDynamicMeshActor is an Editor-only subclass of ADynamicMeshActor that provides \n * special support for dynamic procedural generation of meshes in the Editor, eg via Blueprints. \n * Expensive procedural generation implemented via BP can potentially cause major problems in \n * the Editor, in particular with interactive performance. AGeneratedDynamicMeshActor provides\n * special infrastructure for this use case. Essentially, instead of doing procedural generation\n * in the Construction Script, a BP-implementable event OnRebuildGeneratedMesh is available,\n * and doing the procedural mesh regeneration when that function fires will generally provide\n * better in-Editor interactive performance.\n */" },
		{ "IncludePath", "GeometryActors/GeneratedDynamicMeshActor.h" },
		{ "ModuleRelativePath", "Public/GeometryActors/GeneratedDynamicMeshActor.h" },
		{ "ToolTip", "AGeneratedDynamicMeshActor is an Editor-only subclass of ADynamicMeshActor that provides\nspecial support for dynamic procedural generation of meshes in the Editor, eg via Blueprints.\nExpensive procedural generation implemented via BP can potentially cause major problems in\nthe Editor, in particular with interactive performance. AGeneratedDynamicMeshActor provides\nspecial infrastructure for this use case. Essentially, instead of doing procedural generation\nin the Construction Script, a BP-implementable event OnRebuildGeneratedMesh is available,\nand doing the procedural mesh regeneration when that function fires will generally provide\nbetter in-Editor interactive performance." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_bFrozen_MetaData[] = {
		{ "Category", "DynamicMeshActor" },
		{ "Comment", "/** If true, the DynamicMeshComponent will be \"Frozen\" in its current state, and automatic rebuilding will be disabled. However the DynamicMesh can still be modified by explicitly-called functions/etc. */" },
		{ "ModuleRelativePath", "Public/GeometryActors/GeneratedDynamicMeshActor.h" },
		{ "ToolTip", "If true, the DynamicMeshComponent will be \"Frozen\" in its current state, and automatic rebuilding will be disabled. However the DynamicMesh can still be modified by explicitly-called functions/etc." },
	};
#endif
	void Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_bFrozen_SetBit(void* Obj)
	{
		((AGeneratedDynamicMeshActor*)Obj)->bFrozen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_bFrozen = { "bFrozen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeneratedDynamicMeshActor), &Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_bFrozen_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_bFrozen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_bFrozen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_bResetOnRebuild_MetaData[] = {
		{ "Category", "DynamicMeshActor|Advanced" },
		{ "Comment", "/** If true, the DynamicMeshComponent will be cleared before the OnRebuildGeneratedMesh event is executed. */" },
		{ "ModuleRelativePath", "Public/GeometryActors/GeneratedDynamicMeshActor.h" },
		{ "ToolTip", "If true, the DynamicMeshComponent will be cleared before the OnRebuildGeneratedMesh event is executed." },
	};
#endif
	void Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_bResetOnRebuild_SetBit(void* Obj)
	{
		((AGeneratedDynamicMeshActor*)Obj)->bResetOnRebuild = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_bResetOnRebuild = { "bResetOnRebuild", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeneratedDynamicMeshActor), &Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_bResetOnRebuild_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_bResetOnRebuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_bResetOnRebuild_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_bEnableRebuildProgress_MetaData[] = {
		{ "Category", "DynamicMeshActor|Progress" },
		{ "Comment", "/** If enabled, a long-running OnRebuildGeneratedMesh event will show a progress dialog (The Script being executed must call IncrementProgress regularly) */" },
		{ "ModuleRelativePath", "Public/GeometryActors/GeneratedDynamicMeshActor.h" },
		{ "ToolTip", "If enabled, a long-running OnRebuildGeneratedMesh event will show a progress dialog (The Script being executed must call IncrementProgress regularly)" },
	};
#endif
	void Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_bEnableRebuildProgress_SetBit(void* Obj)
	{
		((AGeneratedDynamicMeshActor*)Obj)->bEnableRebuildProgress = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_bEnableRebuildProgress = { "bEnableRebuildProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeneratedDynamicMeshActor), &Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_bEnableRebuildProgress_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_bEnableRebuildProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_bEnableRebuildProgress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_DialogDelay_MetaData[] = {
		{ "Category", "DynamicMeshActor|Progress" },
		{ "Comment", "/** Delay in seconds before the progress dialog is shown, if enabled */" },
		{ "ModuleRelativePath", "Public/GeometryActors/GeneratedDynamicMeshActor.h" },
		{ "ToolTip", "Delay in seconds before the progress dialog is shown, if enabled" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_DialogDelay = { "DialogDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeneratedDynamicMeshActor, DialogDelay), METADATA_PARAMS(Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_DialogDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_DialogDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_NumProgressSteps_MetaData[] = {
		{ "Category", "DynamicMeshActor|Progress" },
		{ "Comment", "/** Number of progress steps/ticks that the progress bar will be subdivided into */" },
		{ "ModuleRelativePath", "Public/GeometryActors/GeneratedDynamicMeshActor.h" },
		{ "ToolTip", "Number of progress steps/ticks that the progress bar will be subdivided into" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_NumProgressSteps = { "NumProgressSteps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeneratedDynamicMeshActor, NumProgressSteps), METADATA_PARAMS(Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_NumProgressSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_NumProgressSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_ProgressMessage_MetaData[] = {
		{ "Category", "DynamicMeshActor|Progress" },
		{ "Comment", "/** The default progress message */" },
		{ "ModuleRelativePath", "Public/GeometryActors/GeneratedDynamicMeshActor.h" },
		{ "ToolTip", "The default progress message" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_ProgressMessage = { "ProgressMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeneratedDynamicMeshActor, ProgressMessage), METADATA_PARAMS(Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_ProgressMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_ProgressMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_bFrozen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_bResetOnRebuild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_bEnableRebuildProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_DialogDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_NumProgressSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::NewProp_ProgressMessage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeneratedDynamicMeshActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::ClassParams = {
		&AGeneratedDynamicMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeneratedDynamicMeshActor()
	{
		if (!Z_Registration_Info_UClass_AGeneratedDynamicMeshActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeneratedDynamicMeshActor.OuterSingleton, Z_Construct_UClass_AGeneratedDynamicMeshActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGeneratedDynamicMeshActor.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGEDITOR_API UClass* StaticClass<AGeneratedDynamicMeshActor>()
	{
		return AGeneratedDynamicMeshActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeneratedDynamicMeshActor);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryActors_GeneratedDynamicMeshActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryActors_GeneratedDynamicMeshActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeneratedDynamicMeshActor, AGeneratedDynamicMeshActor::StaticClass, TEXT("AGeneratedDynamicMeshActor"), &Z_Registration_Info_UClass_AGeneratedDynamicMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeneratedDynamicMeshActor), 3313335145U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryActors_GeneratedDynamicMeshActor_h_3287959800(TEXT("/Script/GeometryScriptingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryActors_GeneratedDynamicMeshActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingEditor_Public_GeometryActors_GeneratedDynamicMeshActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
