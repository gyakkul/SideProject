// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Units/ControlRigNodeWorkflow.h"
#include "Rigs/RigHierarchyDefines.h"
#include "RigVMCore/RigVMUserWorkflow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigNodeWorkflow() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigTransformWorkflowOptions();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigTransformWorkflowOptions_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigWorkflowOptions();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigWorkflowOptions_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_URigHierarchy_NoRegister();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigTransformType();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	RIGVM_API UClass* Z_Construct_UClass_URigVMUserWorkflowOptions();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMUserWorkflow();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	DEFINE_FUNCTION(UControlRigWorkflowOptions::execEnsureAtLeastOneRigElementSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EnsureAtLeastOneRigElementSelected();
		P_NATIVE_END;
	}
	void UControlRigWorkflowOptions::StaticRegisterNativesUControlRigWorkflowOptions()
	{
		UClass* Class = UControlRigWorkflowOptions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnsureAtLeastOneRigElementSelected", &UControlRigWorkflowOptions::execEnsureAtLeastOneRigElementSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics
	{
		struct ControlRigWorkflowOptions_eventEnsureAtLeastOneRigElementSelected_Parms
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
	void Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigWorkflowOptions_eventEnsureAtLeastOneRigElementSelected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigWorkflowOptions_eventEnsureAtLeastOneRigElementSelected_Parms), &Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/Units/ControlRigNodeWorkflow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigWorkflowOptions, nullptr, "EnsureAtLeastOneRigElementSelected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::ControlRigWorkflowOptions_eventEnsureAtLeastOneRigElementSelected_Parms), Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigWorkflowOptions);
	UClass* Z_Construct_UClass_UControlRigWorkflowOptions_NoRegister()
	{
		return UControlRigWorkflowOptions::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigWorkflowOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hierarchy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Hierarchy;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Selection_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigWorkflowOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMUserWorkflowOptions,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UControlRigWorkflowOptions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UControlRigWorkflowOptions_EnsureAtLeastOneRigElementSelected, "EnsureAtLeastOneRigElementSelected" }, // 556625155
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigWorkflowOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Units/ControlRigNodeWorkflow.h" },
		{ "ModuleRelativePath", "Public/Units/ControlRigNodeWorkflow.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigWorkflowOptions_Statics::NewProp_Hierarchy_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/Units/ControlRigNodeWorkflow.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControlRigWorkflowOptions_Statics::NewProp_Hierarchy = { "Hierarchy", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigWorkflowOptions, Hierarchy), Z_Construct_UClass_URigHierarchy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRigWorkflowOptions_Statics::NewProp_Hierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigWorkflowOptions_Statics::NewProp_Hierarchy_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigWorkflowOptions_Statics::NewProp_Selection_Inner = { "Selection", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigWorkflowOptions_Statics::NewProp_Selection_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/Units/ControlRigNodeWorkflow.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRigWorkflowOptions_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigWorkflowOptions, Selection), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRigWorkflowOptions_Statics::NewProp_Selection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigWorkflowOptions_Statics::NewProp_Selection_MetaData)) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigWorkflowOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigWorkflowOptions_Statics::NewProp_Hierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigWorkflowOptions_Statics::NewProp_Selection_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigWorkflowOptions_Statics::NewProp_Selection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigWorkflowOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigWorkflowOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigWorkflowOptions_Statics::ClassParams = {
		&UControlRigWorkflowOptions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UControlRigWorkflowOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigWorkflowOptions_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigWorkflowOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigWorkflowOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigWorkflowOptions()
	{
		if (!Z_Registration_Info_UClass_UControlRigWorkflowOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigWorkflowOptions.OuterSingleton, Z_Construct_UClass_UControlRigWorkflowOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigWorkflowOptions.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<UControlRigWorkflowOptions>()
	{
		return UControlRigWorkflowOptions::StaticClass();
	}
	UControlRigWorkflowOptions::UControlRigWorkflowOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigWorkflowOptions);
	UControlRigWorkflowOptions::~UControlRigWorkflowOptions() {}
	DEFINE_FUNCTION(UControlRigTransformWorkflowOptions::execProvideWorkflows)
	{
		P_GET_OBJECT(UObject,Z_Param_InSubject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRigVMUserWorkflow>*)Z_Param__Result=P_THIS->ProvideWorkflows(Z_Param_InSubject);
		P_NATIVE_END;
	}
	void UControlRigTransformWorkflowOptions::StaticRegisterNativesUControlRigTransformWorkflowOptions()
	{
		UClass* Class = UControlRigTransformWorkflowOptions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ProvideWorkflows", &UControlRigTransformWorkflowOptions::execProvideWorkflows },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics
	{
		struct ControlRigTransformWorkflowOptions_eventProvideWorkflows_Parms
		{
			const UObject* InSubject;
			TArray<FRigVMUserWorkflow> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSubject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSubject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::NewProp_InSubject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::NewProp_InSubject = { "InSubject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigTransformWorkflowOptions_eventProvideWorkflows_Parms, InSubject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::NewProp_InSubject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::NewProp_InSubject_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMUserWorkflow, METADATA_PARAMS(nullptr, 0) }; // 3892843476
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigTransformWorkflowOptions_eventProvideWorkflows_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3892843476
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::NewProp_InSubject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Units/ControlRigNodeWorkflow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigTransformWorkflowOptions, nullptr, "ProvideWorkflows", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::ControlRigTransformWorkflowOptions_eventProvideWorkflows_Parms), Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigTransformWorkflowOptions);
	UClass* Z_Construct_UClass_UControlRigTransformWorkflowOptions_NoRegister()
	{
		return UControlRigTransformWorkflowOptions::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransformType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UControlRigWorkflowOptions,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UControlRigTransformWorkflowOptions_ProvideWorkflows, "ProvideWorkflows" }, // 3549548041
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Units/ControlRigNodeWorkflow.h" },
		{ "ModuleRelativePath", "Public/Units/ControlRigNodeWorkflow.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::NewProp_TransformType_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// The type of transform to retrieve from the hierarchy\n" },
		{ "ModuleRelativePath", "Public/Units/ControlRigNodeWorkflow.h" },
		{ "ToolTip", "The type of transform to retrieve from the hierarchy" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::NewProp_TransformType = { "TransformType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigTransformWorkflowOptions, TransformType), Z_Construct_UEnum_ControlRig_ERigTransformType, METADATA_PARAMS(Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::NewProp_TransformType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::NewProp_TransformType_MetaData)) }; // 994774967
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::NewProp_TransformType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigTransformWorkflowOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::ClassParams = {
		&UControlRigTransformWorkflowOptions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigTransformWorkflowOptions()
	{
		if (!Z_Registration_Info_UClass_UControlRigTransformWorkflowOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigTransformWorkflowOptions.OuterSingleton, Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigTransformWorkflowOptions.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<UControlRigTransformWorkflowOptions>()
	{
		return UControlRigTransformWorkflowOptions::StaticClass();
	}
	UControlRigTransformWorkflowOptions::UControlRigTransformWorkflowOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigTransformWorkflowOptions);
	UControlRigTransformWorkflowOptions::~UControlRigTransformWorkflowOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_ControlRigNodeWorkflow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_ControlRigNodeWorkflow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigWorkflowOptions, UControlRigWorkflowOptions::StaticClass, TEXT("UControlRigWorkflowOptions"), &Z_Registration_Info_UClass_UControlRigWorkflowOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigWorkflowOptions), 4207985576U) },
		{ Z_Construct_UClass_UControlRigTransformWorkflowOptions, UControlRigTransformWorkflowOptions::StaticClass, TEXT("UControlRigTransformWorkflowOptions"), &Z_Registration_Info_UClass_UControlRigTransformWorkflowOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigTransformWorkflowOptions), 1719232858U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_ControlRigNodeWorkflow_h_2203636895(TEXT("/Script/ControlRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_ControlRigNodeWorkflow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_ControlRigNodeWorkflow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
