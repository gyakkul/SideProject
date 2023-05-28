// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MixedRealityCaptureActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMixedRealityCaptureActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_AMixedRealityCaptureActor();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_AMixedRealityCaptureActor_NoRegister();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UMixedRealityCaptureComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MixedRealityCaptureFramework();
// End Cross Module References
	DEFINE_FUNCTION(AMixedRealityCaptureActor::execOnTargetDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetDestroyed(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMixedRealityCaptureActor::execGetCaptureTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->GetCaptureTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMixedRealityCaptureActor::execIsBroadcasting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBroadcasting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMixedRealityCaptureActor::execSetAutoBroadcast)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoBroadcast(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	void AMixedRealityCaptureActor::StaticRegisterNativesAMixedRealityCaptureActor()
	{
		UClass* Class = AMixedRealityCaptureActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCaptureTexture", &AMixedRealityCaptureActor::execGetCaptureTexture },
			{ "IsBroadcasting", &AMixedRealityCaptureActor::execIsBroadcasting },
			{ "OnTargetDestroyed", &AMixedRealityCaptureActor::execOnTargetDestroyed },
			{ "SetAutoBroadcast", &AMixedRealityCaptureActor::execSetAutoBroadcast },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMixedRealityCaptureActor_GetCaptureTexture_Statics
	{
		struct MixedRealityCaptureActor_eventGetCaptureTexture_Parms
		{
			UTexture* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMixedRealityCaptureActor_GetCaptureTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MixedRealityCaptureActor_eventGetCaptureTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMixedRealityCaptureActor_GetCaptureTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMixedRealityCaptureActor_GetCaptureTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMixedRealityCaptureActor_GetCaptureTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMixedRealityCaptureActor_GetCaptureTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMixedRealityCaptureActor, nullptr, "GetCaptureTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMixedRealityCaptureActor_GetCaptureTexture_Statics::MixedRealityCaptureActor_eventGetCaptureTexture_Parms), Z_Construct_UFunction_AMixedRealityCaptureActor_GetCaptureTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMixedRealityCaptureActor_GetCaptureTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMixedRealityCaptureActor_GetCaptureTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMixedRealityCaptureActor_GetCaptureTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMixedRealityCaptureActor_GetCaptureTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMixedRealityCaptureActor_GetCaptureTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMixedRealityCaptureActor_IsBroadcasting_Statics
	{
		struct MixedRealityCaptureActor_eventIsBroadcasting_Parms
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
	void Z_Construct_UFunction_AMixedRealityCaptureActor_IsBroadcasting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MixedRealityCaptureActor_eventIsBroadcasting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMixedRealityCaptureActor_IsBroadcasting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MixedRealityCaptureActor_eventIsBroadcasting_Parms), &Z_Construct_UFunction_AMixedRealityCaptureActor_IsBroadcasting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMixedRealityCaptureActor_IsBroadcasting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMixedRealityCaptureActor_IsBroadcasting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMixedRealityCaptureActor_IsBroadcasting_Statics::Function_MetaDataParams[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMixedRealityCaptureActor_IsBroadcasting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMixedRealityCaptureActor, nullptr, "IsBroadcasting", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMixedRealityCaptureActor_IsBroadcasting_Statics::MixedRealityCaptureActor_eventIsBroadcasting_Parms), Z_Construct_UFunction_AMixedRealityCaptureActor_IsBroadcasting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMixedRealityCaptureActor_IsBroadcasting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMixedRealityCaptureActor_IsBroadcasting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMixedRealityCaptureActor_IsBroadcasting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMixedRealityCaptureActor_IsBroadcasting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMixedRealityCaptureActor_IsBroadcasting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMixedRealityCaptureActor_OnTargetDestroyed_Statics
	{
		struct MixedRealityCaptureActor_eventOnTargetDestroyed_Parms
		{
			AActor* DestroyedActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMixedRealityCaptureActor_OnTargetDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MixedRealityCaptureActor_eventOnTargetDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMixedRealityCaptureActor_OnTargetDestroyed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMixedRealityCaptureActor_OnTargetDestroyed_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMixedRealityCaptureActor_OnTargetDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MixedRealityCaptureActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMixedRealityCaptureActor_OnTargetDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMixedRealityCaptureActor, nullptr, "OnTargetDestroyed", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMixedRealityCaptureActor_OnTargetDestroyed_Statics::MixedRealityCaptureActor_eventOnTargetDestroyed_Parms), Z_Construct_UFunction_AMixedRealityCaptureActor_OnTargetDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMixedRealityCaptureActor_OnTargetDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMixedRealityCaptureActor_OnTargetDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMixedRealityCaptureActor_OnTargetDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMixedRealityCaptureActor_OnTargetDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMixedRealityCaptureActor_OnTargetDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMixedRealityCaptureActor_SetAutoBroadcast_Statics
	{
		struct MixedRealityCaptureActor_eventSetAutoBroadcast_Parms
		{
			bool bNewValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewValue_MetaData[];
#endif
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMixedRealityCaptureActor_SetAutoBroadcast_Statics::NewProp_bNewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AMixedRealityCaptureActor_SetAutoBroadcast_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((MixedRealityCaptureActor_eventSetAutoBroadcast_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMixedRealityCaptureActor_SetAutoBroadcast_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MixedRealityCaptureActor_eventSetAutoBroadcast_Parms), &Z_Construct_UFunction_AMixedRealityCaptureActor_SetAutoBroadcast_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AMixedRealityCaptureActor_SetAutoBroadcast_Statics::NewProp_bNewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMixedRealityCaptureActor_SetAutoBroadcast_Statics::NewProp_bNewValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMixedRealityCaptureActor_SetAutoBroadcast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMixedRealityCaptureActor_SetAutoBroadcast_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMixedRealityCaptureActor_SetAutoBroadcast_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "//~ Blueprint API\n" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMixedRealityCaptureActor_SetAutoBroadcast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMixedRealityCaptureActor, nullptr, "SetAutoBroadcast", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMixedRealityCaptureActor_SetAutoBroadcast_Statics::MixedRealityCaptureActor_eventSetAutoBroadcast_Parms), Z_Construct_UFunction_AMixedRealityCaptureActor_SetAutoBroadcast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMixedRealityCaptureActor_SetAutoBroadcast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMixedRealityCaptureActor_SetAutoBroadcast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMixedRealityCaptureActor_SetAutoBroadcast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMixedRealityCaptureActor_SetAutoBroadcast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMixedRealityCaptureActor_SetAutoBroadcast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMixedRealityCaptureActor);
	UClass* Z_Construct_UClass_AMixedRealityCaptureActor_NoRegister()
	{
		return AMixedRealityCaptureActor::StaticClass();
	}
	struct Z_Construct_UClass_AMixedRealityCaptureActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CaptureComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoAttachToVRPlayer_MetaData[];
#endif
		static void NewProp_bAutoAttachToVRPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoAttachToVRPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoHidePlayer_MetaData[];
#endif
		static void NewProp_bAutoHidePlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoHidePlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideAttachmentsWithPlayer_MetaData[];
#endif
		static void NewProp_bHideAttachmentsWithPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideAttachmentsWithPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoBroadcast_MetaData[];
#endif
		static void NewProp_bAutoBroadcast_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoBroadcast;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugVisualizerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DebugVisualizerMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMixedRealityCaptureActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MixedRealityCaptureFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMixedRealityCaptureActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMixedRealityCaptureActor_GetCaptureTexture, "GetCaptureTexture" }, // 2690167485
		{ &Z_Construct_UFunction_AMixedRealityCaptureActor_IsBroadcasting, "IsBroadcasting" }, // 3825888781
		{ &Z_Construct_UFunction_AMixedRealityCaptureActor_OnTargetDestroyed, "OnTargetDestroyed" }, // 3247842232
		{ &Z_Construct_UFunction_AMixedRealityCaptureActor_SetAutoBroadcast, "SetAutoBroadcast" }, // 2508161429
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMixedRealityCaptureActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09\n */" },
		{ "IncludePath", "MixedRealityCaptureActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_CaptureComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MixedRealityCapture" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x00140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMixedRealityCaptureActor, CaptureComponent), Z_Construct_UClass_UMixedRealityCaptureComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_CaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_CaptureComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bAutoAttachToVRPlayer_MetaData[] = {
		{ "Category", "Tracking" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureActor.h" },
	};
#endif
	void Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bAutoAttachToVRPlayer_SetBit(void* Obj)
	{
		((AMixedRealityCaptureActor*)Obj)->bAutoAttachToVRPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bAutoAttachToVRPlayer = { "bAutoAttachToVRPlayer", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AMixedRealityCaptureActor), &Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bAutoAttachToVRPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bAutoAttachToVRPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bAutoAttachToVRPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bAutoHidePlayer_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureActor.h" },
	};
#endif
	void Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bAutoHidePlayer_SetBit(void* Obj)
	{
		((AMixedRealityCaptureActor*)Obj)->bAutoHidePlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bAutoHidePlayer = { "bAutoHidePlayer", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AMixedRealityCaptureActor), &Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bAutoHidePlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bAutoHidePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bAutoHidePlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bHideAttachmentsWithPlayer_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "editcondition", "bAutoHidePlayer" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureActor.h" },
	};
#endif
	void Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bHideAttachmentsWithPlayer_SetBit(void* Obj)
	{
		((AMixedRealityCaptureActor*)Obj)->bHideAttachmentsWithPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bHideAttachmentsWithPlayer = { "bHideAttachmentsWithPlayer", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AMixedRealityCaptureActor), &Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bHideAttachmentsWithPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bHideAttachmentsWithPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bHideAttachmentsWithPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bAutoBroadcast_MetaData[] = {
		{ "BlueprintSetter", "SetAutoBroadcast" },
		{ "Category", "SceneCapture" },
		{ "Comment", "// If true the capture texture will automatically be applied to the Spectator Screen.\n" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureActor.h" },
		{ "ToolTip", "If true the capture texture will automatically be applied to the Spectator Screen." },
	};
#endif
	void Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bAutoBroadcast_SetBit(void* Obj)
	{
		((AMixedRealityCaptureActor*)Obj)->bAutoBroadcast = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bAutoBroadcast = { "bAutoBroadcast", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AMixedRealityCaptureActor), &Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bAutoBroadcast_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bAutoBroadcast_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bAutoBroadcast_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_DebugVisualizerMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/MixedRealityCaptureActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_DebugVisualizerMesh = { "DebugVisualizerMesh", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMixedRealityCaptureActor, DebugVisualizerMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_DebugVisualizerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_DebugVisualizerMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMixedRealityCaptureActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_CaptureComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bAutoAttachToVRPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bAutoHidePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bHideAttachmentsWithPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_bAutoBroadcast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMixedRealityCaptureActor_Statics::NewProp_DebugVisualizerMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMixedRealityCaptureActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMixedRealityCaptureActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMixedRealityCaptureActor_Statics::ClassParams = {
		&AMixedRealityCaptureActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMixedRealityCaptureActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMixedRealityCaptureActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMixedRealityCaptureActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMixedRealityCaptureActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMixedRealityCaptureActor()
	{
		if (!Z_Registration_Info_UClass_AMixedRealityCaptureActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMixedRealityCaptureActor.OuterSingleton, Z_Construct_UClass_AMixedRealityCaptureActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMixedRealityCaptureActor.OuterSingleton;
	}
	template<> MIXEDREALITYCAPTUREFRAMEWORK_API UClass* StaticClass<AMixedRealityCaptureActor>()
	{
		return AMixedRealityCaptureActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMixedRealityCaptureActor);
	AMixedRealityCaptureActor::~AMixedRealityCaptureActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMixedRealityCaptureActor, AMixedRealityCaptureActor::StaticClass, TEXT("AMixedRealityCaptureActor"), &Z_Registration_Info_UClass_AMixedRealityCaptureActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMixedRealityCaptureActor), 276658156U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_1389513837(TEXT("/Script/MixedRealityCaptureFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
