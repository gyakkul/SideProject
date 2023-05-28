// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedInputEditorSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedInputEditorSubsystem() {}
// Cross Module References
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputSubsystemInterface_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerInput_NoRegister();
	INPUTEDITOR_API UClass* Z_Construct_UClass_UEnhancedInputEditorSubsystem();
	INPUTEDITOR_API UClass* Z_Construct_UClass_UEnhancedInputEditorSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InputEditor();
// End Cross Module References
	DEFINE_FUNCTION(UEnhancedInputEditorSubsystem::execIsConsumingInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConsumingInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnhancedInputEditorSubsystem::execStopConsumingInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopConsumingInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnhancedInputEditorSubsystem::execStartConsumingInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartConsumingInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnhancedInputEditorSubsystem::execPopInputComponent)
	{
		P_GET_OBJECT(UInputComponent,Z_Param_InInputComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PopInputComponent(Z_Param_InInputComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnhancedInputEditorSubsystem::execPushInputComponent)
	{
		P_GET_OBJECT(UInputComponent,Z_Param_InInputComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PushInputComponent(Z_Param_InInputComponent);
		P_NATIVE_END;
	}
	void UEnhancedInputEditorSubsystem::StaticRegisterNativesUEnhancedInputEditorSubsystem()
	{
		UClass* Class = UEnhancedInputEditorSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsConsumingInput", &UEnhancedInputEditorSubsystem::execIsConsumingInput },
			{ "PopInputComponent", &UEnhancedInputEditorSubsystem::execPopInputComponent },
			{ "PushInputComponent", &UEnhancedInputEditorSubsystem::execPushInputComponent },
			{ "StartConsumingInput", &UEnhancedInputEditorSubsystem::execStartConsumingInput },
			{ "StopConsumingInput", &UEnhancedInputEditorSubsystem::execStopConsumingInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnhancedInputEditorSubsystem_IsConsumingInput_Statics
	{
		struct EnhancedInputEditorSubsystem_eventIsConsumingInput_Parms
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
	void Z_Construct_UFunction_UEnhancedInputEditorSubsystem_IsConsumingInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EnhancedInputEditorSubsystem_eventIsConsumingInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnhancedInputEditorSubsystem_IsConsumingInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EnhancedInputEditorSubsystem_eventIsConsumingInput_Parms), &Z_Construct_UFunction_UEnhancedInputEditorSubsystem_IsConsumingInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputEditorSubsystem_IsConsumingInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputEditorSubsystem_IsConsumingInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputEditorSubsystem_IsConsumingInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Editor" },
		{ "Comment", "/** Returns true if this subsystem is currently consuming input */" },
		{ "ModuleRelativePath", "Public/EnhancedInputEditorSubsystem.h" },
		{ "ToolTip", "Returns true if this subsystem is currently consuming input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputEditorSubsystem_IsConsumingInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputEditorSubsystem, nullptr, "IsConsumingInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputEditorSubsystem_IsConsumingInput_Statics::EnhancedInputEditorSubsystem_eventIsConsumingInput_Parms), Z_Construct_UFunction_UEnhancedInputEditorSubsystem_IsConsumingInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputEditorSubsystem_IsConsumingInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputEditorSubsystem_IsConsumingInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputEditorSubsystem_IsConsumingInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputEditorSubsystem_IsConsumingInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputEditorSubsystem_IsConsumingInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PopInputComponent_Statics
	{
		struct EnhancedInputEditorSubsystem_eventPopInputComponent_Parms
		{
			UInputComponent* InInputComponent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInputComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInputComponent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PopInputComponent_Statics::NewProp_InInputComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PopInputComponent_Statics::NewProp_InInputComponent = { "InInputComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputEditorSubsystem_eventPopInputComponent_Parms, InInputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PopInputComponent_Statics::NewProp_InInputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PopInputComponent_Statics::NewProp_InInputComponent_MetaData)) };
	void Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PopInputComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EnhancedInputEditorSubsystem_eventPopInputComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PopInputComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EnhancedInputEditorSubsystem_eventPopInputComponent_Parms), &Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PopInputComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PopInputComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PopInputComponent_Statics::NewProp_InInputComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PopInputComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PopInputComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Editor" },
		{ "Comment", "/** Removes this input component onto the stack to be processed by this subsystem's tick function */" },
		{ "ModuleRelativePath", "Public/EnhancedInputEditorSubsystem.h" },
		{ "ToolTip", "Removes this input component onto the stack to be processed by this subsystem's tick function" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PopInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputEditorSubsystem, nullptr, "PopInputComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PopInputComponent_Statics::EnhancedInputEditorSubsystem_eventPopInputComponent_Parms), Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PopInputComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PopInputComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PopInputComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PopInputComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PopInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PopInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PushInputComponent_Statics
	{
		struct EnhancedInputEditorSubsystem_eventPushInputComponent_Parms
		{
			UInputComponent* InInputComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInputComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInputComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PushInputComponent_Statics::NewProp_InInputComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PushInputComponent_Statics::NewProp_InInputComponent = { "InInputComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnhancedInputEditorSubsystem_eventPushInputComponent_Parms, InInputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PushInputComponent_Statics::NewProp_InInputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PushInputComponent_Statics::NewProp_InInputComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PushInputComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PushInputComponent_Statics::NewProp_InInputComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PushInputComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Editor" },
		{ "Comment", "/** Pushes this input component onto the stack to be processed by this subsystem's tick function */" },
		{ "ModuleRelativePath", "Public/EnhancedInputEditorSubsystem.h" },
		{ "ToolTip", "Pushes this input component onto the stack to be processed by this subsystem's tick function" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PushInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputEditorSubsystem, nullptr, "PushInputComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PushInputComponent_Statics::EnhancedInputEditorSubsystem_eventPushInputComponent_Parms), Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PushInputComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PushInputComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PushInputComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PushInputComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PushInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PushInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputEditorSubsystem_StartConsumingInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputEditorSubsystem_StartConsumingInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Editor" },
		{ "Comment", "/** Start the consumption of input messages in this subsystem. This is required to have any Input Action delegates be fired. */" },
		{ "ModuleRelativePath", "Public/EnhancedInputEditorSubsystem.h" },
		{ "ToolTip", "Start the consumption of input messages in this subsystem. This is required to have any Input Action delegates be fired." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputEditorSubsystem_StartConsumingInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputEditorSubsystem, nullptr, "StartConsumingInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputEditorSubsystem_StartConsumingInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputEditorSubsystem_StartConsumingInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputEditorSubsystem_StartConsumingInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputEditorSubsystem_StartConsumingInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnhancedInputEditorSubsystem_StopConsumingInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnhancedInputEditorSubsystem_StopConsumingInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Editor" },
		{ "Comment", "/** Tells this subsystem to stop ticking and consuming any input. This will stop any Input Action Delegates from being called. */" },
		{ "ModuleRelativePath", "Public/EnhancedInputEditorSubsystem.h" },
		{ "ToolTip", "Tells this subsystem to stop ticking and consuming any input. This will stop any Input Action Delegates from being called." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnhancedInputEditorSubsystem_StopConsumingInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnhancedInputEditorSubsystem, nullptr, "StopConsumingInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnhancedInputEditorSubsystem_StopConsumingInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnhancedInputEditorSubsystem_StopConsumingInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnhancedInputEditorSubsystem_StopConsumingInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnhancedInputEditorSubsystem_StopConsumingInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedInputEditorSubsystem);
	UClass* Z_Construct_UClass_UEnhancedInputEditorSubsystem_NoRegister()
	{
		return UEnhancedInputEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerInput;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentInputStack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInputStack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentInputStack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_InputEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnhancedInputEditorSubsystem_IsConsumingInput, "IsConsumingInput" }, // 1872878834
		{ &Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PopInputComponent, "PopInputComponent" }, // 3486125952
		{ &Z_Construct_UFunction_UEnhancedInputEditorSubsystem_PushInputComponent, "PushInputComponent" }, // 640390973
		{ &Z_Construct_UFunction_UEnhancedInputEditorSubsystem_StartConsumingInput, "StartConsumingInput" }, // 3586541808
		{ &Z_Construct_UFunction_UEnhancedInputEditorSubsystem_StopConsumingInput, "StopConsumingInput" }, // 4026092658
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The Enhanced Input Editor Subsystem can be used to process input outside of PIE within the editor.\n * Calling StartConsumingInput will allow the input preprocessor to drive Input Action delegates\n * to be fired in the editor.\n *\n * This allows you to hook up Input Action delegates in Editor Utilities to make editor tools driven by\n * input.\n */" },
		{ "IncludePath", "EnhancedInputEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/EnhancedInputEditorSubsystem.h" },
		{ "ToolTip", "The Enhanced Input Editor Subsystem can be used to process input outside of PIE within the editor.\nCalling StartConsumingInput will allow the input preprocessor to drive Input Action delegates\nto be fired in the editor.\n\nThis allows you to hook up Input Action delegates in Editor Utilities to make editor tools driven by\ninput." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics::NewProp_PlayerInput_MetaData[] = {
		{ "Comment", "/** The player input that is processing the input within this subsystem */" },
		{ "ModuleRelativePath", "Public/EnhancedInputEditorSubsystem.h" },
		{ "ToolTip", "The player input that is processing the input within this subsystem" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics::NewProp_PlayerInput = { "PlayerInput", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnhancedInputEditorSubsystem, PlayerInput), Z_Construct_UClass_UEnhancedPlayerInput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics::NewProp_PlayerInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics::NewProp_PlayerInput_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics::NewProp_CurrentInputStack_Inner = { "CurrentInputStack", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics::NewProp_CurrentInputStack_MetaData[] = {
		{ "Comment", "/** Internal. This is the current stack of InputComponents that is being processed by the PlayerInput. */" },
		{ "ModuleRelativePath", "Public/EnhancedInputEditorSubsystem.h" },
		{ "ToolTip", "Internal. This is the current stack of InputComponents that is being processed by the PlayerInput." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics::NewProp_CurrentInputStack = { "CurrentInputStack", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnhancedInputEditorSubsystem, CurrentInputStack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics::NewProp_CurrentInputStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics::NewProp_CurrentInputStack_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics::NewProp_PlayerInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics::NewProp_CurrentInputStack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics::NewProp_CurrentInputStack,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEnhancedInputSubsystemInterface_NoRegister, (int32)VTABLE_OFFSET(UEnhancedInputEditorSubsystem, IEnhancedInputSubsystemInterface), false },  // 2254447060
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputEditorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics::ClassParams = {
		&UEnhancedInputEditorSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnhancedInputEditorSubsystem()
	{
		if (!Z_Registration_Info_UClass_UEnhancedInputEditorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputEditorSubsystem.OuterSingleton, Z_Construct_UClass_UEnhancedInputEditorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnhancedInputEditorSubsystem.OuterSingleton;
	}
	template<> INPUTEDITOR_API UClass* StaticClass<UEnhancedInputEditorSubsystem>()
	{
		return UEnhancedInputEditorSubsystem::StaticClass();
	}
	UEnhancedInputEditorSubsystem::UEnhancedInputEditorSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputEditorSubsystem);
	UEnhancedInputEditorSubsystem::~UEnhancedInputEditorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnhancedInputEditorSubsystem, UEnhancedInputEditorSubsystem::StaticClass, TEXT("UEnhancedInputEditorSubsystem"), &Z_Registration_Info_UClass_UEnhancedInputEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputEditorSubsystem), 69761043U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSubsystem_h_2626595968(TEXT("/Script/InputEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_EnhancedInputEditorSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
