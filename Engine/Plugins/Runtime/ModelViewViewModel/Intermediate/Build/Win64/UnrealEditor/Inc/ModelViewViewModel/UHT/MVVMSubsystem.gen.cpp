// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVVMSubsystem.h"
#include "Types/MVVMAvailableBinding.h"
#include "Types/MVVMBindingName.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMSubsystem();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMSubsystem_NoRegister();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMView_NoRegister();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelCollectionObject_NoRegister();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMAvailableBinding();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMBindingName();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetTree_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModel();
// End Cross Module References
	DEFINE_FUNCTION(UMVVMSubsystem::execGetGlobalViewModelCollection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMViewModelCollectionObject**)Z_Param__Result=P_THIS->GetGlobalViewModelCollection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMSubsystem::execK2_GetAvailableBinding)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_STRUCT(FMVVMBindingName,Z_Param_BindingName);
		P_GET_OBJECT(UClass,Z_Param_Accessor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMVVMAvailableBinding*)Z_Param__Result=P_THIS->K2_GetAvailableBinding(Z_Param_Class,Z_Param_BindingName,Z_Param_Accessor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMSubsystem::execK2_GetAvailableBindings)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_OBJECT(UClass,Z_Param_Accessor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMVVMAvailableBinding>*)Z_Param__Result=P_THIS->K2_GetAvailableBindings(Z_Param_Class,Z_Param_Accessor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMSubsystem::execDoesWidgetTreeContainedWidget)
	{
		P_GET_OBJECT(UWidgetTree,Z_Param_WidgetTree);
		P_GET_OBJECT(UWidget,Z_Param_ViewWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesWidgetTreeContainedWidget(Z_Param_WidgetTree,Z_Param_ViewWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMSubsystem::execK2_GetViewFromUserWidget)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_UserWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMView**)Z_Param__Result=P_THIS->K2_GetViewFromUserWidget(Z_Param_UserWidget);
		P_NATIVE_END;
	}
	void UMVVMSubsystem::StaticRegisterNativesUMVVMSubsystem()
	{
		UClass* Class = UMVVMSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoesWidgetTreeContainedWidget", &UMVVMSubsystem::execDoesWidgetTreeContainedWidget },
			{ "GetGlobalViewModelCollection", &UMVVMSubsystem::execGetGlobalViewModelCollection },
			{ "K2_GetAvailableBinding", &UMVVMSubsystem::execK2_GetAvailableBinding },
			{ "K2_GetAvailableBindings", &UMVVMSubsystem::execK2_GetAvailableBindings },
			{ "K2_GetViewFromUserWidget", &UMVVMSubsystem::execK2_GetViewFromUserWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget_Statics
	{
		struct MVVMSubsystem_eventDoesWidgetTreeContainedWidget_Parms
		{
			const UWidgetTree* WidgetTree;
			const UWidget* ViewWidget;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetTree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewWidget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget_Statics::NewProp_WidgetTree_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget_Statics::NewProp_WidgetTree = { "WidgetTree", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMSubsystem_eventDoesWidgetTreeContainedWidget_Parms, WidgetTree), Z_Construct_UClass_UWidgetTree_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget_Statics::NewProp_WidgetTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget_Statics::NewProp_WidgetTree_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget_Statics::NewProp_ViewWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget_Statics::NewProp_ViewWidget = { "ViewWidget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMSubsystem_eventDoesWidgetTreeContainedWidget_Parms, ViewWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget_Statics::NewProp_ViewWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget_Statics::NewProp_ViewWidget_MetaData)) };
	void Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MVVMSubsystem_eventDoesWidgetTreeContainedWidget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MVVMSubsystem_eventDoesWidgetTreeContainedWidget_Parms), &Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget_Statics::NewProp_WidgetTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget_Statics::NewProp_ViewWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMSubsystem, nullptr, "DoesWidgetTreeContainedWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget_Statics::MVVMSubsystem_eventDoesWidgetTreeContainedWidget_Parms), Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMSubsystem_GetGlobalViewModelCollection_Statics
	{
		struct MVVMSubsystem_eventGetGlobalViewModelCollection_Parms
		{
			UMVVMViewModelCollectionObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMSubsystem_GetGlobalViewModelCollection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMSubsystem_eventGetGlobalViewModelCollection_Parms, ReturnValue), Z_Construct_UClass_UMVVMViewModelCollectionObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMSubsystem_GetGlobalViewModelCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMSubsystem_GetGlobalViewModelCollection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMSubsystem_GetGlobalViewModelCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "ModuleRelativePath", "Public/MVVMSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMSubsystem_GetGlobalViewModelCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMSubsystem, nullptr, "GetGlobalViewModelCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMSubsystem_GetGlobalViewModelCollection_Statics::MVVMSubsystem_eventGetGlobalViewModelCollection_Parms), Z_Construct_UFunction_UMVVMSubsystem_GetGlobalViewModelCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMSubsystem_GetGlobalViewModelCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMSubsystem_GetGlobalViewModelCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMSubsystem_GetGlobalViewModelCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMSubsystem_GetGlobalViewModelCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMSubsystem_GetGlobalViewModelCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding_Statics
	{
		struct MVVMSubsystem_eventK2_GetAvailableBinding_Parms
		{
			const UClass* Class;
			FMVVMBindingName BindingName;
			const UClass* Accessor;
			FMVVMAvailableBinding ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Accessor_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Accessor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding_Statics::NewProp_Class_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMSubsystem_eventK2_GetAvailableBinding_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding_Statics::NewProp_Class_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding_Statics::NewProp_BindingName = { "BindingName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMSubsystem_eventK2_GetAvailableBinding_Parms, BindingName), Z_Construct_UScriptStruct_FMVVMBindingName, METADATA_PARAMS(nullptr, 0) }; // 4182072837
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding_Statics::NewProp_Accessor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMSubsystem_eventK2_GetAvailableBinding_Parms, Accessor), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding_Statics::NewProp_Accessor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding_Statics::NewProp_Accessor_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMSubsystem_eventK2_GetAvailableBinding_Parms, ReturnValue), Z_Construct_UScriptStruct_FMVVMAvailableBinding, METADATA_PARAMS(nullptr, 0) }; // 1827510724
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding_Statics::NewProp_BindingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** @return The AvailableBinding from a BindingName. */" },
		{ "DisplayName", "Get Available Binding" },
		{ "ModuleRelativePath", "Public/MVVMSubsystem.h" },
		{ "ToolTip", "@return The AvailableBinding from a BindingName." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMSubsystem, nullptr, "K2_GetAvailableBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding_Statics::MVVMSubsystem_eventK2_GetAvailableBinding_Parms), Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings_Statics
	{
		struct MVVMSubsystem_eventK2_GetAvailableBindings_Parms
		{
			const UClass* Class;
			const UClass* Accessor;
			TArray<FMVVMAvailableBinding> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Accessor_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Accessor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings_Statics::NewProp_Class_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMSubsystem_eventK2_GetAvailableBindings_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings_Statics::NewProp_Accessor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings_Statics::NewProp_Accessor = { "Accessor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMSubsystem_eventK2_GetAvailableBindings_Parms, Accessor), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings_Statics::NewProp_Accessor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings_Statics::NewProp_Accessor_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMVVMAvailableBinding, METADATA_PARAMS(nullptr, 0) }; // 1827510724
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMSubsystem_eventK2_GetAvailableBindings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1827510724
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings_Statics::NewProp_Accessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "/** @return The list of all the AvailableBindings that are available for the Class. */" },
		{ "DisplayName", "Get Available Bindings" },
		{ "ModuleRelativePath", "Public/MVVMSubsystem.h" },
		{ "ToolTip", "@return The list of all the AvailableBindings that are available for the Class." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMSubsystem, nullptr, "K2_GetAvailableBindings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings_Statics::MVVMSubsystem_eventK2_GetAvailableBindings_Parms), Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMSubsystem_K2_GetViewFromUserWidget_Statics
	{
		struct MVVMSubsystem_eventK2_GetViewFromUserWidget_Parms
		{
			const UUserWidget* UserWidget;
			UMVVMView* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UserWidget;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMSubsystem_K2_GetViewFromUserWidget_Statics::NewProp_UserWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMSubsystem_K2_GetViewFromUserWidget_Statics::NewProp_UserWidget = { "UserWidget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMSubsystem_eventK2_GetViewFromUserWidget_Parms, UserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMVVMSubsystem_K2_GetViewFromUserWidget_Statics::NewProp_UserWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMSubsystem_K2_GetViewFromUserWidget_Statics::NewProp_UserWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMSubsystem_K2_GetViewFromUserWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMSubsystem_K2_GetViewFromUserWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMSubsystem_eventK2_GetViewFromUserWidget_Parms, ReturnValue), Z_Construct_UClass_UMVVMView_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMVVMSubsystem_K2_GetViewFromUserWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMSubsystem_K2_GetViewFromUserWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMSubsystem_K2_GetViewFromUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMSubsystem_K2_GetViewFromUserWidget_Statics::NewProp_UserWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMSubsystem_K2_GetViewFromUserWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMSubsystem_K2_GetViewFromUserWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewmodel" },
		{ "Comment", "//~ End UEngineSubsystem interface\n" },
		{ "DisplayName", "Get View From User Widget" },
		{ "ModuleRelativePath", "Public/MVVMSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMSubsystem_K2_GetViewFromUserWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMSubsystem, nullptr, "K2_GetViewFromUserWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMSubsystem_K2_GetViewFromUserWidget_Statics::MVVMSubsystem_eventK2_GetViewFromUserWidget_Parms), Z_Construct_UFunction_UMVVMSubsystem_K2_GetViewFromUserWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMSubsystem_K2_GetViewFromUserWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMSubsystem_K2_GetViewFromUserWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMSubsystem_K2_GetViewFromUserWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMSubsystem_K2_GetViewFromUserWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMSubsystem_K2_GetViewFromUserWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMSubsystem);
	UClass* Z_Construct_UClass_UMVVMSubsystem_NoRegister()
	{
		return UMVVMSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalViewModelCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GlobalViewModelCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMVVMSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMVVMSubsystem_DoesWidgetTreeContainedWidget, "DoesWidgetTreeContainedWidget" }, // 2776355209
		{ &Z_Construct_UFunction_UMVVMSubsystem_GetGlobalViewModelCollection, "GetGlobalViewModelCollection" }, // 2846464098
		{ &Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBinding, "K2_GetAvailableBinding" }, // 190102760
		{ &Z_Construct_UFunction_UMVVMSubsystem_K2_GetAvailableBindings, "K2_GetAvailableBindings" }, // 4184774555
		{ &Z_Construct_UFunction_UMVVMSubsystem_K2_GetViewFromUserWidget, "K2_GetViewFromUserWidget" }, // 4106301120
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** */" },
		{ "IncludePath", "MVVMSubsystem.h" },
		{ "ModuleRelativePath", "Public/MVVMSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMSubsystem_Statics::NewProp_GlobalViewModelCollection_MetaData[] = {
		{ "ModuleRelativePath", "Public/MVVMSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMSubsystem_Statics::NewProp_GlobalViewModelCollection = { "GlobalViewModelCollection", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMVVMSubsystem, GlobalViewModelCollection), Z_Construct_UClass_UMVVMViewModelCollectionObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMVVMSubsystem_Statics::NewProp_GlobalViewModelCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMSubsystem_Statics::NewProp_GlobalViewModelCollection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMVVMSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMSubsystem_Statics::NewProp_GlobalViewModelCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMSubsystem_Statics::ClassParams = {
		&UMVVMSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMVVMSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMVVMSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMVVMSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMVVMSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMSubsystem.OuterSingleton, Z_Construct_UClass_UMVVMSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMSubsystem.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODEL_API UClass* StaticClass<UMVVMSubsystem>()
	{
		return UMVVMSubsystem::StaticClass();
	}
	UMVVMSubsystem::UMVVMSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMSubsystem);
	UMVVMSubsystem::~UMVVMSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMSubsystem, UMVVMSubsystem::StaticClass, TEXT("UMVVMSubsystem"), &Z_Registration_Info_UClass_UMVVMSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMSubsystem), 3022048220U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_601515308(TEXT("/Script/ModelViewViewModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
