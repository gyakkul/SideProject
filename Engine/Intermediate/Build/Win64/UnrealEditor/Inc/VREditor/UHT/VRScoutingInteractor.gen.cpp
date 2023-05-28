// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRScoutingInteractor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRScoutingInteractor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VIEWPORTINTERACTION_API UEnum* Z_Construct_UEnum_ViewportInteraction_EGizmoHandleTypes();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorInteractor();
	VREDITOR_API UClass* Z_Construct_UClass_UVRScoutingInteractor();
	VREDITOR_API UClass* Z_Construct_UClass_UVRScoutingInteractor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVRScoutingInteractor::execGetReceivesEditorInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetReceivesEditorInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRScoutingInteractor::execSetReceivesEditorInput)
	{
		P_GET_UBOOL(Z_Param_bInValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReceivesEditorInput(Z_Param_bInValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRScoutingInteractor::execGetInputComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInputComponent**)Z_Param__Result=P_THIS->GetInputComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRScoutingInteractor::execGetSelectedActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=UVRScoutingInteractor::GetSelectedActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRScoutingInteractor::execGetGizmoMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGizmoHandleTypes*)Z_Param__Result=P_THIS->GetGizmoMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRScoutingInteractor::execSetGizmoMode)
	{
		P_GET_ENUM(EGizmoHandleTypes,Z_Param_InGizmoMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGizmoMode(EGizmoHandleTypes(Z_Param_InGizmoMode));
		P_NATIVE_END;
	}
	void UVRScoutingInteractor::StaticRegisterNativesUVRScoutingInteractor()
	{
		UClass* Class = UVRScoutingInteractor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGizmoMode", &UVRScoutingInteractor::execGetGizmoMode },
			{ "GetInputComponent", &UVRScoutingInteractor::execGetInputComponent },
			{ "GetReceivesEditorInput", &UVRScoutingInteractor::execGetReceivesEditorInput },
			{ "GetSelectedActors", &UVRScoutingInteractor::execGetSelectedActors },
			{ "SetGizmoMode", &UVRScoutingInteractor::execSetGizmoMode },
			{ "SetReceivesEditorInput", &UVRScoutingInteractor::execSetReceivesEditorInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRScoutingInteractor_GetGizmoMode_Statics
	{
		struct VRScoutingInteractor_eventGetGizmoMode_Parms
		{
			EGizmoHandleTypes ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRScoutingInteractor_GetGizmoMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRScoutingInteractor_GetGizmoMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VRScoutingInteractor_eventGetGizmoMode_Parms, ReturnValue), Z_Construct_UEnum_ViewportInteraction_EGizmoHandleTypes, METADATA_PARAMS(nullptr, 0) }; // 3687433905
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRScoutingInteractor_GetGizmoMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRScoutingInteractor_GetGizmoMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRScoutingInteractor_GetGizmoMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRScoutingInteractor_GetGizmoMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scouting" },
		{ "Comment", "/** Gets the gizmo mode for selected object */" },
		{ "ModuleRelativePath", "VRScoutingInteractor.h" },
		{ "ToolTip", "Gets the gizmo mode for selected object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRScoutingInteractor_GetGizmoMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRScoutingInteractor, nullptr, "GetGizmoMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRScoutingInteractor_GetGizmoMode_Statics::VRScoutingInteractor_eventGetGizmoMode_Parms), Z_Construct_UFunction_UVRScoutingInteractor_GetGizmoMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRScoutingInteractor_GetGizmoMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRScoutingInteractor_GetGizmoMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRScoutingInteractor_GetGizmoMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRScoutingInteractor_GetGizmoMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRScoutingInteractor_GetGizmoMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRScoutingInteractor_GetInputComponent_Statics
	{
		struct VRScoutingInteractor_eventGetInputComponent_Parms
		{
			UInputComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRScoutingInteractor_GetInputComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRScoutingInteractor_GetInputComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VRScoutingInteractor_eventGetInputComponent_Parms, ReturnValue), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVRScoutingInteractor_GetInputComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRScoutingInteractor_GetInputComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRScoutingInteractor_GetInputComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRScoutingInteractor_GetInputComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRScoutingInteractor_GetInputComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Editor" },
		{ "Comment", "/** Returns the current InputComponent. This will be NULL unless bReceivesEditorInput is set to true. */" },
		{ "ModuleRelativePath", "VRScoutingInteractor.h" },
		{ "ToolTip", "Returns the current InputComponent. This will be NULL unless bReceivesEditorInput is set to true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRScoutingInteractor_GetInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRScoutingInteractor, nullptr, "GetInputComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRScoutingInteractor_GetInputComponent_Statics::VRScoutingInteractor_eventGetInputComponent_Parms), Z_Construct_UFunction_UVRScoutingInteractor_GetInputComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRScoutingInteractor_GetInputComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRScoutingInteractor_GetInputComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRScoutingInteractor_GetInputComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRScoutingInteractor_GetInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRScoutingInteractor_GetInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRScoutingInteractor_GetReceivesEditorInput_Statics
	{
		struct VRScoutingInteractor_eventGetReceivesEditorInput_Parms
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
	void Z_Construct_UFunction_UVRScoutingInteractor_GetReceivesEditorInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRScoutingInteractor_eventGetReceivesEditorInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRScoutingInteractor_GetReceivesEditorInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VRScoutingInteractor_eventGetReceivesEditorInput_Parms), &Z_Construct_UFunction_UVRScoutingInteractor_GetReceivesEditorInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRScoutingInteractor_GetReceivesEditorInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRScoutingInteractor_GetReceivesEditorInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRScoutingInteractor_GetReceivesEditorInput_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Input|Editor" },
		{ "ModuleRelativePath", "VRScoutingInteractor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRScoutingInteractor_GetReceivesEditorInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRScoutingInteractor, nullptr, "GetReceivesEditorInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRScoutingInteractor_GetReceivesEditorInput_Statics::VRScoutingInteractor_eventGetReceivesEditorInput_Parms), Z_Construct_UFunction_UVRScoutingInteractor_GetReceivesEditorInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRScoutingInteractor_GetReceivesEditorInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRScoutingInteractor_GetReceivesEditorInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRScoutingInteractor_GetReceivesEditorInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRScoutingInteractor_GetReceivesEditorInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRScoutingInteractor_GetReceivesEditorInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics
	{
		struct VRScoutingInteractor_eventGetSelectedActors_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VRScoutingInteractor_eventGetSelectedActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scouting" },
		{ "Comment", "/** Gets all actors that are selected in the world editor */" },
		{ "ModuleRelativePath", "VRScoutingInteractor.h" },
		{ "ToolTip", "Gets all actors that are selected in the world editor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRScoutingInteractor, nullptr, "GetSelectedActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics::VRScoutingInteractor_eventGetSelectedActors_Parms), Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRScoutingInteractor_SetGizmoMode_Statics
	{
		struct VRScoutingInteractor_eventSetGizmoMode_Parms
		{
			EGizmoHandleTypes InGizmoMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InGizmoMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InGizmoMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVRScoutingInteractor_SetGizmoMode_Statics::NewProp_InGizmoMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVRScoutingInteractor_SetGizmoMode_Statics::NewProp_InGizmoMode = { "InGizmoMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VRScoutingInteractor_eventSetGizmoMode_Parms, InGizmoMode), Z_Construct_UEnum_ViewportInteraction_EGizmoHandleTypes, METADATA_PARAMS(nullptr, 0) }; // 3687433905
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRScoutingInteractor_SetGizmoMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRScoutingInteractor_SetGizmoMode_Statics::NewProp_InGizmoMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRScoutingInteractor_SetGizmoMode_Statics::NewProp_InGizmoMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRScoutingInteractor_SetGizmoMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scouting" },
		{ "Comment", "/** Sets the gizmo mode for selected object */" },
		{ "ModuleRelativePath", "VRScoutingInteractor.h" },
		{ "ToolTip", "Sets the gizmo mode for selected object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRScoutingInteractor_SetGizmoMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRScoutingInteractor, nullptr, "SetGizmoMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRScoutingInteractor_SetGizmoMode_Statics::VRScoutingInteractor_eventSetGizmoMode_Parms), Z_Construct_UFunction_UVRScoutingInteractor_SetGizmoMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRScoutingInteractor_SetGizmoMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRScoutingInteractor_SetGizmoMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRScoutingInteractor_SetGizmoMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRScoutingInteractor_SetGizmoMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRScoutingInteractor_SetGizmoMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRScoutingInteractor_SetReceivesEditorInput_Statics
	{
		struct VRScoutingInteractor_eventSetReceivesEditorInput_Parms
		{
			bool bInValue;
		};
		static void NewProp_bInValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVRScoutingInteractor_SetReceivesEditorInput_Statics::NewProp_bInValue_SetBit(void* Obj)
	{
		((VRScoutingInteractor_eventSetReceivesEditorInput_Parms*)Obj)->bInValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVRScoutingInteractor_SetReceivesEditorInput_Statics::NewProp_bInValue = { "bInValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VRScoutingInteractor_eventSetReceivesEditorInput_Parms), &Z_Construct_UFunction_UVRScoutingInteractor_SetReceivesEditorInput_Statics::NewProp_bInValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRScoutingInteractor_SetReceivesEditorInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRScoutingInteractor_SetReceivesEditorInput_Statics::NewProp_bInValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRScoutingInteractor_SetReceivesEditorInput_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Input|Editor" },
		{ "ModuleRelativePath", "VRScoutingInteractor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRScoutingInteractor_SetReceivesEditorInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRScoutingInteractor, nullptr, "SetReceivesEditorInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRScoutingInteractor_SetReceivesEditorInput_Statics::VRScoutingInteractor_eventSetReceivesEditorInput_Parms), Z_Construct_UFunction_UVRScoutingInteractor_SetReceivesEditorInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRScoutingInteractor_SetReceivesEditorInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRScoutingInteractor_SetReceivesEditorInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRScoutingInteractor_SetReceivesEditorInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRScoutingInteractor_SetReceivesEditorInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRScoutingInteractor_SetReceivesEditorInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRScoutingInteractor);
	UClass* Z_Construct_UClass_UVRScoutingInteractor_NoRegister()
	{
		return UVRScoutingInteractor::StaticClass();
	}
	struct Z_Construct_UClass_UVRScoutingInteractor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlyingIndicatorComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FlyingIndicatorComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorOnlyInputComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorOnlyInputComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReceivesEditorInput_MetaData[];
#endif
		static void NewProp_bReceivesEditorInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceivesEditorInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRScoutingInteractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVREditorInteractor,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRScoutingInteractor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRScoutingInteractor_GetGizmoMode, "GetGizmoMode" }, // 1633237444
		{ &Z_Construct_UFunction_UVRScoutingInteractor_GetInputComponent, "GetInputComponent" }, // 2768463802
		{ &Z_Construct_UFunction_UVRScoutingInteractor_GetReceivesEditorInput, "GetReceivesEditorInput" }, // 4293273866
		{ &Z_Construct_UFunction_UVRScoutingInteractor_GetSelectedActors, "GetSelectedActors" }, // 2164485275
		{ &Z_Construct_UFunction_UVRScoutingInteractor_SetGizmoMode, "SetGizmoMode" }, // 1620876881
		{ &Z_Construct_UFunction_UVRScoutingInteractor_SetReceivesEditorInput, "SetReceivesEditorInput" }, // 1949372331
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRScoutingInteractor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the interactor in the world\n */" },
		{ "IncludePath", "VRScoutingInteractor.h" },
		{ "ModuleRelativePath", "VRScoutingInteractor.h" },
		{ "ToolTip", "Represents the interactor in the world" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRScoutingInteractor_Statics::NewProp_FlyingIndicatorComponent_MetaData[] = {
		{ "Category", "Interactor" },
		{ "Comment", "/** Shown in Navigation mode */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRScoutingInteractor.h" },
		{ "ToolTip", "Shown in Navigation mode" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVRScoutingInteractor_Statics::NewProp_FlyingIndicatorComponent = { "FlyingIndicatorComponent", nullptr, (EPropertyFlags)0x001400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVRScoutingInteractor, FlyingIndicatorComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRScoutingInteractor_Statics::NewProp_FlyingIndicatorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRScoutingInteractor_Statics::NewProp_FlyingIndicatorComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRScoutingInteractor_Statics::NewProp_EditorOnlyInputComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRScoutingInteractor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVRScoutingInteractor_Statics::NewProp_EditorOnlyInputComponent = { "EditorOnlyInputComponent", nullptr, (EPropertyFlags)0x0044000000282008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVRScoutingInteractor, EditorOnlyInputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRScoutingInteractor_Statics::NewProp_EditorOnlyInputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRScoutingInteractor_Statics::NewProp_EditorOnlyInputComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRScoutingInteractor_Statics::NewProp_bReceivesEditorInput_MetaData[] = {
		{ "BlueprintGetter", "GetReceivesEditorInput" },
		{ "BlueprintSetter", "SetReceivesEditorInput" },
		{ "Category", "Input|Editor" },
		{ "Comment", "/** If set to true, then this interactor will be able to recieve input delegate callbacks when in the editor. Defaults to true since we will always want this interactor to consume input */" },
		{ "ModuleRelativePath", "VRScoutingInteractor.h" },
		{ "ToolTip", "If set to true, then this interactor will be able to recieve input delegate callbacks when in the editor. Defaults to true since we will always want this interactor to consume input" },
	};
#endif
	void Z_Construct_UClass_UVRScoutingInteractor_Statics::NewProp_bReceivesEditorInput_SetBit(void* Obj)
	{
		((UVRScoutingInteractor*)Obj)->bReceivesEditorInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRScoutingInteractor_Statics::NewProp_bReceivesEditorInput = { "bReceivesEditorInput", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVRScoutingInteractor), &Z_Construct_UClass_UVRScoutingInteractor_Statics::NewProp_bReceivesEditorInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRScoutingInteractor_Statics::NewProp_bReceivesEditorInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRScoutingInteractor_Statics::NewProp_bReceivesEditorInput_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRScoutingInteractor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRScoutingInteractor_Statics::NewProp_FlyingIndicatorComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRScoutingInteractor_Statics::NewProp_EditorOnlyInputComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRScoutingInteractor_Statics::NewProp_bReceivesEditorInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRScoutingInteractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRScoutingInteractor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRScoutingInteractor_Statics::ClassParams = {
		&UVRScoutingInteractor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVRScoutingInteractor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVRScoutingInteractor_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVRScoutingInteractor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRScoutingInteractor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRScoutingInteractor()
	{
		if (!Z_Registration_Info_UClass_UVRScoutingInteractor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRScoutingInteractor.OuterSingleton, Z_Construct_UClass_UVRScoutingInteractor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVRScoutingInteractor.OuterSingleton;
	}
	template<> VREDITOR_API UClass* StaticClass<UVRScoutingInteractor>()
	{
		return UVRScoutingInteractor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRScoutingInteractor);
	UVRScoutingInteractor::~UVRScoutingInteractor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VRScoutingInteractor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VRScoutingInteractor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVRScoutingInteractor, UVRScoutingInteractor::StaticClass, TEXT("UVRScoutingInteractor"), &Z_Registration_Info_UClass_UVRScoutingInteractor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRScoutingInteractor), 2995230091U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VRScoutingInteractor_h_3783183380(TEXT("/Script/VREditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VRScoutingInteractor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VRScoutingInteractor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
