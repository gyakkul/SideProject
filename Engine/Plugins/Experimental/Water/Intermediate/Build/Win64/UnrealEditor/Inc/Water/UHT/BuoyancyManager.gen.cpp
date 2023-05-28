// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuoyancyManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuoyancyManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_ABuoyancyManager();
	WATER_API UClass* Z_Construct_UClass_ABuoyancyManager_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UBuoyancyComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABuoyancyManager::execGetBuoyancyComponentManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT_REF(ABuoyancyManager,Z_Param_Out_Manager);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ABuoyancyManager::GetBuoyancyComponentManager(Z_Param_WorldContextObject,Z_Param_Out_Manager);
		P_NATIVE_END;
	}
	void ABuoyancyManager::StaticRegisterNativesABuoyancyManager()
	{
		UClass* Class = ABuoyancyManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBuoyancyComponentManager", &ABuoyancyManager::execGetBuoyancyComponentManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABuoyancyManager_GetBuoyancyComponentManager_Statics
	{
		struct BuoyancyManager_eventGetBuoyancyComponentManager_Parms
		{
			const UObject* WorldContextObject;
			ABuoyancyManager* Manager;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuoyancyManager_GetBuoyancyComponentManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABuoyancyManager_GetBuoyancyComponentManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuoyancyManager_eventGetBuoyancyComponentManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABuoyancyManager_GetBuoyancyComponentManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuoyancyManager_GetBuoyancyComponentManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABuoyancyManager_GetBuoyancyComponentManager_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuoyancyManager_eventGetBuoyancyComponentManager_Parms, Manager), Z_Construct_UClass_ABuoyancyManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABuoyancyManager_GetBuoyancyComponentManager_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BuoyancyManager_eventGetBuoyancyComponentManager_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABuoyancyManager_GetBuoyancyComponentManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BuoyancyManager_eventGetBuoyancyComponentManager_Parms), &Z_Construct_UFunction_ABuoyancyManager_GetBuoyancyComponentManager_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuoyancyManager_GetBuoyancyComponentManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuoyancyManager_GetBuoyancyComponentManager_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuoyancyManager_GetBuoyancyComponentManager_Statics::NewProp_Manager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuoyancyManager_GetBuoyancyComponentManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuoyancyManager_GetBuoyancyComponentManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BuoyancyManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuoyancyManager_GetBuoyancyComponentManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuoyancyManager, nullptr, "GetBuoyancyComponentManager", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABuoyancyManager_GetBuoyancyComponentManager_Statics::BuoyancyManager_eventGetBuoyancyComponentManager_Parms), Z_Construct_UFunction_ABuoyancyManager_GetBuoyancyComponentManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuoyancyManager_GetBuoyancyComponentManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuoyancyManager_GetBuoyancyComponentManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuoyancyManager_GetBuoyancyComponentManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuoyancyManager_GetBuoyancyComponentManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuoyancyManager_GetBuoyancyComponentManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuoyancyManager);
	UClass* Z_Construct_UClass_ABuoyancyManager_NoRegister()
	{
		return ABuoyancyManager::StaticClass();
	}
	struct Z_Construct_UClass_ABuoyancyManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BuoyancyComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuoyancyComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BuoyancyComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuoyancyManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABuoyancyManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABuoyancyManager_GetBuoyancyComponentManager, "GetBuoyancyComponentManager" }, // 477916516
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuoyancyManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BuoyancyManager.h" },
		{ "ModuleRelativePath", "Public/BuoyancyManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ABuoyancyManager_Statics::NewProp_BuoyancyComponents_Inner = { "BuoyancyComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UBuoyancyComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuoyancyManager_Statics::NewProp_BuoyancyComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BuoyancyManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABuoyancyManager_Statics::NewProp_BuoyancyComponents = { "BuoyancyComponents", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuoyancyManager, BuoyancyComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABuoyancyManager_Statics::NewProp_BuoyancyComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuoyancyManager_Statics::NewProp_BuoyancyComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuoyancyManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuoyancyManager_Statics::NewProp_BuoyancyComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuoyancyManager_Statics::NewProp_BuoyancyComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuoyancyManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuoyancyManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuoyancyManager_Statics::ClassParams = {
		&ABuoyancyManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABuoyancyManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuoyancyManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuoyancyManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuoyancyManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuoyancyManager()
	{
		if (!Z_Registration_Info_UClass_ABuoyancyManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuoyancyManager.OuterSingleton, Z_Construct_UClass_ABuoyancyManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABuoyancyManager.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<ABuoyancyManager>()
	{
		return ABuoyancyManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuoyancyManager);
	ABuoyancyManager::~ABuoyancyManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABuoyancyManager, ABuoyancyManager::StaticClass, TEXT("ABuoyancyManager"), &Z_Registration_Info_UClass_ABuoyancyManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuoyancyManager), 1145833978U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_208102256(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
