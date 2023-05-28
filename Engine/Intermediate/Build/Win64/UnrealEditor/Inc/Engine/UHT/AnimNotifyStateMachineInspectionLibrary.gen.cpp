// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimNotifyStateMachineInspectionLibrary.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyStateMachineInspectionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyStateMachineInspectionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyStateMachineInspectionLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEventReference();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UAnimNotifyStateMachineInspectionLibrary::execIsTriggeredByState)
	{
		P_GET_STRUCT_REF(FAnimNotifyEventReference,Z_Param_Out_EventReference);
		P_GET_OBJECT(UAnimInstance,Z_Param_AnimInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimNotifyStateMachineInspectionLibrary::IsTriggeredByState(Z_Param_Out_EventReference,Z_Param_AnimInstance,Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimNotifyStateMachineInspectionLibrary::execIsTriggeredByStateInStateMachine)
	{
		P_GET_STRUCT_REF(FAnimNotifyEventReference,Z_Param_Out_EventReference);
		P_GET_OBJECT(UAnimInstance,Z_Param_AnimInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_StateMachineName);
		P_GET_PROPERTY(FNameProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimNotifyStateMachineInspectionLibrary::IsTriggeredByStateInStateMachine(Z_Param_Out_EventReference,Z_Param_AnimInstance,Z_Param_StateMachineName,Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimNotifyStateMachineInspectionLibrary::execIsTriggeredByStateMachine)
	{
		P_GET_STRUCT_REF(FAnimNotifyEventReference,Z_Param_Out_EventReference);
		P_GET_OBJECT(UAnimInstance,Z_Param_AnimInstance);
		P_GET_PROPERTY(FNameProperty,Z_Param_StateMachineName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimNotifyStateMachineInspectionLibrary::IsTriggeredByStateMachine(Z_Param_Out_EventReference,Z_Param_AnimInstance,Z_Param_StateMachineName);
		P_NATIVE_END;
	}
	void UAnimNotifyStateMachineInspectionLibrary::StaticRegisterNativesUAnimNotifyStateMachineInspectionLibrary()
	{
		UClass* Class = UAnimNotifyStateMachineInspectionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsTriggeredByState", &UAnimNotifyStateMachineInspectionLibrary::execIsTriggeredByState },
			{ "IsTriggeredByStateInStateMachine", &UAnimNotifyStateMachineInspectionLibrary::execIsTriggeredByStateInStateMachine },
			{ "IsTriggeredByStateMachine", &UAnimNotifyStateMachineInspectionLibrary::execIsTriggeredByStateMachine },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState_Statics
	{
		struct AnimNotifyStateMachineInspectionLibrary_eventIsTriggeredByState_Parms
		{
			FAnimNotifyEventReference EventReference;
			UAnimInstance* AnimInstance;
			FName StateName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventReference;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StateName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState_Statics::NewProp_EventReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState_Statics::NewProp_EventReference = { "EventReference", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyStateMachineInspectionLibrary_eventIsTriggeredByState_Parms, EventReference), Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState_Statics::NewProp_EventReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState_Statics::NewProp_EventReference_MetaData)) }; // 1168965002
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyStateMachineInspectionLibrary_eventIsTriggeredByState_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyStateMachineInspectionLibrary_eventIsTriggeredByState_Parms, StateName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimNotifyStateMachineInspectionLibrary_eventIsTriggeredByState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimNotifyStateMachineInspectionLibrary_eventIsTriggeredByState_Parms), &Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState_Statics::NewProp_EventReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState_Statics::NewProp_AnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState_Statics::NewProp_StateName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation|Notifies" },
		{ "Comment", "/** Get whether a state with the given name in any state machine triggered the notify\n\x09*\n\x09* @param EventReference\x09\x09The event to inspect\n\x09* @param MeshComp\x09\x09\x09The skeletal mesh that contains the animation instance that produced the event\n\x09* @param StateName\x09\x09\x09The name of a state to test\n\x09*/" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyStateMachineInspectionLibrary.h" },
		{ "ToolTip", "Get whether a state with the given name in any state machine triggered the notify\n\n@param EventReference         The event to inspect\n@param MeshComp                       The skeletal mesh that contains the animation instance that produced the event\n@param StateName                      The name of a state to test" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyStateMachineInspectionLibrary, nullptr, "IsTriggeredByState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState_Statics::AnimNotifyStateMachineInspectionLibrary_eventIsTriggeredByState_Parms), Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics
	{
		struct AnimNotifyStateMachineInspectionLibrary_eventIsTriggeredByStateInStateMachine_Parms
		{
			FAnimNotifyEventReference EventReference;
			UAnimInstance* AnimInstance;
			FName StateMachineName;
			FName StateName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventReference;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StateMachineName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StateName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics::NewProp_EventReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics::NewProp_EventReference = { "EventReference", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyStateMachineInspectionLibrary_eventIsTriggeredByStateInStateMachine_Parms, EventReference), Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics::NewProp_EventReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics::NewProp_EventReference_MetaData)) }; // 1168965002
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyStateMachineInspectionLibrary_eventIsTriggeredByStateInStateMachine_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics::NewProp_StateMachineName = { "StateMachineName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyStateMachineInspectionLibrary_eventIsTriggeredByStateInStateMachine_Parms, StateMachineName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyStateMachineInspectionLibrary_eventIsTriggeredByStateInStateMachine_Parms, StateName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimNotifyStateMachineInspectionLibrary_eventIsTriggeredByStateInStateMachine_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimNotifyStateMachineInspectionLibrary_eventIsTriggeredByStateInStateMachine_Parms), &Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics::NewProp_EventReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics::NewProp_AnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics::NewProp_StateMachineName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics::NewProp_StateName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation|Notifies" },
		{ "Comment", "/** Get whether a particular state in a specific state machine triggered the notify\n\x09*\n\x09* @param EventReference\x09\x09The event to inspect\n\x09* @param MeshComp\x09\x09\x09The skeletal mesh that contains the animation instance that produced the event\n\x09* @param StateMachineName\x09The name of a state machine to test\n\x09* @param StateName\x09\x09\x09The name of a state to test\n\x09*/" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyStateMachineInspectionLibrary.h" },
		{ "ToolTip", "Get whether a particular state in a specific state machine triggered the notify\n\n@param EventReference         The event to inspect\n@param MeshComp                       The skeletal mesh that contains the animation instance that produced the event\n@param StateMachineName       The name of a state machine to test\n@param StateName                      The name of a state to test" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyStateMachineInspectionLibrary, nullptr, "IsTriggeredByStateInStateMachine", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics::AnimNotifyStateMachineInspectionLibrary_eventIsTriggeredByStateInStateMachine_Parms), Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine_Statics
	{
		struct AnimNotifyStateMachineInspectionLibrary_eventIsTriggeredByStateMachine_Parms
		{
			FAnimNotifyEventReference EventReference;
			UAnimInstance* AnimInstance;
			FName StateMachineName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventReference;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StateMachineName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine_Statics::NewProp_EventReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine_Statics::NewProp_EventReference = { "EventReference", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyStateMachineInspectionLibrary_eventIsTriggeredByStateMachine_Parms, EventReference), Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine_Statics::NewProp_EventReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine_Statics::NewProp_EventReference_MetaData)) }; // 1168965002
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyStateMachineInspectionLibrary_eventIsTriggeredByStateMachine_Parms, AnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine_Statics::NewProp_StateMachineName = { "StateMachineName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyStateMachineInspectionLibrary_eventIsTriggeredByStateMachine_Parms, StateMachineName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimNotifyStateMachineInspectionLibrary_eventIsTriggeredByStateMachine_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimNotifyStateMachineInspectionLibrary_eventIsTriggeredByStateMachine_Parms), &Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine_Statics::NewProp_EventReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine_Statics::NewProp_AnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine_Statics::NewProp_StateMachineName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation|Notifies" },
		{ "Comment", "/** Get whether the notify was triggered from the specified state machine\n\x09*\n    * @param EventReference\x09\x09The event to inspect\n    * @param MeshComp\x09\x09\x09The skeletal mesh that contains the animation instance that produced the event\n    * @param StateMachineName\x09The Name of a state machine to test\n    */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyStateMachineInspectionLibrary.h" },
		{ "ToolTip", "Get whether the notify was triggered from the specified state machine\n\n@param EventReference            The event to inspect\n@param MeshComp                  The skeletal mesh that contains the animation instance that produced the event\n@param StateMachineName  The Name of a state machine to test" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyStateMachineInspectionLibrary, nullptr, "IsTriggeredByStateMachine", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine_Statics::AnimNotifyStateMachineInspectionLibrary_eventIsTriggeredByStateMachine_Parms), Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyStateMachineInspectionLibrary);
	UClass* Z_Construct_UClass_UAnimNotifyStateMachineInspectionLibrary_NoRegister()
	{
		return UAnimNotifyStateMachineInspectionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyStateMachineInspectionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyStateMachineInspectionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimNotifyStateMachineInspectionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByState, "IsTriggeredByState" }, // 3245634538
		{ &Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateInStateMachine, "IsTriggeredByStateInStateMachine" }, // 4190843005
		{ &Z_Construct_UFunction_UAnimNotifyStateMachineInspectionLibrary_IsTriggeredByStateMachine, "IsTriggeredByStateMachine" }, // 3989520974
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyStateMachineInspectionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\x09""A library of commonly used functionality for Notifies related to state machines, exposed to blueprint.\n*/" },
		{ "IncludePath", "Animation/AnimNotifyStateMachineInspectionLibrary.h" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyStateMachineInspectionLibrary.h" },
		{ "ScriptName", "UAnimNotifyStateMachineInspectionLibrary" },
		{ "ToolTip", "A library of commonly used functionality for Notifies related to state machines, exposed to blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyStateMachineInspectionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyStateMachineInspectionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyStateMachineInspectionLibrary_Statics::ClassParams = {
		&UAnimNotifyStateMachineInspectionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyStateMachineInspectionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyStateMachineInspectionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotifyStateMachineInspectionLibrary()
	{
		if (!Z_Registration_Info_UClass_UAnimNotifyStateMachineInspectionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyStateMachineInspectionLibrary.OuterSingleton, Z_Construct_UClass_UAnimNotifyStateMachineInspectionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotifyStateMachineInspectionLibrary.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimNotifyStateMachineInspectionLibrary>()
	{
		return UAnimNotifyStateMachineInspectionLibrary::StaticClass();
	}
	UAnimNotifyStateMachineInspectionLibrary::UAnimNotifyStateMachineInspectionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyStateMachineInspectionLibrary);
	UAnimNotifyStateMachineInspectionLibrary::~UAnimNotifyStateMachineInspectionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyStateMachineInspectionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyStateMachineInspectionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyStateMachineInspectionLibrary, UAnimNotifyStateMachineInspectionLibrary::StaticClass, TEXT("UAnimNotifyStateMachineInspectionLibrary"), &Z_Registration_Info_UClass_UAnimNotifyStateMachineInspectionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyStateMachineInspectionLibrary), 3539126246U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyStateMachineInspectionLibrary_h_2972794528(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyStateMachineInspectionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyStateMachineInspectionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
