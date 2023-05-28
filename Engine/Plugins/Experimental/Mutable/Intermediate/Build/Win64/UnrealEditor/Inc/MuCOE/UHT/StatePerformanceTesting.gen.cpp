// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MuCOE/StatePerformanceTesting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatePerformanceTesting() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UUpdateClassHelper();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UUpdateClassHelper_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	DEFINE_FUNCTION(UUpdateClassHelper::execDelegatedCallback)
	{
		P_GET_OBJECT(UCustomizableObjectInstance,Z_Param_Instance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DelegatedCallback(Z_Param_Instance);
		P_NATIVE_END;
	}
	void UUpdateClassHelper::StaticRegisterNativesUUpdateClassHelper()
	{
		UClass* Class = UUpdateClassHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DelegatedCallback", &UUpdateClassHelper::execDelegatedCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUpdateClassHelper_DelegatedCallback_Statics
	{
		struct UpdateClassHelper_eventDelegatedCallback_Parms
		{
			UCustomizableObjectInstance* Instance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateClassHelper_DelegatedCallback_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UpdateClassHelper_eventDelegatedCallback_Parms, Instance), Z_Construct_UClass_UCustomizableObjectInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateClassHelper_DelegatedCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateClassHelper_DelegatedCallback_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateClassHelper_DelegatedCallback_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Method to assign for the callback */" },
		{ "ModuleRelativePath", "Private/MuCOE/StatePerformanceTesting.h" },
		{ "ToolTip", "Method to assign for the callback" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateClassHelper_DelegatedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateClassHelper, nullptr, "DelegatedCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUpdateClassHelper_DelegatedCallback_Statics::UpdateClassHelper_eventDelegatedCallback_Parms), Z_Construct_UFunction_UUpdateClassHelper_DelegatedCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateClassHelper_DelegatedCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateClassHelper_DelegatedCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateClassHelper_DelegatedCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateClassHelper_DelegatedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateClassHelper_DelegatedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUpdateClassHelper);
	UClass* Z_Construct_UClass_UUpdateClassHelper_NoRegister()
	{
		return UUpdateClassHelper::StaticClass();
	}
	struct Z_Construct_UClass_UUpdateClassHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUpdateClassHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUpdateClassHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUpdateClassHelper_DelegatedCallback, "DelegatedCallback" }, // 3439314260
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpdateClassHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/StatePerformanceTesting.h" },
		{ "ModuleRelativePath", "Private/MuCOE/StatePerformanceTesting.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUpdateClassHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUpdateClassHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUpdateClassHelper_Statics::ClassParams = {
		&UUpdateClassHelper::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUpdateClassHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateClassHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUpdateClassHelper()
	{
		if (!Z_Registration_Info_UClass_UUpdateClassHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUpdateClassHelper.OuterSingleton, Z_Construct_UClass_UUpdateClassHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUpdateClassHelper.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UUpdateClassHelper>()
	{
		return UUpdateClassHelper::StaticClass();
	}
	UUpdateClassHelper::UUpdateClassHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUpdateClassHelper);
	UUpdateClassHelper::~UUpdateClassHelper() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_StatePerformanceTesting_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_StatePerformanceTesting_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUpdateClassHelper, UUpdateClassHelper::StaticClass, TEXT("UUpdateClassHelper"), &Z_Registration_Info_UClass_UUpdateClassHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUpdateClassHelper), 1064774381U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_StatePerformanceTesting_h_2871970553(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_StatePerformanceTesting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_StatePerformanceTesting_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
