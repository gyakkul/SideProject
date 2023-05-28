// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplayClusterRootActor.h"
#include "DisplayClusterEditorPropertyReference.h"
#include "Misc/DisplayClusterObjectRef.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterRootActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_ADisplayClusterRootActor();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_ADisplayClusterRootActor_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterCameraComponent_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterPreviewComponent_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterStageGeometryComponent_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterSyncTickComponent_NoRegister();
	DISPLAYCLUSTER_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterComponentRef();
	DISPLAYCLUSTERCONFIGURATION_API UClass* Z_Construct_UClass_UDisplayClusterConfigurationData_NoRegister();
	DISPLAYCLUSTERCONFIGURATION_API UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderMode();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference();
	DISPLAYCLUSTERLIGHTCARDEXTENDER_API UClass* Z_Construct_UClass_UDisplayClusterStageActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	DEFINE_FUNCTION(ADisplayClusterRootActor::execUpdateProceduralMeshComponentData)
	{
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_InProceduralMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateProceduralMeshComponentData(Z_Param_InProceduralMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADisplayClusterRootActor::execSetFreezeOuterViewports)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetFreezeOuterViewports(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADisplayClusterRootActor::execSetReplaceTextureFlagForAllViewports)
	{
		P_GET_UBOOL(Z_Param_bReplace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetReplaceTextureFlagForAllViewports(Z_Param_bReplace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADisplayClusterRootActor::execGetCommonViewPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetCommonViewPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADisplayClusterRootActor::execGetDefaultCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDisplayClusterCameraComponent**)Z_Param__Result=P_THIS->GetDefaultCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADisplayClusterRootActor::execGetStageGeometryComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDisplayClusterStageGeometryComponent**)Z_Param__Result=P_THIS->GetStageGeometryComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADisplayClusterRootActor::execMakeStageActorFlushToWall)
	{
		P_GET_TINTERFACE_REF(IDisplayClusterStageActor,Z_Param_Out_StageActor);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_DesiredOffsetFromFlush);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MakeStageActorFlushToWall(Z_Param_Out_StageActor,Z_Param_DesiredOffsetFromFlush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADisplayClusterRootActor::execGetFlushPositionAndNormal)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFlushPositionAndNormal(Z_Param_Out_WorldPosition,Z_Param_Out_OutPosition,Z_Param_Out_OutNormal);
		P_NATIVE_END;
	}
	void ADisplayClusterRootActor::StaticRegisterNativesADisplayClusterRootActor()
	{
		UClass* Class = ADisplayClusterRootActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCommonViewPoint", &ADisplayClusterRootActor::execGetCommonViewPoint },
			{ "GetDefaultCamera", &ADisplayClusterRootActor::execGetDefaultCamera },
			{ "GetFlushPositionAndNormal", &ADisplayClusterRootActor::execGetFlushPositionAndNormal },
			{ "GetStageGeometryComponent", &ADisplayClusterRootActor::execGetStageGeometryComponent },
			{ "MakeStageActorFlushToWall", &ADisplayClusterRootActor::execMakeStageActorFlushToWall },
			{ "SetFreezeOuterViewports", &ADisplayClusterRootActor::execSetFreezeOuterViewports },
			{ "SetReplaceTextureFlagForAllViewports", &ADisplayClusterRootActor::execSetReplaceTextureFlagForAllViewports },
			{ "UpdateProceduralMeshComponentData", &ADisplayClusterRootActor::execUpdateProceduralMeshComponentData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADisplayClusterRootActor_GetCommonViewPoint_Statics
	{
		struct DisplayClusterRootActor_eventGetCommonViewPoint_Parms
		{
			USceneComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADisplayClusterRootActor_GetCommonViewPoint_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADisplayClusterRootActor_GetCommonViewPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterRootActor_eventGetCommonViewPoint_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADisplayClusterRootActor_GetCommonViewPoint_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADisplayClusterRootActor_GetCommonViewPoint_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADisplayClusterRootActor_GetCommonViewPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADisplayClusterRootActor_GetCommonViewPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADisplayClusterRootActor_GetCommonViewPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Components" },
		{ "Comment", "/**\n\x09 * Get the view origin most commonly used by viewports in this cluster.\n\x09 * If no viewports override the camera, this returns the default camera, or if there isn't one, the actor's root component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "ToolTip", "Get the view origin most commonly used by viewports in this cluster.\nIf no viewports override the camera, this returns the default camera, or if there isn't one, the actor's root component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADisplayClusterRootActor_GetCommonViewPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADisplayClusterRootActor, nullptr, "GetCommonViewPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADisplayClusterRootActor_GetCommonViewPoint_Statics::DisplayClusterRootActor_eventGetCommonViewPoint_Parms), Z_Construct_UFunction_ADisplayClusterRootActor_GetCommonViewPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADisplayClusterRootActor_GetCommonViewPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADisplayClusterRootActor_GetCommonViewPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADisplayClusterRootActor_GetCommonViewPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADisplayClusterRootActor_GetCommonViewPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADisplayClusterRootActor_GetCommonViewPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADisplayClusterRootActor_GetDefaultCamera_Statics
	{
		struct DisplayClusterRootActor_eventGetDefaultCamera_Parms
		{
			UDisplayClusterCameraComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADisplayClusterRootActor_GetDefaultCamera_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADisplayClusterRootActor_GetDefaultCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterRootActor_eventGetDefaultCamera_Parms, ReturnValue), Z_Construct_UClass_UDisplayClusterCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADisplayClusterRootActor_GetDefaultCamera_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADisplayClusterRootActor_GetDefaultCamera_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADisplayClusterRootActor_GetDefaultCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADisplayClusterRootActor_GetDefaultCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADisplayClusterRootActor_GetDefaultCamera_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADisplayClusterRootActor_GetDefaultCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADisplayClusterRootActor, nullptr, "GetDefaultCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADisplayClusterRootActor_GetDefaultCamera_Statics::DisplayClusterRootActor_eventGetDefaultCamera_Parms), Z_Construct_UFunction_ADisplayClusterRootActor_GetDefaultCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADisplayClusterRootActor_GetDefaultCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADisplayClusterRootActor_GetDefaultCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADisplayClusterRootActor_GetDefaultCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADisplayClusterRootActor_GetDefaultCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADisplayClusterRootActor_GetDefaultCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADisplayClusterRootActor_GetFlushPositionAndNormal_Statics
	{
		struct DisplayClusterRootActor_eventGetFlushPositionAndNormal_Parms
		{
			FVector WorldPosition;
			FVector OutPosition;
			FVector OutNormal;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutNormal;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADisplayClusterRootActor_GetFlushPositionAndNormal_Statics::NewProp_WorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADisplayClusterRootActor_GetFlushPositionAndNormal_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterRootActor_eventGetFlushPositionAndNormal_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ADisplayClusterRootActor_GetFlushPositionAndNormal_Statics::NewProp_WorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADisplayClusterRootActor_GetFlushPositionAndNormal_Statics::NewProp_WorldPosition_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADisplayClusterRootActor_GetFlushPositionAndNormal_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterRootActor_eventGetFlushPositionAndNormal_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADisplayClusterRootActor_GetFlushPositionAndNormal_Statics::NewProp_OutNormal = { "OutNormal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterRootActor_eventGetFlushPositionAndNormal_Parms, OutNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADisplayClusterRootActor_GetFlushPositionAndNormal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DisplayClusterRootActor_eventGetFlushPositionAndNormal_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADisplayClusterRootActor_GetFlushPositionAndNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterRootActor_eventGetFlushPositionAndNormal_Parms), &Z_Construct_UFunction_ADisplayClusterRootActor_GetFlushPositionAndNormal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADisplayClusterRootActor_GetFlushPositionAndNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADisplayClusterRootActor_GetFlushPositionAndNormal_Statics::NewProp_WorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADisplayClusterRootActor_GetFlushPositionAndNormal_Statics::NewProp_OutPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADisplayClusterRootActor_GetFlushPositionAndNormal_Statics::NewProp_OutNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADisplayClusterRootActor_GetFlushPositionAndNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADisplayClusterRootActor_GetFlushPositionAndNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADisplayClusterRootActor_GetFlushPositionAndNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADisplayClusterRootActor, nullptr, "GetFlushPositionAndNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADisplayClusterRootActor_GetFlushPositionAndNormal_Statics::DisplayClusterRootActor_eventGetFlushPositionAndNormal_Parms), Z_Construct_UFunction_ADisplayClusterRootActor_GetFlushPositionAndNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADisplayClusterRootActor_GetFlushPositionAndNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADisplayClusterRootActor_GetFlushPositionAndNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADisplayClusterRootActor_GetFlushPositionAndNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADisplayClusterRootActor_GetFlushPositionAndNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADisplayClusterRootActor_GetFlushPositionAndNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADisplayClusterRootActor_GetStageGeometryComponent_Statics
	{
		struct DisplayClusterRootActor_eventGetStageGeometryComponent_Parms
		{
			UDisplayClusterStageGeometryComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADisplayClusterRootActor_GetStageGeometryComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADisplayClusterRootActor_GetStageGeometryComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterRootActor_eventGetStageGeometryComponent_Parms, ReturnValue), Z_Construct_UClass_UDisplayClusterStageGeometryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADisplayClusterRootActor_GetStageGeometryComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADisplayClusterRootActor_GetStageGeometryComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADisplayClusterRootActor_GetStageGeometryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADisplayClusterRootActor_GetStageGeometryComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADisplayClusterRootActor_GetStageGeometryComponent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADisplayClusterRootActor_GetStageGeometryComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADisplayClusterRootActor, nullptr, "GetStageGeometryComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADisplayClusterRootActor_GetStageGeometryComponent_Statics::DisplayClusterRootActor_eventGetStageGeometryComponent_Parms), Z_Construct_UFunction_ADisplayClusterRootActor_GetStageGeometryComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADisplayClusterRootActor_GetStageGeometryComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADisplayClusterRootActor_GetStageGeometryComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADisplayClusterRootActor_GetStageGeometryComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADisplayClusterRootActor_GetStageGeometryComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADisplayClusterRootActor_GetStageGeometryComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADisplayClusterRootActor_MakeStageActorFlushToWall_Statics
	{
		struct DisplayClusterRootActor_eventMakeStageActorFlushToWall_Parms
		{
			TScriptInterface<IDisplayClusterStageActor> StageActor;
			double DesiredOffsetFromFlush;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StageActor_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_StageActor;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DesiredOffsetFromFlush;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADisplayClusterRootActor_MakeStageActorFlushToWall_Statics::NewProp_StageActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_ADisplayClusterRootActor_MakeStageActorFlushToWall_Statics::NewProp_StageActor = { "StageActor", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterRootActor_eventMakeStageActorFlushToWall_Parms, StageActor), Z_Construct_UClass_UDisplayClusterStageActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADisplayClusterRootActor_MakeStageActorFlushToWall_Statics::NewProp_StageActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADisplayClusterRootActor_MakeStageActorFlushToWall_Statics::NewProp_StageActor_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_ADisplayClusterRootActor_MakeStageActorFlushToWall_Statics::NewProp_DesiredOffsetFromFlush = { "DesiredOffsetFromFlush", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterRootActor_eventMakeStageActorFlushToWall_Parms, DesiredOffsetFromFlush), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADisplayClusterRootActor_MakeStageActorFlushToWall_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DisplayClusterRootActor_eventMakeStageActorFlushToWall_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADisplayClusterRootActor_MakeStageActorFlushToWall_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterRootActor_eventMakeStageActorFlushToWall_Parms), &Z_Construct_UFunction_ADisplayClusterRootActor_MakeStageActorFlushToWall_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADisplayClusterRootActor_MakeStageActorFlushToWall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADisplayClusterRootActor_MakeStageActorFlushToWall_Statics::NewProp_StageActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADisplayClusterRootActor_MakeStageActorFlushToWall_Statics::NewProp_DesiredOffsetFromFlush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADisplayClusterRootActor_MakeStageActorFlushToWall_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADisplayClusterRootActor_MakeStageActorFlushToWall_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay" },
		{ "CPP_Default_DesiredOffsetFromFlush", "0.000000" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADisplayClusterRootActor_MakeStageActorFlushToWall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADisplayClusterRootActor, nullptr, "MakeStageActorFlushToWall", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADisplayClusterRootActor_MakeStageActorFlushToWall_Statics::DisplayClusterRootActor_eventMakeStageActorFlushToWall_Parms), Z_Construct_UFunction_ADisplayClusterRootActor_MakeStageActorFlushToWall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADisplayClusterRootActor_MakeStageActorFlushToWall_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADisplayClusterRootActor_MakeStageActorFlushToWall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADisplayClusterRootActor_MakeStageActorFlushToWall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADisplayClusterRootActor_MakeStageActorFlushToWall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADisplayClusterRootActor_MakeStageActorFlushToWall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADisplayClusterRootActor_SetFreezeOuterViewports_Statics
	{
		struct DisplayClusterRootActor_eventSetFreezeOuterViewports_Parms
		{
			bool bEnable;
			bool ReturnValue;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADisplayClusterRootActor_SetFreezeOuterViewports_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((DisplayClusterRootActor_eventSetFreezeOuterViewports_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADisplayClusterRootActor_SetFreezeOuterViewports_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterRootActor_eventSetFreezeOuterViewports_Parms), &Z_Construct_UFunction_ADisplayClusterRootActor_SetFreezeOuterViewports_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADisplayClusterRootActor_SetFreezeOuterViewports_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DisplayClusterRootActor_eventSetFreezeOuterViewports_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADisplayClusterRootActor_SetFreezeOuterViewports_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterRootActor_eventSetFreezeOuterViewports_Parms), &Z_Construct_UFunction_ADisplayClusterRootActor_SetFreezeOuterViewports_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADisplayClusterRootActor_SetFreezeOuterViewports_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADisplayClusterRootActor_SetFreezeOuterViewports_Statics::NewProp_bEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADisplayClusterRootActor_SetFreezeOuterViewports_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADisplayClusterRootActor_SetFreezeOuterViewports_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Render" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADisplayClusterRootActor_SetFreezeOuterViewports_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADisplayClusterRootActor, nullptr, "SetFreezeOuterViewports", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADisplayClusterRootActor_SetFreezeOuterViewports_Statics::DisplayClusterRootActor_eventSetFreezeOuterViewports_Parms), Z_Construct_UFunction_ADisplayClusterRootActor_SetFreezeOuterViewports_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADisplayClusterRootActor_SetFreezeOuterViewports_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADisplayClusterRootActor_SetFreezeOuterViewports_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADisplayClusterRootActor_SetFreezeOuterViewports_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADisplayClusterRootActor_SetFreezeOuterViewports()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADisplayClusterRootActor_SetFreezeOuterViewports_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADisplayClusterRootActor_SetReplaceTextureFlagForAllViewports_Statics
	{
		struct DisplayClusterRootActor_eventSetReplaceTextureFlagForAllViewports_Parms
		{
			bool bReplace;
			bool ReturnValue;
		};
		static void NewProp_bReplace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplace;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADisplayClusterRootActor_SetReplaceTextureFlagForAllViewports_Statics::NewProp_bReplace_SetBit(void* Obj)
	{
		((DisplayClusterRootActor_eventSetReplaceTextureFlagForAllViewports_Parms*)Obj)->bReplace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADisplayClusterRootActor_SetReplaceTextureFlagForAllViewports_Statics::NewProp_bReplace = { "bReplace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterRootActor_eventSetReplaceTextureFlagForAllViewports_Parms), &Z_Construct_UFunction_ADisplayClusterRootActor_SetReplaceTextureFlagForAllViewports_Statics::NewProp_bReplace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADisplayClusterRootActor_SetReplaceTextureFlagForAllViewports_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DisplayClusterRootActor_eventSetReplaceTextureFlagForAllViewports_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADisplayClusterRootActor_SetReplaceTextureFlagForAllViewports_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterRootActor_eventSetReplaceTextureFlagForAllViewports_Parms), &Z_Construct_UFunction_ADisplayClusterRootActor_SetReplaceTextureFlagForAllViewports_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADisplayClusterRootActor_SetReplaceTextureFlagForAllViewports_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADisplayClusterRootActor_SetReplaceTextureFlagForAllViewports_Statics::NewProp_bReplace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADisplayClusterRootActor_SetReplaceTextureFlagForAllViewports_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADisplayClusterRootActor_SetReplaceTextureFlagForAllViewports_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Render" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADisplayClusterRootActor_SetReplaceTextureFlagForAllViewports_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADisplayClusterRootActor, nullptr, "SetReplaceTextureFlagForAllViewports", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADisplayClusterRootActor_SetReplaceTextureFlagForAllViewports_Statics::DisplayClusterRootActor_eventSetReplaceTextureFlagForAllViewports_Parms), Z_Construct_UFunction_ADisplayClusterRootActor_SetReplaceTextureFlagForAllViewports_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADisplayClusterRootActor_SetReplaceTextureFlagForAllViewports_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADisplayClusterRootActor_SetReplaceTextureFlagForAllViewports_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADisplayClusterRootActor_SetReplaceTextureFlagForAllViewports_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADisplayClusterRootActor_SetReplaceTextureFlagForAllViewports()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADisplayClusterRootActor_SetReplaceTextureFlagForAllViewports_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADisplayClusterRootActor_UpdateProceduralMeshComponentData_Statics
	{
		struct DisplayClusterRootActor_eventUpdateProceduralMeshComponentData_Parms
		{
			const UProceduralMeshComponent* InProceduralMeshComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InProceduralMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InProceduralMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADisplayClusterRootActor_UpdateProceduralMeshComponentData_Statics::NewProp_InProceduralMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADisplayClusterRootActor_UpdateProceduralMeshComponentData_Statics::NewProp_InProceduralMeshComponent = { "InProceduralMeshComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterRootActor_eventUpdateProceduralMeshComponentData_Parms, InProceduralMeshComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADisplayClusterRootActor_UpdateProceduralMeshComponentData_Statics::NewProp_InProceduralMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADisplayClusterRootActor_UpdateProceduralMeshComponentData_Statics::NewProp_InProceduralMeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADisplayClusterRootActor_UpdateProceduralMeshComponentData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADisplayClusterRootActor_UpdateProceduralMeshComponentData_Statics::NewProp_InProceduralMeshComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADisplayClusterRootActor_UpdateProceduralMeshComponentData_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay|Components" },
		{ "Comment", "/**\n\x09* Update the geometry of the procedural mesh component(s) referenced inside nDisplay\n\x09*\n\x09* @param InProceduralMeshComponent - (optional) Mark the specified procedural mesh component, not all\n\x09*/" },
		{ "CPP_Default_InProceduralMeshComponent", "None" },
		{ "DisplayName", "Update ProceduralMeshComponent data" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "ToolTip", "Update the geometry of the procedural mesh component(s) referenced inside nDisplay\n\n@param InProceduralMeshComponent - (optional) Mark the specified procedural mesh component, not all" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADisplayClusterRootActor_UpdateProceduralMeshComponentData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADisplayClusterRootActor, nullptr, "UpdateProceduralMeshComponentData", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADisplayClusterRootActor_UpdateProceduralMeshComponentData_Statics::DisplayClusterRootActor_eventUpdateProceduralMeshComponentData_Parms), Z_Construct_UFunction_ADisplayClusterRootActor_UpdateProceduralMeshComponentData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADisplayClusterRootActor_UpdateProceduralMeshComponentData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADisplayClusterRootActor_UpdateProceduralMeshComponentData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADisplayClusterRootActor_UpdateProceduralMeshComponentData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADisplayClusterRootActor_UpdateProceduralMeshComponentData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADisplayClusterRootActor_UpdateProceduralMeshComponentData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADisplayClusterRootActor);
	UClass* Z_Construct_UClass_ADisplayClusterRootActor_NoRegister()
	{
		return ADisplayClusterRootActor::StaticClass();
	}
	struct Z_Construct_UClass_ADisplayClusterRootActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportScreenPercentageMultiplierRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportScreenPercentageMultiplierRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportScreenPercentageRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportScreenPercentageRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportOverscanRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportOverscanRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FreezeRenderOuterViewportsRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FreezeRenderOuterViewportsRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterHideListRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClusterHideListRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterHideListRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OuterHideListRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableInnerFrustumsRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnableInnerFrustumsRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableColorGradingRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnableColorGradingRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterColorGradingRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClusterColorGradingRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerViewportColorGradingRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerViewportColorGradingRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableViewportOCIORef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnableViewportOCIORef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllViewportColorConfigurationRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllViewportColorConfigurationRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerViewportOCIOProfilesRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerViewportOCIOProfilesRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableLightcardsRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnableLightcardsRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightCardBlendingModeRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightCardBlendingModeRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightCardContentRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightCardContentRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightcardOCIOModeRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightcardOCIOModeRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightcardAllViewportColorConfigurationRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightcardAllViewportColorConfigurationRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightcardPerViewportOCIOProfilesRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightcardPerViewportOCIOProfilesRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSettingsRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediaSettingsRef;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigDataName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConfigDataName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayClusterRootComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DisplayClusterRootComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultViewPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultViewPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SyncTickComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SyncTickComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StageGeometryComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StageGeometryComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InnerFrustumPriority_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerFrustumPriority_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InnerFrustumPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentConfigData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentConfigData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMoviePipelineRenderPass_MetaData[];
#endif
		static void NewProp_bMoviePipelineRenderPass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMoviePipelineRenderPass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewEnable_MetaData[];
#endif
		static void NewProp_bPreviewEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewRenderTargetRatioMult_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviewRenderTargetRatioMult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewEnablePostProcess_MetaData[];
#endif
		static void NewProp_bPreviewEnablePostProcess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewEnablePostProcess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFreezePreviewRender_MetaData[];
#endif
		static void NewProp_bFreezePreviewRender_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFreezePreviewRender;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewICVFXFrustums_MetaData[];
#endif
		static void NewProp_bPreviewICVFXFrustums_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewICVFXFrustums;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewICVFXFrustumsFarDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviewICVFXFrustumsFarDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewNodeId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PreviewNodeId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RenderMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RenderMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickPerFrame_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TickPerFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportsPerFrame_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ViewportsPerFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMaxTextureDimension_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PreviewMaxTextureDimension;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewComponents_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PreviewComponents_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewComponents_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PreviewComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeferPreviewGeneration_MetaData[];
#endif
		static void NewProp_bDeferPreviewGeneration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferPreviewGeneration;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADisplayClusterRootActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADisplayClusterRootActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADisplayClusterRootActor_GetCommonViewPoint, "GetCommonViewPoint" }, // 40487683
		{ &Z_Construct_UFunction_ADisplayClusterRootActor_GetDefaultCamera, "GetDefaultCamera" }, // 1126059973
		{ &Z_Construct_UFunction_ADisplayClusterRootActor_GetFlushPositionAndNormal, "GetFlushPositionAndNormal" }, // 2036313246
		{ &Z_Construct_UFunction_ADisplayClusterRootActor_GetStageGeometryComponent, "GetStageGeometryComponent" }, // 1926223716
		{ &Z_Construct_UFunction_ADisplayClusterRootActor_MakeStageActorFlushToWall, "MakeStageActorFlushToWall" }, // 1513119193
		{ &Z_Construct_UFunction_ADisplayClusterRootActor_SetFreezeOuterViewports, "SetFreezeOuterViewports" }, // 360483957
		{ &Z_Construct_UFunction_ADisplayClusterRootActor_SetReplaceTextureFlagForAllViewports, "SetReplaceTextureFlagForAllViewports" }, // 2449649442
		{ &Z_Construct_UFunction_ADisplayClusterRootActor_UpdateProceduralMeshComponentData, "UpdateProceduralMeshComponentData" }, // 361783532
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * VR root. This contains nDisplay VR hierarchy in the game.\n */" },
		{ "DisplayName", "nDisplay Root Actor" },
		{ "HideCategories", "Replication Collision Input Actor HLOD Cooking Physics Activation AssetUserData ActorTick Advanced WorldPartition DataLayers Events" },
		{ "IncludePath", "DisplayClusterRootActor.h" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "VR root. This contains nDisplay VR hierarchy in the game." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ViewportScreenPercentageMultiplierRef_MetaData[] = {
		{ "Category", "Viewports" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "PropertyPath", "CurrentConfigData.RenderFrameSettings.ClusterICVFXOuterViewportBufferRatioMult" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ViewportScreenPercentageMultiplierRef = { "ViewportScreenPercentageMultiplierRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, ViewportScreenPercentageMultiplierRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ViewportScreenPercentageMultiplierRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ViewportScreenPercentageMultiplierRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ViewportScreenPercentageRef_MetaData[] = {
		{ "Category", "Viewports" },
		{ "DisplayName", "Viewport Screen Percentage" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "PropertyPath", "CurrentConfigData.Cluster.Nodes.Viewports.RenderSettings.BufferRatio" },
		{ "ToolTip", "Adjust resolution scaling for an individual viewport.  Viewport Screen Percentage Multiplier is applied to this value." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ViewportScreenPercentageRef = { "ViewportScreenPercentageRef", nullptr, (EPropertyFlags)0x0040000800002801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, ViewportScreenPercentageRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ViewportScreenPercentageRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ViewportScreenPercentageRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ViewportOverscanRef_MetaData[] = {
		{ "Category", "Viewports" },
		{ "DisplayName", "Viewport Overscan" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "PropertyPath", "CurrentConfigData.Cluster.Nodes.Viewports.RenderSettings.Overscan" },
		{ "ToolTip", "Render a larger frame than specified in the configuration to achieve continuity across displays when using post-processing effects." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ViewportOverscanRef = { "ViewportOverscanRef", nullptr, (EPropertyFlags)0x0040000800002801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, ViewportOverscanRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ViewportOverscanRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ViewportOverscanRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_FreezeRenderOuterViewportsRef_MetaData[] = {
		{ "Category", "Viewports" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "PropertyPath", "CurrentConfigData.StageSettings.bFreezeRenderOuterViewports" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_FreezeRenderOuterViewportsRef = { "FreezeRenderOuterViewportsRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, FreezeRenderOuterViewportsRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_FreezeRenderOuterViewportsRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_FreezeRenderOuterViewportsRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ClusterHideListRef_MetaData[] = {
		{ "Category", "Viewports" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "PropertyPath", "CurrentConfigData.StageSettings.HideList" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ClusterHideListRef = { "ClusterHideListRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, ClusterHideListRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ClusterHideListRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ClusterHideListRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_OuterHideListRef_MetaData[] = {
		{ "Category", "Viewports" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "PropertyPath", "CurrentConfigData.StageSettings.OuterViewportHideList" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_OuterHideListRef = { "OuterHideListRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, OuterHideListRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_OuterHideListRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_OuterHideListRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_EnableInnerFrustumsRef_MetaData[] = {
		{ "Category", "In Camera VFX" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "PropertyPath", "CurrentConfigData.StageSettings.bEnableInnerFrustums" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_EnableInnerFrustumsRef = { "EnableInnerFrustumsRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, EnableInnerFrustumsRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_EnableInnerFrustumsRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_EnableInnerFrustumsRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_EnableColorGradingRef_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "PropertyPath", "CurrentConfigData.StageSettings.EnableColorGrading" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_EnableColorGradingRef = { "EnableColorGradingRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, EnableColorGradingRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_EnableColorGradingRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_EnableColorGradingRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ClusterColorGradingRef_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "PropertyPath", "CurrentConfigData.StageSettings.EntireClusterColorGrading" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ClusterColorGradingRef = { "ClusterColorGradingRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, ClusterColorGradingRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ClusterColorGradingRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ClusterColorGradingRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PerViewportColorGradingRef_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "PropertyPath", "CurrentConfigData.StageSettings.PerViewportColorGrading" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PerViewportColorGradingRef = { "PerViewportColorGradingRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, PerViewportColorGradingRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PerViewportColorGradingRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PerViewportColorGradingRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_EnableViewportOCIORef_MetaData[] = {
		{ "Category", "OCIO" },
		{ "DisplayName", "Enable Viewport OCIO" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "PropertyPath", "CurrentConfigData.StageSettings.ViewportOCIO.AllViewportsOCIOConfiguration.bIsEnabled" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_EnableViewportOCIORef = { "EnableViewportOCIORef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, EnableViewportOCIORef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_EnableViewportOCIORef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_EnableViewportOCIORef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_AllViewportColorConfigurationRef_MetaData[] = {
		{ "Category", "OCIO" },
		{ "DisplayName", "All Viewports Color Configuration" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "PropertyPath", "CurrentConfigData.StageSettings.ViewportOCIO.AllViewportsOCIOConfiguration.ColorConfiguration" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_AllViewportColorConfigurationRef = { "AllViewportColorConfigurationRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, AllViewportColorConfigurationRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_AllViewportColorConfigurationRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_AllViewportColorConfigurationRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PerViewportOCIOProfilesRef_MetaData[] = {
		{ "Category", "OCIO" },
		{ "DisplayName", "Per-Viewport OCIO Overrides" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "PropertyPath", "CurrentConfigData.StageSettings.ViewportOCIO.PerViewportOCIOProfiles" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PerViewportOCIOProfilesRef = { "PerViewportOCIOProfilesRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, PerViewportOCIOProfilesRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PerViewportOCIOProfilesRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PerViewportOCIOProfilesRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_EnableLightcardsRef_MetaData[] = {
		{ "Category", "Light Cards" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "PropertyPath", "CurrentConfigData.StageSettings.Lightcard.bEnable" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_EnableLightcardsRef = { "EnableLightcardsRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, EnableLightcardsRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_EnableLightcardsRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_EnableLightcardsRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_LightCardBlendingModeRef_MetaData[] = {
		{ "Category", "Light Cards" },
		{ "EditConditionPath", "CurrentConfigData.StageSettings.Lightcard.bEnable" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "PropertyPath", "CurrentConfigData.StageSettings.Lightcard.Blendingmode" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_LightCardBlendingModeRef = { "LightCardBlendingModeRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, LightCardBlendingModeRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_LightCardBlendingModeRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_LightCardBlendingModeRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_LightCardContentRef_MetaData[] = {
		{ "Category", "Light Cards" },
		{ "EditConditionPath", "CurrentConfigData.StageSettings.Lightcard.bEnable" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "PropertyPath", "CurrentConfigData.StageSettings.Lightcard.ShowOnlyList" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_LightCardContentRef = { "LightCardContentRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, LightCardContentRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_LightCardContentRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_LightCardContentRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_LightcardOCIOModeRef_MetaData[] = {
		{ "Category", "Light Cards" },
		{ "DisplayName", "Light Cards OCIO" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "PropertyPath", "CurrentConfigData.StageSettings.Lightcard.LightcardOCIO.LightcardOCIOMode" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_LightcardOCIOModeRef = { "LightcardOCIOModeRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, LightcardOCIOModeRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_LightcardOCIOModeRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_LightcardOCIOModeRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_LightcardAllViewportColorConfigurationRef_MetaData[] = {
		{ "Category", "Light Cards" },
		{ "DisplayName", "All Viewports Color Configuration" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "PropertyPath", "CurrentConfigData.StageSettings.Lightcard.LightcardOCIO.CustomOCIO.AllViewportsOCIOConfiguration.ColorConfiguration" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_LightcardAllViewportColorConfigurationRef = { "LightcardAllViewportColorConfigurationRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, LightcardAllViewportColorConfigurationRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_LightcardAllViewportColorConfigurationRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_LightcardAllViewportColorConfigurationRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_LightcardPerViewportOCIOProfilesRef_MetaData[] = {
		{ "Category", "Light Cards" },
		{ "DisplayName", "Per-Viewport OCIO Overrides" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "PropertyPath", "CurrentConfigData.StageSettings.Lightcard.LightcardOCIO.CustomOCIO.PerViewportOCIOProfiles" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_LightcardPerViewportOCIOProfilesRef = { "LightcardPerViewportOCIOProfilesRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, LightcardPerViewportOCIOProfilesRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_LightcardPerViewportOCIOProfilesRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_LightcardPerViewportOCIOProfilesRef_MetaData)) }; // 3388615158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_MediaSettingsRef_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "// Media\n" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "PropertyPath", "CurrentConfigData.MediaSettings" },
		{ "ToolTip", "Media" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_MediaSettingsRef = { "MediaSettingsRef", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, MediaSettingsRef), Z_Construct_UScriptStruct_FDisplayClusterEditorPropertyReference, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_MediaSettingsRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_MediaSettingsRef_MetaData)) }; // 3388615158
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ConfigDataName_MetaData[] = {
		{ "Comment", "/**\n\x09 * Name of the CurrentConfigData asset. Only required if this is a parent of a DisplayClusterBlueprint.\n\x09 * The name is used to lookup the config data as a default sub-object, specifically in packaged builds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "ToolTip", "Name of the CurrentConfigData asset. Only required if this is a parent of a DisplayClusterBlueprint.\nThe name is used to lookup the config data as a default sub-object, specifically in packaged builds." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ConfigDataName = { "ConfigDataName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, ConfigDataName), METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ConfigDataName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ConfigDataName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_DisplayClusterRootComponent_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "/**\n\x09 * The root component for our hierarchy.\n\x09 * Must have CPF_Edit(such as VisibleDefaultsOnly) on property for Live Link.\n\x09 * nDisplay details panel will hide this from actually being visible.\n\x09 */" },
		{ "EditInline", "true" },
		{ "HideProperty", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "ToolTip", "The root component for our hierarchy.\nMust have CPF_Edit(such as VisibleDefaultsOnly) on property for Live Link.\nnDisplay details panel will hide this from actually being visible." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_DisplayClusterRootComponent = { "DisplayClusterRootComponent", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, DisplayClusterRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_DisplayClusterRootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_DisplayClusterRootComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_DefaultViewPoint_MetaData[] = {
		{ "BlueprintGetter", "GetDefaultCamera" },
		{ "Category", "NDisplay|Components" },
		{ "Comment", "/**\n\x09 * Default camera component. It's an outer camera in VP/ICVFX terminology. Always exists on a DCRA instance.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "ToolTip", "Default camera component. It's an outer camera in VP/ICVFX terminology. Always exists on a DCRA instance." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_DefaultViewPoint = { "DefaultViewPoint", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, DefaultViewPoint), Z_Construct_UClass_UDisplayClusterCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_DefaultViewPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_DefaultViewPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_SyncTickComponent_MetaData[] = {
		{ "Comment", "/**\n\x09 * Helper sync component. Performs sync procedure during Tick phase.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "ToolTip", "Helper sync component. Performs sync procedure during Tick phase." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_SyncTickComponent = { "SyncTickComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, SyncTickComponent), Z_Construct_UClass_UDisplayClusterSyncTickComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_SyncTickComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_SyncTickComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_StageGeometryComponent_MetaData[] = {
		{ "Comment", "/** Component that stores the stage's geometry map, which is used to make objects flush with the stage's walls and ceilings */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "ToolTip", "Component that stores the stage's geometry map, which is used to make objects flush with the stage's walls and ceilings" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_StageGeometryComponent = { "StageGeometryComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, StageGeometryComponent), Z_Construct_UClass_UDisplayClusterStageGeometryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_StageGeometryComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_StageGeometryComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_InnerFrustumPriority_Inner = { "InnerFrustumPriority", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDisplayClusterComponentRef, METADATA_PARAMS(nullptr, 0) }; // 2520873510
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_InnerFrustumPriority_MetaData[] = {
		{ "Category", "In Camera VFX" },
		{ "Comment", "/** Set the priority for inner frustum rendering if there is any overlap when enabling multiple ICVFX cameras. */" },
		{ "DisplayAfter", "ViewportAllowInnerFrustumRef" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "TitleProperty", "Name" },
		{ "ToolTip", "Set the priority for inner frustum rendering if there is any overlap when enabling multiple ICVFX cameras." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_InnerFrustumPriority = { "InnerFrustumPriority", nullptr, (EPropertyFlags)0x0010000000000841, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, InnerFrustumPriority), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_InnerFrustumPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_InnerFrustumPriority_MetaData)) }; // 2520873510
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_CurrentConfigData_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NDisplay" },
		{ "Comment", "/**\n\x09 * If set from the DisplayCluster BP Compiler it will be loaded from the class default subobjects in run-time.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "ToolTip", "If set from the DisplayCluster BP Compiler it will be loaded from the class default subobjects in run-time." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_CurrentConfigData = { "CurrentConfigData", nullptr, (EPropertyFlags)0x00160000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, CurrentConfigData), Z_Construct_UClass_UDisplayClusterConfigurationData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_CurrentConfigData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_CurrentConfigData_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bMoviePipelineRenderPass_MetaData[] = {
		{ "Comment", "/** When the MRQ is rendered, this flag is raised. */" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "ToolTip", "When the MRQ is rendered, this flag is raised." },
	};
#endif
	void Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bMoviePipelineRenderPass_SetBit(void* Obj)
	{
		((ADisplayClusterRootActor*)Obj)->bMoviePipelineRenderPass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bMoviePipelineRenderPass = { "bMoviePipelineRenderPass", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADisplayClusterRootActor), &Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bMoviePipelineRenderPass_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bMoviePipelineRenderPass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bMoviePipelineRenderPass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bPreviewEnable_MetaData[] = {
		{ "Category", "Editor Preview" },
		{ "Comment", "/** Render the scene and display it as a preview on the nDisplay root actor in the editor.  This will impact editor performance. */" },
		{ "DisplayName", "Enable Editor Preview" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "ToolTip", "Render the scene and display it as a preview on the nDisplay root actor in the editor.  This will impact editor performance." },
	};
#endif
	void Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bPreviewEnable_SetBit(void* Obj)
	{
		((ADisplayClusterRootActor*)Obj)->bPreviewEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bPreviewEnable = { "bPreviewEnable", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADisplayClusterRootActor), &Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bPreviewEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bPreviewEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bPreviewEnable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewRenderTargetRatioMult_MetaData[] = {
		{ "Category", "Editor Preview" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0.05" },
		{ "Comment", "/** Adjust resolution scaling for the editor preview. */" },
		{ "DisplayName", "Preview Screen Percentage" },
		{ "EditCondition", "bPreviewEnable" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "ToolTip", "Adjust resolution scaling for the editor preview." },
		{ "UIMax", "1" },
		{ "UIMin", "0.05" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewRenderTargetRatioMult = { "PreviewRenderTargetRatioMult", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, PreviewRenderTargetRatioMult), METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewRenderTargetRatioMult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewRenderTargetRatioMult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bPreviewEnablePostProcess_MetaData[] = {
		{ "Category", "Editor Preview" },
		{ "Comment", "/** Enable PostProcess for preview. */" },
		{ "DisplayName", "Enable Post Process" },
		{ "EditCondition", "bPreviewEnable" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "ToolTip", "Enable PostProcess for preview." },
	};
#endif
	void Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bPreviewEnablePostProcess_SetBit(void* Obj)
	{
		((ADisplayClusterRootActor*)Obj)->bPreviewEnablePostProcess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bPreviewEnablePostProcess = { "bPreviewEnablePostProcess", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADisplayClusterRootActor), &Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bPreviewEnablePostProcess_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bPreviewEnablePostProcess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bPreviewEnablePostProcess_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bFreezePreviewRender_MetaData[] = {
		{ "Category", "Editor Preview" },
		{ "Comment", "/** Freeze preview render.  This will impact editor performance. */" },
		{ "DisplayName", "Freeze Editor Preview" },
		{ "EditCondition", "bPreviewEnable" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "ToolTip", "Freeze preview render.  This will impact editor performance." },
	};
#endif
	void Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bFreezePreviewRender_SetBit(void* Obj)
	{
		((ADisplayClusterRootActor*)Obj)->bFreezePreviewRender = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bFreezePreviewRender = { "bFreezePreviewRender", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADisplayClusterRootActor), &Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bFreezePreviewRender_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bFreezePreviewRender_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bFreezePreviewRender_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bPreviewICVFXFrustums_MetaData[] = {
		{ "Category", "Editor Preview" },
		{ "Comment", "/** Render ICVFX Frustums */" },
		{ "DisplayName", "Enable Camera Frustums" },
		{ "EditCondition", "bPreviewEnable" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "ToolTip", "Render ICVFX Frustums" },
	};
#endif
	void Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bPreviewICVFXFrustums_SetBit(void* Obj)
	{
		((ADisplayClusterRootActor*)Obj)->bPreviewICVFXFrustums = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bPreviewICVFXFrustums = { "bPreviewICVFXFrustums", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADisplayClusterRootActor), &Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bPreviewICVFXFrustums_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bPreviewICVFXFrustums_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bPreviewICVFXFrustums_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewICVFXFrustumsFarDistance_MetaData[] = {
		{ "Category", "Editor Preview" },
		{ "Comment", "/** Render ICVFX Frustums */" },
		{ "DisplayName", "Camera Frustum Distance" },
		{ "EditCondition", "bPreviewEnable" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "ToolTip", "Render ICVFX Frustums" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewICVFXFrustumsFarDistance = { "PreviewICVFXFrustumsFarDistance", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, PreviewICVFXFrustumsFarDistance), METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewICVFXFrustumsFarDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewICVFXFrustumsFarDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewNodeId_MetaData[] = {
		{ "Category", "Editor Preview" },
		{ "Comment", "/** Selectively preview a specific viewport or show all/none. */" },
		{ "DisplayName", "Preview Node" },
		{ "EditCondition", "bPreviewEnable" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "ToolTip", "Selectively preview a specific viewport or show all/none." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewNodeId = { "PreviewNodeId", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, PreviewNodeId), METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewNodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewNodeId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_RenderMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_RenderMode_MetaData[] = {
		{ "Category", "Editor Preview" },
		{ "Comment", "/** Render Mode */" },
		{ "DisplayName", "Render Mode" },
		{ "EditCondition", "bPreviewEnable" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "ToolTip", "Render Mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_RenderMode = { "RenderMode", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, RenderMode), Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderMode, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_RenderMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_RenderMode_MetaData)) }; // 3950211998
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_TickPerFrame_MetaData[] = {
		{ "Category", "Editor Preview" },
		{ "ClampMax", "200" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Tick Per Frame */" },
		{ "DisplayName", "Tick Per Frame" },
		{ "EditCondition", "bPreviewEnable" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "ToolTip", "Tick Per Frame" },
		{ "UIMax", "200" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_TickPerFrame = { "TickPerFrame", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, TickPerFrame), METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_TickPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_TickPerFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ViewportsPerFrame_MetaData[] = {
		{ "Category", "Editor Preview" },
		{ "ClampMax", "200" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Max amount of Viewports Per Frame */" },
		{ "DisplayName", "Viewports Per Frame" },
		{ "EditCondition", "bPreviewEnable" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "ToolTip", "Max amount of Viewports Per Frame" },
		{ "UIMax", "200" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ViewportsPerFrame = { "ViewportsPerFrame", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, ViewportsPerFrame), METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ViewportsPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ViewportsPerFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewMaxTextureDimension_MetaData[] = {
		{ "Category", "Editor Preview" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "64" },
		{ "Comment", "/** The maximum dimension of any internal texture for preview. Use less memory for large preview viewports */" },
		{ "DisplayName", "Preview Texture Max Size" },
		{ "EditCondition", "bPreviewEnable" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
		{ "ToolTip", "The maximum dimension of any internal texture for preview. Use less memory for large preview viewports" },
		{ "UIMax", "4096" },
		{ "UIMin", "64" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewMaxTextureDimension = { "PreviewMaxTextureDimension", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, PreviewMaxTextureDimension), METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewMaxTextureDimension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewMaxTextureDimension_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewComponents_ValueProp = { "PreviewComponents", nullptr, (EPropertyFlags)0x0004000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UDisplayClusterPreviewComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewComponents_Key_KeyProp = { "PreviewComponents_Key", nullptr, (EPropertyFlags)0x0000000800080008, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewComponents = { "PreviewComponents", nullptr, (EPropertyFlags)0x0044008800002008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterRootActor, PreviewComponents), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bDeferPreviewGeneration_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisplayClusterRootActor.h" },
	};
#endif
	void Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bDeferPreviewGeneration_SetBit(void* Obj)
	{
		((ADisplayClusterRootActor*)Obj)->bDeferPreviewGeneration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bDeferPreviewGeneration = { "bDeferPreviewGeneration", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADisplayClusterRootActor), &Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bDeferPreviewGeneration_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bDeferPreviewGeneration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bDeferPreviewGeneration_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADisplayClusterRootActor_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ViewportScreenPercentageMultiplierRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ViewportScreenPercentageRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ViewportOverscanRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_FreezeRenderOuterViewportsRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ClusterHideListRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_OuterHideListRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_EnableInnerFrustumsRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_EnableColorGradingRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ClusterColorGradingRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PerViewportColorGradingRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_EnableViewportOCIORef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_AllViewportColorConfigurationRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PerViewportOCIOProfilesRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_EnableLightcardsRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_LightCardBlendingModeRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_LightCardContentRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_LightcardOCIOModeRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_LightcardAllViewportColorConfigurationRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_LightcardPerViewportOCIOProfilesRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_MediaSettingsRef,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ConfigDataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_DisplayClusterRootComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_DefaultViewPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_SyncTickComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_StageGeometryComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_InnerFrustumPriority_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_InnerFrustumPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_CurrentConfigData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bMoviePipelineRenderPass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bPreviewEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewRenderTargetRatioMult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bPreviewEnablePostProcess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bFreezePreviewRender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bPreviewICVFXFrustums,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewICVFXFrustumsFarDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewNodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_RenderMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_RenderMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_TickPerFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_ViewportsPerFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewMaxTextureDimension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewComponents_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewComponents_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_PreviewComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterRootActor_Statics::NewProp_bDeferPreviewGeneration,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADisplayClusterRootActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADisplayClusterRootActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADisplayClusterRootActor_Statics::ClassParams = {
		&ADisplayClusterRootActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADisplayClusterRootActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterRootActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterRootActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADisplayClusterRootActor()
	{
		if (!Z_Registration_Info_UClass_ADisplayClusterRootActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADisplayClusterRootActor.OuterSingleton, Z_Construct_UClass_ADisplayClusterRootActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADisplayClusterRootActor.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<ADisplayClusterRootActor>()
	{
		return ADisplayClusterRootActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADisplayClusterRootActor);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADisplayClusterRootActor, ADisplayClusterRootActor::StaticClass, TEXT("ADisplayClusterRootActor"), &Z_Registration_Info_UClass_ADisplayClusterRootActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADisplayClusterRootActor), 1855767841U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_2291785295(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
