// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/Interfaces/TypedElementObjectInterface.h"
#include "Elements/Framework/TypedElementHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementObjectInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementHandle();
	TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementObjectInterface();
	TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementObjectInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TypedElementRuntime();
// End Cross Module References
	DEFINE_FUNCTION(ITypedElementObjectInterface::execGetObjectClass)
	{
		P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetObjectClass(Z_Param_Out_InElementHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITypedElementObjectInterface::execGetObject)
	{
		P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetObject(Z_Param_Out_InElementHandle);
		P_NATIVE_END;
	}
	void UTypedElementObjectInterface::StaticRegisterNativesUTypedElementObjectInterface()
	{
		UClass* Class = UTypedElementObjectInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetObject", &ITypedElementObjectInterface::execGetObject },
			{ "GetObjectClass", &ITypedElementObjectInterface::execGetObjectClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics
	{
		struct TypedElementObjectInterface_eventGetObject_Parms
		{
			FScriptTypedElementHandle InElementHandle;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementObjectInterface_eventGetObject_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::NewProp_InElementHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::NewProp_InElementHandle_MetaData)) }; // 915069018
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementObjectInterface_eventGetObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::NewProp_InElementHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|Object" },
		{ "Comment", "/**\n\x09 * Get the object instance that this handle represents, if any.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementObjectInterface.h" },
		{ "ToolTip", "Get the object instance that this handle represents, if any." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementObjectInterface, nullptr, "GetObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::TypedElementObjectInterface_eventGetObject_Parms), Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementObjectInterface_GetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementObjectInterface_GetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics
	{
		struct TypedElementObjectInterface_eventGetObjectClass_Parms
		{
			FScriptTypedElementHandle InElementHandle;
			UClass* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementObjectInterface_eventGetObjectClass_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::NewProp_InElementHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::NewProp_InElementHandle_MetaData)) }; // 915069018
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementObjectInterface_eventGetObjectClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::NewProp_InElementHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|Object" },
		{ "Comment", "/**\n\x09 * Gets the object instance's class that the handle represents, if any. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementObjectInterface.h" },
		{ "ToolTip", "Gets the object instance's class that the handle represents, if any." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementObjectInterface, nullptr, "GetObjectClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::TypedElementObjectInterface_eventGetObjectClass_Parms), Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementObjectInterface);
	UClass* Z_Construct_UClass_UTypedElementObjectInterface_NoRegister()
	{
		return UTypedElementObjectInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementObjectInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementObjectInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTypedElementObjectInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTypedElementObjectInterface_GetObject, "GetObject" }, // 4165948635
		{ &Z_Construct_UFunction_UTypedElementObjectInterface_GetObjectClass, "GetObjectClass" }, // 1659318744
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementObjectInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementObjectInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementObjectInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITypedElementObjectInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementObjectInterface_Statics::ClassParams = {
		&UTypedElementObjectInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementObjectInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementObjectInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementObjectInterface()
	{
		if (!Z_Registration_Info_UClass_UTypedElementObjectInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementObjectInterface.OuterSingleton, Z_Construct_UClass_UTypedElementObjectInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementObjectInterface.OuterSingleton;
	}
	template<> TYPEDELEMENTRUNTIME_API UClass* StaticClass<UTypedElementObjectInterface>()
	{
		return UTypedElementObjectInterface::StaticClass();
	}
	UTypedElementObjectInterface::UTypedElementObjectInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementObjectInterface);
	UTypedElementObjectInterface::~UTypedElementObjectInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementObjectInterface, UTypedElementObjectInterface::StaticClass, TEXT("UTypedElementObjectInterface"), &Z_Registration_Info_UClass_UTypedElementObjectInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementObjectInterface), 1163917858U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_2927745892(TEXT("/Script/TypedElementRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
