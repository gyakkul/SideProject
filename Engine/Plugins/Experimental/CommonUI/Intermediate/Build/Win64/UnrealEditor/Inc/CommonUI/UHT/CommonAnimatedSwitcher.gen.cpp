// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonAnimatedSwitcher.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonAnimatedSwitcher() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonAnimatedSwitcher();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonAnimatedSwitcher_NoRegister();
	COMMONUI_API UEnum* Z_Construct_UEnum_CommonUI_ECommonSwitcherTransition();
	COMMONUI_API UEnum* Z_Construct_UEnum_CommonUI_ETransitionCurve();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	DEFINE_FUNCTION(UCommonAnimatedSwitcher::execIsTransitionPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTransitionPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonAnimatedSwitcher::execIsCurrentlySwitching)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCurrentlySwitching();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonAnimatedSwitcher::execSetDisableTransitionAnimation)
	{
		P_GET_UBOOL(Z_Param_bDisableAnimation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisableTransitionAnimation(Z_Param_bDisableAnimation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonAnimatedSwitcher::execHasWidgets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasWidgets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonAnimatedSwitcher::execActivatePreviousWidget)
	{
		P_GET_UBOOL(Z_Param_bCanWrap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivatePreviousWidget(Z_Param_bCanWrap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonAnimatedSwitcher::execActivateNextWidget)
	{
		P_GET_UBOOL(Z_Param_bCanWrap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateNextWidget(Z_Param_bCanWrap);
		P_NATIVE_END;
	}
	void UCommonAnimatedSwitcher::StaticRegisterNativesUCommonAnimatedSwitcher()
	{
		UClass* Class = UCommonAnimatedSwitcher::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateNextWidget", &UCommonAnimatedSwitcher::execActivateNextWidget },
			{ "ActivatePreviousWidget", &UCommonAnimatedSwitcher::execActivatePreviousWidget },
			{ "HasWidgets", &UCommonAnimatedSwitcher::execHasWidgets },
			{ "IsCurrentlySwitching", &UCommonAnimatedSwitcher::execIsCurrentlySwitching },
			{ "IsTransitionPlaying", &UCommonAnimatedSwitcher::execIsTransitionPlaying },
			{ "SetDisableTransitionAnimation", &UCommonAnimatedSwitcher::execSetDisableTransitionAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivateNextWidget_Statics
	{
		struct CommonAnimatedSwitcher_eventActivateNextWidget_Parms
		{
			bool bCanWrap;
		};
		static void NewProp_bCanWrap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanWrap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivateNextWidget_Statics::NewProp_bCanWrap_SetBit(void* Obj)
	{
		((CommonAnimatedSwitcher_eventActivateNextWidget_Parms*)Obj)->bCanWrap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivateNextWidget_Statics::NewProp_bCanWrap = { "bCanWrap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonAnimatedSwitcher_eventActivateNextWidget_Parms), &Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivateNextWidget_Statics::NewProp_bCanWrap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivateNextWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivateNextWidget_Statics::NewProp_bCanWrap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivateNextWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Widget Switcher" },
		{ "ModuleRelativePath", "Public/CommonAnimatedSwitcher.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivateNextWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonAnimatedSwitcher, nullptr, "ActivateNextWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivateNextWidget_Statics::CommonAnimatedSwitcher_eventActivateNextWidget_Parms), Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivateNextWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivateNextWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivateNextWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivateNextWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivateNextWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivateNextWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivatePreviousWidget_Statics
	{
		struct CommonAnimatedSwitcher_eventActivatePreviousWidget_Parms
		{
			bool bCanWrap;
		};
		static void NewProp_bCanWrap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanWrap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivatePreviousWidget_Statics::NewProp_bCanWrap_SetBit(void* Obj)
	{
		((CommonAnimatedSwitcher_eventActivatePreviousWidget_Parms*)Obj)->bCanWrap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivatePreviousWidget_Statics::NewProp_bCanWrap = { "bCanWrap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonAnimatedSwitcher_eventActivatePreviousWidget_Parms), &Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivatePreviousWidget_Statics::NewProp_bCanWrap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivatePreviousWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivatePreviousWidget_Statics::NewProp_bCanWrap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivatePreviousWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Widget Switcher" },
		{ "ModuleRelativePath", "Public/CommonAnimatedSwitcher.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivatePreviousWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonAnimatedSwitcher, nullptr, "ActivatePreviousWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivatePreviousWidget_Statics::CommonAnimatedSwitcher_eventActivatePreviousWidget_Parms), Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivatePreviousWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivatePreviousWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivatePreviousWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivatePreviousWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivatePreviousWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivatePreviousWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonAnimatedSwitcher_HasWidgets_Statics
	{
		struct CommonAnimatedSwitcher_eventHasWidgets_Parms
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
	void Z_Construct_UFunction_UCommonAnimatedSwitcher_HasWidgets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonAnimatedSwitcher_eventHasWidgets_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonAnimatedSwitcher_HasWidgets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonAnimatedSwitcher_eventHasWidgets_Parms), &Z_Construct_UFunction_UCommonAnimatedSwitcher_HasWidgets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonAnimatedSwitcher_HasWidgets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonAnimatedSwitcher_HasWidgets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonAnimatedSwitcher_HasWidgets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Widget Switcher" },
		{ "ModuleRelativePath", "Public/CommonAnimatedSwitcher.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonAnimatedSwitcher_HasWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonAnimatedSwitcher, nullptr, "HasWidgets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonAnimatedSwitcher_HasWidgets_Statics::CommonAnimatedSwitcher_eventHasWidgets_Parms), Z_Construct_UFunction_UCommonAnimatedSwitcher_HasWidgets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonAnimatedSwitcher_HasWidgets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonAnimatedSwitcher_HasWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonAnimatedSwitcher_HasWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonAnimatedSwitcher_HasWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonAnimatedSwitcher_HasWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonAnimatedSwitcher_IsCurrentlySwitching_Statics
	{
		struct CommonAnimatedSwitcher_eventIsCurrentlySwitching_Parms
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
	void Z_Construct_UFunction_UCommonAnimatedSwitcher_IsCurrentlySwitching_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonAnimatedSwitcher_eventIsCurrentlySwitching_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonAnimatedSwitcher_IsCurrentlySwitching_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonAnimatedSwitcher_eventIsCurrentlySwitching_Parms), &Z_Construct_UFunction_UCommonAnimatedSwitcher_IsCurrentlySwitching_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonAnimatedSwitcher_IsCurrentlySwitching_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonAnimatedSwitcher_IsCurrentlySwitching_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonAnimatedSwitcher_IsCurrentlySwitching_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Widget Switcher" },
		{ "ModuleRelativePath", "Public/CommonAnimatedSwitcher.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonAnimatedSwitcher_IsCurrentlySwitching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonAnimatedSwitcher, nullptr, "IsCurrentlySwitching", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonAnimatedSwitcher_IsCurrentlySwitching_Statics::CommonAnimatedSwitcher_eventIsCurrentlySwitching_Parms), Z_Construct_UFunction_UCommonAnimatedSwitcher_IsCurrentlySwitching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonAnimatedSwitcher_IsCurrentlySwitching_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonAnimatedSwitcher_IsCurrentlySwitching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonAnimatedSwitcher_IsCurrentlySwitching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonAnimatedSwitcher_IsCurrentlySwitching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonAnimatedSwitcher_IsCurrentlySwitching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonAnimatedSwitcher_IsTransitionPlaying_Statics
	{
		struct CommonAnimatedSwitcher_eventIsTransitionPlaying_Parms
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
	void Z_Construct_UFunction_UCommonAnimatedSwitcher_IsTransitionPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonAnimatedSwitcher_eventIsTransitionPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonAnimatedSwitcher_IsTransitionPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonAnimatedSwitcher_eventIsTransitionPlaying_Parms), &Z_Construct_UFunction_UCommonAnimatedSwitcher_IsTransitionPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonAnimatedSwitcher_IsTransitionPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonAnimatedSwitcher_IsTransitionPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonAnimatedSwitcher_IsTransitionPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Widget Switcher" },
		{ "Comment", "/** Is the switcher playing a transition animation? */" },
		{ "ModuleRelativePath", "Public/CommonAnimatedSwitcher.h" },
		{ "ToolTip", "Is the switcher playing a transition animation?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonAnimatedSwitcher_IsTransitionPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonAnimatedSwitcher, nullptr, "IsTransitionPlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonAnimatedSwitcher_IsTransitionPlaying_Statics::CommonAnimatedSwitcher_eventIsTransitionPlaying_Parms), Z_Construct_UFunction_UCommonAnimatedSwitcher_IsTransitionPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonAnimatedSwitcher_IsTransitionPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonAnimatedSwitcher_IsTransitionPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonAnimatedSwitcher_IsTransitionPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonAnimatedSwitcher_IsTransitionPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonAnimatedSwitcher_IsTransitionPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonAnimatedSwitcher_SetDisableTransitionAnimation_Statics
	{
		struct CommonAnimatedSwitcher_eventSetDisableTransitionAnimation_Parms
		{
			bool bDisableAnimation;
		};
		static void NewProp_bDisableAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableAnimation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonAnimatedSwitcher_SetDisableTransitionAnimation_Statics::NewProp_bDisableAnimation_SetBit(void* Obj)
	{
		((CommonAnimatedSwitcher_eventSetDisableTransitionAnimation_Parms*)Obj)->bDisableAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonAnimatedSwitcher_SetDisableTransitionAnimation_Statics::NewProp_bDisableAnimation = { "bDisableAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonAnimatedSwitcher_eventSetDisableTransitionAnimation_Parms), &Z_Construct_UFunction_UCommonAnimatedSwitcher_SetDisableTransitionAnimation_Statics::NewProp_bDisableAnimation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonAnimatedSwitcher_SetDisableTransitionAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonAnimatedSwitcher_SetDisableTransitionAnimation_Statics::NewProp_bDisableAnimation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonAnimatedSwitcher_SetDisableTransitionAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Widget Switcher" },
		{ "ModuleRelativePath", "Public/CommonAnimatedSwitcher.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonAnimatedSwitcher_SetDisableTransitionAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonAnimatedSwitcher, nullptr, "SetDisableTransitionAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonAnimatedSwitcher_SetDisableTransitionAnimation_Statics::CommonAnimatedSwitcher_eventSetDisableTransitionAnimation_Parms), Z_Construct_UFunction_UCommonAnimatedSwitcher_SetDisableTransitionAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonAnimatedSwitcher_SetDisableTransitionAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonAnimatedSwitcher_SetDisableTransitionAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonAnimatedSwitcher_SetDisableTransitionAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonAnimatedSwitcher_SetDisableTransitionAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonAnimatedSwitcher_SetDisableTransitionAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonAnimatedSwitcher);
	UClass* Z_Construct_UClass_UCommonAnimatedSwitcher_NoRegister()
	{
		return UCommonAnimatedSwitcher::StaticClass();
	}
	struct Z_Construct_UClass_UCommonAnimatedSwitcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransitionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransitionType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransitionCurveType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionCurveType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransitionCurveType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TransitionDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetSwitcher,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivateNextWidget, "ActivateNextWidget" }, // 465640862
		{ &Z_Construct_UFunction_UCommonAnimatedSwitcher_ActivatePreviousWidget, "ActivatePreviousWidget" }, // 698614237
		{ &Z_Construct_UFunction_UCommonAnimatedSwitcher_HasWidgets, "HasWidgets" }, // 1258983796
		{ &Z_Construct_UFunction_UCommonAnimatedSwitcher_IsCurrentlySwitching, "IsCurrentlySwitching" }, // 2270447541
		{ &Z_Construct_UFunction_UCommonAnimatedSwitcher_IsTransitionPlaying, "IsTransitionPlaying" }, // 1418164252
		{ &Z_Construct_UFunction_UCommonAnimatedSwitcher_SetDisableTransitionAnimation, "SetDisableTransitionAnimation" }, // 1745270477
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A widget switcher that activates / deactivates CommonActivatableWidgets, allowing for associated animations to trigger.\n */" },
		{ "IncludePath", "CommonAnimatedSwitcher.h" },
		{ "ModuleRelativePath", "Public/CommonAnimatedSwitcher.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A widget switcher that activates / deactivates CommonActivatableWidgets, allowing for associated animations to trigger." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::NewProp_TransitionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::NewProp_TransitionType_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** The type of transition to play between widgets */" },
		{ "ModuleRelativePath", "Public/CommonAnimatedSwitcher.h" },
		{ "ToolTip", "The type of transition to play between widgets" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::NewProp_TransitionType = { "TransitionType", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonAnimatedSwitcher, TransitionType), Z_Construct_UEnum_CommonUI_ECommonSwitcherTransition, METADATA_PARAMS(Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::NewProp_TransitionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::NewProp_TransitionType_MetaData)) }; // 509553621
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::NewProp_TransitionCurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::NewProp_TransitionCurveType_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** The curve function type to apply to the transition animation */" },
		{ "ModuleRelativePath", "Public/CommonAnimatedSwitcher.h" },
		{ "ToolTip", "The curve function type to apply to the transition animation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::NewProp_TransitionCurveType = { "TransitionCurveType", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonAnimatedSwitcher, TransitionCurveType), Z_Construct_UEnum_CommonUI_ETransitionCurve, METADATA_PARAMS(Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::NewProp_TransitionCurveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::NewProp_TransitionCurveType_MetaData)) }; // 3436855353
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::NewProp_TransitionDuration_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** The total duration of a single transition between widgets */" },
		{ "ModuleRelativePath", "Public/CommonAnimatedSwitcher.h" },
		{ "ToolTip", "The total duration of a single transition between widgets" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::NewProp_TransitionDuration = { "TransitionDuration", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonAnimatedSwitcher, TransitionDuration), METADATA_PARAMS(Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::NewProp_TransitionDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::NewProp_TransitionDuration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::NewProp_TransitionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::NewProp_TransitionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::NewProp_TransitionCurveType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::NewProp_TransitionCurveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::NewProp_TransitionDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonAnimatedSwitcher>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::ClassParams = {
		&UCommonAnimatedSwitcher::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonAnimatedSwitcher()
	{
		if (!Z_Registration_Info_UClass_UCommonAnimatedSwitcher.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonAnimatedSwitcher.OuterSingleton, Z_Construct_UClass_UCommonAnimatedSwitcher_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonAnimatedSwitcher.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonAnimatedSwitcher>()
	{
		return UCommonAnimatedSwitcher::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonAnimatedSwitcher);
	UCommonAnimatedSwitcher::~UCommonAnimatedSwitcher() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonAnimatedSwitcher, UCommonAnimatedSwitcher::StaticClass, TEXT("UCommonAnimatedSwitcher"), &Z_Registration_Info_UClass_UCommonAnimatedSwitcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonAnimatedSwitcher), 2342506805U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_865239774(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonAnimatedSwitcher_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
