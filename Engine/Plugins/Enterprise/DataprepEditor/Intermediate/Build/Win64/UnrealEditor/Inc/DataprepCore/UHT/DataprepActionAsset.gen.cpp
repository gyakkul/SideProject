// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataprepActionAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepActionAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepActionAppearance();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepActionAppearance_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepActionAsset();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepActionAsset_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepActionStep();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepActionStep_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepFilter_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepOperation_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepParameterizableObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DataprepCore();
// End Cross Module References
	void UDataprepActionStep::StaticRegisterNativesUDataprepActionStep()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepActionStep);
	UClass* Z_Construct_UClass_UDataprepActionStep_NoRegister()
	{
		return UDataprepActionStep::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepActionStep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StepObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathOfStepObjectClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PathOfStepObjectClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Operation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Filter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepActionStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepActionStep_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DataprepActionAsset.h" },
		{ "ModuleRelativePath", "Public/DataprepActionAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Comment", "// End UObject Interface\n" },
		{ "ModuleRelativePath", "Public/DataprepActionAsset.h" },
		{ "ToolTip", "End UObject Interface" },
	};
#endif
	void Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((UDataprepActionStep*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataprepActionStep), &Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_StepObject_MetaData[] = {
		{ "Comment", "// The actual object of the step\n" },
		{ "ModuleRelativePath", "Public/DataprepActionAsset.h" },
		{ "ToolTip", "The actual object of the step" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_StepObject = { "StepObject", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepActionStep, StepObject), Z_Construct_UClass_UDataprepParameterizableObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_StepObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_StepObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_PathOfStepObjectClass_MetaData[] = {
		{ "Comment", "// Will be used for future error message if the step object can't be loaded\n" },
		{ "ModuleRelativePath", "Public/DataprepActionAsset.h" },
		{ "ToolTip", "Will be used for future error message if the step object can't be loaded" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_PathOfStepObjectClass = { "PathOfStepObjectClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepActionStep, PathOfStepObjectClass), Z_Construct_UClass_UDataprepParameterizableObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_PathOfStepObjectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_PathOfStepObjectClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_Operation_MetaData[] = {
		{ "Comment", "// The operation will only be not null if the step is a operation\n" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use the step and step type instead." },
		{ "ModuleRelativePath", "Public/DataprepActionAsset.h" },
		{ "ToolTip", "The operation will only be not null if the step is a operation" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0044000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepActionStep, Operation_DEPRECATED), Z_Construct_UClass_UDataprepOperation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_Operation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_Filter_MetaData[] = {
		{ "Comment", "// The Filter will only be not null if the step is a Filter/Selector\n" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use the step and step type instead." },
		{ "ModuleRelativePath", "Public/DataprepActionAsset.h" },
		{ "ToolTip", "The Filter will only be not null if the step is a Filter/Selector" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0044000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepActionStep, Filter_DEPRECATED), Z_Construct_UClass_UDataprepFilter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_Filter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepActionStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_StepObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_PathOfStepObjectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepActionStep_Statics::NewProp_Filter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepActionStep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepActionStep>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepActionStep_Statics::ClassParams = {
		&UDataprepActionStep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepActionStep_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepActionStep_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepActionStep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepActionStep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepActionStep()
	{
		if (!Z_Registration_Info_UClass_UDataprepActionStep.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepActionStep.OuterSingleton, Z_Construct_UClass_UDataprepActionStep_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepActionStep.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepActionStep>()
	{
		return UDataprepActionStep::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepActionStep);
	UDataprepActionStep::~UDataprepActionStep() {}
	void UDataprepActionAppearance::StaticRegisterNativesUDataprepActionAppearance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepActionAppearance);
	UClass* Z_Construct_UClass_UDataprepActionAppearance_NoRegister()
	{
		return UDataprepActionAppearance::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepActionAppearance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsExpanded_MetaData[];
#endif
		static void NewProp_bIsExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExpanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GroupId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGroupIsEnabled_MetaData[];
#endif
		static void NewProp_bGroupIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroupIsEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepActionAppearance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepActionAppearance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Persists graphical state of the node associated with this action asset\n" },
		{ "IncludePath", "DataprepActionAsset.h" },
		{ "ModuleRelativePath", "Public/DataprepActionAsset.h" },
		{ "ToolTip", "Persists graphical state of the node associated with this action asset" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepActionAppearance_Statics::NewProp_bIsExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataprepActionAsset.h" },
	};
#endif
	void Z_Construct_UClass_UDataprepActionAppearance_Statics::NewProp_bIsExpanded_SetBit(void* Obj)
	{
		((UDataprepActionAppearance*)Obj)->bIsExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataprepActionAppearance_Statics::NewProp_bIsExpanded = { "bIsExpanded", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataprepActionAppearance), &Z_Construct_UClass_UDataprepActionAppearance_Statics::NewProp_bIsExpanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataprepActionAppearance_Statics::NewProp_bIsExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepActionAppearance_Statics::NewProp_bIsExpanded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepActionAppearance_Statics::NewProp_NodeSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataprepActionAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataprepActionAppearance_Statics::NewProp_NodeSize = { "NodeSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepActionAppearance, NodeSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UDataprepActionAppearance_Statics::NewProp_NodeSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepActionAppearance_Statics::NewProp_NodeSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepActionAppearance_Statics::NewProp_GroupId_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataprepActionAsset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDataprepActionAppearance_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepActionAppearance, GroupId), METADATA_PARAMS(Z_Construct_UClass_UDataprepActionAppearance_Statics::NewProp_GroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepActionAppearance_Statics::NewProp_GroupId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepActionAppearance_Statics::NewProp_bGroupIsEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataprepActionAsset.h" },
	};
#endif
	void Z_Construct_UClass_UDataprepActionAppearance_Statics::NewProp_bGroupIsEnabled_SetBit(void* Obj)
	{
		((UDataprepActionAppearance*)Obj)->bGroupIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataprepActionAppearance_Statics::NewProp_bGroupIsEnabled = { "bGroupIsEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataprepActionAppearance), &Z_Construct_UClass_UDataprepActionAppearance_Statics::NewProp_bGroupIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataprepActionAppearance_Statics::NewProp_bGroupIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepActionAppearance_Statics::NewProp_bGroupIsEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepActionAppearance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepActionAppearance_Statics::NewProp_bIsExpanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepActionAppearance_Statics::NewProp_NodeSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepActionAppearance_Statics::NewProp_GroupId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepActionAppearance_Statics::NewProp_bGroupIsEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepActionAppearance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepActionAppearance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepActionAppearance_Statics::ClassParams = {
		&UDataprepActionAppearance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepActionAppearance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepActionAppearance_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepActionAppearance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepActionAppearance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepActionAppearance()
	{
		if (!Z_Registration_Info_UClass_UDataprepActionAppearance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepActionAppearance.OuterSingleton, Z_Construct_UClass_UDataprepActionAppearance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepActionAppearance.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepActionAppearance>()
	{
		return UDataprepActionAppearance::StaticClass();
	}
	UDataprepActionAppearance::UDataprepActionAppearance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepActionAppearance);
	UDataprepActionAppearance::~UDataprepActionAppearance() {}
	DEFINE_FUNCTION(UDataprepActionAsset::execExecute)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_InObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Execute(Z_Param_Out_InObjects);
		P_NATIVE_END;
	}
	void UDataprepActionAsset::StaticRegisterNativesUDataprepActionAsset()
	{
		UClass* Class = UDataprepActionAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Execute", &UDataprepActionAsset::execExecute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataprepActionAsset_Execute_Statics
	{
		struct DataprepActionAsset_eventExecute_Parms
		{
			TArray<UObject*> InObjects;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepActionAsset_Execute_Statics::NewProp_InObjects_Inner = { "InObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepActionAsset_Execute_Statics::NewProp_InObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepActionAsset_Execute_Statics::NewProp_InObjects = { "InObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepActionAsset_eventExecute_Parms, InObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepActionAsset_Execute_Statics::NewProp_InObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepActionAsset_Execute_Statics::NewProp_InObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepActionAsset_Execute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepActionAsset_Execute_Statics::NewProp_InObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepActionAsset_Execute_Statics::NewProp_InObjects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepActionAsset_Execute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Execution" },
		{ "Comment", "/**\n\x09 * Execute the action on a specific set of objects\n\x09 * @param Objects The objects on which the action will operate\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataprepActionAsset.h" },
		{ "ToolTip", "Execute the action on a specific set of objects\n@param Objects The objects on which the action will operate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepActionAsset_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepActionAsset, nullptr, "Execute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepActionAsset_Execute_Statics::DataprepActionAsset_eventExecute_Parms), Z_Construct_UFunction_UDataprepActionAsset_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepActionAsset_Execute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepActionAsset_Execute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepActionAsset_Execute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepActionAsset_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepActionAsset_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepActionAsset);
	UClass* Z_Construct_UClass_UDataprepActionAsset_NoRegister()
	{
		return UDataprepActionAsset::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepActionAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExecutionInterrupted_MetaData[];
#endif
		static void NewProp_bExecutionInterrupted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExecutionInterrupted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Steps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Steps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Steps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Appearance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Appearance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepActionAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataprepActionAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataprepActionAsset_Execute, "Execute" }, // 1895203032
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepActionAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DataprepActionAsset.h" },
		{ "ModuleRelativePath", "Public/DataprepActionAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_bExecutionInterrupted_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataprepActionAsset.h" },
	};
#endif
	void Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_bExecutionInterrupted_SetBit(void* Obj)
	{
		((UDataprepActionAsset*)Obj)->bExecutionInterrupted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_bExecutionInterrupted = { "bExecutionInterrupted", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataprepActionAsset), &Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_bExecutionInterrupted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_bExecutionInterrupted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_bExecutionInterrupted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataprepActionAsset.h" },
	};
#endif
	void Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((UDataprepActionAsset*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataprepActionAsset), &Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_bIsEnabled_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_Steps_Inner = { "Steps", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataprepActionStep_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_Steps_MetaData[] = {
		{ "Comment", "/** Array of operations and/or filters constituting this action */" },
		{ "ModuleRelativePath", "Public/DataprepActionAsset.h" },
		{ "ToolTip", "Array of operations and/or filters constituting this action" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_Steps = { "Steps", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepActionAsset, Steps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_Steps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_Steps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_Appearance_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataprepActionAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_Appearance = { "Appearance", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepActionAsset, Appearance), Z_Construct_UClass_UDataprepActionAppearance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_Appearance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_Appearance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "Label" },
		{ "Comment", "/** UI label of the action */" },
		{ "ModuleRelativePath", "Public/DataprepActionAsset.h" },
		{ "ToolTip", "UI label of the action" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepActionAsset, Label), METADATA_PARAMS(Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_Label_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepActionAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_bExecutionInterrupted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_Steps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_Steps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_Appearance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepActionAsset_Statics::NewProp_Label,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepActionAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepActionAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepActionAsset_Statics::ClassParams = {
		&UDataprepActionAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDataprepActionAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepActionAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepActionAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepActionAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepActionAsset()
	{
		if (!Z_Registration_Info_UClass_UDataprepActionAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepActionAsset.OuterSingleton, Z_Construct_UClass_UDataprepActionAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepActionAsset.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepActionAsset>()
	{
		return UDataprepActionAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepActionAsset);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepActionAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepActionAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepActionStep, UDataprepActionStep::StaticClass, TEXT("UDataprepActionStep"), &Z_Registration_Info_UClass_UDataprepActionStep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepActionStep), 3398875734U) },
		{ Z_Construct_UClass_UDataprepActionAppearance, UDataprepActionAppearance::StaticClass, TEXT("UDataprepActionAppearance"), &Z_Registration_Info_UClass_UDataprepActionAppearance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepActionAppearance), 3692154866U) },
		{ Z_Construct_UClass_UDataprepActionAsset, UDataprepActionAsset::StaticClass, TEXT("UDataprepActionAsset"), &Z_Registration_Info_UClass_UDataprepActionAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepActionAsset), 1581115271U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepActionAsset_h_2985192673(TEXT("/Script/DataprepCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepActionAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepActionAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
