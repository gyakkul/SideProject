// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMCore/RigVMUserWorkflow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMUserWorkflow() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	RIGVM_API UClass* Z_Construct_UClass_URigVMUserWorkflowOptions();
	RIGVM_API UClass* Z_Construct_UClass_URigVMUserWorkflowOptions_NoRegister();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMUserWorkflowType();
	RIGVM_API UFunction* Z_Construct_UDelegateFunction_RigVM_RigVMPeformUserWorkflowDynamicDelegate__DelegateSignature();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMUserWorkflow();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RigVM_RigVMPeformUserWorkflowDynamicDelegate__DelegateSignature_Statics
	{
		struct _Script_RigVM_eventRigVMPeformUserWorkflowDynamicDelegate_Parms
		{
			const URigVMUserWorkflowOptions* InOptions;
			UObject* InController;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOptions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOptions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RigVM_RigVMPeformUserWorkflowDynamicDelegate__DelegateSignature_Statics::NewProp_InOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RigVM_RigVMPeformUserWorkflowDynamicDelegate__DelegateSignature_Statics::NewProp_InOptions = { "InOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RigVM_eventRigVMPeformUserWorkflowDynamicDelegate_Parms, InOptions), Z_Construct_UClass_URigVMUserWorkflowOptions_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_RigVM_RigVMPeformUserWorkflowDynamicDelegate__DelegateSignature_Statics::NewProp_InOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RigVM_RigVMPeformUserWorkflowDynamicDelegate__DelegateSignature_Statics::NewProp_InOptions_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RigVM_RigVMPeformUserWorkflowDynamicDelegate__DelegateSignature_Statics::NewProp_InController = { "InController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_RigVM_eventRigVMPeformUserWorkflowDynamicDelegate_Parms, InController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_RigVM_RigVMPeformUserWorkflowDynamicDelegate__DelegateSignature_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((_Script_RigVM_eventRigVMPeformUserWorkflowDynamicDelegate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RigVM_RigVMPeformUserWorkflowDynamicDelegate__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_RigVM_eventRigVMPeformUserWorkflowDynamicDelegate_Parms), &Z_Construct_UDelegateFunction_RigVM_RigVMPeformUserWorkflowDynamicDelegate__DelegateSignature_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RigVM_RigVMPeformUserWorkflowDynamicDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RigVM_RigVMPeformUserWorkflowDynamicDelegate__DelegateSignature_Statics::NewProp_InOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RigVM_RigVMPeformUserWorkflowDynamicDelegate__DelegateSignature_Statics::NewProp_InController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RigVM_RigVMPeformUserWorkflowDynamicDelegate__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RigVM_RigVMPeformUserWorkflowDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMUserWorkflow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RigVM_RigVMPeformUserWorkflowDynamicDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RigVM, nullptr, "RigVMPeformUserWorkflowDynamicDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_RigVM_RigVMPeformUserWorkflowDynamicDelegate__DelegateSignature_Statics::_Script_RigVM_eventRigVMPeformUserWorkflowDynamicDelegate_Parms), Z_Construct_UDelegateFunction_RigVM_RigVMPeformUserWorkflowDynamicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RigVM_RigVMPeformUserWorkflowDynamicDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_RigVM_RigVMPeformUserWorkflowDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RigVM_RigVMPeformUserWorkflowDynamicDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_RigVM_RigVMPeformUserWorkflowDynamicDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RigVM_RigVMPeformUserWorkflowDynamicDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
bool FRigVMPeformUserWorkflowDynamicDelegate_DelegateWrapper(const FScriptDelegate& RigVMPeformUserWorkflowDynamicDelegate, const URigVMUserWorkflowOptions* InOptions, UObject* InController)
{
	struct _Script_RigVM_eventRigVMPeformUserWorkflowDynamicDelegate_Parms
	{
		const URigVMUserWorkflowOptions* InOptions;
		UObject* InController;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		_Script_RigVM_eventRigVMPeformUserWorkflowDynamicDelegate_Parms()
			: ReturnValue(false)
		{
		}
	};
	_Script_RigVM_eventRigVMPeformUserWorkflowDynamicDelegate_Parms Parms;
	Parms.InOptions=InOptions;
	Parms.InController=InController;
	RigVMPeformUserWorkflowDynamicDelegate.ProcessDelegate<UObject>(&Parms);
	return !!Parms.ReturnValue;
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigVMUserWorkflowType;
	static UEnum* ERigVMUserWorkflowType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigVMUserWorkflowType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigVMUserWorkflowType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMUserWorkflowType, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERigVMUserWorkflowType"));
		}
		return Z_Registration_Info_UEnum_ERigVMUserWorkflowType.OuterSingleton;
	}
	template<> RIGVM_API UEnum* StaticEnum<ERigVMUserWorkflowType>()
	{
		return ERigVMUserWorkflowType_StaticEnum();
	}
	struct Z_Construct_UEnum_RigVM_ERigVMUserWorkflowType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigVM_ERigVMUserWorkflowType_Statics::Enumerators[] = {
		{ "ERigVMUserWorkflowType::Invalid", (int64)ERigVMUserWorkflowType::Invalid },
		{ "ERigVMUserWorkflowType::NodeContext", (int64)ERigVMUserWorkflowType::NodeContext },
		{ "ERigVMUserWorkflowType::PinContext", (int64)ERigVMUserWorkflowType::PinContext },
		{ "ERigVMUserWorkflowType::OnPinDefaultChanged", (int64)ERigVMUserWorkflowType::OnPinDefaultChanged },
		{ "ERigVMUserWorkflowType::All", (int64)ERigVMUserWorkflowType::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigVM_ERigVMUserWorkflowType_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "ERigVMUserWorkflowType::All" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Types of workflows offered by a rigvm struct node\n" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "ERigVMUserWorkflowType::Invalid" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMUserWorkflow.h" },
		{ "NodeContext.Name", "ERigVMUserWorkflowType::NodeContext" },
		{ "OnPinDefaultChanged.Name", "ERigVMUserWorkflowType::OnPinDefaultChanged" },
		{ "PinContext.Name", "ERigVMUserWorkflowType::PinContext" },
		{ "ToolTip", "Types of workflows offered by a rigvm struct node" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERigVMUserWorkflowType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		"ERigVMUserWorkflowType",
		"ERigVMUserWorkflowType",
		Z_Construct_UEnum_RigVM_ERigVMUserWorkflowType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMUserWorkflowType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RigVM_ERigVMUserWorkflowType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMUserWorkflowType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigVM_ERigVMUserWorkflowType()
	{
		if (!Z_Registration_Info_UEnum_ERigVMUserWorkflowType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigVMUserWorkflowType.InnerSingleton, Z_Construct_UEnum_RigVM_ERigVMUserWorkflowType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigVMUserWorkflowType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMUserWorkflow;
class UScriptStruct* FRigVMUserWorkflow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMUserWorkflow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMUserWorkflow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMUserWorkflow, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMUserWorkflow"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMUserWorkflow.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMUserWorkflow>()
{
	return FRigVMUserWorkflow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tooltip;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerformDynamicDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_PerformDynamicDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionsClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_OptionsClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMUserWorkflow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMUserWorkflow>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_Title_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Workflow" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMUserWorkflow.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMUserWorkflow, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_Tooltip_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Workflow" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMUserWorkflow.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMUserWorkflow, Tooltip), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_Tooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_Tooltip_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Workflow" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMUserWorkflow.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMUserWorkflow, Type), Z_Construct_UEnum_RigVM_ERigVMUserWorkflowType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_Type_MetaData)) }; // 2052489579
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_PerformDynamicDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Workflow" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMUserWorkflow.h" },
		{ "ScriptName", "OnPerformWorkflow" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_PerformDynamicDelegate = { "PerformDynamicDelegate", nullptr, (EPropertyFlags)0x0020080000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMUserWorkflow, PerformDynamicDelegate), Z_Construct_UDelegateFunction_RigVM_RigVMPeformUserWorkflowDynamicDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_PerformDynamicDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_PerformDynamicDelegate_MetaData)) }; // 616279904
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_OptionsClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Workflow" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMUserWorkflow.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_OptionsClass = { "OptionsClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMUserWorkflow, OptionsClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_OptionsClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_OptionsClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_Tooltip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_PerformDynamicDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewProp_OptionsClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMUserWorkflow",
		sizeof(FRigVMUserWorkflow),
		alignof(FRigVMUserWorkflow),
		Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMUserWorkflow()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMUserWorkflow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMUserWorkflow.InnerSingleton, Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMUserWorkflow.InnerSingleton;
	}
	DEFINE_FUNCTION(URigVMUserWorkflowOptions::execReportInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReportInfo(Z_Param_InMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMUserWorkflowOptions::execReportWarning)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReportWarning(Z_Param_InMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMUserWorkflowOptions::execReportError)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReportError(Z_Param_InMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMUserWorkflowOptions::execRequiresDialog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequiresDialog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMUserWorkflowOptions::execIsValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValid();
		P_NATIVE_END;
	}
	void URigVMUserWorkflowOptions::StaticRegisterNativesURigVMUserWorkflowOptions()
	{
		UClass* Class = URigVMUserWorkflowOptions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsValid", &URigVMUserWorkflowOptions::execIsValid },
			{ "ReportError", &URigVMUserWorkflowOptions::execReportError },
			{ "ReportInfo", &URigVMUserWorkflowOptions::execReportInfo },
			{ "ReportWarning", &URigVMUserWorkflowOptions::execReportWarning },
			{ "RequiresDialog", &URigVMUserWorkflowOptions::execRequiresDialog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URigVMUserWorkflowOptions_IsValid_Statics
	{
		struct RigVMUserWorkflowOptions_eventIsValid_Parms
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
	void Z_Construct_UFunction_URigVMUserWorkflowOptions_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMUserWorkflowOptions_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMUserWorkflowOptions_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMUserWorkflowOptions_eventIsValid_Parms), &Z_Construct_UFunction_URigVMUserWorkflowOptions_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMUserWorkflowOptions_IsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMUserWorkflowOptions_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMUserWorkflowOptions_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMUserWorkflow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMUserWorkflowOptions_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMUserWorkflowOptions, nullptr, "IsValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMUserWorkflowOptions_IsValid_Statics::RigVMUserWorkflowOptions_eventIsValid_Parms), Z_Construct_UFunction_URigVMUserWorkflowOptions_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMUserWorkflowOptions_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMUserWorkflowOptions_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMUserWorkflowOptions_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMUserWorkflowOptions_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMUserWorkflowOptions_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportError_Statics
	{
		struct RigVMUserWorkflowOptions_eventReportError_Parms
		{
			FString InMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportError_Statics::NewProp_InMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportError_Statics::NewProp_InMessage = { "InMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMUserWorkflowOptions_eventReportError_Parms, InMessage), METADATA_PARAMS(Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportError_Statics::NewProp_InMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportError_Statics::NewProp_InMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportError_Statics::NewProp_InMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMUserWorkflow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMUserWorkflowOptions, nullptr, "ReportError", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportError_Statics::RigVMUserWorkflowOptions_eventReportError_Parms), Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportInfo_Statics
	{
		struct RigVMUserWorkflowOptions_eventReportInfo_Parms
		{
			FString InMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportInfo_Statics::NewProp_InMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportInfo_Statics::NewProp_InMessage = { "InMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMUserWorkflowOptions_eventReportInfo_Parms, InMessage), METADATA_PARAMS(Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportInfo_Statics::NewProp_InMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportInfo_Statics::NewProp_InMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportInfo_Statics::NewProp_InMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMUserWorkflow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMUserWorkflowOptions, nullptr, "ReportInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportInfo_Statics::RigVMUserWorkflowOptions_eventReportInfo_Parms), Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportWarning_Statics
	{
		struct RigVMUserWorkflowOptions_eventReportWarning_Parms
		{
			FString InMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportWarning_Statics::NewProp_InMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportWarning_Statics::NewProp_InMessage = { "InMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMUserWorkflowOptions_eventReportWarning_Parms, InMessage), METADATA_PARAMS(Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportWarning_Statics::NewProp_InMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportWarning_Statics::NewProp_InMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportWarning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportWarning_Statics::NewProp_InMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportWarning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMUserWorkflow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportWarning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMUserWorkflowOptions, nullptr, "ReportWarning", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportWarning_Statics::RigVMUserWorkflowOptions_eventReportWarning_Parms), Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportWarning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportWarning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportWarning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportWarning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportWarning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportWarning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMUserWorkflowOptions_RequiresDialog_Statics
	{
		struct RigVMUserWorkflowOptions_eventRequiresDialog_Parms
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
	void Z_Construct_UFunction_URigVMUserWorkflowOptions_RequiresDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMUserWorkflowOptions_eventRequiresDialog_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMUserWorkflowOptions_RequiresDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMUserWorkflowOptions_eventRequiresDialog_Parms), &Z_Construct_UFunction_URigVMUserWorkflowOptions_RequiresDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMUserWorkflowOptions_RequiresDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMUserWorkflowOptions_RequiresDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMUserWorkflowOptions_RequiresDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMUserWorkflow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMUserWorkflowOptions_RequiresDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMUserWorkflowOptions, nullptr, "RequiresDialog", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMUserWorkflowOptions_RequiresDialog_Statics::RigVMUserWorkflowOptions_eventRequiresDialog_Parms), Z_Construct_UFunction_URigVMUserWorkflowOptions_RequiresDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMUserWorkflowOptions_RequiresDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMUserWorkflowOptions_RequiresDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMUserWorkflowOptions_RequiresDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMUserWorkflowOptions_RequiresDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMUserWorkflowOptions_RequiresDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMUserWorkflowOptions);
	UClass* Z_Construct_UClass_URigVMUserWorkflowOptions_NoRegister()
	{
		return URigVMUserWorkflowOptions::StaticClass();
	}
	struct Z_Construct_UClass_URigVMUserWorkflowOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Subject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Subject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Workflow_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Workflow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMUserWorkflowOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URigVMUserWorkflowOptions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URigVMUserWorkflowOptions_IsValid, "IsValid" }, // 1839106944
		{ &Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportError, "ReportError" }, // 829709144
		{ &Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportInfo, "ReportInfo" }, // 198858086
		{ &Z_Construct_UFunction_URigVMUserWorkflowOptions_ReportWarning, "ReportWarning" }, // 218332244
		{ &Z_Construct_UFunction_URigVMUserWorkflowOptions_RequiresDialog, "RequiresDialog" }, // 4159925301
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMUserWorkflowOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RigVMCore/RigVMUserWorkflow.h" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMUserWorkflow.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMUserWorkflowOptions_Statics::NewProp_Subject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMUserWorkflow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMUserWorkflowOptions_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMUserWorkflowOptions, Subject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URigVMUserWorkflowOptions_Statics::NewProp_Subject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMUserWorkflowOptions_Statics::NewProp_Subject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMUserWorkflowOptions_Statics::NewProp_Workflow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMUserWorkflow.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMUserWorkflowOptions_Statics::NewProp_Workflow = { "Workflow", nullptr, (EPropertyFlags)0x0020088000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMUserWorkflowOptions, Workflow), Z_Construct_UScriptStruct_FRigVMUserWorkflow, METADATA_PARAMS(Z_Construct_UClass_URigVMUserWorkflowOptions_Statics::NewProp_Workflow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMUserWorkflowOptions_Statics::NewProp_Workflow_MetaData)) }; // 3892843476
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMUserWorkflowOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMUserWorkflowOptions_Statics::NewProp_Subject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMUserWorkflowOptions_Statics::NewProp_Workflow,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMUserWorkflowOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMUserWorkflowOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMUserWorkflowOptions_Statics::ClassParams = {
		&URigVMUserWorkflowOptions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URigVMUserWorkflowOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URigVMUserWorkflowOptions_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URigVMUserWorkflowOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMUserWorkflowOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMUserWorkflowOptions()
	{
		if (!Z_Registration_Info_UClass_URigVMUserWorkflowOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMUserWorkflowOptions.OuterSingleton, Z_Construct_UClass_URigVMUserWorkflowOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMUserWorkflowOptions.OuterSingleton;
	}
	template<> RIGVM_API UClass* StaticClass<URigVMUserWorkflowOptions>()
	{
		return URigVMUserWorkflowOptions::StaticClass();
	}
	URigVMUserWorkflowOptions::URigVMUserWorkflowOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMUserWorkflowOptions);
	URigVMUserWorkflowOptions::~URigVMUserWorkflowOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_Statics::EnumInfo[] = {
		{ ERigVMUserWorkflowType_StaticEnum, TEXT("ERigVMUserWorkflowType"), &Z_Registration_Info_UEnum_ERigVMUserWorkflowType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2052489579U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_Statics::ScriptStructInfo[] = {
		{ FRigVMUserWorkflow::StaticStruct, Z_Construct_UScriptStruct_FRigVMUserWorkflow_Statics::NewStructOps, TEXT("RigVMUserWorkflow"), &Z_Registration_Info_UScriptStruct_RigVMUserWorkflow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMUserWorkflow), 3892843476U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMUserWorkflowOptions, URigVMUserWorkflowOptions::StaticClass, TEXT("URigVMUserWorkflowOptions"), &Z_Registration_Info_UClass_URigVMUserWorkflowOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMUserWorkflowOptions), 4130256755U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_1337212071(TEXT("/Script/RigVM"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUserWorkflow_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
