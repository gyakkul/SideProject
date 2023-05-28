// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComputeFramework/ComputeGraphComponent.h"
#include "ComputeFramework/ComputeGraphInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputeGraphComponent() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeGraph_NoRegister();
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeGraphComponent();
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeGraphComponent_NoRegister();
	COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FComputeGraphInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ComputeFramework();
// End Cross Module References
	DEFINE_FUNCTION(UComputeGraphComponent::execQueueExecute)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QueueExecute();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComputeGraphComponent::execDestroyDataProviders)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyDataProviders();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComputeGraphComponent::execCreateDataProviders)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InBindingIndex);
		P_GET_OBJECT(UObject,Z_Param_InBindingObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateDataProviders(Z_Param_InBindingIndex,Z_Param_InBindingObject);
		P_NATIVE_END;
	}
	void UComputeGraphComponent::StaticRegisterNativesUComputeGraphComponent()
	{
		UClass* Class = UComputeGraphComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateDataProviders", &UComputeGraphComponent::execCreateDataProviders },
			{ "DestroyDataProviders", &UComputeGraphComponent::execDestroyDataProviders },
			{ "QueueExecute", &UComputeGraphComponent::execQueueExecute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComputeGraphComponent_CreateDataProviders_Statics
	{
		struct ComputeGraphComponent_eventCreateDataProviders_Parms
		{
			int32 InBindingIndex;
			UObject* InBindingObject;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InBindingIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InBindingObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UComputeGraphComponent_CreateDataProviders_Statics::NewProp_InBindingIndex = { "InBindingIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComputeGraphComponent_eventCreateDataProviders_Parms, InBindingIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComputeGraphComponent_CreateDataProviders_Statics::NewProp_InBindingObject = { "InBindingObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComputeGraphComponent_eventCreateDataProviders_Parms, InBindingObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComputeGraphComponent_CreateDataProviders_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComputeGraphComponent_CreateDataProviders_Statics::NewProp_InBindingIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComputeGraphComponent_CreateDataProviders_Statics::NewProp_InBindingObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComputeGraphComponent_CreateDataProviders_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compute" },
		{ "Comment", "/** Create all the Data Provider objects for a given binding object of the ComputeGraph. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraphComponent.h" },
		{ "ToolTip", "Create all the Data Provider objects for a given binding object of the ComputeGraph." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComputeGraphComponent_CreateDataProviders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComputeGraphComponent, nullptr, "CreateDataProviders", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComputeGraphComponent_CreateDataProviders_Statics::ComputeGraphComponent_eventCreateDataProviders_Parms), Z_Construct_UFunction_UComputeGraphComponent_CreateDataProviders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComputeGraphComponent_CreateDataProviders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComputeGraphComponent_CreateDataProviders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComputeGraphComponent_CreateDataProviders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComputeGraphComponent_CreateDataProviders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComputeGraphComponent_CreateDataProviders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComputeGraphComponent_DestroyDataProviders_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComputeGraphComponent_DestroyDataProviders_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compute" },
		{ "Comment", "/** Destroy all associated DataProvider objects. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraphComponent.h" },
		{ "ToolTip", "Destroy all associated DataProvider objects." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComputeGraphComponent_DestroyDataProviders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComputeGraphComponent, nullptr, "DestroyDataProviders", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComputeGraphComponent_DestroyDataProviders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComputeGraphComponent_DestroyDataProviders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComputeGraphComponent_DestroyDataProviders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComputeGraphComponent_DestroyDataProviders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComputeGraphComponent_QueueExecute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComputeGraphComponent_QueueExecute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compute" },
		{ "Comment", "/** Queue the graph for execution at the next render update. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraphComponent.h" },
		{ "ToolTip", "Queue the graph for execution at the next render update." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComputeGraphComponent_QueueExecute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComputeGraphComponent, nullptr, "QueueExecute", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComputeGraphComponent_QueueExecute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComputeGraphComponent_QueueExecute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComputeGraphComponent_QueueExecute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComputeGraphComponent_QueueExecute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComputeGraphComponent);
	UClass* Z_Construct_UClass_UComputeGraphComponent_NoRegister()
	{
		return UComputeGraphComponent::StaticClass();
	}
	struct Z_Construct_UClass_UComputeGraphComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComputeGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComputeGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComputeGraphInstance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComputeGraphInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComputeGraphComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComputeGraphComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComputeGraphComponent_CreateDataProviders, "CreateDataProviders" }, // 3123251162
		{ &Z_Construct_UFunction_UComputeGraphComponent_DestroyDataProviders, "DestroyDataProviders" }, // 983908415
		{ &Z_Construct_UFunction_UComputeGraphComponent_QueueExecute, "QueueExecute" }, // 2847682628
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComputeGraphComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Component which holds a context for a UComputeGraph.\n * This object binds the graph to its data providers, and queues the execution. \n */" },
		{ "IncludePath", "ComputeFramework/ComputeGraphComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraphComponent.h" },
		{ "ToolTip", "Component which holds a context for a UComputeGraph.\nThis object binds the graph to its data providers, and queues the execution." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComputeGraphComponent_Statics::NewProp_ComputeGraph_MetaData[] = {
		{ "Category", "Compute" },
		{ "Comment", "/** The Compute Graph asset. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraphComponent.h" },
		{ "ToolTip", "The Compute Graph asset." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComputeGraphComponent_Statics::NewProp_ComputeGraph = { "ComputeGraph", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComputeGraphComponent, ComputeGraph), Z_Construct_UClass_UComputeGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UComputeGraphComponent_Statics::NewProp_ComputeGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComputeGraphComponent_Statics::NewProp_ComputeGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComputeGraphComponent_Statics::NewProp_ComputeGraphInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraphComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComputeGraphComponent_Statics::NewProp_ComputeGraphInstance = { "ComputeGraphInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComputeGraphComponent, ComputeGraphInstance), Z_Construct_UScriptStruct_FComputeGraphInstance, METADATA_PARAMS(Z_Construct_UClass_UComputeGraphComponent_Statics::NewProp_ComputeGraphInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComputeGraphComponent_Statics::NewProp_ComputeGraphInstance_MetaData)) }; // 1452545955
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComputeGraphComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeGraphComponent_Statics::NewProp_ComputeGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeGraphComponent_Statics::NewProp_ComputeGraphInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComputeGraphComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComputeGraphComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComputeGraphComponent_Statics::ClassParams = {
		&UComputeGraphComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UComputeGraphComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UComputeGraphComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComputeGraphComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComputeGraphComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComputeGraphComponent()
	{
		if (!Z_Registration_Info_UClass_UComputeGraphComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComputeGraphComponent.OuterSingleton, Z_Construct_UClass_UComputeGraphComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComputeGraphComponent.OuterSingleton;
	}
	template<> COMPUTEFRAMEWORK_API UClass* StaticClass<UComputeGraphComponent>()
	{
		return UComputeGraphComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComputeGraphComponent);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComputeGraphComponent, UComputeGraphComponent::StaticClass, TEXT("UComputeGraphComponent"), &Z_Registration_Info_UClass_UComputeGraphComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComputeGraphComponent), 2451978395U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphComponent_h_1073215764(TEXT("/Script/ComputeFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraphComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
