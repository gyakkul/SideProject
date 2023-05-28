// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MuCOE/StressTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStressTest() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_ULiveInstance();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_ULiveInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	DEFINE_FUNCTION(ULiveInstance::execDelegatedCallback)
	{
		P_GET_OBJECT(UCustomizableObjectInstance,Z_Param_Instance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DelegatedCallback(Z_Param_Instance);
		P_NATIVE_END;
	}
	void ULiveInstance::StaticRegisterNativesULiveInstance()
	{
		UClass* Class = ULiveInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DelegatedCallback", &ULiveInstance::execDelegatedCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULiveInstance_DelegatedCallback_Statics
	{
		struct LiveInstance_eventDelegatedCallback_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULiveInstance_DelegatedCallback_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveInstance_eventDelegatedCallback_Parms, Instance), Z_Construct_UClass_UCustomizableObjectInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveInstance_DelegatedCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveInstance_DelegatedCallback_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveInstance_DelegatedCallback_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Method to assign for the callback */" },
		{ "ModuleRelativePath", "Private/MuCOE/StressTest.h" },
		{ "ToolTip", "Method to assign for the callback" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveInstance_DelegatedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveInstance, nullptr, "DelegatedCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULiveInstance_DelegatedCallback_Statics::LiveInstance_eventDelegatedCallback_Parms), Z_Construct_UFunction_ULiveInstance_DelegatedCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveInstance_DelegatedCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveInstance_DelegatedCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveInstance_DelegatedCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveInstance_DelegatedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveInstance_DelegatedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveInstance);
	UClass* Z_Construct_UClass_ULiveInstance_NoRegister()
	{
		return ULiveInstance::StaticClass();
	}
	struct Z_Construct_UClass_ULiveInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULiveInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveInstance_DelegatedCallback, "DelegatedCallback" }, // 661070850
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/StressTest.h" },
		{ "ModuleRelativePath", "Private/MuCOE/StressTest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveInstance_Statics::ClassParams = {
		&ULiveInstance::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULiveInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveInstance()
	{
		if (!Z_Registration_Info_UClass_ULiveInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveInstance.OuterSingleton, Z_Construct_UClass_ULiveInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveInstance.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<ULiveInstance>()
	{
		return ULiveInstance::StaticClass();
	}
	ULiveInstance::ULiveInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveInstance);
	ULiveInstance::~ULiveInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_StressTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_StressTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveInstance, ULiveInstance::StaticClass, TEXT("ULiveInstance"), &Z_Registration_Info_UClass_ULiveInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveInstance), 463735080U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_StressTest_h_348353645(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_StressTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_StressTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
