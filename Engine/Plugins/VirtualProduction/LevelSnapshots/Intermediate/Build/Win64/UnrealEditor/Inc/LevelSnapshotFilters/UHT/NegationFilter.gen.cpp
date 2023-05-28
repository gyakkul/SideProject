// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Builtin/BlueprintOnly/NegationFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNegationFilter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_ULevelSnapshotFilter();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_ULevelSnapshotFilter_NoRegister();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UNegationFilter();
	LEVELSNAPSHOTFILTERS_API UClass* Z_Construct_UClass_UNegationFilter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotFilters();
// End Cross Module References
	DEFINE_FUNCTION(UNegationFilter::execGetChild)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSnapshotFilter**)Z_Param__Result=P_THIS->GetChild();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNegationFilter::execSetExternalChild)
	{
		P_GET_OBJECT(ULevelSnapshotFilter,Z_Param_NewChild);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExternalChild(Z_Param_NewChild);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNegationFilter::execCreateChild)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<ULevelSnapshotFilter> ,Z_Param_Out_ChildClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSnapshotFilter**)Z_Param__Result=P_THIS->CreateChild(Z_Param_Out_ChildClass);
		P_NATIVE_END;
	}
	void UNegationFilter::StaticRegisterNativesUNegationFilter()
	{
		UClass* Class = UNegationFilter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateChild", &UNegationFilter::execCreateChild },
			{ "GetChild", &UNegationFilter::execGetChild },
			{ "SetExternalChild", &UNegationFilter::execSetExternalChild },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNegationFilter_CreateChild_Statics
	{
		struct NegationFilter_eventCreateChild_Parms
		{
			const TSubclassOf<ULevelSnapshotFilter>  ChildClass;
			ULevelSnapshotFilter* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ChildClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNegationFilter_CreateChild_Statics::NewProp_ChildClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNegationFilter_CreateChild_Statics::NewProp_ChildClass = { "ChildClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NegationFilter_eventCreateChild_Parms, ChildClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULevelSnapshotFilter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNegationFilter_CreateChild_Statics::NewProp_ChildClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNegationFilter_CreateChild_Statics::NewProp_ChildClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNegationFilter_CreateChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NegationFilter_eventCreateChild_Parms, ReturnValue), Z_Construct_UClass_ULevelSnapshotFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNegationFilter_CreateChild_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNegationFilter_CreateChild_Statics::NewProp_ChildClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNegationFilter_CreateChild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNegationFilter_CreateChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/**\n\x09 * Creates an instanced child.\n\x09 * If you intend to save this filter, you should use this function instead of SetExternalChild;\n\x09 */" },
		{ "ModuleRelativePath", "Public/Builtin/BlueprintOnly/NegationFilter.h" },
		{ "ToolTip", "Creates an instanced child.\nIf you intend to save this filter, you should use this function instead of SetExternalChild;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNegationFilter_CreateChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNegationFilter, nullptr, "CreateChild", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNegationFilter_CreateChild_Statics::NegationFilter_eventCreateChild_Parms), Z_Construct_UFunction_UNegationFilter_CreateChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNegationFilter_CreateChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNegationFilter_CreateChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNegationFilter_CreateChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNegationFilter_CreateChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNegationFilter_CreateChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNegationFilter_GetChild_Statics
	{
		struct NegationFilter_eventGetChild_Parms
		{
			ULevelSnapshotFilter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNegationFilter_GetChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NegationFilter_eventGetChild_Parms, ReturnValue), Z_Construct_UClass_ULevelSnapshotFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNegationFilter_GetChild_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNegationFilter_GetChild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNegationFilter_GetChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Public/Builtin/BlueprintOnly/NegationFilter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNegationFilter_GetChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNegationFilter, nullptr, "GetChild", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNegationFilter_GetChild_Statics::NegationFilter_eventGetChild_Parms), Z_Construct_UFunction_UNegationFilter_GetChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNegationFilter_GetChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNegationFilter_GetChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNegationFilter_GetChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNegationFilter_GetChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNegationFilter_GetChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNegationFilter_SetExternalChild_Statics
	{
		struct NegationFilter_eventSetExternalChild_Parms
		{
			ULevelSnapshotFilter* NewChild;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewChild;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNegationFilter_SetExternalChild_Statics::NewProp_NewChild = { "NewChild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NegationFilter_eventSetExternalChild_Parms, NewChild), Z_Construct_UClass_ULevelSnapshotFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNegationFilter_SetExternalChild_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNegationFilter_SetExternalChild_Statics::NewProp_NewChild,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNegationFilter_SetExternalChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/**\n\x09* Creates an instanced child.\n\x09* If you intend to save this filter, you should use CreateChild;\n\x09*/" },
		{ "ModuleRelativePath", "Public/Builtin/BlueprintOnly/NegationFilter.h" },
		{ "ToolTip", "Creates an instanced child.\nIf you intend to save this filter, you should use CreateChild;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNegationFilter_SetExternalChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNegationFilter, nullptr, "SetExternalChild", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNegationFilter_SetExternalChild_Statics::NegationFilter_eventSetExternalChild_Parms), Z_Construct_UFunction_UNegationFilter_SetExternalChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNegationFilter_SetExternalChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNegationFilter_SetExternalChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNegationFilter_SetExternalChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNegationFilter_SetExternalChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNegationFilter_SetExternalChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNegationFilter);
	UClass* Z_Construct_UClass_UNegationFilter_NoRegister()
	{
		return UNegationFilter::StaticClass();
	}
	struct Z_Construct_UClass_UNegationFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldNegate_MetaData[];
#endif
		static void NewProp_bShouldNegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldNegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Child;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedChild_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InstancedChild;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNegationFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULevelSnapshotFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotFilters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNegationFilter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNegationFilter_CreateChild, "CreateChild" }, // 1360374983
		{ &Z_Construct_UFunction_UNegationFilter_GetChild, "GetChild" }, // 4091105581
		{ &Z_Construct_UFunction_UNegationFilter_SetExternalChild, "SetExternalChild" }, // 233125512
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNegationFilter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* Returns the results of a child filter optionally negated.\n *\n * Negation rules:\n *\x09- Include negated becomes Exclude\n *\x09- Exclude negated becomes Include\n *\x09- DoNotCare negated becomes DoNotCare\n */" },
		{ "IncludePath", "Builtin/BlueprintOnly/NegationFilter.h" },
		{ "InternalSnapshotFilter", "" },
		{ "ModuleRelativePath", "Public/Builtin/BlueprintOnly/NegationFilter.h" },
		{ "ToolTip", "Returns the results of a child filter optionally negated.\n*\n* Negation rules:\n*     - Include negated becomes Exclude\n*     - Exclude negated becomes Include\n*     - DoNotCare negated becomes DoNotCare" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNegationFilter_Statics::NewProp_bShouldNegate_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "//~ End ULevelSnapshotFilter Interface\n" },
		{ "ModuleRelativePath", "Public/Builtin/BlueprintOnly/NegationFilter.h" },
	};
#endif
	void Z_Construct_UClass_UNegationFilter_Statics::NewProp_bShouldNegate_SetBit(void* Obj)
	{
		((UNegationFilter*)Obj)->bShouldNegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNegationFilter_Statics::NewProp_bShouldNegate = { "bShouldNegate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNegationFilter), &Z_Construct_UClass_UNegationFilter_Statics::NewProp_bShouldNegate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNegationFilter_Statics::NewProp_bShouldNegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNegationFilter_Statics::NewProp_bShouldNegate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNegationFilter_Statics::NewProp_Child_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Public/Builtin/BlueprintOnly/NegationFilter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNegationFilter_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNegationFilter, Child), Z_Construct_UClass_ULevelSnapshotFilter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNegationFilter_Statics::NewProp_Child_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNegationFilter_Statics::NewProp_Child_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNegationFilter_Statics::NewProp_InstancedChild_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Builtin/BlueprintOnly/NegationFilter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNegationFilter_Statics::NewProp_InstancedChild = { "InstancedChild", nullptr, (EPropertyFlags)0x0046000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNegationFilter, InstancedChild), Z_Construct_UClass_ULevelSnapshotFilter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNegationFilter_Statics::NewProp_InstancedChild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNegationFilter_Statics::NewProp_InstancedChild_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNegationFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNegationFilter_Statics::NewProp_bShouldNegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNegationFilter_Statics::NewProp_Child,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNegationFilter_Statics::NewProp_InstancedChild,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNegationFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNegationFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNegationFilter_Statics::ClassParams = {
		&UNegationFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNegationFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNegationFilter_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNegationFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNegationFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNegationFilter()
	{
		if (!Z_Registration_Info_UClass_UNegationFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNegationFilter.OuterSingleton, Z_Construct_UClass_UNegationFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNegationFilter.OuterSingleton;
	}
	template<> LEVELSNAPSHOTFILTERS_API UClass* StaticClass<UNegationFilter>()
	{
		return UNegationFilter::StaticClass();
	}
	UNegationFilter::UNegationFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNegationFilter);
	UNegationFilter::~UNegationFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_NegationFilter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_NegationFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNegationFilter, UNegationFilter::StaticClass, TEXT("UNegationFilter"), &Z_Registration_Info_UClass_UNegationFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNegationFilter), 1673807339U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_NegationFilter_h_551612198(TEXT("/Script/LevelSnapshotFilters"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_NegationFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelShapshotFilters_Public_Builtin_BlueprintOnly_NegationFilter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
