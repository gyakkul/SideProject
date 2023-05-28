// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseTools/ScriptableSingleClickTool.h"
#include "InputState.h"
#include "ScriptableInteractiveTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScriptableSingleClickTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMouseHoverBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceRay();
	INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FInputRayHit();
	SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableInteractiveTool();
	SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableSingleClickTool();
	SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UScriptableSingleClickTool_NoRegister();
	SCRIPTABLETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptableToolModifierStates();
	UPackage* Z_Construct_UPackage__Script_ScriptableToolsFramework();
// End Cross Module References
	DEFINE_FUNCTION(UScriptableSingleClickTool::execGetActiveModifiers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScriptableToolModifierStates*)Z_Param__Result=P_THIS->GetActiveModifiers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableSingleClickTool::execIsAltDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAltDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableSingleClickTool::execIsCtrlDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCtrlDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableSingleClickTool::execIsShiftDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsShiftDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableSingleClickTool::execInActiveHover)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InActiveHover();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableSingleClickTool::execOnHoverEnd)
	{
		P_GET_STRUCT_REF(FScriptableToolModifierStates,Z_Param_Out_Modifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHoverEnd_Implementation(Z_Param_Out_Modifiers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableSingleClickTool::execOnHoverUpdate)
	{
		P_GET_STRUCT(FInputDeviceRay,Z_Param_HoverPos);
		P_GET_STRUCT_REF(FScriptableToolModifierStates,Z_Param_Out_Modifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnHoverUpdate_Implementation(Z_Param_HoverPos,Z_Param_Out_Modifiers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableSingleClickTool::execOnHoverBegin)
	{
		P_GET_STRUCT(FInputDeviceRay,Z_Param_HoverPos);
		P_GET_STRUCT_REF(FScriptableToolModifierStates,Z_Param_Out_Modifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHoverBegin_Implementation(Z_Param_HoverPos,Z_Param_Out_Modifiers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableSingleClickTool::execOnHoverHitTest)
	{
		P_GET_STRUCT(FInputDeviceRay,Z_Param_HoverPos);
		P_GET_STRUCT_REF(FScriptableToolModifierStates,Z_Param_Out_Modifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputRayHit*)Z_Param__Result=P_THIS->OnHoverHitTest_Implementation(Z_Param_HoverPos,Z_Param_Out_Modifiers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableSingleClickTool::execOnHitByClick)
	{
		P_GET_STRUCT(FInputDeviceRay,Z_Param_ClickPos);
		P_GET_STRUCT_REF(FScriptableToolModifierStates,Z_Param_Out_Modifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHitByClick_Implementation(Z_Param_ClickPos,Z_Param_Out_Modifiers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UScriptableSingleClickTool::execTestIfHitByClick)
	{
		P_GET_STRUCT(FInputDeviceRay,Z_Param_ClickPos);
		P_GET_STRUCT_REF(FScriptableToolModifierStates,Z_Param_Out_Modifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputRayHit*)Z_Param__Result=P_THIS->TestIfHitByClick_Implementation(Z_Param_ClickPos,Z_Param_Out_Modifiers);
		P_NATIVE_END;
	}
	struct ScriptableSingleClickTool_eventOnHitByClick_Parms
	{
		FInputDeviceRay ClickPos;
		FScriptableToolModifierStates Modifiers;
	};
	struct ScriptableSingleClickTool_eventOnHoverBegin_Parms
	{
		FInputDeviceRay HoverPos;
		FScriptableToolModifierStates Modifiers;
	};
	struct ScriptableSingleClickTool_eventOnHoverEnd_Parms
	{
		FScriptableToolModifierStates Modifiers;
	};
	struct ScriptableSingleClickTool_eventOnHoverHitTest_Parms
	{
		FInputDeviceRay HoverPos;
		FScriptableToolModifierStates Modifiers;
		FInputRayHit ReturnValue;
	};
	struct ScriptableSingleClickTool_eventOnHoverUpdate_Parms
	{
		FInputDeviceRay HoverPos;
		FScriptableToolModifierStates Modifiers;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ScriptableSingleClickTool_eventOnHoverUpdate_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct ScriptableSingleClickTool_eventTestIfHitByClick_Parms
	{
		FInputDeviceRay ClickPos;
		FScriptableToolModifierStates Modifiers;
		FInputRayHit ReturnValue;
	};
	static FName NAME_UScriptableSingleClickTool_OnHitByClick = FName(TEXT("OnHitByClick"));
	void UScriptableSingleClickTool::OnHitByClick(FInputDeviceRay ClickPos, FScriptableToolModifierStates const& Modifiers)
	{
		ScriptableSingleClickTool_eventOnHitByClick_Parms Parms;
		Parms.ClickPos=ClickPos;
		Parms.Modifiers=Modifiers;
		ProcessEvent(FindFunctionChecked(NAME_UScriptableSingleClickTool_OnHitByClick),&Parms);
	}
	static FName NAME_UScriptableSingleClickTool_OnHoverBegin = FName(TEXT("OnHoverBegin"));
	void UScriptableSingleClickTool::OnHoverBegin(FInputDeviceRay HoverPos, FScriptableToolModifierStates const& Modifiers)
	{
		ScriptableSingleClickTool_eventOnHoverBegin_Parms Parms;
		Parms.HoverPos=HoverPos;
		Parms.Modifiers=Modifiers;
		ProcessEvent(FindFunctionChecked(NAME_UScriptableSingleClickTool_OnHoverBegin),&Parms);
	}
	static FName NAME_UScriptableSingleClickTool_OnHoverEnd = FName(TEXT("OnHoverEnd"));
	void UScriptableSingleClickTool::OnHoverEnd(FScriptableToolModifierStates const& Modifiers)
	{
		ScriptableSingleClickTool_eventOnHoverEnd_Parms Parms;
		Parms.Modifiers=Modifiers;
		ProcessEvent(FindFunctionChecked(NAME_UScriptableSingleClickTool_OnHoverEnd),&Parms);
	}
	static FName NAME_UScriptableSingleClickTool_OnHoverHitTest = FName(TEXT("OnHoverHitTest"));
	FInputRayHit UScriptableSingleClickTool::OnHoverHitTest(FInputDeviceRay HoverPos, FScriptableToolModifierStates const& Modifiers)
	{
		ScriptableSingleClickTool_eventOnHoverHitTest_Parms Parms;
		Parms.HoverPos=HoverPos;
		Parms.Modifiers=Modifiers;
		ProcessEvent(FindFunctionChecked(NAME_UScriptableSingleClickTool_OnHoverHitTest),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UScriptableSingleClickTool_OnHoverUpdate = FName(TEXT("OnHoverUpdate"));
	bool UScriptableSingleClickTool::OnHoverUpdate(FInputDeviceRay HoverPos, FScriptableToolModifierStates const& Modifiers)
	{
		ScriptableSingleClickTool_eventOnHoverUpdate_Parms Parms;
		Parms.HoverPos=HoverPos;
		Parms.Modifiers=Modifiers;
		ProcessEvent(FindFunctionChecked(NAME_UScriptableSingleClickTool_OnHoverUpdate),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UScriptableSingleClickTool_TestIfHitByClick = FName(TEXT("TestIfHitByClick"));
	FInputRayHit UScriptableSingleClickTool::TestIfHitByClick(FInputDeviceRay ClickPos, FScriptableToolModifierStates const& Modifiers)
	{
		ScriptableSingleClickTool_eventTestIfHitByClick_Parms Parms;
		Parms.ClickPos=ClickPos;
		Parms.Modifiers=Modifiers;
		ProcessEvent(FindFunctionChecked(NAME_UScriptableSingleClickTool_TestIfHitByClick),&Parms);
		return Parms.ReturnValue;
	}
	void UScriptableSingleClickTool::StaticRegisterNativesUScriptableSingleClickTool()
	{
		UClass* Class = UScriptableSingleClickTool::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveModifiers", &UScriptableSingleClickTool::execGetActiveModifiers },
			{ "InActiveHover", &UScriptableSingleClickTool::execInActiveHover },
			{ "IsAltDown", &UScriptableSingleClickTool::execIsAltDown },
			{ "IsCtrlDown", &UScriptableSingleClickTool::execIsCtrlDown },
			{ "IsShiftDown", &UScriptableSingleClickTool::execIsShiftDown },
			{ "OnHitByClick", &UScriptableSingleClickTool::execOnHitByClick },
			{ "OnHoverBegin", &UScriptableSingleClickTool::execOnHoverBegin },
			{ "OnHoverEnd", &UScriptableSingleClickTool::execOnHoverEnd },
			{ "OnHoverHitTest", &UScriptableSingleClickTool::execOnHoverHitTest },
			{ "OnHoverUpdate", &UScriptableSingleClickTool::execOnHoverUpdate },
			{ "TestIfHitByClick", &UScriptableSingleClickTool::execTestIfHitByClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScriptableSingleClickTool_GetActiveModifiers_Statics
	{
		struct ScriptableSingleClickTool_eventGetActiveModifiers_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableSingleClickTool_GetActiveModifiers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableSingleClickTool_eventGetActiveModifiers_Parms, ReturnValue), Z_Construct_UScriptStruct_FScriptableToolModifierStates, METADATA_PARAMS(nullptr, 0) }; // 1925515539
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableSingleClickTool_GetActiveModifiers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableSingleClickTool_GetActiveModifiers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableSingleClickTool_GetActiveModifiers_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Input" },
		{ "Comment", "/** @return a struct containing the current Modifier key states */" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableSingleClickTool.h" },
		{ "ToolTip", "@return a struct containing the current Modifier key states" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableSingleClickTool_GetActiveModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableSingleClickTool, nullptr, "GetActiveModifiers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableSingleClickTool_GetActiveModifiers_Statics::ScriptableSingleClickTool_eventGetActiveModifiers_Parms), Z_Construct_UFunction_UScriptableSingleClickTool_GetActiveModifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_GetActiveModifiers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableSingleClickTool_GetActiveModifiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_GetActiveModifiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableSingleClickTool_GetActiveModifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableSingleClickTool_GetActiveModifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableSingleClickTool_InActiveHover_Statics
	{
		struct ScriptableSingleClickTool_eventInActiveHover_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableSingleClickTool_InActiveHover_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "In Hover State" },
	};
#endif
	void Z_Construct_UFunction_UScriptableSingleClickTool_InActiveHover_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ScriptableSingleClickTool_eventInActiveHover_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptableSingleClickTool_InActiveHover_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptableSingleClickTool_eventInActiveHover_Parms), &Z_Construct_UFunction_UScriptableSingleClickTool_InActiveHover_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UScriptableSingleClickTool_InActiveHover_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_InActiveHover_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableSingleClickTool_InActiveHover_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableSingleClickTool_InActiveHover_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableSingleClickTool_InActiveHover_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Input" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableSingleClickTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableSingleClickTool_InActiveHover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableSingleClickTool, nullptr, "InActiveHover", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableSingleClickTool_InActiveHover_Statics::ScriptableSingleClickTool_eventInActiveHover_Parms), Z_Construct_UFunction_UScriptableSingleClickTool_InActiveHover_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_InActiveHover_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableSingleClickTool_InActiveHover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_InActiveHover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableSingleClickTool_InActiveHover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableSingleClickTool_InActiveHover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableSingleClickTool_IsAltDown_Statics
	{
		struct ScriptableSingleClickTool_eventIsAltDown_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableSingleClickTool_IsAltDown_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Alt Down" },
	};
#endif
	void Z_Construct_UFunction_UScriptableSingleClickTool_IsAltDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ScriptableSingleClickTool_eventIsAltDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptableSingleClickTool_IsAltDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptableSingleClickTool_eventIsAltDown_Parms), &Z_Construct_UFunction_UScriptableSingleClickTool_IsAltDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UScriptableSingleClickTool_IsAltDown_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_IsAltDown_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableSingleClickTool_IsAltDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableSingleClickTool_IsAltDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableSingleClickTool_IsAltDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Input" },
		{ "Comment", "/** @return true if the Alt key is currently held down */" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableSingleClickTool.h" },
		{ "ToolTip", "@return true if the Alt key is currently held down" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableSingleClickTool_IsAltDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableSingleClickTool, nullptr, "IsAltDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableSingleClickTool_IsAltDown_Statics::ScriptableSingleClickTool_eventIsAltDown_Parms), Z_Construct_UFunction_UScriptableSingleClickTool_IsAltDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_IsAltDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableSingleClickTool_IsAltDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_IsAltDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableSingleClickTool_IsAltDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableSingleClickTool_IsAltDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableSingleClickTool_IsCtrlDown_Statics
	{
		struct ScriptableSingleClickTool_eventIsCtrlDown_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableSingleClickTool_IsCtrlDown_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Ctrl Down" },
	};
#endif
	void Z_Construct_UFunction_UScriptableSingleClickTool_IsCtrlDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ScriptableSingleClickTool_eventIsCtrlDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptableSingleClickTool_IsCtrlDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptableSingleClickTool_eventIsCtrlDown_Parms), &Z_Construct_UFunction_UScriptableSingleClickTool_IsCtrlDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UScriptableSingleClickTool_IsCtrlDown_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_IsCtrlDown_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableSingleClickTool_IsCtrlDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableSingleClickTool_IsCtrlDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableSingleClickTool_IsCtrlDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Input" },
		{ "Comment", "/** @return true if the Ctrl key is currently held down */" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableSingleClickTool.h" },
		{ "ToolTip", "@return true if the Ctrl key is currently held down" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableSingleClickTool_IsCtrlDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableSingleClickTool, nullptr, "IsCtrlDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableSingleClickTool_IsCtrlDown_Statics::ScriptableSingleClickTool_eventIsCtrlDown_Parms), Z_Construct_UFunction_UScriptableSingleClickTool_IsCtrlDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_IsCtrlDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableSingleClickTool_IsCtrlDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_IsCtrlDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableSingleClickTool_IsCtrlDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableSingleClickTool_IsCtrlDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableSingleClickTool_IsShiftDown_Statics
	{
		struct ScriptableSingleClickTool_eventIsShiftDown_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableSingleClickTool_IsShiftDown_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Shift Down" },
	};
#endif
	void Z_Construct_UFunction_UScriptableSingleClickTool_IsShiftDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ScriptableSingleClickTool_eventIsShiftDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptableSingleClickTool_IsShiftDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptableSingleClickTool_eventIsShiftDown_Parms), &Z_Construct_UFunction_UScriptableSingleClickTool_IsShiftDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UScriptableSingleClickTool_IsShiftDown_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_IsShiftDown_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableSingleClickTool_IsShiftDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableSingleClickTool_IsShiftDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableSingleClickTool_IsShiftDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "ScriptableTool|Input" },
		{ "Comment", "/** @return true if the Shift key is currently held down */" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableSingleClickTool.h" },
		{ "ToolTip", "@return true if the Shift key is currently held down" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableSingleClickTool_IsShiftDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableSingleClickTool, nullptr, "IsShiftDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScriptableSingleClickTool_IsShiftDown_Statics::ScriptableSingleClickTool_eventIsShiftDown_Parms), Z_Construct_UFunction_UScriptableSingleClickTool_IsShiftDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_IsShiftDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableSingleClickTool_IsShiftDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_IsShiftDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableSingleClickTool_IsShiftDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableSingleClickTool_IsShiftDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableSingleClickTool_OnHitByClick_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClickPos;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableSingleClickTool_OnHitByClick_Statics::NewProp_ClickPos = { "ClickPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableSingleClickTool_eventOnHitByClick_Parms, ClickPos), Z_Construct_UScriptStruct_FInputDeviceRay, METADATA_PARAMS(nullptr, 0) }; // 1496444290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableSingleClickTool_OnHitByClick_Statics::NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableSingleClickTool_OnHitByClick_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableSingleClickTool_eventOnHitByClick_Parms, Modifiers), Z_Construct_UScriptStruct_FScriptableToolModifierStates, METADATA_PARAMS(Z_Construct_UFunction_UScriptableSingleClickTool_OnHitByClick_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_OnHitByClick_Statics::NewProp_Modifiers_MetaData)) }; // 1925515539
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableSingleClickTool_OnHitByClick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableSingleClickTool_OnHitByClick_Statics::NewProp_ClickPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableSingleClickTool_OnHitByClick_Statics::NewProp_Modifiers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableSingleClickTool_OnHitByClick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Click Events" },
		{ "Comment", "/**\n\x09 * OnHitByClick is called when the Tool has indicated it would like to consume a click event (via TestIfHitByClick), and the click was not cancelled\n\x09 * or consumed by a nearer object. \n\x09 * @param ClickPos the position of the click, including both a 3D ray from the eye, and (optionally) a 2D mouse position\n\x09 * @param Modifiers current modifier key/button state\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableSingleClickTool.h" },
		{ "ToolTip", "OnHitByClick is called when the Tool has indicated it would like to consume a click event (via TestIfHitByClick), and the click was not cancelled\nor consumed by a nearer object.\n@param ClickPos the position of the click, including both a 3D ray from the eye, and (optionally) a 2D mouse position\n@param Modifiers current modifier key/button state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableSingleClickTool_OnHitByClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableSingleClickTool, nullptr, "OnHitByClick", nullptr, nullptr, sizeof(ScriptableSingleClickTool_eventOnHitByClick_Parms), Z_Construct_UFunction_UScriptableSingleClickTool_OnHitByClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_OnHitByClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableSingleClickTool_OnHitByClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_OnHitByClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableSingleClickTool_OnHitByClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableSingleClickTool_OnHitByClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverBegin_Statics
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverBegin_Statics::NewProp_HoverPos = { "HoverPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableSingleClickTool_eventOnHoverBegin_Parms, HoverPos), Z_Construct_UScriptStruct_FInputDeviceRay, METADATA_PARAMS(nullptr, 0) }; // 1496444290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverBegin_Statics::NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverBegin_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableSingleClickTool_eventOnHoverBegin_Parms, Modifiers), Z_Construct_UScriptStruct_FScriptableToolModifierStates, METADATA_PARAMS(Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverBegin_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverBegin_Statics::NewProp_Modifiers_MetaData)) }; // 1925515539
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverBegin_Statics::NewProp_HoverPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverBegin_Statics::NewProp_Modifiers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hover Events" },
		{ "Comment", "/**\n\x09 * Begin a sequence of Hover input events \n\x09 * @param HoverPos the current position of the cursor/device, including both a 3D ray from the eye, and (optionally) a 2D mouse position\n\x09 * @param Modifiers current modifier key/button state\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableSingleClickTool.h" },
		{ "ToolTip", "Begin a sequence of Hover input events\n@param HoverPos the current position of the cursor/device, including both a 3D ray from the eye, and (optionally) a 2D mouse position\n@param Modifiers current modifier key/button state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableSingleClickTool, nullptr, "OnHoverBegin", nullptr, nullptr, sizeof(ScriptableSingleClickTool_eventOnHoverBegin_Parms), Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverEnd_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverEnd_Statics::NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverEnd_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableSingleClickTool_eventOnHoverEnd_Parms, Modifiers), Z_Construct_UScriptStruct_FScriptableToolModifierStates, METADATA_PARAMS(Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverEnd_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverEnd_Statics::NewProp_Modifiers_MetaData)) }; // 1925515539
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverEnd_Statics::NewProp_Modifiers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hover Events" },
		{ "Comment", "/**\n\x09 * Indicate that an active captured Hover sequence has ended. The device may no longer be in the viewport, so no position can be provided.\n\x09 * @param Modifiers current modifier key/button state\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableSingleClickTool.h" },
		{ "ToolTip", "Indicate that an active captured Hover sequence has ended. The device may no longer be in the viewport, so no position can be provided.\n@param Modifiers current modifier key/button state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableSingleClickTool, nullptr, "OnHoverEnd", nullptr, nullptr, sizeof(ScriptableSingleClickTool_eventOnHoverEnd_Parms), Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverHitTest_Statics
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverHitTest_Statics::NewProp_HoverPos = { "HoverPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableSingleClickTool_eventOnHoverHitTest_Parms, HoverPos), Z_Construct_UScriptStruct_FInputDeviceRay, METADATA_PARAMS(nullptr, 0) }; // 1496444290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverHitTest_Statics::NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverHitTest_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableSingleClickTool_eventOnHoverHitTest_Parms, Modifiers), Z_Construct_UScriptStruct_FScriptableToolModifierStates, METADATA_PARAMS(Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverHitTest_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverHitTest_Statics::NewProp_Modifiers_MetaData)) }; // 1925515539
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverHitTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableSingleClickTool_eventOnHoverHitTest_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputRayHit, METADATA_PARAMS(nullptr, 0) }; // 1802974795
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverHitTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverHitTest_Statics::NewProp_HoverPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverHitTest_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverHitTest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverHitTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hover Events" },
		{ "Comment", "/**\n\x09 * OnHoverHitTest is called to allow the Tool to indicate if it would like to start consuing \"hover\" input at HoverPos.\n\x09 * The Tool can return yes/no and a \"hit depth\", which will be used to determine if the Tool is given the active hover input stream.\n\x09 * The default OnHoverHitTest implement always captures the hover.\n\x09 * \n\x09 * Once the hover is accepted, the OnHoverBegin event will fire, and then a stream of OnHoverUpdate events. If at any point\n\x09 * the hover is no longer relevant, OnHoverUpdate should return false. OnHoverEnd will be called at that point, or if \n\x09 * the hover is cancelled for any reason (eg mouse goes out of window, button is pressed, etc)\n\x09 * \n\x09 * @param HoverPos the current position of the cursor/device, including both a 3D ray from the eye, and (optionally) a 2D mouse position\n\x09 * @param Modifiers current modifier key/button state\n\x09 * @return a FInputRayHit indicating a hit (true/false) and the hit depth along the hit-ray (0 for \"always consume\")\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableSingleClickTool.h" },
		{ "ToolTip", "OnHoverHitTest is called to allow the Tool to indicate if it would like to start consuing \"hover\" input at HoverPos.\nThe Tool can return yes/no and a \"hit depth\", which will be used to determine if the Tool is given the active hover input stream.\nThe default OnHoverHitTest implement always captures the hover.\n\nOnce the hover is accepted, the OnHoverBegin event will fire, and then a stream of OnHoverUpdate events. If at any point\nthe hover is no longer relevant, OnHoverUpdate should return false. OnHoverEnd will be called at that point, or if\nthe hover is cancelled for any reason (eg mouse goes out of window, button is pressed, etc)\n\n@param HoverPos the current position of the cursor/device, including both a 3D ray from the eye, and (optionally) a 2D mouse position\n@param Modifiers current modifier key/button state\n@return a FInputRayHit indicating a hit (true/false) and the hit depth along the hit-ray (0 for \"always consume\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverHitTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableSingleClickTool, nullptr, "OnHoverHitTest", nullptr, nullptr, sizeof(ScriptableSingleClickTool_eventOnHoverHitTest_Parms), Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverHitTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverHitTest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverHitTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverHitTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverHitTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverHitTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverUpdate_Statics
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverUpdate_Statics::NewProp_HoverPos = { "HoverPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableSingleClickTool_eventOnHoverUpdate_Parms, HoverPos), Z_Construct_UScriptStruct_FInputDeviceRay, METADATA_PARAMS(nullptr, 0) }; // 1496444290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverUpdate_Statics::NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverUpdate_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableSingleClickTool_eventOnHoverUpdate_Parms, Modifiers), Z_Construct_UScriptStruct_FScriptableToolModifierStates, METADATA_PARAMS(Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverUpdate_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverUpdate_Statics::NewProp_Modifiers_MetaData)) }; // 1925515539
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverUpdate_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Continue Hovering" },
	};
#endif
	void Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverUpdate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ScriptableSingleClickTool_eventOnHoverUpdate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ScriptableSingleClickTool_eventOnHoverUpdate_Parms), &Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverUpdate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverUpdate_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverUpdate_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverUpdate_Statics::NewProp_HoverPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverUpdate_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hover Events" },
		{ "Comment", "/**\n\x09 * Update an active Hover sequence. OnHoverUpdate is only ever called between OnHoverBegin and OnHoverEnd\n\x09 * @param HoverPos the current position of the cursor/device, including both a 3D ray from the eye, and (optionally) a 2D mouse position\n\x09 * @param Modifiers current modifier key/button state\n\x09 * @return true to continue hovering, false to stop receiving additional hover events\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableSingleClickTool.h" },
		{ "ToolTip", "Update an active Hover sequence. OnHoverUpdate is only ever called between OnHoverBegin and OnHoverEnd\n@param HoverPos the current position of the cursor/device, including both a 3D ray from the eye, and (optionally) a 2D mouse position\n@param Modifiers current modifier key/button state\n@return true to continue hovering, false to stop receiving additional hover events" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableSingleClickTool, nullptr, "OnHoverUpdate", nullptr, nullptr, sizeof(ScriptableSingleClickTool_eventOnHoverUpdate_Parms), Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScriptableSingleClickTool_TestIfHitByClick_Statics
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableSingleClickTool_TestIfHitByClick_Statics::NewProp_ClickPos = { "ClickPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableSingleClickTool_eventTestIfHitByClick_Parms, ClickPos), Z_Construct_UScriptStruct_FInputDeviceRay, METADATA_PARAMS(nullptr, 0) }; // 1496444290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableSingleClickTool_TestIfHitByClick_Statics::NewProp_Modifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableSingleClickTool_TestIfHitByClick_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableSingleClickTool_eventTestIfHitByClick_Parms, Modifiers), Z_Construct_UScriptStruct_FScriptableToolModifierStates, METADATA_PARAMS(Z_Construct_UFunction_UScriptableSingleClickTool_TestIfHitByClick_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_TestIfHitByClick_Statics::NewProp_Modifiers_MetaData)) }; // 1925515539
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScriptableSingleClickTool_TestIfHitByClick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScriptableSingleClickTool_eventTestIfHitByClick_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputRayHit, METADATA_PARAMS(nullptr, 0) }; // 1802974795
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScriptableSingleClickTool_TestIfHitByClick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableSingleClickTool_TestIfHitByClick_Statics::NewProp_ClickPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableSingleClickTool_TestIfHitByClick_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScriptableSingleClickTool_TestIfHitByClick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScriptableSingleClickTool_TestIfHitByClick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Click Events" },
		{ "Comment", "/**\n\x09 * TestIfHitByClick is called to allow the Tool to indicate if it would like to consume a potential click at ClickPos.\n\x09 * The Tool can return yes/no and a \"hit depth\", which will be used to determine if the Tool is given the click (ie if it has the nearest depth),\n\x09 * at which point the OnHitByClick event will fire. The default TestIfHitByClick implementation always captures the click (at depth 0).\n\x09 * \n\x09 * Note that this function will be called twice for a particular hit - once on mouse-down and once on mouse-up, and if it returns no-hit on mouse-up, \n\x09 * the click will be \"cancelled\", similar to standard GUI click interactions.\n\x09 * \n\x09 * @param ClickPos the position of the click, including both a 3D ray from the eye, and (optionally) a 2D mouse position\n\x09 * @param Modifiers current modifier key/button state\n\x09 * @return a FInputRayHit indicating a hit (true/false) and the hit depth along the hit-ray (0 for \"always consume\")\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableSingleClickTool.h" },
		{ "ToolTip", "TestIfHitByClick is called to allow the Tool to indicate if it would like to consume a potential click at ClickPos.\nThe Tool can return yes/no and a \"hit depth\", which will be used to determine if the Tool is given the click (ie if it has the nearest depth),\nat which point the OnHitByClick event will fire. The default TestIfHitByClick implementation always captures the click (at depth 0).\n\nNote that this function will be called twice for a particular hit - once on mouse-down and once on mouse-up, and if it returns no-hit on mouse-up,\nthe click will be \"cancelled\", similar to standard GUI click interactions.\n\n@param ClickPos the position of the click, including both a 3D ray from the eye, and (optionally) a 2D mouse position\n@param Modifiers current modifier key/button state\n@return a FInputRayHit indicating a hit (true/false) and the hit depth along the hit-ray (0 for \"always consume\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScriptableSingleClickTool_TestIfHitByClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScriptableSingleClickTool, nullptr, "TestIfHitByClick", nullptr, nullptr, sizeof(ScriptableSingleClickTool_eventTestIfHitByClick_Parms), Z_Construct_UFunction_UScriptableSingleClickTool_TestIfHitByClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_TestIfHitByClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScriptableSingleClickTool_TestIfHitByClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScriptableSingleClickTool_TestIfHitByClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScriptableSingleClickTool_TestIfHitByClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScriptableSingleClickTool_TestIfHitByClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScriptableSingleClickTool);
	UClass* Z_Construct_UClass_UScriptableSingleClickTool_NoRegister()
	{
		return UScriptableSingleClickTool::StaticClass();
	}
	struct Z_Construct_UClass_UScriptableSingleClickTool_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SingleClickBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SingleClickBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseHoverBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MouseHoverBehavior;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScriptableSingleClickTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptableInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_ScriptableToolsFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScriptableSingleClickTool_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScriptableSingleClickTool_GetActiveModifiers, "GetActiveModifiers" }, // 37133716
		{ &Z_Construct_UFunction_UScriptableSingleClickTool_InActiveHover, "InActiveHover" }, // 1313841842
		{ &Z_Construct_UFunction_UScriptableSingleClickTool_IsAltDown, "IsAltDown" }, // 2919069705
		{ &Z_Construct_UFunction_UScriptableSingleClickTool_IsCtrlDown, "IsCtrlDown" }, // 2257895664
		{ &Z_Construct_UFunction_UScriptableSingleClickTool_IsShiftDown, "IsShiftDown" }, // 178817045
		{ &Z_Construct_UFunction_UScriptableSingleClickTool_OnHitByClick, "OnHitByClick" }, // 2884429040
		{ &Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverBegin, "OnHoverBegin" }, // 2568189706
		{ &Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverEnd, "OnHoverEnd" }, // 2956892369
		{ &Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverHitTest, "OnHoverHitTest" }, // 3896758311
		{ &Z_Construct_UFunction_UScriptableSingleClickTool_OnHoverUpdate, "OnHoverUpdate" }, // 918378878
		{ &Z_Construct_UFunction_UScriptableSingleClickTool_TestIfHitByClick, "TestIfHitByClick" }, // 2482344467
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableSingleClickTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UScriptableSingleClickTool is an extension of UScriptableInteractiveTool that supports\n * a \"click\" interaction, ie button press-down-and-release on an arbitrary Target (defined by the Tool).\n * Note that like a standard GUI click interaction, if the device is moved off the \"Target\" \n * before the button is released, the click is cancelled. Note that in this context, the \n * Target is defined implicitly by the Tool returning a \"hit\" for a given input device location,\n * rather than any specific geometry.\n * \n * Hover is also supported. \n * \n * Note: Currently these interactions are only supported for mouse devices, or devices remapped to \n * be a mouse by the UInputRouter. Also currently only the left-mouse-button is supported.\n */" },
		{ "IncludePath", "BaseTools/ScriptableSingleClickTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableSingleClickTool.h" },
		{ "ToolTip", "UScriptableSingleClickTool is an extension of UScriptableInteractiveTool that supports\na \"click\" interaction, ie button press-down-and-release on an arbitrary Target (defined by the Tool).\nNote that like a standard GUI click interaction, if the device is moved off the \"Target\"\nbefore the button is released, the click is cancelled. Note that in this context, the\nTarget is defined implicitly by the Tool returning a \"hit\" for a given input device location,\nrather than any specific geometry.\n\nHover is also supported.\n\nNote: Currently these interactions are only supported for mouse devices, or devices remapped to\nbe a mouse by the UInputRouter. Also currently only the left-mouse-button is supported." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableSingleClickTool_Statics::NewProp_bWantMouseHover_MetaData[] = {
		{ "Category", "SingleClick Tool Settings" },
		{ "Comment", "/**\n\x09 * Enable Hover support API functions OnHoverHitTest / OnHoverBegin / OnHoverUpdate / OnHoverEnd for Mouse devices.\n\x09 * Defaults to disabled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableSingleClickTool.h" },
		{ "ToolTip", "Enable Hover support API functions OnHoverHitTest / OnHoverBegin / OnHoverUpdate / OnHoverEnd for Mouse devices.\nDefaults to disabled." },
	};
#endif
	void Z_Construct_UClass_UScriptableSingleClickTool_Statics::NewProp_bWantMouseHover_SetBit(void* Obj)
	{
		((UScriptableSingleClickTool*)Obj)->bWantMouseHover = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScriptableSingleClickTool_Statics::NewProp_bWantMouseHover = { "bWantMouseHover", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UScriptableSingleClickTool), &Z_Construct_UClass_UScriptableSingleClickTool_Statics::NewProp_bWantMouseHover_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScriptableSingleClickTool_Statics::NewProp_bWantMouseHover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableSingleClickTool_Statics::NewProp_bWantMouseHover_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableSingleClickTool_Statics::NewProp_SingleClickBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableSingleClickTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UScriptableSingleClickTool_Statics::NewProp_SingleClickBehavior = { "SingleClickBehavior", nullptr, (EPropertyFlags)0x0094000400202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScriptableSingleClickTool, SingleClickBehavior), Z_Construct_UClass_USingleClickInputBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScriptableSingleClickTool_Statics::NewProp_SingleClickBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableSingleClickTool_Statics::NewProp_SingleClickBehavior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptableSingleClickTool_Statics::NewProp_MouseHoverBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/ScriptableSingleClickTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UScriptableSingleClickTool_Statics::NewProp_MouseHoverBehavior = { "MouseHoverBehavior", nullptr, (EPropertyFlags)0x0094000400202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScriptableSingleClickTool, MouseHoverBehavior), Z_Construct_UClass_UMouseHoverBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScriptableSingleClickTool_Statics::NewProp_MouseHoverBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableSingleClickTool_Statics::NewProp_MouseHoverBehavior_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScriptableSingleClickTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptableSingleClickTool_Statics::NewProp_bWantMouseHover,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptableSingleClickTool_Statics::NewProp_SingleClickBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptableSingleClickTool_Statics::NewProp_MouseHoverBehavior,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScriptableSingleClickTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScriptableSingleClickTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScriptableSingleClickTool_Statics::ClassParams = {
		&UScriptableSingleClickTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UScriptableSingleClickTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableSingleClickTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UScriptableSingleClickTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptableSingleClickTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScriptableSingleClickTool()
	{
		if (!Z_Registration_Info_UClass_UScriptableSingleClickTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScriptableSingleClickTool.OuterSingleton, Z_Construct_UClass_UScriptableSingleClickTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScriptableSingleClickTool.OuterSingleton;
	}
	template<> SCRIPTABLETOOLSFRAMEWORK_API UClass* StaticClass<UScriptableSingleClickTool>()
	{
		return UScriptableSingleClickTool::StaticClass();
	}
	UScriptableSingleClickTool::UScriptableSingleClickTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScriptableSingleClickTool);
	UScriptableSingleClickTool::~UScriptableSingleClickTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScriptableSingleClickTool, UScriptableSingleClickTool::StaticClass, TEXT("UScriptableSingleClickTool"), &Z_Registration_Info_UClass_UScriptableSingleClickTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScriptableSingleClickTool), 3941955650U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_754769643(TEXT("/Script/ScriptableToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_BaseTools_ScriptableSingleClickTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
