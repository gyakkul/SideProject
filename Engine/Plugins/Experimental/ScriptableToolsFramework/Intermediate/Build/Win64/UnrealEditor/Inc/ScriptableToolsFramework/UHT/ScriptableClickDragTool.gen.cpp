// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseTools/ScriptableClickDragTool.h"
#include "InputState.h"
#include "ScriptableInteractiveTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScriptableClickDragTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMouseHoverBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceRay();
	INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FInputRayHit();
	SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableClickDragTool();
	SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableClickDragTool_NoRegister();
	SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableInteractiveTool();
	SCRIPTABLETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptableToolModifierStates();
	UPackage* Z_Construct_UPackage__Script_ScriptableToolsFramework();
// End Cross Module References
	DEFINE_FUNCTION(UScriptableClickDragTool::execGetActiveModifiers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScriptableToolModifierStates*)Z_Param__Result=P_THIS->GetActiveModifiers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableClickDragTool::execIsAltDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAltDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableClickDragTool::execIsCtrlDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCtrlDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableClickDragTool::execIsShiftDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsShiftDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableClickDragTool::execInActiveHover)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InActiveHover();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableClickDragTool::execOnHoverEnd)
	{
		P_GET_STRUCT_REF(FScriptableToolModifierStates,Z_Param_Out_Modifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHoverEnd_Implementation(Z_Param_Out_Modifiers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableClickDragTool::execOnHoverUpdate)
	{
		P_GET_STRUCT(FInputDeviceRay,Z_Param_HoverPos);
		P_GET_STRUCT_REF(FScriptableToolModifierStates,Z_Param_Out_Modifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnHoverUpdate_Implementation(Z_Param_HoverPos,Z_Param_Out_Modifiers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableClickDragTool::execOnHoverBegin)
	{
		P_GET_STRUCT(FInputDeviceRay,Z_Param_HoverPos);
		P_GET_STRUCT_REF(FScriptableToolModifierStates,Z_Param_Out_Modifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHoverBegin_Implementation(Z_Param_HoverPos,Z_Param_Out_Modifiers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableClickDragTool::execOnHoverHitTest)
	{
		P_GET_STRUCT(FInputDeviceRay,Z_Param_HoverPos);
		P_GET_STRUCT_REF(FScriptableToolModifierStates,Z_Param_Out_Modifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputRayHit*)Z_Param__Result=P_THIS->OnHoverHitTest_Implementation(Z_Param_HoverPos,Z_Param_Out_Modifiers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableClickDragTool::execInActiveClickDrag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InActiveClickDrag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableClickDragTool::execOnDragSequenceCancelled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDragSequenceCancelled_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableClickDragTool::execOnDragEnd)
	{
		P_GET_STRUCT(FInputDeviceRay,Z_Param_EndPosition);
		P_GET_STRUCT_REF(FScriptableToolModifierStates,Z_Param_Out_Modifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDragEnd_Implementation(Z_Param_EndPosition,Z_Param_Out_Modifiers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableClickDragTool::execOnDragUpdatePosition)
	{
		P_GET_STRUCT(FInputDeviceRay,Z_Param_NewPosition);
		P_GET_STRUCT_REF(FScriptableToolModifierStates,Z_Param_Out_Modifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDragUpdatePosition_Implementation(Z_Param_NewPosition,Z_Param_Out_Modifiers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableClickDragTool::execOnDragBegin)
	{
		P_GET_STRUCT(FInputDeviceRay,Z_Param_StartPosition);
		P_GET_STRUCT_REF(FScriptableToolModifierStates,Z_Param_Out_Modifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDragBegin_Implementation(Z_Param_StartPosition,Z_Param_Out_Modifiers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableClickDragTool::execTestIfCanBeginClickDrag)
	{
		P_GET_STRUCT(FInputDeviceRay,Z_Param_ClickPos);
		P_GET_STRUCT_REF(FScriptableToolModifierStates,Z_Param_Out_Modifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputRayHit*)Z_Param__Result=P_THIS->TestIfCanBeginClickDrag_Implementation(Z_Param_ClickPos,Z_Param_Out_Modifiers);
		P_NATIVE_END;
	}
	struct ScriptableClickDragTool_eventOnDragBegin_Parms
	{
		FInputDeviceRay StartPosition;
		FScriptableToolModifierStates Modifiers;
	};
	struct ScriptableClickDragTool_eventOnDragEnd_Parms
	{
		FInputDeviceRay EndPosition;
		FScriptableToolModifierStates Modifiers;
	};
	struct ScriptableClickDragTool_eventOnDragUpdatePosition_Parms
	{
		FInputDeviceRay NewPosition;
		FScriptableToolModifierStates Modifiers;
	};
	struct ScriptableClickDragTool_eventOnHoverBegin_Parms
	{
		FInputDeviceRay HoverPos;
		FScriptableToolModifierStates Modifiers;
	};
	struct ScriptableClickDragTool_eventOnHoverEnd_Parms
	{
		FScriptableToolModifierStates Modifiers;
	};
	struct ScriptableClickDragTool_eventOnHoverHitTest_Parms
	{
		FInputDeviceRay HoverPos;
		FScriptableToolModifierStates Modifiers;
		FInputRayHit ReturnValue;
	};
	struct ScriptableClickDragTool_eventOnHoverUpdate_Parms
	{
		FInputDeviceRay HoverPos;
		FScriptableToolModifierStates Modifiers;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ScriptableClickDragTool_eventOnHoverUpdate_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct ScriptableClickDragTool_eventTestIfCanBeginClickDrag_Parms
	{
		FInputDeviceRay ClickPos;
		FScriptableToolModifierStates Modifiers;
		FInputRayHit ReturnValue;
	};
	static FName NAME_UScriptableClickDragTool_OnDragBegin = FName(TEXT("OnDragBegin"));
	void UScriptableClickDragTool::OnDragBegin(FInputDeviceRay StartPosition, FScriptableToolModifierStates const& Modifiers)
	{
		ScriptableClickDragTool_eventOnDragBegin_Parms Parms;
		Parms.StartPosition=StartPosition;
		Parms.Modifiers=Modifiers;
		ProcessEvent(FindFunctionChecked(NAME_UScriptableClickDragTool_OnDragBegin),&Parms);
	}
	static FName NAME_UScriptableClickDragTool_OnDragEnd = FName(TEXT("OnDragEnd"));
	void UScriptableClickDragTool::OnDragEnd(FInputDeviceRay EndPosition, FScriptableToolModifierStates const& Modifiers)
	{
		ScriptableClickDragTool_eventOnDragEnd_Parms Parms;
		Parms.EndPosition=EndPosition;
		Parms.Modifiers=Modifiers;
		ProcessEvent(FindFunctionChecked(NAME_UScriptableClickDragTool_OnDragEnd),&Parms);
	}
	static FName NAME_UScriptableClickDragTool_OnDragSequenceCancelled = FName(TEXT("OnDragSequenceCancelled"));
	void UScriptableClickDragTool::OnDragSequenceCancelled()
	{
		ProcessEvent(FindFunctionChecked(NAME_UScriptableClickDragTool_OnDragSequenceCancelled),NULL);
	}
	static FName NAME_UScriptableClickDragTool_OnDragUpdatePosition = FName(TEXT("OnDragUpdatePosition"));
	void UScriptableClickDragTool::OnDragUpdatePosition(FInputDeviceRay NewPosition, FScriptableToolModifierStates const& Modifiers)
	{
		ScriptableClickDragTool_eventOnDragUpdatePosition_Parms Parms;
		Parms.NewPosition=NewPosition;
		Parms.Modifiers=Modifiers;
		ProcessEvent(FindFunctionChecked(NAME_UScriptableClickDragTool_OnDragUpdatePosition),&Parms);
	}
	static FName NAME_UScriptableClickDragTool_OnHoverBegin = FName(TEXT("OnHoverBegin"));
	void UScriptableClickDragTool::OnHoverBegin(FInputDeviceRay HoverPos, FScriptableToolModifierStates const& Modifiers)
	{
		ScriptableClickDragTool_eventOnHoverBegin_Parms Parms;
		Parms.HoverPos=HoverPos;
		Parms.Modifiers=Modifiers;
		ProcessEvent(FindFunctionChecked(NAME_UScriptableClickDragTool_OnHoverBegin),&Parms);
	}
	static FName NAME_UScriptableClickDragTool_OnHoverEnd = FName(TEXT("OnHoverEnd"));
	void UScriptableClickDragTool::OnHoverEnd(FScriptableToolModifierStates const& Modifiers)
	{
		ScriptableClickDragTool_eventOnHoverEnd_Parms Parms;
		Parms.Modifiers=Modifiers;
		ProcessEvent(FindFunctionChecked(NAME_UScriptableClickDragTool_OnHoverEnd),&Parms);
	}
	static FName NAME_UScriptableClickDragTool_OnHoverHitTest = FName(TEXT("OnHoverHitTest"));
	FInputRayHit UScriptableClickDragTool::OnHoverHitTest(FInputDeviceRay HoverPos, FScriptableToolModifierStates const& Modifiers)
	{
		ScriptableClickDragTool_eventOnHoverHitTest_Parms Parms;
		Parms.HoverPos=HoverPos;
		Parms.Modifiers=Modifiers;
		ProcessEvent(FindFunctionChecked(NAME_UScriptableClickDragTool_OnHoverHitTest),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UScriptableClickDragTool_OnHoverUpdate = FName(TEXT("OnHoverUpdate"));
	bool UScriptableClickDragTool::OnHoverUpdate(FInputDeviceRay HoverPos, FScriptableToolModifierStates const& Modifiers)
	{
		ScriptableClickDragTool_eventOnHoverUpdate_Parms Parms;
		Parms.HoverPos=HoverPos;
		Parms.Modifiers=Modifiers;
		ProcessEvent(FindFunctionChecked(NAME_UScriptableClickDragTool_OnHoverUpdate),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UScriptableClickDragTool_TestIfCanBeginClickDrag = FName(TEXT("TestIfCanBeginClickDrag"));
	FInputRayHit UScriptableClickDragTool::TestIfCanBeginClickDrag(FInputDeviceRay ClickPos, FScriptableToolModifierStates const& Modifiers)
	{
		ScriptableClickDragTool_eventTestIfCanBeginClickDrag_Parms Parms;
		Parms.ClickPos=ClickPos;
		Parms.Modifiers=Modifiers;
		ProcessEvent(FindFunctionChecked(NAME_UScriptableClickDragTool_TestIfCanBeginClickDrag),&Parms);
		return Parms.ReturnValue;
	}
	void UScriptableClickDragTool::StaticRegisterNativesUScriptableClickDragTool()
	{
		UClass* Class = UScriptableClickDragTool::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveModifiers", &UScriptableClickDragTool::execGetActiveModifiers },
			{ "InActiveClickDrag", &UScriptableClickDragTool::execInActiveClickDrag },
			{ "InActiveHover", &UScriptableClickDragTool::execInActiveHover },
			{ "IsAltDown", &UScriptableClickDragTool::execIsAltDown },
			{ "IsCtrlDown", &UScriptableClickDragTool::execIsCtrlDown },
			{ "IsShiftDown", &UScriptableClickDragTool::execIsShiftDown },
			{ "OnDragBegin", &UScriptableClickDragTool::execOnDragBegin },
			{ "OnDragEnd", &UScriptableClickDragTool::execOnDragEnd },
			{ "OnDragSequenceCancelled", &UScriptableClickDragTool::execOnDragSequenceCancelled },
			{ "OnDragUpdatePosition", &UScriptableClickDragTool::execOnDragUpdatePosition },
			{ "OnHoverBegin", &UScriptableClickDragTool::execOnHoverBegin },
			{ "OnHoverEnd", &UScriptableClickDragTool::execOnHoverEnd },
			{ "OnHoverHitTest", &UScriptableClickDragTool::execOnHoverHitTest },
			{ "OnHoverUpdate", &UScriptableClickDragTool::execOnHoverUpdate },
			{ "TestIfCanBeginClickDrag", &UScriptableClickDragTool::execTestIfCanBeginClickDrag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScriptableClickDragTool_GetActiveModifiers_Statics
	{
		struct ScriptableClickDragTool_eventGetActiveModifiers_Parms
		{
			FScriptableToolModifierStates ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableClickDragTool_GetActiveModifiers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableClickDragTool_eventGetActiveModifiers_Parms, ReturnValue), Z_Construct_UScriptStruct_FScriptableToolModifierStates, METADATA_PARAMS(nullptr, 0) }; // 1925515539
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableClickDragTool_GetActiveModifiers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableClickDragTool_GetActiveModifiers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_GetActiveModifiers_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Input" },
		{ "Comment", "/** @return a struct containing the current Modifier key states */" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableClickDragTool.h" },
		{ "ToolTip", "@return a struct containing the current Modifier key states" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableClickDragTool_GetActiveModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableClickDragTool, nullptr, "GetActiveModifiers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableClickDragTool_GetActiveModifiers_Statics::ScriptableClickDragTool_eventGetActiveModifiers_Parms), Z_Construct_UFunction_UScriptableClickDragTool_GetActiveModifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_GetActiveModifiers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_GetActiveModifiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_GetActiveModifiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableClickDragTool_GetActiveModifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableClickDragTool_GetActiveModifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableClickDragTool_InActiveClickDrag_Statics
	{
		struct ScriptableClickDragTool_eventInActiveClickDrag_Parms
		{
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_InActiveClickDrag_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "In ClickDrag State" },
	};
#endif
	void Z_Construct_UFunction_UScriptableClickDragTool_InActiveClickDrag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ScriptableClickDragTool_eventInActiveClickDrag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptableClickDragTool_InActiveClickDrag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptableClickDragTool_eventInActiveClickDrag_Parms), &Z_Construct_UFunction_UScriptableClickDragTool_InActiveClickDrag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_InActiveClickDrag_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_InActiveClickDrag_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableClickDragTool_InActiveClickDrag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableClickDragTool_InActiveClickDrag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_InActiveClickDrag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Input" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableClickDragTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableClickDragTool_InActiveClickDrag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableClickDragTool, nullptr, "InActiveClickDrag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableClickDragTool_InActiveClickDrag_Statics::ScriptableClickDragTool_eventInActiveClickDrag_Parms), Z_Construct_UFunction_UScriptableClickDragTool_InActiveClickDrag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_InActiveClickDrag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_InActiveClickDrag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_InActiveClickDrag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableClickDragTool_InActiveClickDrag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableClickDragTool_InActiveClickDrag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableClickDragTool_InActiveHover_Statics
	{
		struct ScriptableClickDragTool_eventInActiveHover_Parms
		{
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_InActiveHover_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "In Hover State" },
	};
#endif
	void Z_Construct_UFunction_UScriptableClickDragTool_InActiveHover_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ScriptableClickDragTool_eventInActiveHover_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptableClickDragTool_InActiveHover_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptableClickDragTool_eventInActiveHover_Parms), &Z_Construct_UFunction_UScriptableClickDragTool_InActiveHover_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_InActiveHover_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_InActiveHover_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableClickDragTool_InActiveHover_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableClickDragTool_InActiveHover_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_InActiveHover_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Input" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableClickDragTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableClickDragTool_InActiveHover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableClickDragTool, nullptr, "InActiveHover", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableClickDragTool_InActiveHover_Statics::ScriptableClickDragTool_eventInActiveHover_Parms), Z_Construct_UFunction_UScriptableClickDragTool_InActiveHover_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_InActiveHover_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_InActiveHover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_InActiveHover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableClickDragTool_InActiveHover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableClickDragTool_InActiveHover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableClickDragTool_IsAltDown_Statics
	{
		struct ScriptableClickDragTool_eventIsAltDown_Parms
		{
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_IsAltDown_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Alt Down" },
	};
#endif
	void Z_Construct_UFunction_UScriptableClickDragTool_IsAltDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ScriptableClickDragTool_eventIsAltDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptableClickDragTool_IsAltDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptableClickDragTool_eventIsAltDown_Parms), &Z_Construct_UFunction_UScriptableClickDragTool_IsAltDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_IsAltDown_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_IsAltDown_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableClickDragTool_IsAltDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableClickDragTool_IsAltDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_IsAltDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Input" },
		{ "Comment", "/** @return true if the Alt key is currently held down */" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableClickDragTool.h" },
		{ "ToolTip", "@return true if the Alt key is currently held down" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableClickDragTool_IsAltDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableClickDragTool, nullptr, "IsAltDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableClickDragTool_IsAltDown_Statics::ScriptableClickDragTool_eventIsAltDown_Parms), Z_Construct_UFunction_UScriptableClickDragTool_IsAltDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_IsAltDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_IsAltDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_IsAltDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableClickDragTool_IsAltDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableClickDragTool_IsAltDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableClickDragTool_IsCtrlDown_Statics
	{
		struct ScriptableClickDragTool_eventIsCtrlDown_Parms
		{
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_IsCtrlDown_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Ctrl Down" },
	};
#endif
	void Z_Construct_UFunction_UScriptableClickDragTool_IsCtrlDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ScriptableClickDragTool_eventIsCtrlDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptableClickDragTool_IsCtrlDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptableClickDragTool_eventIsCtrlDown_Parms), &Z_Construct_UFunction_UScriptableClickDragTool_IsCtrlDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_IsCtrlDown_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_IsCtrlDown_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableClickDragTool_IsCtrlDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableClickDragTool_IsCtrlDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_IsCtrlDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Input" },
		{ "Comment", "/** @return true if the Ctrl key is currently held down */" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableClickDragTool.h" },
		{ "ToolTip", "@return true if the Ctrl key is currently held down" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableClickDragTool_IsCtrlDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableClickDragTool, nullptr, "IsCtrlDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableClickDragTool_IsCtrlDown_Statics::ScriptableClickDragTool_eventIsCtrlDown_Parms), Z_Construct_UFunction_UScriptableClickDragTool_IsCtrlDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_IsCtrlDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_IsCtrlDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_IsCtrlDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableClickDragTool_IsCtrlDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableClickDragTool_IsCtrlDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableClickDragTool_IsShiftDown_Statics
	{
		struct ScriptableClickDragTool_eventIsShiftDown_Parms
		{
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_IsShiftDown_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Shift Down" },
	};
#endif
	void Z_Construct_UFunction_UScriptableClickDragTool_IsShiftDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ScriptableClickDragTool_eventIsShiftDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptableClickDragTool_IsShiftDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptableClickDragTool_eventIsShiftDown_Parms), &Z_Construct_UFunction_UScriptableClickDragTool_IsShiftDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_IsShiftDown_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_IsShiftDown_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableClickDragTool_IsShiftDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableClickDragTool_IsShiftDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_IsShiftDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Input" },
		{ "Comment", "/** @return true if the Shift key is currently held down */" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableClickDragTool.h" },
		{ "ToolTip", "@return true if the Shift key is currently held down" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableClickDragTool_IsShiftDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableClickDragTool, nullptr, "IsShiftDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableClickDragTool_IsShiftDown_Statics::ScriptableClickDragTool_eventIsShiftDown_Parms), Z_Construct_UFunction_UScriptableClickDragTool_IsShiftDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_IsShiftDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_IsShiftDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_IsShiftDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableClickDragTool_IsShiftDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableClickDragTool_IsShiftDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableClickDragTool_OnDragBegin_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableClickDragTool_OnDragBegin_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableClickDragTool_eventOnDragBegin_Parms, StartPosition), Z_Construct_UScriptStruct_FInputDeviceRay, METADATA_PARAMS(nullptr, 0) }; // 1496444290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_OnDragBegin_Statics::NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableClickDragTool_OnDragBegin_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableClickDragTool_eventOnDragBegin_Parms, Modifiers), Z_Construct_UScriptStruct_FScriptableToolModifierStates, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_OnDragBegin_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_OnDragBegin_Statics::NewProp_Modifiers_MetaData)) }; // 1925515539
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableClickDragTool_OnDragBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableClickDragTool_OnDragBegin_Statics::NewProp_StartPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableClickDragTool_OnDragBegin_Statics::NewProp_Modifiers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_OnDragBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClickDrag Events" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableClickDragTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableClickDragTool_OnDragBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableClickDragTool, nullptr, "OnDragBegin", nullptr, nullptr, sizeof(ScriptableClickDragTool_eventOnDragBegin_Parms), Z_Construct_UFunction_UScriptableClickDragTool_OnDragBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_OnDragBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_OnDragBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_OnDragBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableClickDragTool_OnDragBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableClickDragTool_OnDragBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableClickDragTool_OnDragEnd_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableClickDragTool_OnDragEnd_Statics::NewProp_EndPosition = { "EndPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableClickDragTool_eventOnDragEnd_Parms, EndPosition), Z_Construct_UScriptStruct_FInputDeviceRay, METADATA_PARAMS(nullptr, 0) }; // 1496444290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_OnDragEnd_Statics::NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableClickDragTool_OnDragEnd_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableClickDragTool_eventOnDragEnd_Parms, Modifiers), Z_Construct_UScriptStruct_FScriptableToolModifierStates, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_OnDragEnd_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_OnDragEnd_Statics::NewProp_Modifiers_MetaData)) }; // 1925515539
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableClickDragTool_OnDragEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableClickDragTool_OnDragEnd_Statics::NewProp_EndPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableClickDragTool_OnDragEnd_Statics::NewProp_Modifiers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_OnDragEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClickDrag Events" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableClickDragTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableClickDragTool_OnDragEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableClickDragTool, nullptr, "OnDragEnd", nullptr, nullptr, sizeof(ScriptableClickDragTool_eventOnDragEnd_Parms), Z_Construct_UFunction_UScriptableClickDragTool_OnDragEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_OnDragEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_OnDragEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_OnDragEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableClickDragTool_OnDragEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableClickDragTool_OnDragEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableClickDragTool_OnDragSequenceCancelled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_OnDragSequenceCancelled_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClickDrag Events" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableClickDragTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableClickDragTool_OnDragSequenceCancelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableClickDragTool, nullptr, "OnDragSequenceCancelled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_OnDragSequenceCancelled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_OnDragSequenceCancelled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableClickDragTool_OnDragSequenceCancelled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableClickDragTool_OnDragSequenceCancelled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableClickDragTool_OnDragUpdatePosition_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableClickDragTool_OnDragUpdatePosition_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableClickDragTool_eventOnDragUpdatePosition_Parms, NewPosition), Z_Construct_UScriptStruct_FInputDeviceRay, METADATA_PARAMS(nullptr, 0) }; // 1496444290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_OnDragUpdatePosition_Statics::NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableClickDragTool_OnDragUpdatePosition_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableClickDragTool_eventOnDragUpdatePosition_Parms, Modifiers), Z_Construct_UScriptStruct_FScriptableToolModifierStates, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_OnDragUpdatePosition_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_OnDragUpdatePosition_Statics::NewProp_Modifiers_MetaData)) }; // 1925515539
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableClickDragTool_OnDragUpdatePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableClickDragTool_OnDragUpdatePosition_Statics::NewProp_NewPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableClickDragTool_OnDragUpdatePosition_Statics::NewProp_Modifiers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_OnDragUpdatePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClickDrag Events" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableClickDragTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableClickDragTool_OnDragUpdatePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableClickDragTool, nullptr, "OnDragUpdatePosition", nullptr, nullptr, sizeof(ScriptableClickDragTool_eventOnDragUpdatePosition_Parms), Z_Construct_UFunction_UScriptableClickDragTool_OnDragUpdatePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_OnDragUpdatePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_OnDragUpdatePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_OnDragUpdatePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableClickDragTool_OnDragUpdatePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableClickDragTool_OnDragUpdatePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableClickDragTool_OnHoverBegin_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoverPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableClickDragTool_OnHoverBegin_Statics::NewProp_HoverPos = { "HoverPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableClickDragTool_eventOnHoverBegin_Parms, HoverPos), Z_Construct_UScriptStruct_FInputDeviceRay, METADATA_PARAMS(nullptr, 0) }; // 1496444290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_OnHoverBegin_Statics::NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableClickDragTool_OnHoverBegin_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableClickDragTool_eventOnHoverBegin_Parms, Modifiers), Z_Construct_UScriptStruct_FScriptableToolModifierStates, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_OnHoverBegin_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_OnHoverBegin_Statics::NewProp_Modifiers_MetaData)) }; // 1925515539
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableClickDragTool_OnHoverBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableClickDragTool_OnHoverBegin_Statics::NewProp_HoverPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableClickDragTool_OnHoverBegin_Statics::NewProp_Modifiers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_OnHoverBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hover Events" },
		{ "Comment", "/**\n\x09 * Begin a sequence of Hover input events \n\x09 * @param HoverPos the current position of the cursor/device, including both a 3D ray from the eye, and (optionally) a 2D mouse position\n\x09 * @param Modifiers current modifier key/button state\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableClickDragTool.h" },
		{ "ToolTip", "Begin a sequence of Hover input events\n@param HoverPos the current position of the cursor/device, including both a 3D ray from the eye, and (optionally) a 2D mouse position\n@param Modifiers current modifier key/button state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableClickDragTool_OnHoverBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableClickDragTool, nullptr, "OnHoverBegin", nullptr, nullptr, sizeof(ScriptableClickDragTool_eventOnHoverBegin_Parms), Z_Construct_UFunction_UScriptableClickDragTool_OnHoverBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_OnHoverBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_OnHoverBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_OnHoverBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableClickDragTool_OnHoverBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableClickDragTool_OnHoverBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableClickDragTool_OnHoverEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_OnHoverEnd_Statics::NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableClickDragTool_OnHoverEnd_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableClickDragTool_eventOnHoverEnd_Parms, Modifiers), Z_Construct_UScriptStruct_FScriptableToolModifierStates, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_OnHoverEnd_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_OnHoverEnd_Statics::NewProp_Modifiers_MetaData)) }; // 1925515539
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableClickDragTool_OnHoverEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableClickDragTool_OnHoverEnd_Statics::NewProp_Modifiers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_OnHoverEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hover Events" },
		{ "Comment", "/**\n\x09 * Indicate that an active captured Hover sequence has ended. The device may no longer be in the viewport, so no position can be provided.\n\x09 * @param Modifiers current modifier key/button state\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableClickDragTool.h" },
		{ "ToolTip", "Indicate that an active captured Hover sequence has ended. The device may no longer be in the viewport, so no position can be provided.\n@param Modifiers current modifier key/button state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableClickDragTool_OnHoverEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableClickDragTool, nullptr, "OnHoverEnd", nullptr, nullptr, sizeof(ScriptableClickDragTool_eventOnHoverEnd_Parms), Z_Construct_UFunction_UScriptableClickDragTool_OnHoverEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_OnHoverEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_OnHoverEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_OnHoverEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableClickDragTool_OnHoverEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableClickDragTool_OnHoverEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableClickDragTool_OnHoverHitTest_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoverPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableClickDragTool_OnHoverHitTest_Statics::NewProp_HoverPos = { "HoverPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableClickDragTool_eventOnHoverHitTest_Parms, HoverPos), Z_Construct_UScriptStruct_FInputDeviceRay, METADATA_PARAMS(nullptr, 0) }; // 1496444290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_OnHoverHitTest_Statics::NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableClickDragTool_OnHoverHitTest_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableClickDragTool_eventOnHoverHitTest_Parms, Modifiers), Z_Construct_UScriptStruct_FScriptableToolModifierStates, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_OnHoverHitTest_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_OnHoverHitTest_Statics::NewProp_Modifiers_MetaData)) }; // 1925515539
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableClickDragTool_OnHoverHitTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableClickDragTool_eventOnHoverHitTest_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputRayHit, METADATA_PARAMS(nullptr, 0) }; // 1802974795
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableClickDragTool_OnHoverHitTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableClickDragTool_OnHoverHitTest_Statics::NewProp_HoverPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableClickDragTool_OnHoverHitTest_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableClickDragTool_OnHoverHitTest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_OnHoverHitTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hover Events" },
		{ "Comment", "/**\n\x09 * OnHoverHitTest is called to allow the Tool to indicate if it would like to start consuing \"hover\" input at HoverPos.\n\x09 * The Tool can return yes/no and a \"hit depth\", which will be used to determine if the Tool is given the active hover input stream.\n\x09 * The default OnHoverHitTest implement always captures the hover.\n\x09 * \n\x09 * Once the hover is accepted, the OnHoverBegin event will fire, and then a stream of OnHoverUpdate events. If at any point\n\x09 * the hover is no longer relevant, OnHoverUpdate should return false. OnHoverEnd will be called at that point, or if \n\x09 * the hover is cancelled for any reason (eg mouse goes out of window, button is pressed, etc)\n\x09 * \n\x09 * @param HoverPos the current position of the cursor/device, including both a 3D ray from the eye, and (optionally) a 2D mouse position\n\x09 * @param Modifiers current modifier key/button state\n\x09 * @return a FInputRayHit indicating a hit (true/false) and the hit depth along the hit-ray (0 for \"always consume\")\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableClickDragTool.h" },
		{ "ToolTip", "OnHoverHitTest is called to allow the Tool to indicate if it would like to start consuing \"hover\" input at HoverPos.\nThe Tool can return yes/no and a \"hit depth\", which will be used to determine if the Tool is given the active hover input stream.\nThe default OnHoverHitTest implement always captures the hover.\n\nOnce the hover is accepted, the OnHoverBegin event will fire, and then a stream of OnHoverUpdate events. If at any point\nthe hover is no longer relevant, OnHoverUpdate should return false. OnHoverEnd will be called at that point, or if\nthe hover is cancelled for any reason (eg mouse goes out of window, button is pressed, etc)\n\n@param HoverPos the current position of the cursor/device, including both a 3D ray from the eye, and (optionally) a 2D mouse position\n@param Modifiers current modifier key/button state\n@return a FInputRayHit indicating a hit (true/false) and the hit depth along the hit-ray (0 for \"always consume\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableClickDragTool_OnHoverHitTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableClickDragTool, nullptr, "OnHoverHitTest", nullptr, nullptr, sizeof(ScriptableClickDragTool_eventOnHoverHitTest_Parms), Z_Construct_UFunction_UScriptableClickDragTool_OnHoverHitTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_OnHoverHitTest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_OnHoverHitTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_OnHoverHitTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableClickDragTool_OnHoverHitTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableClickDragTool_OnHoverHitTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableClickDragTool_OnHoverUpdate_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoverPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Modifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableClickDragTool_OnHoverUpdate_Statics::NewProp_HoverPos = { "HoverPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableClickDragTool_eventOnHoverUpdate_Parms, HoverPos), Z_Construct_UScriptStruct_FInputDeviceRay, METADATA_PARAMS(nullptr, 0) }; // 1496444290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_OnHoverUpdate_Statics::NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableClickDragTool_OnHoverUpdate_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableClickDragTool_eventOnHoverUpdate_Parms, Modifiers), Z_Construct_UScriptStruct_FScriptableToolModifierStates, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_OnHoverUpdate_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_OnHoverUpdate_Statics::NewProp_Modifiers_MetaData)) }; // 1925515539
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_OnHoverUpdate_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Continue Hovering" },
	};
#endif
	void Z_Construct_UFunction_UScriptableClickDragTool_OnHoverUpdate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ScriptableClickDragTool_eventOnHoverUpdate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptableClickDragTool_OnHoverUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptableClickDragTool_eventOnHoverUpdate_Parms), &Z_Construct_UFunction_UScriptableClickDragTool_OnHoverUpdate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_OnHoverUpdate_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_OnHoverUpdate_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableClickDragTool_OnHoverUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableClickDragTool_OnHoverUpdate_Statics::NewProp_HoverPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableClickDragTool_OnHoverUpdate_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableClickDragTool_OnHoverUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_OnHoverUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hover Events" },
		{ "Comment", "/**\n\x09 * Update an active Hover sequence. OnHoverUpdate is only ever called between OnHoverBegin and OnHoverEnd\n\x09 * @param HoverPos the current position of the cursor/device, including both a 3D ray from the eye, and (optionally) a 2D mouse position\n\x09 * @param Modifiers current modifier key/button state\n\x09 * @return true to continue hovering, false to stop receiving additional hover events\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableClickDragTool.h" },
		{ "ToolTip", "Update an active Hover sequence. OnHoverUpdate is only ever called between OnHoverBegin and OnHoverEnd\n@param HoverPos the current position of the cursor/device, including both a 3D ray from the eye, and (optionally) a 2D mouse position\n@param Modifiers current modifier key/button state\n@return true to continue hovering, false to stop receiving additional hover events" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableClickDragTool_OnHoverUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableClickDragTool, nullptr, "OnHoverUpdate", nullptr, nullptr, sizeof(ScriptableClickDragTool_eventOnHoverUpdate_Parms), Z_Construct_UFunction_UScriptableClickDragTool_OnHoverUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_OnHoverUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_OnHoverUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_OnHoverUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableClickDragTool_OnHoverUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableClickDragTool_OnHoverUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableClickDragTool_TestIfCanBeginClickDrag_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClickPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableClickDragTool_TestIfCanBeginClickDrag_Statics::NewProp_ClickPos = { "ClickPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableClickDragTool_eventTestIfCanBeginClickDrag_Parms, ClickPos), Z_Construct_UScriptStruct_FInputDeviceRay, METADATA_PARAMS(nullptr, 0) }; // 1496444290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_TestIfCanBeginClickDrag_Statics::NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableClickDragTool_TestIfCanBeginClickDrag_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableClickDragTool_eventTestIfCanBeginClickDrag_Parms, Modifiers), Z_Construct_UScriptStruct_FScriptableToolModifierStates, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_TestIfCanBeginClickDrag_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_TestIfCanBeginClickDrag_Statics::NewProp_Modifiers_MetaData)) }; // 1925515539
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableClickDragTool_TestIfCanBeginClickDrag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableClickDragTool_eventTestIfCanBeginClickDrag_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputRayHit, METADATA_PARAMS(nullptr, 0) }; // 1802974795
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableClickDragTool_TestIfCanBeginClickDrag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableClickDragTool_TestIfCanBeginClickDrag_Statics::NewProp_ClickPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableClickDragTool_TestIfCanBeginClickDrag_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableClickDragTool_TestIfCanBeginClickDrag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableClickDragTool_TestIfCanBeginClickDrag_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClickDrag Events" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableClickDragTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableClickDragTool_TestIfCanBeginClickDrag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableClickDragTool, nullptr, "TestIfCanBeginClickDrag", nullptr, nullptr, sizeof(ScriptableClickDragTool_eventTestIfCanBeginClickDrag_Parms), Z_Construct_UFunction_UScriptableClickDragTool_TestIfCanBeginClickDrag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_TestIfCanBeginClickDrag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableClickDragTool_TestIfCanBeginClickDrag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableClickDragTool_TestIfCanBeginClickDrag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableClickDragTool_TestIfCanBeginClickDrag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableClickDragTool_TestIfCanBeginClickDrag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScriptableClickDragTool);
	UClass* Z_Construct_UClass_UScriptableClickDragTool_NoRegister()
	{
		return UScriptableClickDragTool::StaticClass();
	}
	struct Z_Construct_UClass_UScriptableClickDragTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWantMouseHover_MetaData[];
#endif
		static void NewProp_bWantMouseHover_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantMouseHover;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateModifiersDuringDrag_MetaData[];
#endif
		static void NewProp_bUpdateModifiersDuringDrag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateModifiersDuringDrag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickDragBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClickDragBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseHoverBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MouseHoverBehavior;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScriptableClickDragTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptableInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_ScriptableToolsFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScriptableClickDragTool_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScriptableClickDragTool_GetActiveModifiers, "GetActiveModifiers" }, // 1851073810
		{ &Z_Construct_UFunction_UScriptableClickDragTool_InActiveClickDrag, "InActiveClickDrag" }, // 1674808414
		{ &Z_Construct_UFunction_UScriptableClickDragTool_InActiveHover, "InActiveHover" }, // 1017750550
		{ &Z_Construct_UFunction_UScriptableClickDragTool_IsAltDown, "IsAltDown" }, // 3912448633
		{ &Z_Construct_UFunction_UScriptableClickDragTool_IsCtrlDown, "IsCtrlDown" }, // 3246832518
		{ &Z_Construct_UFunction_UScriptableClickDragTool_IsShiftDown, "IsShiftDown" }, // 2028493392
		{ &Z_Construct_UFunction_UScriptableClickDragTool_OnDragBegin, "OnDragBegin" }, // 2127206952
		{ &Z_Construct_UFunction_UScriptableClickDragTool_OnDragEnd, "OnDragEnd" }, // 1390383506
		{ &Z_Construct_UFunction_UScriptableClickDragTool_OnDragSequenceCancelled, "OnDragSequenceCancelled" }, // 2057846148
		{ &Z_Construct_UFunction_UScriptableClickDragTool_OnDragUpdatePosition, "OnDragUpdatePosition" }, // 963008988
		{ &Z_Construct_UFunction_UScriptableClickDragTool_OnHoverBegin, "OnHoverBegin" }, // 1521807807
		{ &Z_Construct_UFunction_UScriptableClickDragTool_OnHoverEnd, "OnHoverEnd" }, // 471017518
		{ &Z_Construct_UFunction_UScriptableClickDragTool_OnHoverHitTest, "OnHoverHitTest" }, // 1471150539
		{ &Z_Construct_UFunction_UScriptableClickDragTool_OnHoverUpdate, "OnHoverUpdate" }, // 3021813136
		{ &Z_Construct_UFunction_UScriptableClickDragTool_TestIfCanBeginClickDrag, "TestIfCanBeginClickDrag" }, // 3490690444
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableClickDragTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UScriptableClickDragTool is an extension of UScriptableInteractiveTool that supports\n * a \"click-drag\" interaction, ie capture the input device on press-down and collect any\n * device movement events until release. Hover is also supported. \n * \n * Note: Currently these interactions are only supported for mouse devices, or devices remapped to \n * be a mouse by the UInputRouter. Also currently only the left-mouse-button is supported.\n */" },
		{ "IncludePath", "BaseTools/ScriptableClickDragTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableClickDragTool.h" },
		{ "ToolTip", "UScriptableClickDragTool is an extension of UScriptableInteractiveTool that supports\na \"click-drag\" interaction, ie capture the input device on press-down and collect any\ndevice movement events until release. Hover is also supported.\n\nNote: Currently these interactions are only supported for mouse devices, or devices remapped to\nbe a mouse by the UInputRouter. Also currently only the left-mouse-button is supported." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableClickDragTool_Statics::NewProp_bWantMouseHover_MetaData[] = {
		{ "Category", "SingleClick Tool Settings" },
		{ "Comment", "/**\n\x09 * Enable Hover support API functions OnHoverHitTest / OnHoverBegin / OnHoverUpdate / OnHoverEnd for Mouse devices.\n\x09 * Defaults to disabled. Cannot be changed dynamically after Setup runs.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableClickDragTool.h" },
		{ "ToolTip", "Enable Hover support API functions OnHoverHitTest / OnHoverBegin / OnHoverUpdate / OnHoverEnd for Mouse devices.\nDefaults to disabled. Cannot be changed dynamically after Setup runs." },
	};
#endif
	void Z_Construct_UClass_UScriptableClickDragTool_Statics::NewProp_bWantMouseHover_SetBit(void* Obj)
	{
		((UScriptableClickDragTool*)Obj)->bWantMouseHover = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScriptableClickDragTool_Statics::NewProp_bWantMouseHover = { "bWantMouseHover", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UScriptableClickDragTool), &Z_Construct_UClass_UScriptableClickDragTool_Statics::NewProp_bWantMouseHover_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScriptableClickDragTool_Statics::NewProp_bWantMouseHover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableClickDragTool_Statics::NewProp_bWantMouseHover_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableClickDragTool_Statics::NewProp_bUpdateModifiersDuringDrag_MetaData[] = {
		{ "Category", "SingleClick Tool Settings" },
		{ "Comment", "/**\n\x09 * Allow Modifiers states to be updated during ClickDrag sequence. Defaults to enabled.\n\x09 * Cannot be changed dynamically after Setup runs.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableClickDragTool.h" },
		{ "ToolTip", "Allow Modifiers states to be updated during ClickDrag sequence. Defaults to enabled.\nCannot be changed dynamically after Setup runs." },
	};
#endif
	void Z_Construct_UClass_UScriptableClickDragTool_Statics::NewProp_bUpdateModifiersDuringDrag_SetBit(void* Obj)
	{
		((UScriptableClickDragTool*)Obj)->bUpdateModifiersDuringDrag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScriptableClickDragTool_Statics::NewProp_bUpdateModifiersDuringDrag = { "bUpdateModifiersDuringDrag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UScriptableClickDragTool), &Z_Construct_UClass_UScriptableClickDragTool_Statics::NewProp_bUpdateModifiersDuringDrag_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScriptableClickDragTool_Statics::NewProp_bUpdateModifiersDuringDrag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableClickDragTool_Statics::NewProp_bUpdateModifiersDuringDrag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableClickDragTool_Statics::NewProp_ClickDragBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableClickDragTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UScriptableClickDragTool_Statics::NewProp_ClickDragBehavior = { "ClickDragBehavior", nullptr, (EPropertyFlags)0x0094000400202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScriptableClickDragTool, ClickDragBehavior), Z_Construct_UClass_UClickDragInputBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScriptableClickDragTool_Statics::NewProp_ClickDragBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableClickDragTool_Statics::NewProp_ClickDragBehavior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableClickDragTool_Statics::NewProp_MouseHoverBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableClickDragTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UScriptableClickDragTool_Statics::NewProp_MouseHoverBehavior = { "MouseHoverBehavior", nullptr, (EPropertyFlags)0x0094000400202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScriptableClickDragTool, MouseHoverBehavior), Z_Construct_UClass_UMouseHoverBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScriptableClickDragTool_Statics::NewProp_MouseHoverBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableClickDragTool_Statics::NewProp_MouseHoverBehavior_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScriptableClickDragTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptableClickDragTool_Statics::NewProp_bWantMouseHover,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptableClickDragTool_Statics::NewProp_bUpdateModifiersDuringDrag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptableClickDragTool_Statics::NewProp_ClickDragBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptableClickDragTool_Statics::NewProp_MouseHoverBehavior,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScriptableClickDragTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScriptableClickDragTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScriptableClickDragTool_Statics::ClassParams = {
		&UScriptableClickDragTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UScriptableClickDragTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableClickDragTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UScriptableClickDragTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableClickDragTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScriptableClickDragTool()
	{
		if (!Z_Registration_Info_UClass_UScriptableClickDragTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScriptableClickDragTool.OuterSingleton, Z_Construct_UClass_UScriptableClickDragTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScriptableClickDragTool.OuterSingleton;
	}
	template<> SCRIPTABLETOOLSFRAMEWORK_API UClass* StaticClass<UScriptableClickDragTool>()
	{
		return UScriptableClickDragTool::StaticClass();
	}
	UScriptableClickDragTool::UScriptableClickDragTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScriptableClickDragTool);
	UScriptableClickDragTool::~UScriptableClickDragTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScriptableClickDragTool, UScriptableClickDragTool::StaticClass, TEXT("UScriptableClickDragTool"), &Z_Registration_Info_UClass_UScriptableClickDragTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScriptableClickDragTool), 182293300U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_3037514083(TEXT("/Script/ScriptableToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableClickDragTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
