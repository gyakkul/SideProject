// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/Framework/TypedElementRegistry.h"
#include "Elements/Framework/TypedElementHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementRegistry() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementRegistry();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementRegistry_NoRegister();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementHandle();
	UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References
	DEFINE_FUNCTION(UTypedElementRegistry::execGetElementInterface)
	{
		P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
		P_GET_OBJECT(UClass,Z_Param_InBaseInterfaceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetElementInterface(Z_Param_Out_InElementHandle,Z_Param_InBaseInterfaceType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementRegistry::execGetInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTypedElementRegistry**)Z_Param__Result=UTypedElementRegistry::GetInstance();
		P_NATIVE_END;
	}
	void UTypedElementRegistry::StaticRegisterNativesUTypedElementRegistry()
	{
		UClass* Class = UTypedElementRegistry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetElementInterface", &UTypedElementRegistry::execGetElementInterface },
			{ "GetInstance", &UTypedElementRegistry::execGetInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics
	{
		struct TypedElementRegistry_eventGetElementInterface_Parms
		{
			FScriptTypedElementHandle InElementHandle;
			const TSubclassOf<UInterface>  InBaseInterfaceType;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBaseInterfaceType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InBaseInterfaceType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementRegistry_eventGetElementInterface_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::NewProp_InElementHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::NewProp_InElementHandle_MetaData)) }; // 915069018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::NewProp_InBaseInterfaceType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::NewProp_InBaseInterfaceType = { "InBaseInterfaceType", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementRegistry_eventGetElementInterface_Parms, InBaseInterfaceType), Z_Construct_UClass_UClass, Z_Construct_UClass_UInterface, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::NewProp_InBaseInterfaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::NewProp_InBaseInterfaceType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementRegistry_eventGetElementInterface_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::NewProp_InElementHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::NewProp_InBaseInterfaceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Registry" },
		{ "Comment", "/**\n\x09 * Get the element interface supported by the given handle, or null if there is no support for this interface or if the handle is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementRegistry.h" },
		{ "ToolTip", "Get the element interface supported by the given handle, or null if there is no support for this interface or if the handle is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementRegistry, nullptr, "GetElementInterface", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::TypedElementRegistry_eventGetElementInterface_Parms), Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementRegistry_GetInstance_Statics
	{
		struct TypedElementRegistry_eventGetInstance_Parms
		{
			UTypedElementRegistry* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementRegistry_GetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementRegistry_eventGetInstance_Parms, ReturnValue), Z_Construct_UClass_UTypedElementRegistry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementRegistry_GetInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementRegistry_GetInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementRegistry_GetInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Registry" },
		{ "Comment", "/**\n\x09 * Get the singleton instance of the registry used in most cases.\n\x09 */" },
		{ "DisplayName", "Get Default Typed Element Registry" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementRegistry.h" },
		{ "ScriptName", "GetDefaultTypedElementRegistry" },
		{ "ToolTip", "Get the singleton instance of the registry used in most cases." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementRegistry_GetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementRegistry, nullptr, "GetInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementRegistry_GetInstance_Statics::TypedElementRegistry_eventGetInstance_Parms), Z_Construct_UFunction_UTypedElementRegistry_GetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementRegistry_GetInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementRegistry_GetInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementRegistry_GetInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementRegistry_GetInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementRegistry_GetInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementRegistry);
	UClass* Z_Construct_UClass_UTypedElementRegistry_NoRegister()
	{
		return UTypedElementRegistry::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTypedElementRegistry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface, "GetElementInterface" }, // 3046160942
		{ &Z_Construct_UFunction_UTypedElementRegistry_GetInstance, "GetInstance" }, // 2883833088
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementRegistry_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Registry of element types and their associated interfaces, along with the elements that represent their instances.\n */" },
		{ "IncludePath", "Elements/Framework/TypedElementRegistry.h" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementRegistry.h" },
		{ "ToolTip", "Registry of element types and their associated interfaces, along with the elements that represent their instances." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementRegistry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementRegistry_Statics::ClassParams = {
		&UTypedElementRegistry::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementRegistry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementRegistry()
	{
		if (!Z_Registration_Info_UClass_UTypedElementRegistry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementRegistry.OuterSingleton, Z_Construct_UClass_UTypedElementRegistry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementRegistry.OuterSingleton;
	}
	template<> TYPEDELEMENTFRAMEWORK_API UClass* StaticClass<UTypedElementRegistry>()
	{
		return UTypedElementRegistry::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementRegistry);
	UTypedElementRegistry::~UTypedElementRegistry() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementRegistry, UTypedElementRegistry::StaticClass, TEXT("UTypedElementRegistry"), &Z_Registration_Info_UClass_UTypedElementRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementRegistry), 3772238931U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h_2425521187(TEXT("/Script/TypedElementFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
