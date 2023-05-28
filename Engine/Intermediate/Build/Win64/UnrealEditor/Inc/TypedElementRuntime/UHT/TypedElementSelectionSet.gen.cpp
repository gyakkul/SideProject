// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/Framework/TypedElementSelectionSet.h"
#include "Elements/Framework/TypedElementHandle.h"
#include "Elements/Interfaces/TypedElementSelectionInterface.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementSelectionSet() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementHandle();
	TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementSelectionSet();
	TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementSelectionSet_NoRegister();
	TYPEDELEMENTRUNTIME_API UEnum* Z_Construct_UEnum_TypedElementRuntime_ETypedElementSelectionMethod();
	TYPEDELEMENTRUNTIME_API UFunction* Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature();
	TYPEDELEMENTRUNTIME_API UFunction* Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature();
	TYPEDELEMENTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementIsSelectedOptions();
	TYPEDELEMENTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions();
	TYPEDELEMENTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSelectionOptions();
	TYPEDELEMENTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSelectionSetState();
	UPackage* Z_Construct_UPackage__Script_TypedElementRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementSelectionNormalizationOptions;
class UScriptStruct* FTypedElementSelectionNormalizationOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementSelectionNormalizationOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementSelectionNormalizationOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions, (UObject*)Z_Construct_UPackage__Script_TypedElementRuntime(), TEXT("TypedElementSelectionNormalizationOptions"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementSelectionNormalizationOptions.OuterSingleton;
}
template<> TYPEDELEMENTRUNTIME_API UScriptStruct* StaticStruct<FTypedElementSelectionNormalizationOptions>()
{
	return FTypedElementSelectionNormalizationOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExpandGroups_MetaData[];
#endif
		static void NewProp_bExpandGroups_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpandGroups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFollowAttachment_MetaData[];
#endif
		static void NewProp_bFollowAttachment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowAttachment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementSelectionNormalizationOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics::NewProp_bExpandGroups_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TypedElementInterfaces|Selection|NormalizationOptions" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics::NewProp_bExpandGroups_SetBit(void* Obj)
	{
		((FTypedElementSelectionNormalizationOptions*)Obj)->bExpandGroups = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics::NewProp_bExpandGroups = { "bExpandGroups", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTypedElementSelectionNormalizationOptions), &Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics::NewProp_bExpandGroups_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics::NewProp_bExpandGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics::NewProp_bExpandGroups_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics::NewProp_bFollowAttachment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TypedElementInterfaces|Selection|NormalizationOptions" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics::NewProp_bFollowAttachment_SetBit(void* Obj)
	{
		((FTypedElementSelectionNormalizationOptions*)Obj)->bFollowAttachment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics::NewProp_bFollowAttachment = { "bFollowAttachment", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTypedElementSelectionNormalizationOptions), &Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics::NewProp_bFollowAttachment_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics::NewProp_bFollowAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics::NewProp_bFollowAttachment_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics::NewProp_bExpandGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics::NewProp_bFollowAttachment,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementRuntime,
		nullptr,
		&NewStructOps,
		"TypedElementSelectionNormalizationOptions",
		sizeof(FTypedElementSelectionNormalizationOptions),
		alignof(FTypedElementSelectionNormalizationOptions),
		Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementSelectionNormalizationOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementSelectionNormalizationOptions.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementSelectionNormalizationOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementSelectionSetState;
class UScriptStruct* FTypedElementSelectionSetState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementSelectionSetState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementSelectionSetState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementSelectionSetState, (UObject*)Z_Construct_UPackage__Script_TypedElementRuntime(), TEXT("TypedElementSelectionSetState"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementSelectionSetState.OuterSingleton;
}
template<> TYPEDELEMENTRUNTIME_API UScriptStruct* StaticStruct<FTypedElementSelectionSetState>()
{
	return FTypedElementSelectionSetState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementSelectionSetState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedFromSelectionSet_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CreatedFromSelectionSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementSelectionSetState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementSelectionSetState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementSelectionSetState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementSelectionSetState_Statics::NewProp_CreatedFromSelectionSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FTypedElementSelectionSetState_Statics::NewProp_CreatedFromSelectionSet = { "CreatedFromSelectionSet", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTypedElementSelectionSetState, CreatedFromSelectionSet), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTypedElementSelectionSetState_Statics::NewProp_CreatedFromSelectionSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementSelectionSetState_Statics::NewProp_CreatedFromSelectionSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypedElementSelectionSetState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypedElementSelectionSetState_Statics::NewProp_CreatedFromSelectionSet,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementSelectionSetState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementRuntime,
		nullptr,
		&NewStructOps,
		"TypedElementSelectionSetState",
		sizeof(FTypedElementSelectionSetState),
		alignof(FTypedElementSelectionSetState),
		Z_Construct_UScriptStruct_FTypedElementSelectionSetState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementSelectionSetState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypedElementSelectionSetState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementSelectionSetState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementSelectionSetState()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementSelectionSetState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementSelectionSetState.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementSelectionSetState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementSelectionSetState.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature_Statics
	{
		struct TypedElementSelectionSet_eventOnPreChangeDynamic_Parms
		{
			const UTypedElementSelectionSet* SelectionSet;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature_Statics::NewProp_SelectionSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature_Statics::NewProp_SelectionSet = { "SelectionSet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventOnPreChangeDynamic_Parms, SelectionSet), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature_Statics::NewProp_SelectionSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature_Statics::NewProp_SelectionSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature_Statics::NewProp_SelectionSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSet, nullptr, "OnPreChangeDynamic__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature_Statics::TypedElementSelectionSet_eventOnPreChangeDynamic_Parms), Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UTypedElementSelectionSet::FOnPreChangeDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnPreChangeDynamic, const UTypedElementSelectionSet* SelectionSet)
{
	struct TypedElementSelectionSet_eventOnPreChangeDynamic_Parms
	{
		const UTypedElementSelectionSet* SelectionSet;
	};
	TypedElementSelectionSet_eventOnPreChangeDynamic_Parms Parms;
	Parms.SelectionSet=SelectionSet;
	OnPreChangeDynamic.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature_Statics
	{
		struct TypedElementSelectionSet_eventOnChangeDynamic_Parms
		{
			const UTypedElementSelectionSet* SelectionSet;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature_Statics::NewProp_SelectionSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature_Statics::NewProp_SelectionSet = { "SelectionSet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventOnChangeDynamic_Parms, SelectionSet), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature_Statics::NewProp_SelectionSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature_Statics::NewProp_SelectionSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature_Statics::NewProp_SelectionSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSet, nullptr, "OnChangeDynamic__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature_Statics::TypedElementSelectionSet_eventOnChangeDynamic_Parms), Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UTypedElementSelectionSet::FOnChangeDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnChangeDynamic, const UTypedElementSelectionSet* SelectionSet)
{
	struct TypedElementSelectionSet_eventOnChangeDynamic_Parms
	{
		const UTypedElementSelectionSet* SelectionSet;
	};
	TypedElementSelectionSet_eventOnChangeDynamic_Parms Parms;
	Parms.SelectionSet=SelectionSet;
	OnChangeDynamic.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UTypedElementSelectionSet::execK2_GetSelectedElementHandles)
	{
		P_GET_OBJECT(UClass,Z_Param_InBaseInterfaceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FScriptTypedElementHandle>*)Z_Param__Result=P_THIS->K2_GetSelectedElementHandles(Z_Param_InBaseInterfaceType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementSelectionSet::execGetSelectionElement)
	{
		P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
		P_GET_ENUM(ETypedElementSelectionMethod,Z_Param_InSelectionMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScriptTypedElementHandle*)Z_Param__Result=P_THIS->GetSelectionElement(Z_Param_Out_InElementHandle,ETypedElementSelectionMethod(Z_Param_InSelectionMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementSelectionSet::execAllowSelectionModifiers)
	{
		P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AllowSelectionModifiers(Z_Param_Out_InElementHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementSelectionSet::execSetSelection)
	{
		P_GET_TARRAY_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandles);
		P_GET_STRUCT(FTypedElementSelectionOptions,Z_Param_InSelectionOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSelection(Z_Param_Out_InElementHandles,Z_Param_InSelectionOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementSelectionSet::execDeselectElements)
	{
		P_GET_TARRAY_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandles);
		P_GET_STRUCT(FTypedElementSelectionOptions,Z_Param_InSelectionOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeselectElements(Z_Param_Out_InElementHandles,Z_Param_InSelectionOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementSelectionSet::execDeselectElement)
	{
		P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
		P_GET_STRUCT(FTypedElementSelectionOptions,Z_Param_InSelectionOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeselectElement(Z_Param_Out_InElementHandle,Z_Param_InSelectionOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementSelectionSet::execSelectElements)
	{
		P_GET_TARRAY_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandles);
		P_GET_STRUCT(FTypedElementSelectionOptions,Z_Param_InSelectionOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SelectElements(Z_Param_Out_InElementHandles,Z_Param_InSelectionOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementSelectionSet::execSelectElement)
	{
		P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
		P_GET_STRUCT(FTypedElementSelectionOptions,Z_Param_InSelectionOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SelectElement(Z_Param_Out_InElementHandle,Z_Param_InSelectionOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementSelectionSet::execCanDeselectElement)
	{
		P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
		P_GET_STRUCT(FTypedElementSelectionOptions,Z_Param_InSelectionOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanDeselectElement(Z_Param_Out_InElementHandle,Z_Param_InSelectionOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementSelectionSet::execCanSelectElement)
	{
		P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
		P_GET_STRUCT(FTypedElementSelectionOptions,Z_Param_InSelectionOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanSelectElement(Z_Param_Out_InElementHandle,Z_Param_InSelectionOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementSelectionSet::execIsElementSelected)
	{
		P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
		P_GET_STRUCT(FTypedElementIsSelectedOptions,Z_Param_InSelectionOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsElementSelected(Z_Param_Out_InElementHandle,Z_Param_InSelectionOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementSelectionSet::execRestoreSelectionState)
	{
		P_GET_STRUCT_REF(FTypedElementSelectionSetState,Z_Param_Out_InSelectionState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestoreSelectionState(Z_Param_Out_InSelectionState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementSelectionSet::execGetCurrentSelectionState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTypedElementSelectionSetState*)Z_Param__Result=P_THIS->GetCurrentSelectionState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementSelectionSet::execGetBottomSelectedObject)
	{
		P_GET_OBJECT(UClass,Z_Param_InRequiredClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetBottomSelectedObject(Z_Param_InRequiredClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementSelectionSet::execGetTopSelectedObject)
	{
		P_GET_OBJECT(UClass,Z_Param_InRequiredClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetTopSelectedObject(Z_Param_InRequiredClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementSelectionSet::execGetSelectedObjects)
	{
		P_GET_OBJECT(UClass,Z_Param_InRequiredClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetSelectedObjects(Z_Param_InRequiredClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementSelectionSet::execCountSelectedObjects)
	{
		P_GET_OBJECT(UClass,Z_Param_InRequiredClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CountSelectedObjects(Z_Param_InRequiredClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementSelectionSet::execHasSelectedObjects)
	{
		P_GET_OBJECT(UClass,Z_Param_InRequiredClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasSelectedObjects(Z_Param_InRequiredClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementSelectionSet::execCountSelectedElements)
	{
		P_GET_OBJECT(UClass,Z_Param_InBaseInterfaceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CountSelectedElements(Z_Param_InBaseInterfaceType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementSelectionSet::execHasSelectedElements)
	{
		P_GET_OBJECT(UClass,Z_Param_InBaseInterfaceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasSelectedElements(Z_Param_InBaseInterfaceType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementSelectionSet::execGetNumSelectedElements)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumSelectedElements();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementSelectionSet::execClearSelection)
	{
		P_GET_STRUCT(FTypedElementSelectionOptions,Z_Param_InSelectionOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearSelection(Z_Param_InSelectionOptions);
		P_NATIVE_END;
	}
	void UTypedElementSelectionSet::StaticRegisterNativesUTypedElementSelectionSet()
	{
		UClass* Class = UTypedElementSelectionSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AllowSelectionModifiers", &UTypedElementSelectionSet::execAllowSelectionModifiers },
			{ "CanDeselectElement", &UTypedElementSelectionSet::execCanDeselectElement },
			{ "CanSelectElement", &UTypedElementSelectionSet::execCanSelectElement },
			{ "ClearSelection", &UTypedElementSelectionSet::execClearSelection },
			{ "CountSelectedElements", &UTypedElementSelectionSet::execCountSelectedElements },
			{ "CountSelectedObjects", &UTypedElementSelectionSet::execCountSelectedObjects },
			{ "DeselectElement", &UTypedElementSelectionSet::execDeselectElement },
			{ "DeselectElements", &UTypedElementSelectionSet::execDeselectElements },
			{ "GetBottomSelectedObject", &UTypedElementSelectionSet::execGetBottomSelectedObject },
			{ "GetCurrentSelectionState", &UTypedElementSelectionSet::execGetCurrentSelectionState },
			{ "GetNumSelectedElements", &UTypedElementSelectionSet::execGetNumSelectedElements },
			{ "GetSelectedObjects", &UTypedElementSelectionSet::execGetSelectedObjects },
			{ "GetSelectionElement", &UTypedElementSelectionSet::execGetSelectionElement },
			{ "GetTopSelectedObject", &UTypedElementSelectionSet::execGetTopSelectedObject },
			{ "HasSelectedElements", &UTypedElementSelectionSet::execHasSelectedElements },
			{ "HasSelectedObjects", &UTypedElementSelectionSet::execHasSelectedObjects },
			{ "IsElementSelected", &UTypedElementSelectionSet::execIsElementSelected },
			{ "K2_GetSelectedElementHandles", &UTypedElementSelectionSet::execK2_GetSelectedElementHandles },
			{ "RestoreSelectionState", &UTypedElementSelectionSet::execRestoreSelectionState },
			{ "SelectElement", &UTypedElementSelectionSet::execSelectElement },
			{ "SelectElements", &UTypedElementSelectionSet::execSelectElements },
			{ "SetSelection", &UTypedElementSelectionSet::execSetSelection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTypedElementSelectionSet_AllowSelectionModifiers_Statics
	{
		struct TypedElementSelectionSet_eventAllowSelectionModifiers_Parms
		{
			FScriptTypedElementHandle InElementHandle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_AllowSelectionModifiers_Statics::NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_AllowSelectionModifiers_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventAllowSelectionModifiers_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_AllowSelectionModifiers_Statics::NewProp_InElementHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_AllowSelectionModifiers_Statics::NewProp_InElementHandle_MetaData)) }; // 915069018
	void Z_Construct_UFunction_UTypedElementSelectionSet_AllowSelectionModifiers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TypedElementSelectionSet_eventAllowSelectionModifiers_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_AllowSelectionModifiers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TypedElementSelectionSet_eventAllowSelectionModifiers_Parms), &Z_Construct_UFunction_UTypedElementSelectionSet_AllowSelectionModifiers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSet_AllowSelectionModifiers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_AllowSelectionModifiers_Statics::NewProp_InElementHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_AllowSelectionModifiers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_AllowSelectionModifiers_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Test to see whether selection modifiers (Ctrl or Shift) are allowed while selecting this element.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
		{ "ToolTip", "Test to see whether selection modifiers (Ctrl or Shift) are allowed while selecting this element." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSet_AllowSelectionModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSet, nullptr, "AllowSelectionModifiers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementSelectionSet_AllowSelectionModifiers_Statics::TypedElementSelectionSet_eventAllowSelectionModifiers_Parms), Z_Construct_UFunction_UTypedElementSelectionSet_AllowSelectionModifiers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_AllowSelectionModifiers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_AllowSelectionModifiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_AllowSelectionModifiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementSelectionSet_AllowSelectionModifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSet_AllowSelectionModifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementSelectionSet_CanDeselectElement_Statics
	{
		struct TypedElementSelectionSet_eventCanDeselectElement_Parms
		{
			FScriptTypedElementHandle InElementHandle;
			FTypedElementSelectionOptions InSelectionOptions;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSelectionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSelectionOptions;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_CanDeselectElement_Statics::NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_CanDeselectElement_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventCanDeselectElement_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_CanDeselectElement_Statics::NewProp_InElementHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_CanDeselectElement_Statics::NewProp_InElementHandle_MetaData)) }; // 915069018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_CanDeselectElement_Statics::NewProp_InSelectionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_CanDeselectElement_Statics::NewProp_InSelectionOptions = { "InSelectionOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventCanDeselectElement_Parms, InSelectionOptions), Z_Construct_UScriptStruct_FTypedElementSelectionOptions, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_CanDeselectElement_Statics::NewProp_InSelectionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_CanDeselectElement_Statics::NewProp_InSelectionOptions_MetaData)) }; // 2776779509
	void Z_Construct_UFunction_UTypedElementSelectionSet_CanDeselectElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TypedElementSelectionSet_eventCanDeselectElement_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_CanDeselectElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TypedElementSelectionSet_eventCanDeselectElement_Parms), &Z_Construct_UFunction_UTypedElementSelectionSet_CanDeselectElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSet_CanDeselectElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_CanDeselectElement_Statics::NewProp_InElementHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_CanDeselectElement_Statics::NewProp_InSelectionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_CanDeselectElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_CanDeselectElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Test to see whether the given element can be deselected.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
		{ "ToolTip", "Test to see whether the given element can be deselected." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSet_CanDeselectElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSet, nullptr, "CanDeselectElement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementSelectionSet_CanDeselectElement_Statics::TypedElementSelectionSet_eventCanDeselectElement_Parms), Z_Construct_UFunction_UTypedElementSelectionSet_CanDeselectElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_CanDeselectElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_CanDeselectElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_CanDeselectElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementSelectionSet_CanDeselectElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSet_CanDeselectElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementSelectionSet_CanSelectElement_Statics
	{
		struct TypedElementSelectionSet_eventCanSelectElement_Parms
		{
			FScriptTypedElementHandle InElementHandle;
			FTypedElementSelectionOptions InSelectionOptions;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSelectionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSelectionOptions;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_CanSelectElement_Statics::NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_CanSelectElement_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventCanSelectElement_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_CanSelectElement_Statics::NewProp_InElementHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_CanSelectElement_Statics::NewProp_InElementHandle_MetaData)) }; // 915069018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_CanSelectElement_Statics::NewProp_InSelectionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_CanSelectElement_Statics::NewProp_InSelectionOptions = { "InSelectionOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventCanSelectElement_Parms, InSelectionOptions), Z_Construct_UScriptStruct_FTypedElementSelectionOptions, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_CanSelectElement_Statics::NewProp_InSelectionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_CanSelectElement_Statics::NewProp_InSelectionOptions_MetaData)) }; // 2776779509
	void Z_Construct_UFunction_UTypedElementSelectionSet_CanSelectElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TypedElementSelectionSet_eventCanSelectElement_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_CanSelectElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TypedElementSelectionSet_eventCanSelectElement_Parms), &Z_Construct_UFunction_UTypedElementSelectionSet_CanSelectElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSet_CanSelectElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_CanSelectElement_Statics::NewProp_InElementHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_CanSelectElement_Statics::NewProp_InSelectionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_CanSelectElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_CanSelectElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Test to see whether the given element can be selected.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
		{ "ToolTip", "Test to see whether the given element can be selected." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSet_CanSelectElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSet, nullptr, "CanSelectElement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementSelectionSet_CanSelectElement_Statics::TypedElementSelectionSet_eventCanSelectElement_Parms), Z_Construct_UFunction_UTypedElementSelectionSet_CanSelectElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_CanSelectElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_CanSelectElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_CanSelectElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementSelectionSet_CanSelectElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSet_CanSelectElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementSelectionSet_ClearSelection_Statics
	{
		struct TypedElementSelectionSet_eventClearSelection_Parms
		{
			FTypedElementSelectionOptions InSelectionOptions;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSelectionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSelectionOptions;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_ClearSelection_Statics::NewProp_InSelectionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_ClearSelection_Statics::NewProp_InSelectionOptions = { "InSelectionOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventClearSelection_Parms, InSelectionOptions), Z_Construct_UScriptStruct_FTypedElementSelectionOptions, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_ClearSelection_Statics::NewProp_InSelectionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_ClearSelection_Statics::NewProp_InSelectionOptions_MetaData)) }; // 2776779509
	void Z_Construct_UFunction_UTypedElementSelectionSet_ClearSelection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TypedElementSelectionSet_eventClearSelection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_ClearSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TypedElementSelectionSet_eventClearSelection_Parms), &Z_Construct_UFunction_UTypedElementSelectionSet_ClearSelection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSet_ClearSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_ClearSelection_Statics::NewProp_InSelectionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_ClearSelection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_ClearSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Clear the current selection.\n\x09 * @return True if the selection was changed, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
		{ "ToolTip", "Clear the current selection.\n@return True if the selection was changed, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSet_ClearSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSet, nullptr, "ClearSelection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementSelectionSet_ClearSelection_Statics::TypedElementSelectionSet_eventClearSelection_Parms), Z_Construct_UFunction_UTypedElementSelectionSet_ClearSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_ClearSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_ClearSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_ClearSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementSelectionSet_ClearSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSet_ClearSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedElements_Statics
	{
		struct TypedElementSelectionSet_eventCountSelectedElements_Parms
		{
			const TSubclassOf<UInterface>  InBaseInterfaceType;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBaseInterfaceType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InBaseInterfaceType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedElements_Statics::NewProp_InBaseInterfaceType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedElements_Statics::NewProp_InBaseInterfaceType = { "InBaseInterfaceType", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventCountSelectedElements_Parms, InBaseInterfaceType), Z_Construct_UClass_UClass, Z_Construct_UClass_UInterface, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedElements_Statics::NewProp_InBaseInterfaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedElements_Statics::NewProp_InBaseInterfaceType_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedElements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventCountSelectedElements_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedElements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedElements_Statics::NewProp_InBaseInterfaceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedElements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedElements_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Count the number of selected elements, optionally filtering to elements that implement the given interface.\n\x09 */" },
		{ "CPP_Default_InBaseInterfaceType", "None" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
		{ "ToolTip", "Count the number of selected elements, optionally filtering to elements that implement the given interface." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSet, nullptr, "CountSelectedElements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedElements_Statics::TypedElementSelectionSet_eventCountSelectedElements_Parms), Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedObjects_Statics
	{
		struct TypedElementSelectionSet_eventCountSelectedObjects_Parms
		{
			const UClass* InRequiredClass;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRequiredClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InRequiredClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedObjects_Statics::NewProp_InRequiredClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedObjects_Statics::NewProp_InRequiredClass = { "InRequiredClass", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventCountSelectedObjects_Parms, InRequiredClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedObjects_Statics::NewProp_InRequiredClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedObjects_Statics::NewProp_InRequiredClass_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventCountSelectedObjects_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedObjects_Statics::NewProp_InRequiredClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Count the number of selected objects.\n\x09 */" },
		{ "CPP_Default_InRequiredClass", "None" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
		{ "ToolTip", "Count the number of selected objects." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSet, nullptr, "CountSelectedObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedObjects_Statics::TypedElementSelectionSet_eventCountSelectedObjects_Parms), Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElement_Statics
	{
		struct TypedElementSelectionSet_eventDeselectElement_Parms
		{
			FScriptTypedElementHandle InElementHandle;
			FTypedElementSelectionOptions InSelectionOptions;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSelectionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSelectionOptions;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElement_Statics::NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElement_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventDeselectElement_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElement_Statics::NewProp_InElementHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElement_Statics::NewProp_InElementHandle_MetaData)) }; // 915069018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElement_Statics::NewProp_InSelectionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElement_Statics::NewProp_InSelectionOptions = { "InSelectionOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventDeselectElement_Parms, InSelectionOptions), Z_Construct_UScriptStruct_FTypedElementSelectionOptions, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElement_Statics::NewProp_InSelectionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElement_Statics::NewProp_InSelectionOptions_MetaData)) }; // 2776779509
	void Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TypedElementSelectionSet_eventDeselectElement_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TypedElementSelectionSet_eventDeselectElement_Parms), &Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElement_Statics::NewProp_InElementHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElement_Statics::NewProp_InSelectionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Attempt to deselect the given element.\n\x09 * @return True if the selection was changed, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
		{ "ToolTip", "Attempt to deselect the given element.\n@return True if the selection was changed, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSet, nullptr, "DeselectElement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElement_Statics::TypedElementSelectionSet_eventDeselectElement_Parms), Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements_Statics
	{
		struct TypedElementSelectionSet_eventDeselectElements_Parms
		{
			TArray<FScriptTypedElementHandle> InElementHandles;
			FTypedElementSelectionOptions InSelectionOptions;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InElementHandles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSelectionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSelectionOptions;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements_Statics::NewProp_InElementHandles_Inner = { "InElementHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(nullptr, 0) }; // 915069018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements_Statics::NewProp_InElementHandles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements_Statics::NewProp_InElementHandles = { "InElementHandles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventDeselectElements_Parms, InElementHandles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements_Statics::NewProp_InElementHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements_Statics::NewProp_InElementHandles_MetaData)) }; // 915069018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements_Statics::NewProp_InSelectionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements_Statics::NewProp_InSelectionOptions = { "InSelectionOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventDeselectElements_Parms, InSelectionOptions), Z_Construct_UScriptStruct_FTypedElementSelectionOptions, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements_Statics::NewProp_InSelectionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements_Statics::NewProp_InSelectionOptions_MetaData)) }; // 2776779509
	void Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TypedElementSelectionSet_eventDeselectElements_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TypedElementSelectionSet_eventDeselectElements_Parms), &Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements_Statics::NewProp_InElementHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements_Statics::NewProp_InElementHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements_Statics::NewProp_InSelectionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Attempt to deselect the given elements.\n\x09 * @return True if the selection was changed, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
		{ "ToolTip", "Attempt to deselect the given elements.\n@return True if the selection was changed, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSet, nullptr, "DeselectElements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements_Statics::TypedElementSelectionSet_eventDeselectElements_Parms), Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementSelectionSet_GetBottomSelectedObject_Statics
	{
		struct TypedElementSelectionSet_eventGetBottomSelectedObject_Parms
		{
			const UClass* InRequiredClass;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRequiredClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InRequiredClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_GetBottomSelectedObject_Statics::NewProp_InRequiredClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_GetBottomSelectedObject_Statics::NewProp_InRequiredClass = { "InRequiredClass", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventGetBottomSelectedObject_Parms, InRequiredClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_GetBottomSelectedObject_Statics::NewProp_InRequiredClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_GetBottomSelectedObject_Statics::NewProp_InRequiredClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_GetBottomSelectedObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventGetBottomSelectedObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSet_GetBottomSelectedObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_GetBottomSelectedObject_Statics::NewProp_InRequiredClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_GetBottomSelectedObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_GetBottomSelectedObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Get the last selected object of the given type.\n\x09 */" },
		{ "CPP_Default_InRequiredClass", "None" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
		{ "ToolTip", "Get the last selected object of the given type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSet_GetBottomSelectedObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSet, nullptr, "GetBottomSelectedObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementSelectionSet_GetBottomSelectedObject_Statics::TypedElementSelectionSet_eventGetBottomSelectedObject_Parms), Z_Construct_UFunction_UTypedElementSelectionSet_GetBottomSelectedObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_GetBottomSelectedObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_GetBottomSelectedObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_GetBottomSelectedObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementSelectionSet_GetBottomSelectedObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSet_GetBottomSelectedObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementSelectionSet_GetCurrentSelectionState_Statics
	{
		struct TypedElementSelectionSet_eventGetCurrentSelectionState_Parms
		{
			FTypedElementSelectionSetState ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_GetCurrentSelectionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventGetCurrentSelectionState_Parms, ReturnValue), Z_Construct_UScriptStruct_FTypedElementSelectionSetState, METADATA_PARAMS(nullptr, 0) }; // 361373252
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSet_GetCurrentSelectionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_GetCurrentSelectionState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_GetCurrentSelectionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Serializes the current selection set. \n\x09 * The calling code is responsible for storing any state information. The selection set can be returned to a prior state using RestoreSelectionState.\n\x09 *\n\x09 * @returns the current state of the selection set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
		{ "ToolTip", "Serializes the current selection set.\nThe calling code is responsible for storing any state information. The selection set can be returned to a prior state using RestoreSelectionState.\n\n@returns the current state of the selection set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSet_GetCurrentSelectionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSet, nullptr, "GetCurrentSelectionState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementSelectionSet_GetCurrentSelectionState_Statics::TypedElementSelectionSet_eventGetCurrentSelectionState_Parms), Z_Construct_UFunction_UTypedElementSelectionSet_GetCurrentSelectionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_GetCurrentSelectionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_GetCurrentSelectionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_GetCurrentSelectionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementSelectionSet_GetCurrentSelectionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSet_GetCurrentSelectionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementSelectionSet_GetNumSelectedElements_Statics
	{
		struct TypedElementSelectionSet_eventGetNumSelectedElements_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_GetNumSelectedElements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventGetNumSelectedElements_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSet_GetNumSelectedElements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_GetNumSelectedElements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_GetNumSelectedElements_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Get the number of selected elements.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
		{ "ToolTip", "Get the number of selected elements." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSet_GetNumSelectedElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSet, nullptr, "GetNumSelectedElements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementSelectionSet_GetNumSelectedElements_Statics::TypedElementSelectionSet_eventGetNumSelectedElements_Parms), Z_Construct_UFunction_UTypedElementSelectionSet_GetNumSelectedElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_GetNumSelectedElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_GetNumSelectedElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_GetNumSelectedElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementSelectionSet_GetNumSelectedElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSet_GetNumSelectedElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectedObjects_Statics
	{
		struct TypedElementSelectionSet_eventGetSelectedObjects_Parms
		{
			const UClass* InRequiredClass;
			TArray<UObject*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRequiredClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InRequiredClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectedObjects_Statics::NewProp_InRequiredClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectedObjects_Statics::NewProp_InRequiredClass = { "InRequiredClass", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventGetSelectedObjects_Parms, InRequiredClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectedObjects_Statics::NewProp_InRequiredClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectedObjects_Statics::NewProp_InRequiredClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectedObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectedObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventGetSelectedObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectedObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectedObjects_Statics::NewProp_InRequiredClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectedObjects_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectedObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectedObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Get the array of selected objects from the currently selected elements.\n\x09 */" },
		{ "CPP_Default_InRequiredClass", "None" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
		{ "ToolTip", "Get the array of selected objects from the currently selected elements." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSet, nullptr, "GetSelectedObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectedObjects_Statics::TypedElementSelectionSet_eventGetSelectedObjects_Parms), Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectedObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectedObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectedObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectedObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectionElement_Statics
	{
		struct TypedElementSelectionSet_eventGetSelectionElement_Parms
		{
			FScriptTypedElementHandle InElementHandle;
			ETypedElementSelectionMethod InSelectionMethod;
			FScriptTypedElementHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InSelectionMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSelectionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InSelectionMethod;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectionElement_Statics::NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectionElement_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventGetSelectionElement_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectionElement_Statics::NewProp_InElementHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectionElement_Statics::NewProp_InElementHandle_MetaData)) }; // 915069018
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectionElement_Statics::NewProp_InSelectionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectionElement_Statics::NewProp_InSelectionMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectionElement_Statics::NewProp_InSelectionMethod = { "InSelectionMethod", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventGetSelectionElement_Parms, InSelectionMethod), Z_Construct_UEnum_TypedElementRuntime_ETypedElementSelectionMethod, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectionElement_Statics::NewProp_InSelectionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectionElement_Statics::NewProp_InSelectionMethod_MetaData)) }; // 2441027544
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectionElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventGetSelectionElement_Parms, ReturnValue), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectionElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectionElement_Statics::NewProp_InElementHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectionElement_Statics::NewProp_InSelectionMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectionElement_Statics::NewProp_InSelectionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectionElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectionElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Given an element, return the element that should actually perform a selection operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
		{ "ToolTip", "Given an element, return the element that should actually perform a selection operation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectionElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSet, nullptr, "GetSelectionElement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectionElement_Statics::TypedElementSelectionSet_eventGetSelectionElement_Parms), Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectionElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectionElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectionElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectionElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectionElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectionElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementSelectionSet_GetTopSelectedObject_Statics
	{
		struct TypedElementSelectionSet_eventGetTopSelectedObject_Parms
		{
			const UClass* InRequiredClass;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRequiredClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InRequiredClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_GetTopSelectedObject_Statics::NewProp_InRequiredClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_GetTopSelectedObject_Statics::NewProp_InRequiredClass = { "InRequiredClass", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventGetTopSelectedObject_Parms, InRequiredClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_GetTopSelectedObject_Statics::NewProp_InRequiredClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_GetTopSelectedObject_Statics::NewProp_InRequiredClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_GetTopSelectedObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventGetTopSelectedObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSet_GetTopSelectedObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_GetTopSelectedObject_Statics::NewProp_InRequiredClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_GetTopSelectedObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_GetTopSelectedObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Get the first selected object of the given type.\n\x09 */" },
		{ "CPP_Default_InRequiredClass", "None" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
		{ "ToolTip", "Get the first selected object of the given type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSet_GetTopSelectedObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSet, nullptr, "GetTopSelectedObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementSelectionSet_GetTopSelectedObject_Statics::TypedElementSelectionSet_eventGetTopSelectedObject_Parms), Z_Construct_UFunction_UTypedElementSelectionSet_GetTopSelectedObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_GetTopSelectedObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_GetTopSelectedObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_GetTopSelectedObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementSelectionSet_GetTopSelectedObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSet_GetTopSelectedObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedElements_Statics
	{
		struct TypedElementSelectionSet_eventHasSelectedElements_Parms
		{
			const TSubclassOf<UInterface>  InBaseInterfaceType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBaseInterfaceType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InBaseInterfaceType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedElements_Statics::NewProp_InBaseInterfaceType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedElements_Statics::NewProp_InBaseInterfaceType = { "InBaseInterfaceType", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventHasSelectedElements_Parms, InBaseInterfaceType), Z_Construct_UClass_UClass, Z_Construct_UClass_UInterface, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedElements_Statics::NewProp_InBaseInterfaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedElements_Statics::NewProp_InBaseInterfaceType_MetaData)) };
	void Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedElements_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TypedElementSelectionSet_eventHasSelectedElements_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedElements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TypedElementSelectionSet_eventHasSelectedElements_Parms), &Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedElements_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedElements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedElements_Statics::NewProp_InBaseInterfaceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedElements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedElements_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Test whether there selected elements, optionally filtering to elements that implement the given interface.\n\x09 */" },
		{ "CPP_Default_InBaseInterfaceType", "None" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
		{ "ToolTip", "Test whether there selected elements, optionally filtering to elements that implement the given interface." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSet, nullptr, "HasSelectedElements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedElements_Statics::TypedElementSelectionSet_eventHasSelectedElements_Parms), Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedObjects_Statics
	{
		struct TypedElementSelectionSet_eventHasSelectedObjects_Parms
		{
			const UClass* InRequiredClass;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRequiredClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InRequiredClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedObjects_Statics::NewProp_InRequiredClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedObjects_Statics::NewProp_InRequiredClass = { "InRequiredClass", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventHasSelectedObjects_Parms, InRequiredClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedObjects_Statics::NewProp_InRequiredClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedObjects_Statics::NewProp_InRequiredClass_MetaData)) };
	void Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TypedElementSelectionSet_eventHasSelectedObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TypedElementSelectionSet_eventHasSelectedObjects_Parms), &Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedObjects_Statics::NewProp_InRequiredClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Test whether there are any selected objects.\n\x09 */" },
		{ "CPP_Default_InRequiredClass", "None" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
		{ "ToolTip", "Test whether there are any selected objects." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSet, nullptr, "HasSelectedObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedObjects_Statics::TypedElementSelectionSet_eventHasSelectedObjects_Parms), Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementSelectionSet_IsElementSelected_Statics
	{
		struct TypedElementSelectionSet_eventIsElementSelected_Parms
		{
			FScriptTypedElementHandle InElementHandle;
			FTypedElementIsSelectedOptions InSelectionOptions;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSelectionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSelectionOptions;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_IsElementSelected_Statics::NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_IsElementSelected_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventIsElementSelected_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_IsElementSelected_Statics::NewProp_InElementHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_IsElementSelected_Statics::NewProp_InElementHandle_MetaData)) }; // 915069018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_IsElementSelected_Statics::NewProp_InSelectionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_IsElementSelected_Statics::NewProp_InSelectionOptions = { "InSelectionOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventIsElementSelected_Parms, InSelectionOptions), Z_Construct_UScriptStruct_FTypedElementIsSelectedOptions, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_IsElementSelected_Statics::NewProp_InSelectionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_IsElementSelected_Statics::NewProp_InSelectionOptions_MetaData)) }; // 1184548702
	void Z_Construct_UFunction_UTypedElementSelectionSet_IsElementSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TypedElementSelectionSet_eventIsElementSelected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_IsElementSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TypedElementSelectionSet_eventIsElementSelected_Parms), &Z_Construct_UFunction_UTypedElementSelectionSet_IsElementSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSet_IsElementSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_IsElementSelected_Statics::NewProp_InElementHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_IsElementSelected_Statics::NewProp_InSelectionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_IsElementSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_IsElementSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Test to see whether the given element is currently considered selected.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
		{ "ToolTip", "Test to see whether the given element is currently considered selected." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSet_IsElementSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSet, nullptr, "IsElementSelected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementSelectionSet_IsElementSelected_Statics::TypedElementSelectionSet_eventIsElementSelected_Parms), Z_Construct_UFunction_UTypedElementSelectionSet_IsElementSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_IsElementSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_IsElementSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_IsElementSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementSelectionSet_IsElementSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSet_IsElementSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementSelectionSet_K2_GetSelectedElementHandles_Statics
	{
		struct TypedElementSelectionSet_eventK2_GetSelectedElementHandles_Parms
		{
			const TSubclassOf<UInterface>  InBaseInterfaceType;
			TArray<FScriptTypedElementHandle> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBaseInterfaceType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InBaseInterfaceType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_K2_GetSelectedElementHandles_Statics::NewProp_InBaseInterfaceType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_K2_GetSelectedElementHandles_Statics::NewProp_InBaseInterfaceType = { "InBaseInterfaceType", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventK2_GetSelectedElementHandles_Parms, InBaseInterfaceType), Z_Construct_UClass_UClass, Z_Construct_UClass_UInterface, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_K2_GetSelectedElementHandles_Statics::NewProp_InBaseInterfaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_K2_GetSelectedElementHandles_Statics::NewProp_InBaseInterfaceType_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_K2_GetSelectedElementHandles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_K2_GetSelectedElementHandles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventK2_GetSelectedElementHandles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSet_K2_GetSelectedElementHandles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_K2_GetSelectedElementHandles_Statics::NewProp_InBaseInterfaceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_K2_GetSelectedElementHandles_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_K2_GetSelectedElementHandles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_K2_GetSelectedElementHandles_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Get the handle of every selected element, optionally filtering to elements that implement the given interface.\n\x09 */" },
		{ "CPP_Default_InBaseInterfaceType", "None" },
		{ "DisplayName", "Get Selected Element Handles" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
		{ "ScriptName", "GetSelectedElementHandles" },
		{ "ToolTip", "Get the handle of every selected element, optionally filtering to elements that implement the given interface." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSet_K2_GetSelectedElementHandles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSet, nullptr, "K2_GetSelectedElementHandles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementSelectionSet_K2_GetSelectedElementHandles_Statics::TypedElementSelectionSet_eventK2_GetSelectedElementHandles_Parms), Z_Construct_UFunction_UTypedElementSelectionSet_K2_GetSelectedElementHandles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_K2_GetSelectedElementHandles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_K2_GetSelectedElementHandles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_K2_GetSelectedElementHandles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementSelectionSet_K2_GetSelectedElementHandles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSet_K2_GetSelectedElementHandles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementSelectionSet_RestoreSelectionState_Statics
	{
		struct TypedElementSelectionSet_eventRestoreSelectionState_Parms
		{
			FTypedElementSelectionSetState InSelectionState;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSelectionState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSelectionState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_RestoreSelectionState_Statics::NewProp_InSelectionState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_RestoreSelectionState_Statics::NewProp_InSelectionState = { "InSelectionState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventRestoreSelectionState_Parms, InSelectionState), Z_Construct_UScriptStruct_FTypedElementSelectionSetState, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_RestoreSelectionState_Statics::NewProp_InSelectionState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_RestoreSelectionState_Statics::NewProp_InSelectionState_MetaData)) }; // 361373252
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSet_RestoreSelectionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_RestoreSelectionState_Statics::NewProp_InSelectionState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_RestoreSelectionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Restores the selection set from the given state.\n\x09 * The calling code is responsible for managing any undo state.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
		{ "ToolTip", "Restores the selection set from the given state.\nThe calling code is responsible for managing any undo state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSet_RestoreSelectionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSet, nullptr, "RestoreSelectionState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementSelectionSet_RestoreSelectionState_Statics::TypedElementSelectionSet_eventRestoreSelectionState_Parms), Z_Construct_UFunction_UTypedElementSelectionSet_RestoreSelectionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_RestoreSelectionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_RestoreSelectionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_RestoreSelectionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementSelectionSet_RestoreSelectionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSet_RestoreSelectionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementSelectionSet_SelectElement_Statics
	{
		struct TypedElementSelectionSet_eventSelectElement_Parms
		{
			FScriptTypedElementHandle InElementHandle;
			FTypedElementSelectionOptions InSelectionOptions;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSelectionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSelectionOptions;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_SelectElement_Statics::NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_SelectElement_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventSelectElement_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_SelectElement_Statics::NewProp_InElementHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_SelectElement_Statics::NewProp_InElementHandle_MetaData)) }; // 915069018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_SelectElement_Statics::NewProp_InSelectionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_SelectElement_Statics::NewProp_InSelectionOptions = { "InSelectionOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventSelectElement_Parms, InSelectionOptions), Z_Construct_UScriptStruct_FTypedElementSelectionOptions, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_SelectElement_Statics::NewProp_InSelectionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_SelectElement_Statics::NewProp_InSelectionOptions_MetaData)) }; // 2776779509
	void Z_Construct_UFunction_UTypedElementSelectionSet_SelectElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TypedElementSelectionSet_eventSelectElement_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_SelectElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TypedElementSelectionSet_eventSelectElement_Parms), &Z_Construct_UFunction_UTypedElementSelectionSet_SelectElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSet_SelectElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_SelectElement_Statics::NewProp_InElementHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_SelectElement_Statics::NewProp_InSelectionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_SelectElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_SelectElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Attempt to select the given element.\n\x09 * @return True if the selection was changed, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
		{ "ToolTip", "Attempt to select the given element.\n@return True if the selection was changed, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSet_SelectElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSet, nullptr, "SelectElement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementSelectionSet_SelectElement_Statics::TypedElementSelectionSet_eventSelectElement_Parms), Z_Construct_UFunction_UTypedElementSelectionSet_SelectElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_SelectElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_SelectElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_SelectElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementSelectionSet_SelectElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSet_SelectElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements_Statics
	{
		struct TypedElementSelectionSet_eventSelectElements_Parms
		{
			TArray<FScriptTypedElementHandle> InElementHandles;
			FTypedElementSelectionOptions InSelectionOptions;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InElementHandles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSelectionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSelectionOptions;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements_Statics::NewProp_InElementHandles_Inner = { "InElementHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(nullptr, 0) }; // 915069018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements_Statics::NewProp_InElementHandles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements_Statics::NewProp_InElementHandles = { "InElementHandles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventSelectElements_Parms, InElementHandles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements_Statics::NewProp_InElementHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements_Statics::NewProp_InElementHandles_MetaData)) }; // 915069018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements_Statics::NewProp_InSelectionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements_Statics::NewProp_InSelectionOptions = { "InSelectionOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventSelectElements_Parms, InSelectionOptions), Z_Construct_UScriptStruct_FTypedElementSelectionOptions, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements_Statics::NewProp_InSelectionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements_Statics::NewProp_InSelectionOptions_MetaData)) }; // 2776779509
	void Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TypedElementSelectionSet_eventSelectElements_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TypedElementSelectionSet_eventSelectElements_Parms), &Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements_Statics::NewProp_InElementHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements_Statics::NewProp_InElementHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements_Statics::NewProp_InSelectionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Attempt to select the given elements.\n\x09 * @return True if the selection was changed, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
		{ "ToolTip", "Attempt to select the given elements.\n@return True if the selection was changed, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSet, nullptr, "SelectElements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements_Statics::TypedElementSelectionSet_eventSelectElements_Parms), Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection_Statics
	{
		struct TypedElementSelectionSet_eventSetSelection_Parms
		{
			TArray<FScriptTypedElementHandle> InElementHandles;
			FTypedElementSelectionOptions InSelectionOptions;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InElementHandles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSelectionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSelectionOptions;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection_Statics::NewProp_InElementHandles_Inner = { "InElementHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(nullptr, 0) }; // 915069018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection_Statics::NewProp_InElementHandles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection_Statics::NewProp_InElementHandles = { "InElementHandles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventSetSelection_Parms, InElementHandles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection_Statics::NewProp_InElementHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection_Statics::NewProp_InElementHandles_MetaData)) }; // 915069018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection_Statics::NewProp_InSelectionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection_Statics::NewProp_InSelectionOptions = { "InSelectionOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementSelectionSet_eventSetSelection_Parms, InSelectionOptions), Z_Construct_UScriptStruct_FTypedElementSelectionOptions, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection_Statics::NewProp_InSelectionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection_Statics::NewProp_InSelectionOptions_MetaData)) }; // 2776779509
	void Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TypedElementSelectionSet_eventSetSelection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TypedElementSelectionSet_eventSetSelection_Parms), &Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection_Statics::NewProp_InElementHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection_Statics::NewProp_InElementHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection_Statics::NewProp_InSelectionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/**\n\x09 * Attempt to make the selection the given elements.\n\x09 * @note Equivalent to calling ClearSelection then SelectElements, but happens in a single batch.\n\x09 * @return True if the selection was changed, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
		{ "ToolTip", "Attempt to make the selection the given elements.\n@note Equivalent to calling ClearSelection then SelectElements, but happens in a single batch.\n@return True if the selection was changed, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementSelectionSet, nullptr, "SetSelection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection_Statics::TypedElementSelectionSet_eventSetSelection_Parms), Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementSelectionSet);
	UClass* Z_Construct_UClass_UTypedElementSelectionSet_NoRegister()
	{
		return UTypedElementSelectionSet::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementSelectionSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPreSelectionChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreSelectionChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSelectionChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectionChange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementSelectionSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTypedElementSelectionSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTypedElementSelectionSet_AllowSelectionModifiers, "AllowSelectionModifiers" }, // 3846600794
		{ &Z_Construct_UFunction_UTypedElementSelectionSet_CanDeselectElement, "CanDeselectElement" }, // 3665458106
		{ &Z_Construct_UFunction_UTypedElementSelectionSet_CanSelectElement, "CanSelectElement" }, // 3749293171
		{ &Z_Construct_UFunction_UTypedElementSelectionSet_ClearSelection, "ClearSelection" }, // 3037725411
		{ &Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedElements, "CountSelectedElements" }, // 1214384446
		{ &Z_Construct_UFunction_UTypedElementSelectionSet_CountSelectedObjects, "CountSelectedObjects" }, // 2528769460
		{ &Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElement, "DeselectElement" }, // 627836635
		{ &Z_Construct_UFunction_UTypedElementSelectionSet_DeselectElements, "DeselectElements" }, // 1051103979
		{ &Z_Construct_UFunction_UTypedElementSelectionSet_GetBottomSelectedObject, "GetBottomSelectedObject" }, // 184461728
		{ &Z_Construct_UFunction_UTypedElementSelectionSet_GetCurrentSelectionState, "GetCurrentSelectionState" }, // 393482430
		{ &Z_Construct_UFunction_UTypedElementSelectionSet_GetNumSelectedElements, "GetNumSelectedElements" }, // 2898346933
		{ &Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectedObjects, "GetSelectedObjects" }, // 244335623
		{ &Z_Construct_UFunction_UTypedElementSelectionSet_GetSelectionElement, "GetSelectionElement" }, // 3712214321
		{ &Z_Construct_UFunction_UTypedElementSelectionSet_GetTopSelectedObject, "GetTopSelectedObject" }, // 618041522
		{ &Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedElements, "HasSelectedElements" }, // 2565814147
		{ &Z_Construct_UFunction_UTypedElementSelectionSet_HasSelectedObjects, "HasSelectedObjects" }, // 4248694817
		{ &Z_Construct_UFunction_UTypedElementSelectionSet_IsElementSelected, "IsElementSelected" }, // 3618681925
		{ &Z_Construct_UFunction_UTypedElementSelectionSet_K2_GetSelectedElementHandles, "K2_GetSelectedElementHandles" }, // 3358397852
		{ &Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature, "OnChangeDynamic__DelegateSignature" }, // 16571833
		{ &Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature, "OnPreChangeDynamic__DelegateSignature" }, // 2660972949
		{ &Z_Construct_UFunction_UTypedElementSelectionSet_RestoreSelectionState, "RestoreSelectionState" }, // 2551293569
		{ &Z_Construct_UFunction_UTypedElementSelectionSet_SelectElement, "SelectElement" }, // 1052474695
		{ &Z_Construct_UFunction_UTypedElementSelectionSet_SelectElements, "SelectElements" }, // 391023041
		{ &Z_Construct_UFunction_UTypedElementSelectionSet_SetSelection, "SetSelection" }, // 1823372704
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementSelectionSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A wrapper around an element list that ensures mutation goes via the selection \n * interfaces, as well as providing some utilities for batching operations.\n */" },
		{ "DontUseGenericSpawnObject", "True" },
		{ "IncludePath", "Elements/Framework/TypedElementSelectionSet.h" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
		{ "ToolTip", "A wrapper around an element list that ensures mutation goes via the selection\ninterfaces, as well as providing some utilities for batching operations." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementSelectionSet_Statics::NewProp_OnPreSelectionChange_MetaData[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/** Delegate that is invoked whenever the underlying element list is potentially about to change. */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
		{ "ToolTip", "Delegate that is invoked whenever the underlying element list is potentially about to change." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTypedElementSelectionSet_Statics::NewProp_OnPreSelectionChange = { "OnPreSelectionChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTypedElementSelectionSet, OnPreSelectionChange), Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTypedElementSelectionSet_Statics::NewProp_OnPreSelectionChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementSelectionSet_Statics::NewProp_OnPreSelectionChange_MetaData)) }; // 2660972949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementSelectionSet_Statics::NewProp_OnSelectionChange_MetaData[] = {
		{ "Category", "TypedElementFramework|Selection" },
		{ "Comment", "/** Delegate that is invoked whenever the underlying element list has been changed. */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementSelectionSet.h" },
		{ "ToolTip", "Delegate that is invoked whenever the underlying element list has been changed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTypedElementSelectionSet_Statics::NewProp_OnSelectionChange = { "OnSelectionChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTypedElementSelectionSet, OnSelectionChange), Z_Construct_UDelegateFunction_UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTypedElementSelectionSet_Statics::NewProp_OnSelectionChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementSelectionSet_Statics::NewProp_OnSelectionChange_MetaData)) }; // 16571833
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTypedElementSelectionSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypedElementSelectionSet_Statics::NewProp_OnPreSelectionChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTypedElementSelectionSet_Statics::NewProp_OnSelectionChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementSelectionSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementSelectionSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementSelectionSet_Statics::ClassParams = {
		&UTypedElementSelectionSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTypedElementSelectionSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementSelectionSet_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementSelectionSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementSelectionSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementSelectionSet()
	{
		if (!Z_Registration_Info_UClass_UTypedElementSelectionSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementSelectionSet.OuterSingleton, Z_Construct_UClass_UTypedElementSelectionSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementSelectionSet.OuterSingleton;
	}
	template<> TYPEDELEMENTRUNTIME_API UClass* StaticClass<UTypedElementSelectionSet>()
	{
		return UTypedElementSelectionSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementSelectionSet);
	UTypedElementSelectionSet::~UTypedElementSelectionSet() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTypedElementSelectionSet)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_Statics::ScriptStructInfo[] = {
		{ FTypedElementSelectionNormalizationOptions::StaticStruct, Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics::NewStructOps, TEXT("TypedElementSelectionNormalizationOptions"), &Z_Registration_Info_UScriptStruct_TypedElementSelectionNormalizationOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementSelectionNormalizationOptions), 4083574147U) },
		{ FTypedElementSelectionSetState::StaticStruct, Z_Construct_UScriptStruct_FTypedElementSelectionSetState_Statics::NewStructOps, TEXT("TypedElementSelectionSetState"), &Z_Registration_Info_UScriptStruct_TypedElementSelectionSetState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementSelectionSetState), 361373252U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementSelectionSet, UTypedElementSelectionSet::StaticClass, TEXT("UTypedElementSelectionSet"), &Z_Registration_Info_UClass_UTypedElementSelectionSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementSelectionSet), 4061623928U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_475142242(TEXT("/Script/TypedElementRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
