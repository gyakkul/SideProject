// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tasks/GameplayTask_ClaimResource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTask_ClaimResource() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_ClaimResource();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_ClaimResource_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskResource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayTasks();
// End Cross Module References
	DEFINE_FUNCTION(UGameplayTask_ClaimResource::execClaimResources)
	{
		P_GET_TINTERFACE(IGameplayTaskOwnerInterface,Z_Param_InTaskOwner);
		P_GET_TARRAY(TSubclassOf<UGameplayTaskResource> ,Z_Param_ResourceClasses);
		P_GET_PROPERTY(FByteProperty,Z_Param_Priority);
		P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameplayTask_ClaimResource**)Z_Param__Result=UGameplayTask_ClaimResource::ClaimResources(Z_Param_InTaskOwner,Z_Param_ResourceClasses,Z_Param_Priority,Z_Param_TaskInstanceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayTask_ClaimResource::execClaimResource)
	{
		P_GET_TINTERFACE(IGameplayTaskOwnerInterface,Z_Param_InTaskOwner);
		P_GET_OBJECT(UClass,Z_Param_ResourceClass);
		P_GET_PROPERTY(FByteProperty,Z_Param_Priority);
		P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameplayTask_ClaimResource**)Z_Param__Result=UGameplayTask_ClaimResource::ClaimResource(Z_Param_InTaskOwner,Z_Param_ResourceClass,Z_Param_Priority,Z_Param_TaskInstanceName);
		P_NATIVE_END;
	}
	void UGameplayTask_ClaimResource::StaticRegisterNativesUGameplayTask_ClaimResource()
	{
		UClass* Class = UGameplayTask_ClaimResource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClaimResource", &UGameplayTask_ClaimResource::execClaimResource },
			{ "ClaimResources", &UGameplayTask_ClaimResource::execClaimResources },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics
	{
		struct GameplayTask_ClaimResource_eventClaimResource_Parms
		{
			TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner;
			TSubclassOf<UGameplayTaskResource>  ResourceClass;
			uint8 Priority;
			FName TaskInstanceName;
			UGameplayTask_ClaimResource* ReturnValue;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_InTaskOwner;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ResourceClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskInstanceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_InTaskOwner = { "InTaskOwner", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_ClaimResource_eventClaimResource_Parms, InTaskOwner), Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_ResourceClass = { "ResourceClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_ClaimResource_eventClaimResource_Parms, ResourceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayTaskResource_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_Priority_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_ClaimResource_eventClaimResource_Parms, Priority), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_TaskInstanceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_ClaimResource_eventClaimResource_Parms, TaskInstanceName), METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_TaskInstanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_TaskInstanceName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_ClaimResource_eventClaimResource_Parms, ReturnValue), Z_Construct_UClass_UGameplayTask_ClaimResource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_InTaskOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_ResourceClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_TaskInstanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Priority, TaskInstanceName" },
		{ "Category", "AI|Tasks" },
		{ "CPP_Default_Priority", "192" },
		{ "CPP_Default_TaskInstanceName", "None" },
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_ClaimResource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_ClaimResource, nullptr, "ClaimResource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::GameplayTask_ClaimResource_eventClaimResource_Parms), Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics
	{
		struct GameplayTask_ClaimResource_eventClaimResources_Parms
		{
			TScriptInterface<IGameplayTaskOwnerInterface> InTaskOwner;
			TArray<TSubclassOf<UGameplayTaskResource> > ResourceClasses;
			uint8 Priority;
			FName TaskInstanceName;
			UGameplayTask_ClaimResource* ReturnValue;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_InTaskOwner;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ResourceClasses_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ResourceClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskInstanceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_InTaskOwner = { "InTaskOwner", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_ClaimResource_eventClaimResources_Parms, InTaskOwner), Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_ResourceClasses_Inner = { "ResourceClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayTaskResource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_ResourceClasses = { "ResourceClasses", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_ClaimResource_eventClaimResources_Parms, ResourceClasses), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_Priority_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_ClaimResource_eventClaimResources_Parms, Priority), nullptr, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_TaskInstanceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_ClaimResource_eventClaimResources_Parms, TaskInstanceName), METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_TaskInstanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_TaskInstanceName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_ClaimResource_eventClaimResources_Parms, ReturnValue), Z_Construct_UClass_UGameplayTask_ClaimResource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_InTaskOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_ResourceClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_ResourceClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_TaskInstanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Priority, TaskInstanceName" },
		{ "Category", "AI|Tasks" },
		{ "CPP_Default_Priority", "192" },
		{ "CPP_Default_TaskInstanceName", "None" },
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_ClaimResource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_ClaimResource, nullptr, "ClaimResources", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::GameplayTask_ClaimResource_eventClaimResources_Parms), Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTask_ClaimResource);
	UClass* Z_Construct_UClass_UGameplayTask_ClaimResource_NoRegister()
	{
		return UGameplayTask_ClaimResource::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTask_ClaimResource_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTask_ClaimResource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTasks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayTask_ClaimResource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResource, "ClaimResource" }, // 1986462539
		{ &Z_Construct_UFunction_UGameplayTask_ClaimResource_ClaimResources, "ClaimResources" }, // 1996346359
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_ClaimResource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Tasks/GameplayTask_ClaimResource.h" },
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_ClaimResource.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTask_ClaimResource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTask_ClaimResource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTask_ClaimResource_Statics::ClassParams = {
		&UGameplayTask_ClaimResource::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_ClaimResource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_ClaimResource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTask_ClaimResource()
	{
		if (!Z_Registration_Info_UClass_UGameplayTask_ClaimResource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTask_ClaimResource.OuterSingleton, Z_Construct_UClass_UGameplayTask_ClaimResource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayTask_ClaimResource.OuterSingleton;
	}
	template<> GAMEPLAYTASKS_API UClass* StaticClass<UGameplayTask_ClaimResource>()
	{
		return UGameplayTask_ClaimResource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTask_ClaimResource);
	UGameplayTask_ClaimResource::~UGameplayTask_ClaimResource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTask_ClaimResource, UGameplayTask_ClaimResource::StaticClass, TEXT("UGameplayTask_ClaimResource"), &Z_Registration_Info_UClass_UGameplayTask_ClaimResource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTask_ClaimResource), 975065917U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_1474413607(TEXT("/Script/GameplayTasks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_ClaimResource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
