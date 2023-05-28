// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XRCreativeAvatar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRCreativeAvatar() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetInteractionComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_XRCreative();
	XRCREATIVE_API UClass* Z_Construct_UClass_AXRCreativeAvatar();
	XRCREATIVE_API UClass* Z_Construct_UClass_AXRCreativeAvatar_NoRegister();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeITFComponent_NoRegister();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativePointerComponent_NoRegister();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeTool_NoRegister();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeToolset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AXRCreativeAvatar::execOpenLevelSequence)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALevelSequenceActor**)Z_Param__Result=P_THIS->OpenLevelSequence(Z_Param_LevelSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXRCreativeAvatar::execSpawnTransientActor)
	{
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_PROPERTY(FStrProperty,Z_Param_ActorName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->SpawnTransientActor(Z_Param_ActorClass,Z_Param_ActorName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXRCreativeAvatar::execStopHapticEffect)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopHapticEffect(EControllerHand(Z_Param_Hand),Z_Param_ControllerID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXRCreativeAvatar::execPlayHapticEffect)
	{
		P_GET_OBJECT(UHapticFeedbackEffect_Base,Z_Param_HapticEffect);
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerID);
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_UBOOL(Z_Param_bLoop);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayHapticEffect(Z_Param_HapticEffect,Z_Param_ControllerID,EControllerHand(Z_Param_Hand),Z_Param_Scale,Z_Param_bLoop);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXRCreativeAvatar::execRemoveInputMappingContext)
	{
		P_GET_OBJECT(UInputMappingContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveInputMappingContext(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXRCreativeAvatar::execAddInputMappingContext)
	{
		P_GET_OBJECT(UInputMappingContext,Z_Param_Context);
		P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddInputMappingContext(Z_Param_Context,Z_Param_Priority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXRCreativeAvatar::execUnregisterObjectForInput)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterObjectForInput(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXRCreativeAvatar::execRegisterObjectForInput)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterObjectForInput(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXRCreativeAvatar::execSetComponentTickInEditor)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_Component);
		P_GET_UBOOL(Z_Param_bShouldTickInEditor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetComponentTickInEditor(Z_Param_Component,Z_Param_bShouldTickInEditor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXRCreativeAvatar::execGetHeadTransformRoomSpace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetHeadTransformRoomSpace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AXRCreativeAvatar::execGetHeadTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetHeadTransform();
		P_NATIVE_END;
	}
	void AXRCreativeAvatar::StaticRegisterNativesAXRCreativeAvatar()
	{
		UClass* Class = AXRCreativeAvatar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddInputMappingContext", &AXRCreativeAvatar::execAddInputMappingContext },
			{ "GetHeadTransform", &AXRCreativeAvatar::execGetHeadTransform },
			{ "GetHeadTransformRoomSpace", &AXRCreativeAvatar::execGetHeadTransformRoomSpace },
			{ "OpenLevelSequence", &AXRCreativeAvatar::execOpenLevelSequence },
			{ "PlayHapticEffect", &AXRCreativeAvatar::execPlayHapticEffect },
			{ "RegisterObjectForInput", &AXRCreativeAvatar::execRegisterObjectForInput },
			{ "RemoveInputMappingContext", &AXRCreativeAvatar::execRemoveInputMappingContext },
			{ "SetComponentTickInEditor", &AXRCreativeAvatar::execSetComponentTickInEditor },
			{ "SpawnTransientActor", &AXRCreativeAvatar::execSpawnTransientActor },
			{ "StopHapticEffect", &AXRCreativeAvatar::execStopHapticEffect },
			{ "UnregisterObjectForInput", &AXRCreativeAvatar::execUnregisterObjectForInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AXRCreativeAvatar_AddInputMappingContext_Statics
	{
		struct XRCreativeAvatar_eventAddInputMappingContext_Parms
		{
			UInputMappingContext* Context;
			int32 Priority;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AXRCreativeAvatar_AddInputMappingContext_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativeAvatar_eventAddInputMappingContext_Parms, Context), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AXRCreativeAvatar_AddInputMappingContext_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativeAvatar_eventAddInputMappingContext_Parms, Priority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXRCreativeAvatar_AddInputMappingContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRCreativeAvatar_AddInputMappingContext_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRCreativeAvatar_AddInputMappingContext_Statics::NewProp_Priority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXRCreativeAvatar_AddInputMappingContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "Comment", "// Adds an explicitly provided Input Mapping Context to the input system\n" },
		{ "ModuleRelativePath", "Public/XRCreativeAvatar.h" },
		{ "ToolTip", "Adds an explicitly provided Input Mapping Context to the input system" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AXRCreativeAvatar_AddInputMappingContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXRCreativeAvatar, nullptr, "AddInputMappingContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_AXRCreativeAvatar_AddInputMappingContext_Statics::XRCreativeAvatar_eventAddInputMappingContext_Parms), Z_Construct_UFunction_AXRCreativeAvatar_AddInputMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_AddInputMappingContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXRCreativeAvatar_AddInputMappingContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_AddInputMappingContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXRCreativeAvatar_AddInputMappingContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AXRCreativeAvatar_AddInputMappingContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransform_Statics
	{
		struct XRCreativeAvatar_eventGetHeadTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativeAvatar_eventGetHeadTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeAvatar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXRCreativeAvatar, nullptr, "GetHeadTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransform_Statics::XRCreativeAvatar_eventGetHeadTransform_Parms), Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransformRoomSpace_Statics
	{
		struct XRCreativeAvatar_eventGetHeadTransformRoomSpace_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransformRoomSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativeAvatar_eventGetHeadTransformRoomSpace_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransformRoomSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransformRoomSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransformRoomSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeAvatar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransformRoomSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXRCreativeAvatar, nullptr, "GetHeadTransformRoomSpace", nullptr, nullptr, sizeof(Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransformRoomSpace_Statics::XRCreativeAvatar_eventGetHeadTransformRoomSpace_Parms), Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransformRoomSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransformRoomSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransformRoomSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransformRoomSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransformRoomSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransformRoomSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXRCreativeAvatar_OpenLevelSequence_Statics
	{
		struct XRCreativeAvatar_eventOpenLevelSequence_Parms
		{
			ULevelSequence* LevelSequence;
			ALevelSequenceActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AXRCreativeAvatar_OpenLevelSequence_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativeAvatar_eventOpenLevelSequence_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AXRCreativeAvatar_OpenLevelSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativeAvatar_eventOpenLevelSequence_Parms, ReturnValue), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXRCreativeAvatar_OpenLevelSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRCreativeAvatar_OpenLevelSequence_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRCreativeAvatar_OpenLevelSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXRCreativeAvatar_OpenLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeAvatar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AXRCreativeAvatar_OpenLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXRCreativeAvatar, nullptr, "OpenLevelSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_AXRCreativeAvatar_OpenLevelSequence_Statics::XRCreativeAvatar_eventOpenLevelSequence_Parms), Z_Construct_UFunction_AXRCreativeAvatar_OpenLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_OpenLevelSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXRCreativeAvatar_OpenLevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_OpenLevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXRCreativeAvatar_OpenLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AXRCreativeAvatar_OpenLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics
	{
		struct XRCreativeAvatar_eventPlayHapticEffect_Parms
		{
			UHapticFeedbackEffect_Base* HapticEffect;
			int32 ControllerID;
			EControllerHand Hand;
			float Scale;
			bool bLoop;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HapticEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ControllerID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::NewProp_HapticEffect = { "HapticEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativeAvatar_eventPlayHapticEffect_Parms, HapticEffect), Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::NewProp_ControllerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::NewProp_ControllerID = { "ControllerID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativeAvatar_eventPlayHapticEffect_Parms, ControllerID), METADATA_PARAMS(Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::NewProp_ControllerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::NewProp_ControllerID_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::NewProp_Hand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativeAvatar_eventPlayHapticEffect_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::NewProp_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::NewProp_Hand_MetaData)) }; // 2834220773
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativeAvatar_eventPlayHapticEffect_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((XRCreativeAvatar_eventPlayHapticEffect_Parms*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(XRCreativeAvatar_eventPlayHapticEffect_Parms), &Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::NewProp_HapticEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::NewProp_ControllerID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::NewProp_Hand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::NewProp_bLoop,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "Comment", "/** Play haptic feedback asset on a given hand - only left and right supported\n\x09 * @param HapticEffect\x09\x09\x09The haptic effect to play\n\x09 * @param Hand\x09\x09\x09\x09\x09Which hand to play the haptic effect on\n\x09 * @param ControllerID\x09\x09\x09ID of PlayerController if in PIE or runtime (not required in-editor)\n\x09 * @param Scale\x09\x09\x09\x09\x09Scale between 0.0 and 1.0 on the intensity of playback \n\x09 */" },
		{ "ModuleRelativePath", "Public/XRCreativeAvatar.h" },
		{ "ToolTip", "Play haptic feedback asset on a given hand - only left and right supported\n@param HapticEffect                  The haptic effect to play\n@param Hand                                  Which hand to play the haptic effect on\n@param ControllerID                  ID of PlayerController if in PIE or runtime (not required in-editor)\n@param Scale                                 Scale between 0.0 and 1.0 on the intensity of playback" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXRCreativeAvatar, nullptr, "PlayHapticEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::XRCreativeAvatar_eventPlayHapticEffect_Parms), Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXRCreativeAvatar_RegisterObjectForInput_Statics
	{
		struct XRCreativeAvatar_eventRegisterObjectForInput_Parms
		{
			UObject* Object;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AXRCreativeAvatar_RegisterObjectForInput_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativeAvatar_eventRegisterObjectForInput_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXRCreativeAvatar_RegisterObjectForInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRCreativeAvatar_RegisterObjectForInput_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXRCreativeAvatar_RegisterObjectForInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "Comment", "/* Registers the given object with the Avatar's Input Component\n\x09 * This allows dynamic input bindings such as input events in blueprints to work correctly\n\x09 * Note: Ensure you call UnregisterObjectForInput when you are finished with the object\n\x09 * otherwise input events will still fire until GC actually destroys the object\n\x09 *\n\x09 * @param Object The object to register\n\x09 */" },
		{ "ModuleRelativePath", "Public/XRCreativeAvatar.h" },
		{ "ToolTip", "Registers the given object with the Avatar's Input Component\n       * This allows dynamic input bindings such as input events in blueprints to work correctly\n       * Note: Ensure you call UnregisterObjectForInput when you are finished with the object\n       * otherwise input events will still fire until GC actually destroys the object\n       *\n       * @param Object The object to register" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AXRCreativeAvatar_RegisterObjectForInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXRCreativeAvatar, nullptr, "RegisterObjectForInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_AXRCreativeAvatar_RegisterObjectForInput_Statics::XRCreativeAvatar_eventRegisterObjectForInput_Parms), Z_Construct_UFunction_AXRCreativeAvatar_RegisterObjectForInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_RegisterObjectForInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXRCreativeAvatar_RegisterObjectForInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_RegisterObjectForInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXRCreativeAvatar_RegisterObjectForInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AXRCreativeAvatar_RegisterObjectForInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXRCreativeAvatar_RemoveInputMappingContext_Statics
	{
		struct XRCreativeAvatar_eventRemoveInputMappingContext_Parms
		{
			UInputMappingContext* Context;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AXRCreativeAvatar_RemoveInputMappingContext_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativeAvatar_eventRemoveInputMappingContext_Parms, Context), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXRCreativeAvatar_RemoveInputMappingContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRCreativeAvatar_RemoveInputMappingContext_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXRCreativeAvatar_RemoveInputMappingContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "Comment", "// Removes an explicitly provided Input Mapping Context to the input system\n" },
		{ "ModuleRelativePath", "Public/XRCreativeAvatar.h" },
		{ "ToolTip", "Removes an explicitly provided Input Mapping Context to the input system" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AXRCreativeAvatar_RemoveInputMappingContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXRCreativeAvatar, nullptr, "RemoveInputMappingContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_AXRCreativeAvatar_RemoveInputMappingContext_Statics::XRCreativeAvatar_eventRemoveInputMappingContext_Parms), Z_Construct_UFunction_AXRCreativeAvatar_RemoveInputMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_RemoveInputMappingContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXRCreativeAvatar_RemoveInputMappingContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_RemoveInputMappingContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXRCreativeAvatar_RemoveInputMappingContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AXRCreativeAvatar_RemoveInputMappingContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXRCreativeAvatar_SetComponentTickInEditor_Statics
	{
		struct XRCreativeAvatar_eventSetComponentTickInEditor_Parms
		{
			UActorComponent* Component;
			bool bShouldTickInEditor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_bShouldTickInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTickInEditor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXRCreativeAvatar_SetComponentTickInEditor_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AXRCreativeAvatar_SetComponentTickInEditor_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativeAvatar_eventSetComponentTickInEditor_Parms, Component), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AXRCreativeAvatar_SetComponentTickInEditor_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_SetComponentTickInEditor_Statics::NewProp_Component_MetaData)) };
	void Z_Construct_UFunction_AXRCreativeAvatar_SetComponentTickInEditor_Statics::NewProp_bShouldTickInEditor_SetBit(void* Obj)
	{
		((XRCreativeAvatar_eventSetComponentTickInEditor_Parms*)Obj)->bShouldTickInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AXRCreativeAvatar_SetComponentTickInEditor_Statics::NewProp_bShouldTickInEditor = { "bShouldTickInEditor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(XRCreativeAvatar_eventSetComponentTickInEditor_Parms), &Z_Construct_UFunction_AXRCreativeAvatar_SetComponentTickInEditor_Statics::NewProp_bShouldTickInEditor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXRCreativeAvatar_SetComponentTickInEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRCreativeAvatar_SetComponentTickInEditor_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRCreativeAvatar_SetComponentTickInEditor_Statics::NewProp_bShouldTickInEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXRCreativeAvatar_SetComponentTickInEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeAvatar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AXRCreativeAvatar_SetComponentTickInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXRCreativeAvatar, nullptr, "SetComponentTickInEditor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AXRCreativeAvatar_SetComponentTickInEditor_Statics::XRCreativeAvatar_eventSetComponentTickInEditor_Parms), Z_Construct_UFunction_AXRCreativeAvatar_SetComponentTickInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_SetComponentTickInEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXRCreativeAvatar_SetComponentTickInEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_SetComponentTickInEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXRCreativeAvatar_SetComponentTickInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AXRCreativeAvatar_SetComponentTickInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXRCreativeAvatar_SpawnTransientActor_Statics
	{
		struct XRCreativeAvatar_eventSpawnTransientActor_Parms
		{
			TSubclassOf<AActor>  ActorClass;
			FString ActorName;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActorName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AXRCreativeAvatar_SpawnTransientActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativeAvatar_eventSpawnTransientActor_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXRCreativeAvatar_SpawnTransientActor_Statics::NewProp_ActorName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AXRCreativeAvatar_SpawnTransientActor_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativeAvatar_eventSpawnTransientActor_Parms, ActorName), METADATA_PARAMS(Z_Construct_UFunction_AXRCreativeAvatar_SpawnTransientActor_Statics::NewProp_ActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_SpawnTransientActor_Statics::NewProp_ActorName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AXRCreativeAvatar_SpawnTransientActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativeAvatar_eventSpawnTransientActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXRCreativeAvatar_SpawnTransientActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRCreativeAvatar_SpawnTransientActor_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRCreativeAvatar_SpawnTransientActor_Statics::NewProp_ActorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRCreativeAvatar_SpawnTransientActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXRCreativeAvatar_SpawnTransientActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "Comment", "/** Includes special handling to not dirty editor worlds. */" },
		{ "ModuleRelativePath", "Public/XRCreativeAvatar.h" },
		{ "ToolTip", "Includes special handling to not dirty editor worlds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AXRCreativeAvatar_SpawnTransientActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXRCreativeAvatar, nullptr, "SpawnTransientActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AXRCreativeAvatar_SpawnTransientActor_Statics::XRCreativeAvatar_eventSpawnTransientActor_Parms), Z_Construct_UFunction_AXRCreativeAvatar_SpawnTransientActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_SpawnTransientActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXRCreativeAvatar_SpawnTransientActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_SpawnTransientActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXRCreativeAvatar_SpawnTransientActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AXRCreativeAvatar_SpawnTransientActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXRCreativeAvatar_StopHapticEffect_Statics
	{
		struct XRCreativeAvatar_eventStopHapticEffect_Parms
		{
			EControllerHand Hand;
			int32 ControllerID;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ControllerID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AXRCreativeAvatar_StopHapticEffect_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AXRCreativeAvatar_StopHapticEffect_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativeAvatar_eventStopHapticEffect_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) }; // 2834220773
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXRCreativeAvatar_StopHapticEffect_Statics::NewProp_ControllerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AXRCreativeAvatar_StopHapticEffect_Statics::NewProp_ControllerID = { "ControllerID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativeAvatar_eventStopHapticEffect_Parms, ControllerID), METADATA_PARAMS(Z_Construct_UFunction_AXRCreativeAvatar_StopHapticEffect_Statics::NewProp_ControllerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_StopHapticEffect_Statics::NewProp_ControllerID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXRCreativeAvatar_StopHapticEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRCreativeAvatar_StopHapticEffect_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRCreativeAvatar_StopHapticEffect_Statics::NewProp_Hand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRCreativeAvatar_StopHapticEffect_Statics::NewProp_ControllerID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXRCreativeAvatar_StopHapticEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "Comment", "/** Instantly stop a haptic feedback for a given hand - only left and right supported\n\x09 * @param Hand\x09\x09\x09\x09\x09Which hand to stop the haptic effect on\n\x09 * @param ControllerID\x09\x09\x09ID of PlayerController if in PIE or runtime (not required in-editor)\n\x09 */" },
		{ "ModuleRelativePath", "Public/XRCreativeAvatar.h" },
		{ "ToolTip", "Instantly stop a haptic feedback for a given hand - only left and right supported\n@param Hand                                  Which hand to stop the haptic effect on\n@param ControllerID                  ID of PlayerController if in PIE or runtime (not required in-editor)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AXRCreativeAvatar_StopHapticEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXRCreativeAvatar, nullptr, "StopHapticEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_AXRCreativeAvatar_StopHapticEffect_Statics::XRCreativeAvatar_eventStopHapticEffect_Parms), Z_Construct_UFunction_AXRCreativeAvatar_StopHapticEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_StopHapticEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXRCreativeAvatar_StopHapticEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_StopHapticEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXRCreativeAvatar_StopHapticEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AXRCreativeAvatar_StopHapticEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AXRCreativeAvatar_UnregisterObjectForInput_Statics
	{
		struct XRCreativeAvatar_eventUnregisterObjectForInput_Parms
		{
			UObject* Object;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AXRCreativeAvatar_UnregisterObjectForInput_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativeAvatar_eventUnregisterObjectForInput_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AXRCreativeAvatar_UnregisterObjectForInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AXRCreativeAvatar_UnregisterObjectForInput_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AXRCreativeAvatar_UnregisterObjectForInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "Comment", "/* Unregisters the given object with the Avatar's Input Component\n\x09 *\n\x09 * @param Object The object to unregister\n\x09 */" },
		{ "ModuleRelativePath", "Public/XRCreativeAvatar.h" },
		{ "ToolTip", "Unregisters the given object with the Avatar's Input Component\n       *\n       * @param Object The object to unregister" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AXRCreativeAvatar_UnregisterObjectForInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AXRCreativeAvatar, nullptr, "UnregisterObjectForInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_AXRCreativeAvatar_UnregisterObjectForInput_Statics::XRCreativeAvatar_eventUnregisterObjectForInput_Parms), Z_Construct_UFunction_AXRCreativeAvatar_UnregisterObjectForInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_UnregisterObjectForInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AXRCreativeAvatar_UnregisterObjectForInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AXRCreativeAvatar_UnregisterObjectForInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AXRCreativeAvatar_UnregisterObjectForInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AXRCreativeAvatar_UnregisterObjectForInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AXRCreativeAvatar);
	UClass* Z_Construct_UClass_AXRCreativeAvatar_NoRegister()
	{
		return AXRCreativeAvatar::StaticClass();
	}
	struct Z_Construct_UClass_AXRCreativeAvatar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LeftController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftControllerAim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LeftControllerAim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftControllerPointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LeftControllerPointer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RightController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightControllerAim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RightControllerAim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightControllerPointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RightControllerPointer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftControllerModel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LeftControllerModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightControllerModel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RightControllerModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MenuWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetInteraction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WidgetInteraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolsComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ToolsComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Toolset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Toolset;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Tools_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tools_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tools;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AXRCreativeAvatar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_XRCreative,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AXRCreativeAvatar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AXRCreativeAvatar_AddInputMappingContext, "AddInputMappingContext" }, // 4150613926
		{ &Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransform, "GetHeadTransform" }, // 3323677984
		{ &Z_Construct_UFunction_AXRCreativeAvatar_GetHeadTransformRoomSpace, "GetHeadTransformRoomSpace" }, // 1554954492
		{ &Z_Construct_UFunction_AXRCreativeAvatar_OpenLevelSequence, "OpenLevelSequence" }, // 2476265272
		{ &Z_Construct_UFunction_AXRCreativeAvatar_PlayHapticEffect, "PlayHapticEffect" }, // 3958990598
		{ &Z_Construct_UFunction_AXRCreativeAvatar_RegisterObjectForInput, "RegisterObjectForInput" }, // 518419470
		{ &Z_Construct_UFunction_AXRCreativeAvatar_RemoveInputMappingContext, "RemoveInputMappingContext" }, // 562260214
		{ &Z_Construct_UFunction_AXRCreativeAvatar_SetComponentTickInEditor, "SetComponentTickInEditor" }, // 3120190797
		{ &Z_Construct_UFunction_AXRCreativeAvatar_SpawnTransientActor, "SpawnTransientActor" }, // 2913676608
		{ &Z_Construct_UFunction_AXRCreativeAvatar_StopHapticEffect, "StopHapticEffect" }, // 1088414992
		{ &Z_Construct_UFunction_AXRCreativeAvatar_UnregisterObjectForInput, "UnregisterObjectForInput" }, // 2612151358
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRCreativeAvatar_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "XRCreativeAvatar.h" },
		{ "ModuleRelativePath", "Public/XRCreativeAvatar.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_LeftController_MetaData[] = {
		{ "Category", "XR Creative Avatar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XRCreativeAvatar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_LeftController = { "LeftController", nullptr, (EPropertyFlags)0x002408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AXRCreativeAvatar, LeftController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_LeftController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_LeftController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_LeftControllerAim_MetaData[] = {
		{ "Category", "XR Creative Avatar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XRCreativeAvatar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_LeftControllerAim = { "LeftControllerAim", nullptr, (EPropertyFlags)0x002408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AXRCreativeAvatar, LeftControllerAim), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_LeftControllerAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_LeftControllerAim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_LeftControllerPointer_MetaData[] = {
		{ "Category", "XR Creative Avatar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XRCreativeAvatar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_LeftControllerPointer = { "LeftControllerPointer", nullptr, (EPropertyFlags)0x002408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AXRCreativeAvatar, LeftControllerPointer), Z_Construct_UClass_UXRCreativePointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_LeftControllerPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_LeftControllerPointer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_RightController_MetaData[] = {
		{ "Category", "XR Creative Avatar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XRCreativeAvatar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_RightController = { "RightController", nullptr, (EPropertyFlags)0x002408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AXRCreativeAvatar, RightController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_RightController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_RightController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_RightControllerAim_MetaData[] = {
		{ "Category", "XR Creative Avatar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XRCreativeAvatar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_RightControllerAim = { "RightControllerAim", nullptr, (EPropertyFlags)0x002408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AXRCreativeAvatar, RightControllerAim), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_RightControllerAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_RightControllerAim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_RightControllerPointer_MetaData[] = {
		{ "Category", "XR Creative Avatar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XRCreativeAvatar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_RightControllerPointer = { "RightControllerPointer", nullptr, (EPropertyFlags)0x002408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AXRCreativeAvatar, RightControllerPointer), Z_Construct_UClass_UXRCreativePointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_RightControllerPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_RightControllerPointer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_LeftControllerModel_MetaData[] = {
		{ "Category", "XR Creative Avatar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XRCreativeAvatar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_LeftControllerModel = { "LeftControllerModel", nullptr, (EPropertyFlags)0x002408000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AXRCreativeAvatar, LeftControllerModel), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_LeftControllerModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_LeftControllerModel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_RightControllerModel_MetaData[] = {
		{ "Category", "XR Creative Avatar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XRCreativeAvatar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_RightControllerModel = { "RightControllerModel", nullptr, (EPropertyFlags)0x002408000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AXRCreativeAvatar, RightControllerModel), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_RightControllerModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_RightControllerModel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_MenuWidget_MetaData[] = {
		{ "Category", "XR Creative Avatar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XRCreativeAvatar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_MenuWidget = { "MenuWidget", nullptr, (EPropertyFlags)0x002408000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AXRCreativeAvatar, MenuWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_MenuWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_MenuWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_WidgetInteraction_MetaData[] = {
		{ "Category", "XR Creative Avatar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XRCreativeAvatar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_WidgetInteraction = { "WidgetInteraction", nullptr, (EPropertyFlags)0x002408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AXRCreativeAvatar, WidgetInteraction), Z_Construct_UClass_UWidgetInteractionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_WidgetInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_WidgetInteraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_ToolsComponent_MetaData[] = {
		{ "Category", "XR Creative Avatar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XRCreativeAvatar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_ToolsComponent = { "ToolsComponent", nullptr, (EPropertyFlags)0x002408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AXRCreativeAvatar, ToolsComponent), Z_Construct_UClass_UXRCreativeITFComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_ToolsComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_ToolsComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_Toolset_MetaData[] = {
		{ "Category", "XR Creative Avatar" },
		{ "ModuleRelativePath", "Public/XRCreativeAvatar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_Toolset = { "Toolset", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AXRCreativeAvatar, Toolset), Z_Construct_UClass_UXRCreativeToolset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_Toolset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_Toolset_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_Tools_Inner = { "Tools", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UXRCreativeTool_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_Tools_MetaData[] = {
		{ "Category", "XR Creative Avatar" },
		{ "ModuleRelativePath", "Public/XRCreativeAvatar.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_Tools = { "Tools", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AXRCreativeAvatar, Tools), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_Tools_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_Tools_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AXRCreativeAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_LeftController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_LeftControllerAim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_LeftControllerPointer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_RightController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_RightControllerAim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_RightControllerPointer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_LeftControllerModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_RightControllerModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_MenuWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_WidgetInteraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_ToolsComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_Toolset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_Tools_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AXRCreativeAvatar_Statics::NewProp_Tools,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AXRCreativeAvatar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXRCreativeAvatar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AXRCreativeAvatar_Statics::ClassParams = {
		&AXRCreativeAvatar::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AXRCreativeAvatar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeAvatar_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AXRCreativeAvatar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeAvatar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AXRCreativeAvatar()
	{
		if (!Z_Registration_Info_UClass_AXRCreativeAvatar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AXRCreativeAvatar.OuterSingleton, Z_Construct_UClass_AXRCreativeAvatar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AXRCreativeAvatar.OuterSingleton;
	}
	template<> XRCREATIVE_API UClass* StaticClass<AXRCreativeAvatar>()
	{
		return AXRCreativeAvatar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AXRCreativeAvatar);
	AXRCreativeAvatar::~AXRCreativeAvatar() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AXRCreativeAvatar, AXRCreativeAvatar::StaticClass, TEXT("AXRCreativeAvatar"), &Z_Registration_Info_UClass_AXRCreativeAvatar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AXRCreativeAvatar), 2062575277U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_1045904457(TEXT("/Script/XRCreative"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
