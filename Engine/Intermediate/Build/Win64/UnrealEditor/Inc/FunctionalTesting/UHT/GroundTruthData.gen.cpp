// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/GroundTruthData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroundTruthData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UGroundTruthData();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UGroundTruthData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References
	DEFINE_FUNCTION(UGroundTruthData::execCanModify)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanModify();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroundTruthData::execLoadObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->LoadObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroundTruthData::execSaveObject)
	{
		P_GET_OBJECT(UObject,Z_Param_GroundTruth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveObject(Z_Param_GroundTruth);
		P_NATIVE_END;
	}
	void UGroundTruthData::StaticRegisterNativesUGroundTruthData()
	{
		UClass* Class = UGroundTruthData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanModify", &UGroundTruthData::execCanModify },
			{ "LoadObject", &UGroundTruthData::execLoadObject },
			{ "SaveObject", &UGroundTruthData::execSaveObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGroundTruthData_CanModify_Statics
	{
		struct GroundTruthData_eventCanModify_Parms
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
	void Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GroundTruthData_eventCanModify_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GroundTruthData_eventCanModify_Parms), &Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/GroundTruthData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroundTruthData, nullptr, "CanModify", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::GroundTruthData_eventCanModify_Parms), Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroundTruthData_CanModify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroundTruthData_CanModify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics
	{
		struct GroundTruthData_eventLoadObject_Parms
		{
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroundTruthData_eventLoadObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/GroundTruthData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroundTruthData, nullptr, "LoadObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::GroundTruthData_eventLoadObject_Parms), Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroundTruthData_LoadObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroundTruthData_LoadObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics
	{
		struct GroundTruthData_eventSaveObject_Parms
		{
			UObject* GroundTruth;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GroundTruth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::NewProp_GroundTruth = { "GroundTruth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroundTruthData_eventSaveObject_Parms, GroundTruth), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::NewProp_GroundTruth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/GroundTruthData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroundTruthData, nullptr, "SaveObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::GroundTruthData_eventSaveObject_Parms), Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroundTruthData_SaveObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroundTruthData_SaveObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroundTruthData);
	UClass* Z_Construct_UClass_UGroundTruthData_NoRegister()
	{
		return UGroundTruthData::StaticClass();
	}
	struct Z_Construct_UClass_UGroundTruthData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetGroundTruth_MetaData[];
#endif
		static void NewProp_bResetGroundTruth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetGroundTruth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObjectData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroundTruthData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGroundTruthData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGroundTruthData_CanModify, "CanModify" }, // 221315148
		{ &Z_Construct_UFunction_UGroundTruthData_LoadObject, "LoadObject" }, // 134337155
		{ &Z_Construct_UFunction_UGroundTruthData_SaveObject, "SaveObject" }, // 138341151
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroundTruthData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GroundTruthData.h" },
		{ "ModuleRelativePath", "Public/GroundTruthData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroundTruthData_Statics::NewProp_bResetGroundTruth_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/GroundTruthData.h" },
	};
#endif
	void Z_Construct_UClass_UGroundTruthData_Statics::NewProp_bResetGroundTruth_SetBit(void* Obj)
	{
		((UGroundTruthData*)Obj)->bResetGroundTruth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroundTruthData_Statics::NewProp_bResetGroundTruth = { "bResetGroundTruth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGroundTruthData), &Z_Construct_UClass_UGroundTruthData_Statics::NewProp_bResetGroundTruth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGroundTruthData_Statics::NewProp_bResetGroundTruth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroundTruthData_Statics::NewProp_bResetGroundTruth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroundTruthData_Statics::NewProp_ObjectData_MetaData[] = {
		{ "Category", "Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GroundTruthData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGroundTruthData_Statics::NewProp_ObjectData = { "ObjectData", nullptr, (EPropertyFlags)0x00260800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroundTruthData, ObjectData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGroundTruthData_Statics::NewProp_ObjectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroundTruthData_Statics::NewProp_ObjectData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroundTruthData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroundTruthData_Statics::NewProp_bResetGroundTruth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroundTruthData_Statics::NewProp_ObjectData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroundTruthData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroundTruthData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroundTruthData_Statics::ClassParams = {
		&UGroundTruthData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGroundTruthData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGroundTruthData_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGroundTruthData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroundTruthData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroundTruthData()
	{
		if (!Z_Registration_Info_UClass_UGroundTruthData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroundTruthData.OuterSingleton, Z_Construct_UClass_UGroundTruthData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroundTruthData.OuterSingleton;
	}
	template<> FUNCTIONALTESTING_API UClass* StaticClass<UGroundTruthData>()
	{
		return UGroundTruthData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroundTruthData);
	UGroundTruthData::~UGroundTruthData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGroundTruthData, UGroundTruthData::StaticClass, TEXT("UGroundTruthData"), &Z_Registration_Info_UClass_UGroundTruthData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroundTruthData), 3095332456U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_4204721192(TEXT("/Script/FunctionalTesting"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
