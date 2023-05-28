// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/JumpFloodComponent2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJumpFloodComponent2D() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WaterEditor();
	WATEREDITOR_API UClass* Z_Construct_UClass_UJumpFloodComponent2D();
	WATEREDITOR_API UClass* Z_Construct_UClass_UJumpFloodComponent2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UJumpFloodComponent2D::execSingleBlurStep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->SingleBlurStep();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJumpFloodComponent2D::execFindEdges_Debug)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_SeedRT);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CaptureZ);
		P_GET_STRUCT(FLinearColor,Z_Param_Curl);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_DestRT);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ZOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindEdges_Debug(Z_Param_SeedRT,Z_Param_CaptureZ,Z_Param_Curl,Z_Param_DestRT,Z_Param_ZOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJumpFloodComponent2D::execFindEdges)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_SeedRT);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CaptureZ);
		P_GET_STRUCT(FLinearColor,Z_Param_Curl);
		P_GET_UBOOL(Z_Param_UseDepth);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ZxLocationT);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->FindEdges(Z_Param_SeedRT,Z_Param_CaptureZ,Z_Param_Curl,Z_Param_UseDepth,Z_Param_ZxLocationT);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJumpFloodComponent2D::execSingleJumpStep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->SingleJumpStep();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJumpFloodComponent2D::execJumpFlood)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_SeedRT);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SceneCaptureZ);
		P_GET_STRUCT(FLinearColor,Z_Param_Curl);
		P_GET_UBOOL(Z_Param_UseDepth);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ZxLocationT);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpFlood(Z_Param_SeedRT,Z_Param_SceneCaptureZ,Z_Param_Curl,Z_Param_UseDepth,Z_Param_ZxLocationT);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJumpFloodComponent2D::execAssignRenderTargets)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InRTA);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InRTB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssignRenderTargets(Z_Param_InRTA,Z_Param_InRTB);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJumpFloodComponent2D::execCreateMIDs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateMIDs();
		P_NATIVE_END;
	}
	void UJumpFloodComponent2D::StaticRegisterNativesUJumpFloodComponent2D()
	{
		UClass* Class = UJumpFloodComponent2D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssignRenderTargets", &UJumpFloodComponent2D::execAssignRenderTargets },
			{ "CreateMIDs", &UJumpFloodComponent2D::execCreateMIDs },
			{ "FindEdges", &UJumpFloodComponent2D::execFindEdges },
			{ "FindEdges_Debug", &UJumpFloodComponent2D::execFindEdges_Debug },
			{ "JumpFlood", &UJumpFloodComponent2D::execJumpFlood },
			{ "SingleBlurStep", &UJumpFloodComponent2D::execSingleBlurStep },
			{ "SingleJumpStep", &UJumpFloodComponent2D::execSingleJumpStep },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJumpFloodComponent2D_AssignRenderTargets_Statics
	{
		struct JumpFloodComponent2D_eventAssignRenderTargets_Parms
		{
			UTextureRenderTarget2D* InRTA;
			UTextureRenderTarget2D* InRTB;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRTA;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRTB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJumpFloodComponent2D_AssignRenderTargets_Statics::NewProp_InRTA = { "InRTA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JumpFloodComponent2D_eventAssignRenderTargets_Parms, InRTA), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJumpFloodComponent2D_AssignRenderTargets_Statics::NewProp_InRTB = { "InRTB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JumpFloodComponent2D_eventAssignRenderTargets_Parms, InRTB), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJumpFloodComponent2D_AssignRenderTargets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJumpFloodComponent2D_AssignRenderTargets_Statics::NewProp_InRTA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJumpFloodComponent2D_AssignRenderTargets_Statics::NewProp_InRTB,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJumpFloodComponent2D_AssignRenderTargets_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Private/JumpFloodComponent2D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJumpFloodComponent2D_AssignRenderTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJumpFloodComponent2D, nullptr, "AssignRenderTargets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJumpFloodComponent2D_AssignRenderTargets_Statics::JumpFloodComponent2D_eventAssignRenderTargets_Parms), Z_Construct_UFunction_UJumpFloodComponent2D_AssignRenderTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJumpFloodComponent2D_AssignRenderTargets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJumpFloodComponent2D_AssignRenderTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJumpFloodComponent2D_AssignRenderTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJumpFloodComponent2D_AssignRenderTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJumpFloodComponent2D_AssignRenderTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJumpFloodComponent2D_CreateMIDs_Statics
	{
		struct JumpFloodComponent2D_eventCreateMIDs_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UJumpFloodComponent2D_CreateMIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JumpFloodComponent2D_eventCreateMIDs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJumpFloodComponent2D_CreateMIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JumpFloodComponent2D_eventCreateMIDs_Parms), &Z_Construct_UFunction_UJumpFloodComponent2D_CreateMIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJumpFloodComponent2D_CreateMIDs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJumpFloodComponent2D_CreateMIDs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJumpFloodComponent2D_CreateMIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Private/JumpFloodComponent2D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJumpFloodComponent2D_CreateMIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJumpFloodComponent2D, nullptr, "CreateMIDs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJumpFloodComponent2D_CreateMIDs_Statics::JumpFloodComponent2D_eventCreateMIDs_Parms), Z_Construct_UFunction_UJumpFloodComponent2D_CreateMIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJumpFloodComponent2D_CreateMIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJumpFloodComponent2D_CreateMIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJumpFloodComponent2D_CreateMIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJumpFloodComponent2D_CreateMIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJumpFloodComponent2D_CreateMIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Statics
	{
		struct JumpFloodComponent2D_eventFindEdges_Parms
		{
			UTextureRenderTarget2D* SeedRT;
			float CaptureZ;
			FLinearColor Curl;
			bool UseDepth;
			float ZxLocationT;
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SeedRT;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CaptureZ;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curl;
		static void NewProp_UseDepth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseDepth;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZxLocationT;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Statics::NewProp_SeedRT = { "SeedRT", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JumpFloodComponent2D_eventFindEdges_Parms, SeedRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Statics::NewProp_CaptureZ = { "CaptureZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JumpFloodComponent2D_eventFindEdges_Parms, CaptureZ), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Statics::NewProp_Curl = { "Curl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JumpFloodComponent2D_eventFindEdges_Parms, Curl), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Statics::NewProp_UseDepth_SetBit(void* Obj)
	{
		((JumpFloodComponent2D_eventFindEdges_Parms*)Obj)->UseDepth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Statics::NewProp_UseDepth = { "UseDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JumpFloodComponent2D_eventFindEdges_Parms), &Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Statics::NewProp_UseDepth_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Statics::NewProp_ZxLocationT = { "ZxLocationT", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JumpFloodComponent2D_eventFindEdges_Parms, ZxLocationT), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JumpFloodComponent2D_eventFindEdges_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Statics::NewProp_SeedRT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Statics::NewProp_CaptureZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Statics::NewProp_Curl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Statics::NewProp_UseDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Statics::NewProp_ZxLocationT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Private/JumpFloodComponent2D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJumpFloodComponent2D, nullptr, "FindEdges", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Statics::JumpFloodComponent2D_eventFindEdges_Parms), Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Debug_Statics
	{
		struct JumpFloodComponent2D_eventFindEdges_Debug_Parms
		{
			UTextureRenderTarget2D* SeedRT;
			float CaptureZ;
			FLinearColor Curl;
			UTextureRenderTarget2D* DestRT;
			float ZOffset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SeedRT;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CaptureZ;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curl;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DestRT;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Debug_Statics::NewProp_SeedRT = { "SeedRT", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JumpFloodComponent2D_eventFindEdges_Debug_Parms, SeedRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Debug_Statics::NewProp_CaptureZ = { "CaptureZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JumpFloodComponent2D_eventFindEdges_Debug_Parms, CaptureZ), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Debug_Statics::NewProp_Curl = { "Curl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JumpFloodComponent2D_eventFindEdges_Debug_Parms, Curl), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Debug_Statics::NewProp_DestRT = { "DestRT", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JumpFloodComponent2D_eventFindEdges_Debug_Parms, DestRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Debug_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JumpFloodComponent2D_eventFindEdges_Debug_Parms, ZOffset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Debug_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Debug_Statics::NewProp_SeedRT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Debug_Statics::NewProp_CaptureZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Debug_Statics::NewProp_Curl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Debug_Statics::NewProp_DestRT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Debug_Statics::NewProp_ZOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Debug_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Private/JumpFloodComponent2D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Debug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJumpFloodComponent2D, nullptr, "FindEdges_Debug", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Debug_Statics::JumpFloodComponent2D_eventFindEdges_Debug_Parms), Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Debug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Debug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Debug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Debug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Debug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Debug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJumpFloodComponent2D_JumpFlood_Statics
	{
		struct JumpFloodComponent2D_eventJumpFlood_Parms
		{
			UTextureRenderTarget2D* SeedRT;
			float SceneCaptureZ;
			FLinearColor Curl;
			bool UseDepth;
			float ZxLocationT;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SeedRT;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SceneCaptureZ;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curl;
		static void NewProp_UseDepth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseDepth;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZxLocationT;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJumpFloodComponent2D_JumpFlood_Statics::NewProp_SeedRT = { "SeedRT", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JumpFloodComponent2D_eventJumpFlood_Parms, SeedRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJumpFloodComponent2D_JumpFlood_Statics::NewProp_SceneCaptureZ = { "SceneCaptureZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JumpFloodComponent2D_eventJumpFlood_Parms, SceneCaptureZ), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJumpFloodComponent2D_JumpFlood_Statics::NewProp_Curl = { "Curl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JumpFloodComponent2D_eventJumpFlood_Parms, Curl), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJumpFloodComponent2D_JumpFlood_Statics::NewProp_UseDepth_SetBit(void* Obj)
	{
		((JumpFloodComponent2D_eventJumpFlood_Parms*)Obj)->UseDepth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJumpFloodComponent2D_JumpFlood_Statics::NewProp_UseDepth = { "UseDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JumpFloodComponent2D_eventJumpFlood_Parms), &Z_Construct_UFunction_UJumpFloodComponent2D_JumpFlood_Statics::NewProp_UseDepth_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJumpFloodComponent2D_JumpFlood_Statics::NewProp_ZxLocationT = { "ZxLocationT", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JumpFloodComponent2D_eventJumpFlood_Parms, ZxLocationT), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJumpFloodComponent2D_JumpFlood_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJumpFloodComponent2D_JumpFlood_Statics::NewProp_SeedRT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJumpFloodComponent2D_JumpFlood_Statics::NewProp_SceneCaptureZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJumpFloodComponent2D_JumpFlood_Statics::NewProp_Curl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJumpFloodComponent2D_JumpFlood_Statics::NewProp_UseDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJumpFloodComponent2D_JumpFlood_Statics::NewProp_ZxLocationT,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJumpFloodComponent2D_JumpFlood_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Private/JumpFloodComponent2D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJumpFloodComponent2D_JumpFlood_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJumpFloodComponent2D, nullptr, "JumpFlood", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJumpFloodComponent2D_JumpFlood_Statics::JumpFloodComponent2D_eventJumpFlood_Parms), Z_Construct_UFunction_UJumpFloodComponent2D_JumpFlood_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJumpFloodComponent2D_JumpFlood_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJumpFloodComponent2D_JumpFlood_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJumpFloodComponent2D_JumpFlood_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJumpFloodComponent2D_JumpFlood()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJumpFloodComponent2D_JumpFlood_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJumpFloodComponent2D_SingleBlurStep_Statics
	{
		struct JumpFloodComponent2D_eventSingleBlurStep_Parms
		{
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJumpFloodComponent2D_SingleBlurStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JumpFloodComponent2D_eventSingleBlurStep_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJumpFloodComponent2D_SingleBlurStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJumpFloodComponent2D_SingleBlurStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJumpFloodComponent2D_SingleBlurStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Private/JumpFloodComponent2D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJumpFloodComponent2D_SingleBlurStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJumpFloodComponent2D, nullptr, "SingleBlurStep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJumpFloodComponent2D_SingleBlurStep_Statics::JumpFloodComponent2D_eventSingleBlurStep_Parms), Z_Construct_UFunction_UJumpFloodComponent2D_SingleBlurStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJumpFloodComponent2D_SingleBlurStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJumpFloodComponent2D_SingleBlurStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJumpFloodComponent2D_SingleBlurStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJumpFloodComponent2D_SingleBlurStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJumpFloodComponent2D_SingleBlurStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJumpFloodComponent2D_SingleJumpStep_Statics
	{
		struct JumpFloodComponent2D_eventSingleJumpStep_Parms
		{
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJumpFloodComponent2D_SingleJumpStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JumpFloodComponent2D_eventSingleJumpStep_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJumpFloodComponent2D_SingleJumpStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJumpFloodComponent2D_SingleJumpStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJumpFloodComponent2D_SingleJumpStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Private/JumpFloodComponent2D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJumpFloodComponent2D_SingleJumpStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJumpFloodComponent2D, nullptr, "SingleJumpStep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJumpFloodComponent2D_SingleJumpStep_Statics::JumpFloodComponent2D_eventSingleJumpStep_Parms), Z_Construct_UFunction_UJumpFloodComponent2D_SingleJumpStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJumpFloodComponent2D_SingleJumpStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJumpFloodComponent2D_SingleJumpStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJumpFloodComponent2D_SingleJumpStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJumpFloodComponent2D_SingleJumpStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJumpFloodComponent2D_SingleJumpStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJumpFloodComponent2D);
	UClass* Z_Construct_UClass_UJumpFloodComponent2D_NoRegister()
	{
		return UJumpFloodComponent2D::StaticClass();
	}
	struct Z_Construct_UClass_UJumpFloodComponent2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpStepMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_JumpStepMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FindEdgesMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FindEdgesMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlurEdgesMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlurEdgesMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseBlur_MetaData[];
#endif
		static void NewProp_UseBlur_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseBlur;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlurPasses_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BlurPasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RTA_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RTA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RTB_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RTB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpStepMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_JumpStepMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FindEdgesMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FindEdgesMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlurEdgesMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlurEdgesMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredPasses_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredPasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompletedPasses_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CompletedPasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompletedBlurPasses_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CompletedBlurPasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJumpFloodComponent2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJumpFloodComponent2D_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJumpFloodComponent2D_AssignRenderTargets, "AssignRenderTargets" }, // 2140385418
		{ &Z_Construct_UFunction_UJumpFloodComponent2D_CreateMIDs, "CreateMIDs" }, // 3302070324
		{ &Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges, "FindEdges" }, // 1984164397
		{ &Z_Construct_UFunction_UJumpFloodComponent2D_FindEdges_Debug, "FindEdges_Debug" }, // 34689689
		{ &Z_Construct_UFunction_UJumpFloodComponent2D_JumpFlood, "JumpFlood" }, // 1635128510
		{ &Z_Construct_UFunction_UJumpFloodComponent2D_SingleBlurStep, "SingleBlurStep" }, // 710484843
		{ &Z_Construct_UFunction_UJumpFloodComponent2D_SingleJumpStep, "SingleJumpStep" }, // 1907069608
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJumpFloodComponent2D_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "JumpFloodComponent2D.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/JumpFloodComponent2D.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_JumpStepMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Private/JumpFloodComponent2D.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_JumpStepMaterial = { "JumpStepMaterial", nullptr, (EPropertyFlags)0x0014040000000805, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJumpFloodComponent2D, JumpStepMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_JumpStepMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_JumpStepMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_FindEdgesMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Private/JumpFloodComponent2D.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_FindEdgesMaterial = { "FindEdgesMaterial", nullptr, (EPropertyFlags)0x0014040000000805, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJumpFloodComponent2D, FindEdgesMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_FindEdgesMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_FindEdgesMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_BlurEdgesMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Private/JumpFloodComponent2D.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_BlurEdgesMaterial = { "BlurEdgesMaterial", nullptr, (EPropertyFlags)0x0014040000000805, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJumpFloodComponent2D, BlurEdgesMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_BlurEdgesMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_BlurEdgesMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_UseBlur_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/JumpFloodComponent2D.h" },
	};
#endif
	void Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_UseBlur_SetBit(void* Obj)
	{
		((UJumpFloodComponent2D*)Obj)->UseBlur = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_UseBlur = { "UseBlur", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UJumpFloodComponent2D), &Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_UseBlur_SetBit, METADATA_PARAMS(Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_UseBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_UseBlur_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_BlurPasses_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/JumpFloodComponent2D.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_BlurPasses = { "BlurPasses", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJumpFloodComponent2D, BlurPasses), METADATA_PARAMS(Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_BlurPasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_BlurPasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_RTA_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/JumpFloodComponent2D.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_RTA = { "RTA", nullptr, (EPropertyFlags)0x0044040000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJumpFloodComponent2D, RTA), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_RTA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_RTA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_RTB_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Private/JumpFloodComponent2D.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_RTB = { "RTB", nullptr, (EPropertyFlags)0x0044040000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJumpFloodComponent2D, RTB), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_RTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_RTB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_JumpStepMID_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Transient properties (exposed only for debugging reasons) :\n" },
		{ "ModuleRelativePath", "Private/JumpFloodComponent2D.h" },
		{ "ToolTip", "Transient properties (exposed only for debugging reasons) :" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_JumpStepMID = { "JumpStepMID", nullptr, (EPropertyFlags)0x0044040000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJumpFloodComponent2D, JumpStepMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_JumpStepMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_JumpStepMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_FindEdgesMID_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Private/JumpFloodComponent2D.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_FindEdgesMID = { "FindEdgesMID", nullptr, (EPropertyFlags)0x0044040000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJumpFloodComponent2D, FindEdgesMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_FindEdgesMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_FindEdgesMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_BlurEdgesMID_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Private/JumpFloodComponent2D.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_BlurEdgesMID = { "BlurEdgesMID", nullptr, (EPropertyFlags)0x0044040000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJumpFloodComponent2D, BlurEdgesMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_BlurEdgesMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_BlurEdgesMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_RequiredPasses_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Private/JumpFloodComponent2D.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_RequiredPasses = { "RequiredPasses", nullptr, (EPropertyFlags)0x0040040000022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJumpFloodComponent2D, RequiredPasses), METADATA_PARAMS(Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_RequiredPasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_RequiredPasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_CompletedPasses_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Private/JumpFloodComponent2D.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_CompletedPasses = { "CompletedPasses", nullptr, (EPropertyFlags)0x0040040000022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJumpFloodComponent2D, CompletedPasses), METADATA_PARAMS(Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_CompletedPasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_CompletedPasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_CompletedBlurPasses_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Private/JumpFloodComponent2D.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_CompletedBlurPasses = { "CompletedBlurPasses", nullptr, (EPropertyFlags)0x0040040000022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJumpFloodComponent2D, CompletedBlurPasses), METADATA_PARAMS(Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_CompletedBlurPasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_CompletedBlurPasses_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJumpFloodComponent2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_JumpStepMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_FindEdgesMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_BlurEdgesMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_UseBlur,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_BlurPasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_RTA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_RTB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_JumpStepMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_FindEdgesMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_BlurEdgesMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_RequiredPasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_CompletedPasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJumpFloodComponent2D_Statics::NewProp_CompletedBlurPasses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJumpFloodComponent2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJumpFloodComponent2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJumpFloodComponent2D_Statics::ClassParams = {
		&UJumpFloodComponent2D::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UJumpFloodComponent2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UJumpFloodComponent2D_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UJumpFloodComponent2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJumpFloodComponent2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJumpFloodComponent2D()
	{
		if (!Z_Registration_Info_UClass_UJumpFloodComponent2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJumpFloodComponent2D.OuterSingleton, Z_Construct_UClass_UJumpFloodComponent2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJumpFloodComponent2D.OuterSingleton;
	}
	template<> WATEREDITOR_API UClass* StaticClass<UJumpFloodComponent2D>()
	{
		return UJumpFloodComponent2D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJumpFloodComponent2D);
	UJumpFloodComponent2D::~UJumpFloodComponent2D() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJumpFloodComponent2D, UJumpFloodComponent2D::StaticClass, TEXT("UJumpFloodComponent2D"), &Z_Registration_Info_UClass_UJumpFloodComponent2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJumpFloodComponent2D), 874607687U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_2748740332(TEXT("/Script/WaterEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
