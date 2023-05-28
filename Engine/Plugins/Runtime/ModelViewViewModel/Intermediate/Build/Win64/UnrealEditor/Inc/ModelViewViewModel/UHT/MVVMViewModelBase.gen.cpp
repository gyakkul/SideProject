// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVVMViewModelBase.h"
#include "FieldNotification/FieldId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMViewModelBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelBase();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_FieldValueChangedDynamicDelegate__DelegateSignature();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FFieldNotificationId();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModel();
// End Cross Module References
	DEFINE_FUNCTION(UMVVMViewModelBase::execK2_BroadcastFieldValueChanged)
	{
		P_GET_STRUCT(FFieldNotificationId,Z_Param_FieldId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_BroadcastFieldValueChanged(Z_Param_FieldId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelBase::execK2_RemoveFieldValueChangedDelegate)
	{
		P_GET_STRUCT(FFieldNotificationId,Z_Param_FieldId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_RemoveFieldValueChangedDelegate(Z_Param_FieldId,FFieldValueChangedDynamicDelegate(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelBase::execK2_AddFieldValueChangedDelegate)
	{
		P_GET_STRUCT(FFieldNotificationId,Z_Param_FieldId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AddFieldValueChangedDelegate(Z_Param_FieldId,FFieldValueChangedDynamicDelegate(Z_Param_Delegate));
		P_NATIVE_END;
	}
	void UMVVMViewModelBase::StaticRegisterNativesUMVVMViewModelBase()
	{
		UClass* Class = UMVVMViewModelBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_AddFieldValueChangedDelegate", &UMVVMViewModelBase::execK2_AddFieldValueChangedDelegate },
			{ "K2_BroadcastFieldValueChanged", &UMVVMViewModelBase::execK2_BroadcastFieldValueChanged },
			{ "K2_RemoveFieldValueChangedDelegate", &UMVVMViewModelBase::execK2_RemoveFieldValueChangedDelegate },
			{ "K2_SetPropertyValue", &UMVVMViewModelBase::execK2_SetPropertyValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMVVMViewModelBase_K2_AddFieldValueChangedDelegate_Statics
	{
		struct MVVMViewModelBase_eventK2_AddFieldValueChangedDelegate_Parms
		{
			FFieldNotificationId FieldId;
			FScriptDelegate Delegate;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldId;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMViewModelBase_K2_AddFieldValueChangedDelegate_Statics::NewProp_FieldId = { "FieldId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBase_eventK2_AddFieldValueChangedDelegate_Parms, FieldId), Z_Construct_UScriptStruct_FFieldNotificationId, METADATA_PARAMS(nullptr, 0) }; // 2908908415
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMVVMViewModelBase_K2_AddFieldValueChangedDelegate_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBase_eventK2_AddFieldValueChangedDelegate_Parms, Delegate), Z_Construct_UDelegateFunction_UMG_FieldValueChangedDynamicDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2601812013
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelBase_K2_AddFieldValueChangedDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBase_K2_AddFieldValueChangedDelegate_Statics::NewProp_FieldId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBase_K2_AddFieldValueChangedDelegate_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBase_K2_AddFieldValueChangedDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "FieldNotify" },
		{ "Comment", "//~ End INotifyFieldValueChanged Interface\n" },
		{ "DisplayName", "Add Field Value Changed Delegate" },
		{ "ModuleRelativePath", "Public/MVVMViewModelBase.h" },
		{ "ScriptName", "AddFieldValueChangedDelegate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelBase_K2_AddFieldValueChangedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelBase, nullptr, "K2_AddFieldValueChangedDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelBase_K2_AddFieldValueChangedDelegate_Statics::MVVMViewModelBase_eventK2_AddFieldValueChangedDelegate_Parms), Z_Construct_UFunction_UMVVMViewModelBase_K2_AddFieldValueChangedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBase_K2_AddFieldValueChangedDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBase_K2_AddFieldValueChangedDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBase_K2_AddFieldValueChangedDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelBase_K2_AddFieldValueChangedDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelBase_K2_AddFieldValueChangedDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelBase_K2_BroadcastFieldValueChanged_Statics
	{
		struct MVVMViewModelBase_eventK2_BroadcastFieldValueChanged_Parms
		{
			FFieldNotificationId FieldId;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMViewModelBase_K2_BroadcastFieldValueChanged_Statics::NewProp_FieldId = { "FieldId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBase_eventK2_BroadcastFieldValueChanged_Parms, FieldId), Z_Construct_UScriptStruct_FFieldNotificationId, METADATA_PARAMS(nullptr, 0) }; // 2908908415
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelBase_K2_BroadcastFieldValueChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBase_K2_BroadcastFieldValueChanged_Statics::NewProp_FieldId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBase_K2_BroadcastFieldValueChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "FieldNotify" },
		{ "DisplayName", "Broadcast Field Value Changed" },
		{ "ModuleRelativePath", "Public/MVVMViewModelBase.h" },
		{ "ScriptName", "BroadcastFieldValueChanged" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelBase_K2_BroadcastFieldValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelBase, nullptr, "K2_BroadcastFieldValueChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelBase_K2_BroadcastFieldValueChanged_Statics::MVVMViewModelBase_eventK2_BroadcastFieldValueChanged_Parms), Z_Construct_UFunction_UMVVMViewModelBase_K2_BroadcastFieldValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBase_K2_BroadcastFieldValueChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBase_K2_BroadcastFieldValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBase_K2_BroadcastFieldValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelBase_K2_BroadcastFieldValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelBase_K2_BroadcastFieldValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelBase_K2_RemoveFieldValueChangedDelegate_Statics
	{
		struct MVVMViewModelBase_eventK2_RemoveFieldValueChangedDelegate_Parms
		{
			FFieldNotificationId FieldId;
			FScriptDelegate Delegate;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldId;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMViewModelBase_K2_RemoveFieldValueChangedDelegate_Statics::NewProp_FieldId = { "FieldId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBase_eventK2_RemoveFieldValueChangedDelegate_Parms, FieldId), Z_Construct_UScriptStruct_FFieldNotificationId, METADATA_PARAMS(nullptr, 0) }; // 2908908415
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMVVMViewModelBase_K2_RemoveFieldValueChangedDelegate_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBase_eventK2_RemoveFieldValueChangedDelegate_Parms, Delegate), Z_Construct_UDelegateFunction_UMG_FieldValueChangedDynamicDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2601812013
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelBase_K2_RemoveFieldValueChangedDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBase_K2_RemoveFieldValueChangedDelegate_Statics::NewProp_FieldId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBase_K2_RemoveFieldValueChangedDelegate_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBase_K2_RemoveFieldValueChangedDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "FieldNotify" },
		{ "DisplayName", "Remove Field Value Changed Delegate" },
		{ "ModuleRelativePath", "Public/MVVMViewModelBase.h" },
		{ "ScriptName", "RemoveFieldValueChangedDelegate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelBase_K2_RemoveFieldValueChangedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelBase, nullptr, "K2_RemoveFieldValueChangedDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelBase_K2_RemoveFieldValueChangedDelegate_Statics::MVVMViewModelBase_eventK2_RemoveFieldValueChangedDelegate_Parms), Z_Construct_UFunction_UMVVMViewModelBase_K2_RemoveFieldValueChangedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBase_K2_RemoveFieldValueChangedDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBase_K2_RemoveFieldValueChangedDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBase_K2_RemoveFieldValueChangedDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelBase_K2_RemoveFieldValueChangedDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelBase_K2_RemoveFieldValueChangedDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics
	{
		struct MVVMViewModelBase_eventK2_SetPropertyValue_Parms
		{
			int32 OldValue;
			int32 NewValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OldValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBase_eventK2_SetPropertyValue_Parms, OldValue), METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics::NewProp_OldValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBase_eventK2_SetPropertyValue_Parms, NewValue), METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics::NewProp_NewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics::NewProp_NewValue_MetaData)) };
	void Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MVVMViewModelBase_eventK2_SetPropertyValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MVVMViewModelBase_eventK2_SetPropertyValue_Parms), &Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics::NewProp_OldValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Viewmodel" },
		{ "CustomStructureParam", "OldValue,NewValue" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/MVVMViewModelBase.h" },
		{ "ScriptName", "SetPropertyValue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelBase, nullptr, "K2_SetPropertyValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics::MVVMViewModelBase_eventK2_SetPropertyValue_Parms), Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMViewModelBase);
	UClass* Z_Construct_UClass_UMVVMViewModelBase_NoRegister()
	{
		return UMVVMViewModelBase::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMViewModelBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMViewModelBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMVVMViewModelBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMVVMViewModelBase_K2_AddFieldValueChangedDelegate, "K2_AddFieldValueChangedDelegate" }, // 3862032395
		{ &Z_Construct_UFunction_UMVVMViewModelBase_K2_BroadcastFieldValueChanged, "K2_BroadcastFieldValueChanged" }, // 2127134186
		{ &Z_Construct_UFunction_UMVVMViewModelBase_K2_RemoveFieldValueChangedDelegate, "K2_RemoveFieldValueChangedDelegate" }, // 1186711832
		{ &Z_Construct_UFunction_UMVVMViewModelBase_K2_SetPropertyValue, "K2_SetPropertyValue" }, // 3173772956
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Base class for MVVM viewmodel. */" },
		{ "DisplayName", "MVVM ViewModel" },
		{ "IncludePath", "MVVMViewModelBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MVVMViewModelBase.h" },
		{ "ToolTip", "Base class for MVVM viewmodel." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMVVMViewModelBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister, (int32)VTABLE_OFFSET(UMVVMViewModelBase, INotifyFieldValueChanged), false },  // 3258936285
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMViewModelBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMViewModelBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMViewModelBase_Statics::ClassParams = {
		&UMVVMViewModelBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMVVMViewModelBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMVVMViewModelBase()
	{
		if (!Z_Registration_Info_UClass_UMVVMViewModelBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMViewModelBase.OuterSingleton, Z_Construct_UClass_UMVVMViewModelBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMViewModelBase.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODEL_API UClass* StaticClass<UMVVMViewModelBase>()
	{
		return UMVVMViewModelBase::StaticClass();
	}
	UMVVMViewModelBase::UMVVMViewModelBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMViewModelBase);
	UMVVMViewModelBase::~UMVVMViewModelBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMViewModelBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMViewModelBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMViewModelBase, UMVVMViewModelBase::StaticClass, TEXT("UMVVMViewModelBase"), &Z_Registration_Info_UClass_UMVVMViewModelBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMViewModelBase), 2235962538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMViewModelBase_h_702815625(TEXT("/Script/ModelViewViewModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMViewModelBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMViewModelBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
