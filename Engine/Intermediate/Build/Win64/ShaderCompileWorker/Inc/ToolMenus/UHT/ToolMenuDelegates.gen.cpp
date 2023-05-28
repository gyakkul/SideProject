// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolMenuDelegates.h"
#include "ToolMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolMenuDelegates() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState();
	TOOLMENUS_API UFunction* Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature();
	TOOLMENUS_API UFunction* Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature();
	TOOLMENUS_API UFunction* Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature();
	TOOLMENUS_API UFunction* Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature();
	TOOLMENUS_API UFunction* Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature();
	TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolDynamicUIAction();
	TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuContext();
	UPackage* Z_Construct_UPackage__Script_ToolMenus();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics
	{
		struct _Script_ToolMenus_eventToolMenuDynamicExecuteAction_Parms
		{
			FToolMenuContext Context;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ToolMenus_eventToolMenuDynamicExecuteAction_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics::NewProp_Context_MetaData)) }; // 3730854037
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToolMenuDelegates.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ToolMenus, nullptr, "ToolMenuDynamicExecuteAction__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics::_Script_ToolMenus_eventToolMenuDynamicExecuteAction_Parms), Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FToolMenuDynamicExecuteAction_DelegateWrapper(const FScriptDelegate& ToolMenuDynamicExecuteAction, FToolMenuContext const& Context)
{
	struct _Script_ToolMenus_eventToolMenuDynamicExecuteAction_Parms
	{
		FToolMenuContext Context;
	};
	_Script_ToolMenus_eventToolMenuDynamicExecuteAction_Parms Parms;
	Parms.Context=Context;
	ToolMenuDynamicExecuteAction.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics
	{
		struct _Script_ToolMenus_eventToolMenuDynamicCanExecuteAction_Parms
		{
			FToolMenuContext Context;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ToolMenus_eventToolMenuDynamicCanExecuteAction_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::NewProp_Context_MetaData)) }; // 3730854037
	void Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((_Script_ToolMenus_eventToolMenuDynamicCanExecuteAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_ToolMenus_eventToolMenuDynamicCanExecuteAction_Parms), &Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToolMenuDelegates.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ToolMenus, nullptr, "ToolMenuDynamicCanExecuteAction__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::_Script_ToolMenus_eventToolMenuDynamicCanExecuteAction_Parms), Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
bool FToolMenuDynamicCanExecuteAction_DelegateWrapper(const FScriptDelegate& ToolMenuDynamicCanExecuteAction, FToolMenuContext const& Context)
{
	struct _Script_ToolMenus_eventToolMenuDynamicCanExecuteAction_Parms
	{
		FToolMenuContext Context;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		_Script_ToolMenus_eventToolMenuDynamicCanExecuteAction_Parms()
			: ReturnValue(false)
		{
		}
	};
	_Script_ToolMenus_eventToolMenuDynamicCanExecuteAction_Parms Parms;
	Parms.Context=Context;
	ToolMenuDynamicCanExecuteAction.ProcessDelegate<UObject>(&Parms);
	return !!Parms.ReturnValue;
}
	struct Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics
	{
		struct _Script_ToolMenus_eventToolMenuDynamicIsActionChecked_Parms
		{
			FToolMenuContext Context;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ToolMenus_eventToolMenuDynamicIsActionChecked_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::NewProp_Context_MetaData)) }; // 3730854037
	void Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((_Script_ToolMenus_eventToolMenuDynamicIsActionChecked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_ToolMenus_eventToolMenuDynamicIsActionChecked_Parms), &Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToolMenuDelegates.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ToolMenus, nullptr, "ToolMenuDynamicIsActionChecked__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::_Script_ToolMenus_eventToolMenuDynamicIsActionChecked_Parms), Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionChecked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
bool FToolMenuDynamicIsActionChecked_DelegateWrapper(const FScriptDelegate& ToolMenuDynamicIsActionChecked, FToolMenuContext const& Context)
{
	struct _Script_ToolMenus_eventToolMenuDynamicIsActionChecked_Parms
	{
		FToolMenuContext Context;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		_Script_ToolMenus_eventToolMenuDynamicIsActionChecked_Parms()
			: ReturnValue(false)
		{
		}
	};
	_Script_ToolMenus_eventToolMenuDynamicIsActionChecked_Parms Parms;
	Parms.Context=Context;
	ToolMenuDynamicIsActionChecked.ProcessDelegate<UObject>(&Parms);
	return !!Parms.ReturnValue;
}
	struct Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics
	{
		struct _Script_ToolMenus_eventToolMenuDynamicGetActionCheckState_Parms
		{
			FToolMenuContext Context;
			ECheckBoxState ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ToolMenus_eventToolMenuDynamicGetActionCheckState_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::NewProp_Context_MetaData)) }; // 3730854037
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ToolMenus_eventToolMenuDynamicGetActionCheckState_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(nullptr, 0) }; // 1662204813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToolMenuDelegates.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ToolMenus, nullptr, "ToolMenuDynamicGetActionCheckState__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::_Script_ToolMenus_eventToolMenuDynamicGetActionCheckState_Parms), Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
ECheckBoxState FToolMenuDynamicGetActionCheckState_DelegateWrapper(const FScriptDelegate& ToolMenuDynamicGetActionCheckState, FToolMenuContext const& Context)
{
	struct _Script_ToolMenus_eventToolMenuDynamicGetActionCheckState_Parms
	{
		FToolMenuContext Context;
		ECheckBoxState ReturnValue;

		/** Constructor, initializes return property only **/
		_Script_ToolMenus_eventToolMenuDynamicGetActionCheckState_Parms()
			: ReturnValue((ECheckBoxState)0)
		{
		}
	};
	_Script_ToolMenus_eventToolMenuDynamicGetActionCheckState_Parms Parms;
	Parms.Context=Context;
	ToolMenuDynamicGetActionCheckState.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
	struct Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics
	{
		struct _Script_ToolMenus_eventToolMenuDynamicIsActionButtonVisible_Parms
		{
			FToolMenuContext Context;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ToolMenus_eventToolMenuDynamicIsActionButtonVisible_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::NewProp_Context_MetaData)) }; // 3730854037
	void Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((_Script_ToolMenus_eventToolMenuDynamicIsActionButtonVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_ToolMenus_eventToolMenuDynamicIsActionButtonVisible_Parms), &Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToolMenuDelegates.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ToolMenus, nullptr, "ToolMenuDynamicIsActionButtonVisible__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::_Script_ToolMenus_eventToolMenuDynamicIsActionButtonVisible_Parms), Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
bool FToolMenuDynamicIsActionButtonVisible_DelegateWrapper(const FScriptDelegate& ToolMenuDynamicIsActionButtonVisible, FToolMenuContext const& Context)
{
	struct _Script_ToolMenus_eventToolMenuDynamicIsActionButtonVisible_Parms
	{
		FToolMenuContext Context;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		_Script_ToolMenus_eventToolMenuDynamicIsActionButtonVisible_Parms()
			: ReturnValue(false)
		{
		}
	};
	_Script_ToolMenus_eventToolMenuDynamicIsActionButtonVisible_Parms Parms;
	Parms.Context=Context;
	ToolMenuDynamicIsActionButtonVisible.ProcessDelegate<UObject>(&Parms);
	return !!Parms.ReturnValue;
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ToolDynamicUIAction;
class UScriptStruct* FToolDynamicUIAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ToolDynamicUIAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ToolDynamicUIAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FToolDynamicUIAction, (UObject*)Z_Construct_UPackage__Script_ToolMenus(), TEXT("ToolDynamicUIAction"));
	}
	return Z_Registration_Info_UScriptStruct_ToolDynamicUIAction.OuterSingleton;
}
template<> TOOLMENUS_API UScriptStruct* StaticStruct<FToolDynamicUIAction>()
{
	return FToolDynamicUIAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteAction_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_ExecuteAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanExecuteAction_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_CanExecuteAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GetActionCheckState_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_GetActionCheckState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsActionVisibleDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_IsActionVisibleDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ToolMenuDelegates.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToolDynamicUIAction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_ExecuteAction_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuDelegates.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_ExecuteAction = { "ExecuteAction", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolDynamicUIAction, ExecuteAction), Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicExecuteAction__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_ExecuteAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_ExecuteAction_MetaData)) }; // 1417243714
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_CanExecuteAction_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuDelegates.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_CanExecuteAction = { "CanExecuteAction", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolDynamicUIAction, CanExecuteAction), Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicCanExecuteAction__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_CanExecuteAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_CanExecuteAction_MetaData)) }; // 3985513295
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_GetActionCheckState_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuDelegates.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_GetActionCheckState = { "GetActionCheckState", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolDynamicUIAction, GetActionCheckState), Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicGetActionCheckState__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_GetActionCheckState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_GetActionCheckState_MetaData)) }; // 759890903
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_IsActionVisibleDelegate_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuDelegates.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_IsActionVisibleDelegate = { "IsActionVisibleDelegate", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolDynamicUIAction, IsActionVisibleDelegate), Z_Construct_UDelegateFunction_ToolMenus_ToolMenuDynamicIsActionButtonVisible__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_IsActionVisibleDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_IsActionVisibleDelegate_MetaData)) }; // 1279312730
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_ExecuteAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_CanExecuteAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_GetActionCheckState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewProp_IsActionVisibleDelegate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
		nullptr,
		&NewStructOps,
		"ToolDynamicUIAction",
		sizeof(FToolDynamicUIAction),
		alignof(FToolDynamicUIAction),
		Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FToolDynamicUIAction()
	{
		if (!Z_Registration_Info_UScriptStruct_ToolDynamicUIAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ToolDynamicUIAction.InnerSingleton, Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ToolDynamicUIAction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuDelegates_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuDelegates_h_Statics::ScriptStructInfo[] = {
		{ FToolDynamicUIAction::StaticStruct, Z_Construct_UScriptStruct_FToolDynamicUIAction_Statics::NewStructOps, TEXT("ToolDynamicUIAction"), &Z_Registration_Info_UScriptStruct_ToolDynamicUIAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FToolDynamicUIAction), 2789645339U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuDelegates_h_2455170962(TEXT("/Script/ToolMenus"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuDelegates_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuDelegates_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
