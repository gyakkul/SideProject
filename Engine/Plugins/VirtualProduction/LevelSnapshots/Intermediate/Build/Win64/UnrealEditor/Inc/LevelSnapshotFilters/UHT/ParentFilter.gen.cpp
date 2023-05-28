// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Builtin/BlueprintOnly/ParentFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParentFilter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_ULevelSnapshotFilter();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_ULevelSnapshotFilter_NoRegister();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UParentFilter();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UParentFilter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotFilters();
// End Cross Module References
	DEFINE_FUNCTION(UParentFilter::execGetChildren)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULevelSnapshotFilter*>*)Z_Param__Result=P_THIS->GetChildren();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParentFilter::execCreateChild)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<ULevelSnapshotFilter> ,Z_Param_Out_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSnapshotFilter**)Z_Param__Result=P_THIS->CreateChild(Z_Param_Out_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParentFilter::execRemovedChild)
	{
		P_GET_OBJECT(ULevelSnapshotFilter,Z_Param_Filter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemovedChild(Z_Param_Filter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UParentFilter::execAddChild)
	{
		P_GET_OBJECT(ULevelSnapshotFilter,Z_Param_Filter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddChild(Z_Param_Filter);
		P_NATIVE_END;
	}
	void UParentFilter::StaticRegisterNativesUParentFilter()
	{
		UClass* Class = UParentFilter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChild", &UParentFilter::execAddChild },
			{ "CreateChild", &UParentFilter::execCreateChild },
			{ "GetChildren", &UParentFilter::execGetChildren },
			{ "RemovedChild", &UParentFilter::execRemovedChild },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UParentFilter_AddChild_Statics
	{
		struct ParentFilter_eventAddChild_Parms
		{
			ULevelSnapshotFilter* Filter;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Filter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParentFilter_AddChild_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParentFilter_eventAddChild_Parms, Filter), Z_Construct_UClass_ULevelSnapshotFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParentFilter_AddChild_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentFilter_AddChild_Statics::NewProp_Filter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParentFilter_AddChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/**\n\x09 * Adds a child you already created to this filter\n\x09 *\n\x09 * If you intend to save your filter, add children using CreateChild.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Builtin/BlueprintOnly/ParentFilter.h" },
		{ "ToolTip", "Adds a child you already created to this filter\n\nIf you intend to save your filter, add children using CreateChild." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParentFilter_AddChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParentFilter, nullptr, "AddChild", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParentFilter_AddChild_Statics::ParentFilter_eventAddChild_Parms), Z_Construct_UFunction_UParentFilter_AddChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParentFilter_AddChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParentFilter_AddChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParentFilter_AddChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParentFilter_AddChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParentFilter_AddChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParentFilter_CreateChild_Statics
	{
		struct ParentFilter_eventCreateChild_Parms
		{
			const TSubclassOf<ULevelSnapshotFilter>  Class;
			ULevelSnapshotFilter* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParentFilter_CreateChild_Statics::NewProp_Class_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UParentFilter_CreateChild_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParentFilter_eventCreateChild_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_ULevelSnapshotFilter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UParentFilter_CreateChild_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UParentFilter_CreateChild_Statics::NewProp_Class_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParentFilter_CreateChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParentFilter_eventCreateChild_Parms, ReturnValue), Z_Construct_UClass_ULevelSnapshotFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParentFilter_CreateChild_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentFilter_CreateChild_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentFilter_CreateChild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParentFilter_CreateChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/**\n\x09 * Creates a child and adds it to this filter.\n\x09 * If you intend to save your filter, add children using this function.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Builtin/BlueprintOnly/ParentFilter.h" },
		{ "ToolTip", "Creates a child and adds it to this filter.\nIf you intend to save your filter, add children using this function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParentFilter_CreateChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParentFilter, nullptr, "CreateChild", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParentFilter_CreateChild_Statics::ParentFilter_eventCreateChild_Parms), Z_Construct_UFunction_UParentFilter_CreateChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParentFilter_CreateChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParentFilter_CreateChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParentFilter_CreateChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParentFilter_CreateChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParentFilter_CreateChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParentFilter_GetChildren_Statics
	{
		struct ParentFilter_eventGetChildren_Parms
		{
			TArray<ULevelSnapshotFilter*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParentFilter_GetChildren_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULevelSnapshotFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UParentFilter_GetChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParentFilter_eventGetChildren_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParentFilter_GetChildren_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentFilter_GetChildren_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentFilter_GetChildren_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParentFilter_GetChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/* Gets the children in this filter */" },
		{ "ModuleRelativePath", "Public/Builtin/BlueprintOnly/ParentFilter.h" },
		{ "ToolTip", "Gets the children in this filter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParentFilter_GetChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParentFilter, nullptr, "GetChildren", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParentFilter_GetChildren_Statics::ParentFilter_eventGetChildren_Parms), Z_Construct_UFunction_UParentFilter_GetChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParentFilter_GetChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParentFilter_GetChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParentFilter_GetChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParentFilter_GetChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParentFilter_GetChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UParentFilter_RemovedChild_Statics
	{
		struct ParentFilter_eventRemovedChild_Parms
		{
			ULevelSnapshotFilter* Filter;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Filter;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParentFilter_RemovedChild_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParentFilter_eventRemovedChild_Parms, Filter), Z_Construct_UClass_ULevelSnapshotFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UParentFilter_RemovedChild_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ParentFilter_eventRemovedChild_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParentFilter_RemovedChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ParentFilter_eventRemovedChild_Parms), &Z_Construct_UFunction_UParentFilter_RemovedChild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParentFilter_RemovedChild_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentFilter_RemovedChild_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParentFilter_RemovedChild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParentFilter_RemovedChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/* Removes a child from this filter */" },
		{ "ModuleRelativePath", "Public/Builtin/BlueprintOnly/ParentFilter.h" },
		{ "ToolTip", "Removes a child from this filter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParentFilter_RemovedChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParentFilter, nullptr, "RemovedChild", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParentFilter_RemovedChild_Statics::ParentFilter_eventRemovedChild_Parms), Z_Construct_UFunction_UParentFilter_RemovedChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParentFilter_RemovedChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParentFilter_RemovedChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParentFilter_RemovedChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParentFilter_RemovedChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParentFilter_RemovedChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParentFilter);
	UClass* Z_Construct_UClass_UParentFilter_NoRegister()
	{
		return UParentFilter::StaticClass();
	}
	struct Z_Construct_UClass_UParentFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedChildren_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InstancedChildren_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedChildren_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancedChildren;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParentFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULevelSnapshotFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UParentFilter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UParentFilter_AddChild, "AddChild" }, // 2370439479
		{ &Z_Construct_UFunction_UParentFilter_CreateChild, "CreateChild" }, // 1871568017
		{ &Z_Construct_UFunction_UParentFilter_GetChildren, "GetChildren" }, // 495463360
		{ &Z_Construct_UFunction_UParentFilter_RemovedChild, "RemovedChild" }, // 569703582
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentFilter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Builtin/BlueprintOnly/ParentFilter.h" },
		{ "InternalSnapshotFilter", "" },
		{ "ModuleRelativePath", "Public/Builtin/BlueprintOnly/ParentFilter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParentFilter_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULevelSnapshotFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentFilter_Statics::NewProp_Children_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Public/Builtin/BlueprintOnly/ParentFilter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParentFilter_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParentFilter, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParentFilter_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParentFilter_Statics::NewProp_Children_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentFilter_Statics::NewProp_InstancedChildren_Inner_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Builtin/BlueprintOnly/ParentFilter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParentFilter_Statics::NewProp_InstancedChildren_Inner = { "InstancedChildren", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULevelSnapshotFilter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParentFilter_Statics::NewProp_InstancedChildren_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParentFilter_Statics::NewProp_InstancedChildren_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParentFilter_Statics::NewProp_InstancedChildren_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Builtin/BlueprintOnly/ParentFilter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParentFilter_Statics::NewProp_InstancedChildren = { "InstancedChildren", nullptr, (EPropertyFlags)0x0044008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParentFilter, InstancedChildren), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParentFilter_Statics::NewProp_InstancedChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParentFilter_Statics::NewProp_InstancedChildren_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParentFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentFilter_Statics::NewProp_Children_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentFilter_Statics::NewProp_Children,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentFilter_Statics::NewProp_InstancedChildren_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParentFilter_Statics::NewProp_InstancedChildren,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParentFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParentFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParentFilter_Statics::ClassParams = {
		&UParentFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UParentFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UParentFilter_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParentFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParentFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParentFilter()
	{
		if (!Z_Registration_Info_UClass_UParentFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParentFilter.OuterSingleton, Z_Construct_UClass_UParentFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParentFilter.OuterSingleton;
	}
	template<> LEVELSNAPSHOTFILTERS_API UClass* StaticClass<UParentFilter>()
	{
		return UParentFilter::StaticClass();
	}
	UParentFilter::UParentFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParentFilter);
	UParentFilter::~UParentFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_ParentFilter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_ParentFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParentFilter, UParentFilter::StaticClass, TEXT("UParentFilter"), &Z_Registration_Info_UClass_UParentFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParentFilter), 4052081132U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_ParentFilter_h_1556351782(TEXT("/Script/LevelSnapshotFilters"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_ParentFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_ParentFilter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
