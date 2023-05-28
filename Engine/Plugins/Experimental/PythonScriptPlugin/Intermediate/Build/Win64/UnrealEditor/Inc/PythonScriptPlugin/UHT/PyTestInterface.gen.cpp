// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PyTestInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePyTestInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestChildInterface();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestChildInterface_NoRegister();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestInterface();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestInterface_NoRegister();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestOtherInterface();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestOtherInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PythonScriptPlugin();
// End Cross Module References
	DEFINE_FUNCTION(IPyTestInterface::execFuncInterface)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FuncInterface(Z_Param_InValue);
		P_NATIVE_END;
	}
	void UPyTestInterface::StaticRegisterNativesUPyTestInterface()
	{
		UClass* Class = UPyTestInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FuncInterface", &IPyTestInterface::execFuncInterface },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPyTestInterface_FuncInterface_Statics
	{
		struct PyTestInterface_eventFuncInterface_Parms
		{
			int32 InValue;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestInterface_FuncInterface_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestInterface_FuncInterface_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestInterface_eventFuncInterface_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_UPyTestInterface_FuncInterface_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestInterface_FuncInterface_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestInterface_FuncInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestInterface_eventFuncInterface_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestInterface_FuncInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestInterface_FuncInterface_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestInterface_FuncInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestInterface_FuncInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTestInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestInterface_FuncInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestInterface, nullptr, "FuncInterface", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestInterface_FuncInterface_Statics::PyTestInterface_eventFuncInterface_Parms), Z_Construct_UFunction_UPyTestInterface_FuncInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestInterface_FuncInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestInterface_FuncInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestInterface_FuncInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestInterface_FuncInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestInterface_FuncInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPyTestInterface);
	UClass* Z_Construct_UClass_UPyTestInterface_NoRegister()
	{
		return UPyTestInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPyTestInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPyTestInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPyTestInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPyTestInterface_FuncInterface, "FuncInterface" }, // 4098768562
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Private/PyTestInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPyTestInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPyTestInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPyTestInterface_Statics::ClassParams = {
		&UPyTestInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPyTestInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPyTestInterface()
	{
		if (!Z_Registration_Info_UClass_UPyTestInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPyTestInterface.OuterSingleton, Z_Construct_UClass_UPyTestInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPyTestInterface.OuterSingleton;
	}
	template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<UPyTestInterface>()
	{
		return UPyTestInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPyTestInterface);
	UPyTestInterface::~UPyTestInterface() {}
	DEFINE_FUNCTION(IPyTestChildInterface::execFuncInterfaceChild)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FuncInterfaceChild(Z_Param_InValue);
		P_NATIVE_END;
	}
	void UPyTestChildInterface::StaticRegisterNativesUPyTestChildInterface()
	{
		UClass* Class = UPyTestChildInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FuncInterfaceChild", &IPyTestChildInterface::execFuncInterfaceChild },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPyTestChildInterface_FuncInterfaceChild_Statics
	{
		struct PyTestChildInterface_eventFuncInterfaceChild_Parms
		{
			int32 InValue;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestChildInterface_FuncInterfaceChild_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestChildInterface_FuncInterfaceChild_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestChildInterface_eventFuncInterfaceChild_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_UPyTestChildInterface_FuncInterfaceChild_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestChildInterface_FuncInterfaceChild_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestChildInterface_FuncInterfaceChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestChildInterface_eventFuncInterfaceChild_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestChildInterface_FuncInterfaceChild_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestChildInterface_FuncInterfaceChild_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestChildInterface_FuncInterfaceChild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestChildInterface_FuncInterfaceChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTestInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestChildInterface_FuncInterfaceChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestChildInterface, nullptr, "FuncInterfaceChild", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestChildInterface_FuncInterfaceChild_Statics::PyTestChildInterface_eventFuncInterfaceChild_Parms), Z_Construct_UFunction_UPyTestChildInterface_FuncInterfaceChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestChildInterface_FuncInterfaceChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestChildInterface_FuncInterfaceChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestChildInterface_FuncInterfaceChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestChildInterface_FuncInterfaceChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestChildInterface_FuncInterfaceChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPyTestChildInterface);
	UClass* Z_Construct_UClass_UPyTestChildInterface_NoRegister()
	{
		return UPyTestChildInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPyTestChildInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPyTestChildInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPyTestInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPyTestChildInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPyTestChildInterface_FuncInterfaceChild, "FuncInterfaceChild" }, // 2183443768
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestChildInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Private/PyTestInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPyTestChildInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPyTestChildInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPyTestChildInterface_Statics::ClassParams = {
		&UPyTestChildInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPyTestChildInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestChildInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPyTestChildInterface()
	{
		if (!Z_Registration_Info_UClass_UPyTestChildInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPyTestChildInterface.OuterSingleton, Z_Construct_UClass_UPyTestChildInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPyTestChildInterface.OuterSingleton;
	}
	template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<UPyTestChildInterface>()
	{
		return UPyTestChildInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPyTestChildInterface);
	UPyTestChildInterface::~UPyTestChildInterface() {}
	DEFINE_FUNCTION(IPyTestOtherInterface::execFuncInterfaceOther)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FuncInterfaceOther(Z_Param_InValue);
		P_NATIVE_END;
	}
	void UPyTestOtherInterface::StaticRegisterNativesUPyTestOtherInterface()
	{
		UClass* Class = UPyTestOtherInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FuncInterfaceOther", &IPyTestOtherInterface::execFuncInterfaceOther },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPyTestOtherInterface_FuncInterfaceOther_Statics
	{
		struct PyTestOtherInterface_eventFuncInterfaceOther_Parms
		{
			int32 InValue;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestOtherInterface_FuncInterfaceOther_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestOtherInterface_FuncInterfaceOther_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestOtherInterface_eventFuncInterfaceOther_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_UPyTestOtherInterface_FuncInterfaceOther_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestOtherInterface_FuncInterfaceOther_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestOtherInterface_FuncInterfaceOther_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestOtherInterface_eventFuncInterfaceOther_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestOtherInterface_FuncInterfaceOther_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestOtherInterface_FuncInterfaceOther_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestOtherInterface_FuncInterfaceOther_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestOtherInterface_FuncInterfaceOther_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTestInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestOtherInterface_FuncInterfaceOther_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestOtherInterface, nullptr, "FuncInterfaceOther", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestOtherInterface_FuncInterfaceOther_Statics::PyTestOtherInterface_eventFuncInterfaceOther_Parms), Z_Construct_UFunction_UPyTestOtherInterface_FuncInterfaceOther_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestOtherInterface_FuncInterfaceOther_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestOtherInterface_FuncInterfaceOther_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestOtherInterface_FuncInterfaceOther_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestOtherInterface_FuncInterfaceOther()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestOtherInterface_FuncInterfaceOther_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPyTestOtherInterface);
	UClass* Z_Construct_UClass_UPyTestOtherInterface_NoRegister()
	{
		return UPyTestOtherInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPyTestOtherInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPyTestOtherInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPyTestOtherInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPyTestOtherInterface_FuncInterfaceOther, "FuncInterfaceOther" }, // 3058565079
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestOtherInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Private/PyTestInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPyTestOtherInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPyTestOtherInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPyTestOtherInterface_Statics::ClassParams = {
		&UPyTestOtherInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPyTestOtherInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestOtherInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPyTestOtherInterface()
	{
		if (!Z_Registration_Info_UClass_UPyTestOtherInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPyTestOtherInterface.OuterSingleton, Z_Construct_UClass_UPyTestOtherInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPyTestOtherInterface.OuterSingleton;
	}
	template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<UPyTestOtherInterface>()
	{
		return UPyTestOtherInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPyTestOtherInterface);
	UPyTestOtherInterface::~UPyTestOtherInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPyTestInterface, UPyTestInterface::StaticClass, TEXT("UPyTestInterface"), &Z_Registration_Info_UClass_UPyTestInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPyTestInterface), 4223259331U) },
		{ Z_Construct_UClass_UPyTestChildInterface, UPyTestChildInterface::StaticClass, TEXT("UPyTestChildInterface"), &Z_Registration_Info_UClass_UPyTestChildInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPyTestChildInterface), 1756246068U) },
		{ Z_Construct_UClass_UPyTestOtherInterface, UPyTestOtherInterface::StaticClass, TEXT("UPyTestOtherInterface"), &Z_Registration_Info_UClass_UPyTestOtherInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPyTestOtherInterface), 3447226827U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_3686175750(TEXT("/Script/PythonScriptPlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
