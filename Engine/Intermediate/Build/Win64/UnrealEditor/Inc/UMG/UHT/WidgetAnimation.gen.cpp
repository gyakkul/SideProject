// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/WidgetAnimation.h"
#include "Animation/WidgetAnimationBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetAnimation() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetAnimationBinding();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UWidgetAnimation::execUnbindAllFromAnimationFinished)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindAllFromAnimationFinished(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetAnimation::execUnbindFromAnimationFinished)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_Widget);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindFromAnimationFinished(Z_Param_Widget,FWidgetAnimationDynamicEvent(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetAnimation::execBindToAnimationFinished)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_Widget);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindToAnimationFinished(Z_Param_Widget,FWidgetAnimationDynamicEvent(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetAnimation::execUnbindAllFromAnimationStarted)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindAllFromAnimationStarted(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetAnimation::execUnbindFromAnimationStarted)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_Widget);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindFromAnimationStarted(Z_Param_Widget,FWidgetAnimationDynamicEvent(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetAnimation::execBindToAnimationStarted)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_Widget);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindToAnimationStarted(Z_Param_Widget,FWidgetAnimationDynamicEvent(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetAnimation::execGetEndTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEndTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetAnimation::execGetStartTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStartTime();
		P_NATIVE_END;
	}
	void UWidgetAnimation::StaticRegisterNativesUWidgetAnimation()
	{
		UClass* Class = UWidgetAnimation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindToAnimationFinished", &UWidgetAnimation::execBindToAnimationFinished },
			{ "BindToAnimationStarted", &UWidgetAnimation::execBindToAnimationStarted },
			{ "GetEndTime", &UWidgetAnimation::execGetEndTime },
			{ "GetStartTime", &UWidgetAnimation::execGetStartTime },
			{ "UnbindAllFromAnimationFinished", &UWidgetAnimation::execUnbindAllFromAnimationFinished },
			{ "UnbindAllFromAnimationStarted", &UWidgetAnimation::execUnbindAllFromAnimationStarted },
			{ "UnbindFromAnimationFinished", &UWidgetAnimation::execUnbindFromAnimationFinished },
			{ "UnbindFromAnimationStarted", &UWidgetAnimation::execUnbindFromAnimationStarted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics
	{
		struct WidgetAnimation_eventBindToAnimationFinished_Parms
		{
			UUserWidget* Widget;
			FScriptDelegate Delegate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetAnimation_eventBindToAnimationFinished_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetAnimation_eventBindToAnimationFinished_Parms, Delegate), Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2583291704
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetAnimation, nullptr, "BindToAnimationFinished", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::WidgetAnimation_eventBindToAnimationFinished_Parms), Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics
	{
		struct WidgetAnimation_eventBindToAnimationStarted_Parms
		{
			UUserWidget* Widget;
			FScriptDelegate Delegate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetAnimation_eventBindToAnimationStarted_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetAnimation_eventBindToAnimationStarted_Parms, Delegate), Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2583291704
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Animation" },
		{ "Comment", "// These animation binding functions were added so that we could cleanly upgrade assets\n// from before animation sharing, they don't actually modify the animation, they just pipe\n// through to the UUserWidget.  If we didn't put the functions here, it would be much more\n// difficult to upgrade users who were taking advantage of the Many-To-1, blueprint having\n// many animations binding to the same delegate.\n" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
		{ "ToolTip", "These animation binding functions were added so that we could cleanly upgrade assets\nfrom before animation sharing, they don't actually modify the animation, they just pipe\nthrough to the UUserWidget.  If we didn't put the functions here, it would be much more\ndifficult to upgrade users who were taking advantage of the Many-To-1, blueprint having\nmany animations binding to the same delegate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetAnimation, nullptr, "BindToAnimationStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::WidgetAnimation_eventBindToAnimationStarted_Parms), Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics
	{
		struct WidgetAnimation_eventGetEndTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetAnimation_eventGetEndTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * Get the end time of this animation.\n\x09 *\n\x09 * @return End time in seconds.\n\x09 * @see GetStartTime\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
		{ "ToolTip", "Get the end time of this animation.\n\n@return End time in seconds.\n@see GetStartTime" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetAnimation, nullptr, "GetEndTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::WidgetAnimation_eventGetEndTime_Parms), Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetAnimation_GetEndTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics
	{
		struct WidgetAnimation_eventGetStartTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetAnimation_eventGetStartTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * Get the start time of this animation.\n\x09 *\n\x09 * @return Start time in seconds.\n\x09 * @see GetEndTime\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
		{ "ToolTip", "Get the start time of this animation.\n\n@return Start time in seconds.\n@see GetEndTime" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetAnimation, nullptr, "GetStartTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::WidgetAnimation_eventGetStartTime_Parms), Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetAnimation_GetStartTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics
	{
		struct WidgetAnimation_eventUnbindAllFromAnimationFinished_Parms
		{
			UUserWidget* Widget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetAnimation_eventUnbindAllFromAnimationFinished_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetAnimation, nullptr, "UnbindAllFromAnimationFinished", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::WidgetAnimation_eventUnbindAllFromAnimationFinished_Parms), Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics
	{
		struct WidgetAnimation_eventUnbindAllFromAnimationStarted_Parms
		{
			UUserWidget* Widget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetAnimation_eventUnbindAllFromAnimationStarted_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetAnimation, nullptr, "UnbindAllFromAnimationStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::WidgetAnimation_eventUnbindAllFromAnimationStarted_Parms), Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics
	{
		struct WidgetAnimation_eventUnbindFromAnimationFinished_Parms
		{
			UUserWidget* Widget;
			FScriptDelegate Delegate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetAnimation_eventUnbindFromAnimationFinished_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetAnimation_eventUnbindFromAnimationFinished_Parms, Delegate), Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2583291704
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetAnimation, nullptr, "UnbindFromAnimationFinished", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::WidgetAnimation_eventUnbindFromAnimationFinished_Parms), Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics
	{
		struct WidgetAnimation_eventUnbindFromAnimationStarted_Parms
		{
			UUserWidget* Widget;
			FScriptDelegate Delegate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetAnimation_eventUnbindFromAnimationStarted_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetAnimation_eventUnbindFromAnimationStarted_Parms, Delegate), Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2583291704
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetAnimation, nullptr, "UnbindFromAnimationStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::WidgetAnimation_eventUnbindFromAnimationStarted_Parms), Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetAnimation);
	UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister()
	{
		return UWidgetAnimation::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovieScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MovieScene;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationBindings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLegacyFinishOnStop_MetaData[];
#endif
		static void NewProp_bLegacyFinishOnStop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLegacyFinishOnStop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayLabel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetAnimation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished, "BindToAnimationFinished" }, // 2722011188
		{ &Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted, "BindToAnimationStarted" }, // 2445090729
		{ &Z_Construct_UFunction_UWidgetAnimation_GetEndTime, "GetEndTime" }, // 4186619819
		{ &Z_Construct_UFunction_UWidgetAnimation_GetStartTime, "GetStartTime" }, // 1085540224
		{ &Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished, "UnbindAllFromAnimationFinished" }, // 947994596
		{ &Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted, "UnbindAllFromAnimationStarted" }, // 3341858291
		{ &Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished, "UnbindFromAnimationFinished" }, // 421284693
		{ &Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted, "UnbindFromAnimationStarted" }, // 1615977215
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetAnimation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Animation/WidgetAnimation.h" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_MovieScene_MetaData[] = {
		{ "Comment", "/** Pointer to the movie scene that controls this animation. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
		{ "ToolTip", "Pointer to the movie scene that controls this animation." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_MovieScene = { "MovieScene", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetAnimation, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_MovieScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_MovieScene_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_AnimationBindings_Inner = { "AnimationBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWidgetAnimationBinding, METADATA_PARAMS(nullptr, 0) }; // 656858518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_AnimationBindings_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_AnimationBindings = { "AnimationBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetAnimation, AnimationBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_AnimationBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_AnimationBindings_MetaData)) }; // 656858518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_bLegacyFinishOnStop_MetaData[] = {
		{ "Comment", "/** Whether to finish evaluation on stop. This legacy value is to preserve existing asset behavior to NOT finish on stop since content was created with this bug. If this is removed, evaluation should always finish on stop. */" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
		{ "ToolTip", "Whether to finish evaluation on stop. This legacy value is to preserve existing asset behavior to NOT finish on stop since content was created with this bug. If this is removed, evaluation should always finish on stop." },
	};
#endif
	void Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_bLegacyFinishOnStop_SetBit(void* Obj)
	{
		((UWidgetAnimation*)Obj)->bLegacyFinishOnStop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_bLegacyFinishOnStop = { "bLegacyFinishOnStop", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWidgetAnimation), &Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_bLegacyFinishOnStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_bLegacyFinishOnStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_bLegacyFinishOnStop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_DisplayLabel_MetaData[] = {
		{ "Comment", "/** The friendly name for this animation displayed in the designer. */" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
		{ "ToolTip", "The friendly name for this animation displayed in the designer." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_DisplayLabel = { "DisplayLabel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetAnimation, DisplayLabel), METADATA_PARAMS(Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_DisplayLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_DisplayLabel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_MovieScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_AnimationBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_AnimationBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_bLegacyFinishOnStop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_DisplayLabel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetAnimation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetAnimation_Statics::ClassParams = {
		&UWidgetAnimation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWidgetAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimation_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetAnimation()
	{
		if (!Z_Registration_Info_UClass_UWidgetAnimation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetAnimation.OuterSingleton, Z_Construct_UClass_UWidgetAnimation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetAnimation.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UWidgetAnimation>()
	{
		return UWidgetAnimation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetAnimation);
	UWidgetAnimation::~UWidgetAnimation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetAnimation, UWidgetAnimation::StaticClass, TEXT("UWidgetAnimation"), &Z_Registration_Info_UClass_UWidgetAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetAnimation), 1175481567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_2064307905(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
