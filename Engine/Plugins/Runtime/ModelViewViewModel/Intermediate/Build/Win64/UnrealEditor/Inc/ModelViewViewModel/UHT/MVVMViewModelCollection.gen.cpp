// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/MVVMViewModelCollection.h"
#include "Types/MVVMViewModelContext.h"
#include "Types/MVVMViewModelContextInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMViewModelCollection() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelBase_NoRegister();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelCollectionObject();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelCollectionObject_NoRegister();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewModelCollection();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewModelContext();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewModelContextInstance();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModel();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMViewModelCollection;
class UScriptStruct* FMVVMViewModelCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMViewModelCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMViewModelCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMViewModelCollection, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModel(), TEXT("MVVMViewModelCollection"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMViewModelCollection.OuterSingleton;
}
template<> MODELVIEWVIEWMODEL_API UScriptStruct* StaticStruct<FMVVMViewModelCollection>()
{
	return FMVVMViewModelCollection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMViewModelCollection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewModelInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewModelInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ViewModelInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewModelCollection_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Types/MVVMViewModelCollection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMViewModelCollection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMViewModelCollection>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMViewModelCollection_Statics::NewProp_ViewModelInstances_Inner = { "ViewModelInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMVVMViewModelContextInstance, METADATA_PARAMS(nullptr, 0) }; // 467013587
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewModelCollection_Statics::NewProp_ViewModelInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/MVVMViewModelCollection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMVVMViewModelCollection_Statics::NewProp_ViewModelInstances = { "ViewModelInstances", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMViewModelCollection, ViewModelInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMViewModelCollection_Statics::NewProp_ViewModelInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewModelCollection_Statics::NewProp_ViewModelInstances_MetaData)) }; // 467013587
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMViewModelCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewModelCollection_Statics::NewProp_ViewModelInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewModelCollection_Statics::NewProp_ViewModelInstances,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMViewModelCollection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
		nullptr,
		&NewStructOps,
		"MVVMViewModelCollection",
		sizeof(FMVVMViewModelCollection),
		alignof(FMVVMViewModelCollection),
		Z_Construct_UScriptStruct_FMVVMViewModelCollection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewModelCollection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMViewModelCollection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewModelCollection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewModelCollection()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMViewModelCollection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMViewModelCollection.InnerSingleton, Z_Construct_UScriptStruct_FMVVMViewModelCollection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMViewModelCollection.InnerSingleton;
	}
	DEFINE_FUNCTION(UMVVMViewModelCollectionObject::execRemoveAllViewModelInstance)
	{
		P_GET_OBJECT(UMVVMViewModelBase,Z_Param_ViewModel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemoveAllViewModelInstance(Z_Param_ViewModel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelCollectionObject::execRemoveViewModel)
	{
		P_GET_STRUCT(FMVVMViewModelContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveViewModel(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelCollectionObject::execAddViewModelInstance)
	{
		P_GET_STRUCT(FMVVMViewModelContext,Z_Param_Context);
		P_GET_OBJECT(UMVVMViewModelBase,Z_Param_ViewModel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddViewModelInstance(Z_Param_Context,Z_Param_ViewModel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelCollectionObject::execFindFirstViewModelInstanceOfType)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UMVVMViewModelBase> ,Z_Param_Out_ViewModelClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMViewModelBase**)Z_Param__Result=P_THIS->FindFirstViewModelInstanceOfType(Z_Param_Out_ViewModelClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelCollectionObject::execFindViewModelInstance)
	{
		P_GET_STRUCT(FMVVMViewModelContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMVVMViewModelBase**)Z_Param__Result=P_THIS->FindViewModelInstance(Z_Param_Context);
		P_NATIVE_END;
	}
	void UMVVMViewModelCollectionObject::StaticRegisterNativesUMVVMViewModelCollectionObject()
	{
		UClass* Class = UMVVMViewModelCollectionObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddViewModelInstance", &UMVVMViewModelCollectionObject::execAddViewModelInstance },
			{ "FindFirstViewModelInstanceOfType", &UMVVMViewModelCollectionObject::execFindFirstViewModelInstanceOfType },
			{ "FindViewModelInstance", &UMVVMViewModelCollectionObject::execFindViewModelInstance },
			{ "RemoveAllViewModelInstance", &UMVVMViewModelCollectionObject::execRemoveAllViewModelInstance },
			{ "RemoveViewModel", &UMVVMViewModelCollectionObject::execRemoveViewModel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMVVMViewModelCollectionObject_AddViewModelInstance_Statics
	{
		struct MVVMViewModelCollectionObject_eventAddViewModelInstance_Parms
		{
			FMVVMViewModelContext Context;
			UMVVMViewModelBase* ViewModel;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewModel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMViewModelCollectionObject_AddViewModelInstance_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelCollectionObject_eventAddViewModelInstance_Parms, Context), Z_Construct_UScriptStruct_FMVVMViewModelContext, METADATA_PARAMS(nullptr, 0) }; // 919489008
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMViewModelCollectionObject_AddViewModelInstance_Statics::NewProp_ViewModel = { "ViewModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelCollectionObject_eventAddViewModelInstance_Parms, ViewModel), Z_Construct_UClass_UMVVMViewModelBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMVVMViewModelCollectionObject_AddViewModelInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MVVMViewModelCollectionObject_eventAddViewModelInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMVVMViewModelCollectionObject_AddViewModelInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MVVMViewModelCollectionObject_eventAddViewModelInstance_Parms), &Z_Construct_UFunction_UMVVMViewModelCollectionObject_AddViewModelInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelCollectionObject_AddViewModelInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelCollectionObject_AddViewModelInstance_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelCollectionObject_AddViewModelInstance_Statics::NewProp_ViewModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelCollectionObject_AddViewModelInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelCollectionObject_AddViewModelInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Public/Types/MVVMViewModelCollection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelCollectionObject_AddViewModelInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelCollectionObject, nullptr, "AddViewModelInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelCollectionObject_AddViewModelInstance_Statics::MVVMViewModelCollectionObject_eventAddViewModelInstance_Parms), Z_Construct_UFunction_UMVVMViewModelCollectionObject_AddViewModelInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelCollectionObject_AddViewModelInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelCollectionObject_AddViewModelInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelCollectionObject_AddViewModelInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelCollectionObject_AddViewModelInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelCollectionObject_AddViewModelInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType_Statics
	{
		struct MVVMViewModelCollectionObject_eventFindFirstViewModelInstanceOfType_Parms
		{
			const TSubclassOf<UMVVMViewModelBase>  ViewModelClass;
			UMVVMViewModelBase* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewModelClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ViewModelClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType_Statics::NewProp_ViewModelClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType_Statics::NewProp_ViewModelClass = { "ViewModelClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelCollectionObject_eventFindFirstViewModelInstanceOfType_Parms, ViewModelClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMVVMViewModelBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType_Statics::NewProp_ViewModelClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType_Statics::NewProp_ViewModelClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelCollectionObject_eventFindFirstViewModelInstanceOfType_Parms, ReturnValue), Z_Construct_UClass_UMVVMViewModelBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType_Statics::NewProp_ViewModelClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "Comment", "/**\n\x09 * Finds a View Model of the given type.\n\x09 * If the collection contains multiple instances of the same type then this will return the first one found.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Types/MVVMViewModelCollection.h" },
		{ "ToolTip", "Finds a View Model of the given type.\nIf the collection contains multiple instances of the same type then this will return the first one found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelCollectionObject, nullptr, "FindFirstViewModelInstanceOfType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType_Statics::MVVMViewModelCollectionObject_eventFindFirstViewModelInstanceOfType_Parms), Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindViewModelInstance_Statics
	{
		struct MVVMViewModelCollectionObject_eventFindViewModelInstance_Parms
		{
			FMVVMViewModelContext Context;
			UMVVMViewModelBase* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindViewModelInstance_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelCollectionObject_eventFindViewModelInstance_Parms, Context), Z_Construct_UScriptStruct_FMVVMViewModelContext, METADATA_PARAMS(nullptr, 0) }; // 919489008
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindViewModelInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelCollectionObject_eventFindViewModelInstance_Parms, ReturnValue), Z_Construct_UClass_UMVVMViewModelBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindViewModelInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindViewModelInstance_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindViewModelInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindViewModelInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Public/Types/MVVMViewModelCollection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindViewModelInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelCollectionObject, nullptr, "FindViewModelInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindViewModelInstance_Statics::MVVMViewModelCollectionObject_eventFindViewModelInstance_Parms), Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindViewModelInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindViewModelInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindViewModelInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindViewModelInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindViewModelInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindViewModelInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveAllViewModelInstance_Statics
	{
		struct MVVMViewModelCollectionObject_eventRemoveAllViewModelInstance_Parms
		{
			UMVVMViewModelBase* ViewModel;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewModel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveAllViewModelInstance_Statics::NewProp_ViewModel = { "ViewModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelCollectionObject_eventRemoveAllViewModelInstance_Parms, ViewModel), Z_Construct_UClass_UMVVMViewModelBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveAllViewModelInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelCollectionObject_eventRemoveAllViewModelInstance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveAllViewModelInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveAllViewModelInstance_Statics::NewProp_ViewModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveAllViewModelInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveAllViewModelInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Public/Types/MVVMViewModelCollection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveAllViewModelInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelCollectionObject, nullptr, "RemoveAllViewModelInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveAllViewModelInstance_Statics::MVVMViewModelCollectionObject_eventRemoveAllViewModelInstance_Parms), Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveAllViewModelInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveAllViewModelInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveAllViewModelInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveAllViewModelInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveAllViewModelInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveAllViewModelInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveViewModel_Statics
	{
		struct MVVMViewModelCollectionObject_eventRemoveViewModel_Parms
		{
			FMVVMViewModelContext Context;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveViewModel_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelCollectionObject_eventRemoveViewModel_Parms, Context), Z_Construct_UScriptStruct_FMVVMViewModelContext, METADATA_PARAMS(nullptr, 0) }; // 919489008
	void Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveViewModel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MVVMViewModelCollectionObject_eventRemoveViewModel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveViewModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MVVMViewModelCollectionObject_eventRemoveViewModel_Parms), &Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveViewModel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveViewModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveViewModel_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveViewModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveViewModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Public/Types/MVVMViewModelCollection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveViewModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelCollectionObject, nullptr, "RemoveViewModel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveViewModel_Statics::MVVMViewModelCollectionObject_eventRemoveViewModel_Parms), Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveViewModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveViewModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveViewModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveViewModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveViewModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveViewModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMViewModelCollectionObject);
	UClass* Z_Construct_UClass_UMVVMViewModelCollectionObject_NoRegister()
	{
		return UMVVMViewModelCollectionObject::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMViewModelCollectionObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewModelCollection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewModelCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMViewModelCollectionObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMVVMViewModelCollectionObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMVVMViewModelCollectionObject_AddViewModelInstance, "AddViewModelInstance" }, // 1030971306
		{ &Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType, "FindFirstViewModelInstanceOfType" }, // 3293381406
		{ &Z_Construct_UFunction_UMVVMViewModelCollectionObject_FindViewModelInstance, "FindViewModelInstance" }, // 2435413248
		{ &Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveAllViewModelInstance, "RemoveAllViewModelInstance" }, // 3288789153
		{ &Z_Construct_UFunction_UMVVMViewModelCollectionObject_RemoveViewModel, "RemoveViewModel" }, // 3429585085
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelCollectionObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** */" },
		{ "DisplayName", "MVVM View Model Collection Object" },
		{ "IncludePath", "Types/MVVMViewModelCollection.h" },
		{ "ModuleRelativePath", "Public/Types/MVVMViewModelCollection.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelCollectionObject_Statics::NewProp_ViewModelCollection_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/MVVMViewModelCollection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMViewModelCollectionObject_Statics::NewProp_ViewModelCollection = { "ViewModelCollection", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMVVMViewModelCollectionObject, ViewModelCollection), Z_Construct_UScriptStruct_FMVVMViewModelCollection, METADATA_PARAMS(Z_Construct_UClass_UMVVMViewModelCollectionObject_Statics::NewProp_ViewModelCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelCollectionObject_Statics::NewProp_ViewModelCollection_MetaData)) }; // 1455712802
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMVVMViewModelCollectionObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewModelCollectionObject_Statics::NewProp_ViewModelCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMViewModelCollectionObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMViewModelCollectionObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMViewModelCollectionObject_Statics::ClassParams = {
		&UMVVMViewModelCollectionObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMVVMViewModelCollectionObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelCollectionObject_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMVVMViewModelCollectionObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelCollectionObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMVVMViewModelCollectionObject()
	{
		if (!Z_Registration_Info_UClass_UMVVMViewModelCollectionObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMViewModelCollectionObject.OuterSingleton, Z_Construct_UClass_UMVVMViewModelCollectionObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMViewModelCollectionObject.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODEL_API UClass* StaticClass<UMVVMViewModelCollectionObject>()
	{
		return UMVVMViewModelCollectionObject::StaticClass();
	}
	UMVVMViewModelCollectionObject::UMVVMViewModelCollectionObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMViewModelCollectionObject);
	UMVVMViewModelCollectionObject::~UMVVMViewModelCollectionObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelCollection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelCollection_h_Statics::ScriptStructInfo[] = {
		{ FMVVMViewModelCollection::StaticStruct, Z_Construct_UScriptStruct_FMVVMViewModelCollection_Statics::NewStructOps, TEXT("MVVMViewModelCollection"), &Z_Registration_Info_UScriptStruct_MVVMViewModelCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMViewModelCollection), 1455712802U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelCollection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMViewModelCollectionObject, UMVVMViewModelCollectionObject::StaticClass, TEXT("UMVVMViewModelCollectionObject"), &Z_Registration_Info_UClass_UMVVMViewModelCollectionObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMViewModelCollectionObject), 3560883160U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelCollection_h_2954497896(TEXT("/Script/ModelViewViewModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelCollection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelCollection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMViewModelCollection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
