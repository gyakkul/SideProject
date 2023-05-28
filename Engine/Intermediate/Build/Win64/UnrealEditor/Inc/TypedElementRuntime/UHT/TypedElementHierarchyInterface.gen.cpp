// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/Interfaces/TypedElementHierarchyInterface.h"
#include "Elements/Framework/TypedElementHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementHierarchyInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementHandle();
	TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementHierarchyInterface();
	TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementHierarchyInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TypedElementRuntime();
// End Cross Module References
	DEFINE_FUNCTION(ITypedElementHierarchyInterface::execGetChildElements)
	{
		P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
		P_GET_TARRAY_REF(FScriptTypedElementHandle,Z_Param_Out_OutElementHandles);
		P_GET_UBOOL(Z_Param_bAllowCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetChildElements(Z_Param_Out_InElementHandle,Z_Param_Out_OutElementHandles,Z_Param_bAllowCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITypedElementHierarchyInterface::execGetParentElement)
	{
		P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
		P_GET_UBOOL(Z_Param_bAllowCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScriptTypedElementHandle*)Z_Param__Result=P_THIS->GetParentElement(Z_Param_Out_InElementHandle,Z_Param_bAllowCreate);
		P_NATIVE_END;
	}
	void UTypedElementHierarchyInterface::StaticRegisterNativesUTypedElementHierarchyInterface()
	{
		UClass* Class = UTypedElementHierarchyInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChildElements", &ITypedElementHierarchyInterface::execGetChildElements },
			{ "GetParentElement", &ITypedElementHierarchyInterface::execGetParentElement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics
	{
		struct TypedElementHierarchyInterface_eventGetChildElements_Parms
		{
			FScriptTypedElementHandle InElementHandle;
			TArray<FScriptTypedElementHandle> OutElementHandles;
			bool bAllowCreate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutElementHandles_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutElementHandles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCreate_MetaData[];
#endif
		static void NewProp_bAllowCreate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCreate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementHierarchyInterface_eventGetChildElements_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::NewProp_InElementHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::NewProp_InElementHandle_MetaData)) }; // 915069018
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::NewProp_OutElementHandles_Inner = { "OutElementHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::NewProp_OutElementHandles = { "OutElementHandles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementHierarchyInterface_eventGetChildElements_Parms, OutElementHandles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 915069018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::NewProp_bAllowCreate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::NewProp_bAllowCreate_SetBit(void* Obj)
	{
		((TypedElementHierarchyInterface_eventGetChildElements_Parms*)Obj)->bAllowCreate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::NewProp_bAllowCreate = { "bAllowCreate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TypedElementHierarchyInterface_eventGetChildElements_Parms), &Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::NewProp_bAllowCreate_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::NewProp_bAllowCreate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::NewProp_bAllowCreate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::NewProp_InElementHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::NewProp_OutElementHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::NewProp_OutElementHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::NewProp_bAllowCreate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|Hierarchy" },
		{ "Comment", "/**\n\x09 * Get the logical children of this element, if any.\n\x09 * eg) An actor might return its component, or an ISM component might return its static mesh instances.\n\x09 *\n\x09 * @note Appends to OutElementHandles.\n\x09 */" },
		{ "CPP_Default_bAllowCreate", "true" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementHierarchyInterface.h" },
		{ "ToolTip", "Get the logical children of this element, if any.\neg) An actor might return its component, or an ISM component might return its static mesh instances.\n\n@note Appends to OutElementHandles." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementHierarchyInterface, nullptr, "GetChildElements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::TypedElementHierarchyInterface_eventGetChildElements_Parms), Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics
	{
		struct TypedElementHierarchyInterface_eventGetParentElement_Parms
		{
			FScriptTypedElementHandle InElementHandle;
			bool bAllowCreate;
			FScriptTypedElementHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCreate_MetaData[];
#endif
		static void NewProp_bAllowCreate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCreate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementHierarchyInterface_eventGetParentElement_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::NewProp_InElementHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::NewProp_InElementHandle_MetaData)) }; // 915069018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::NewProp_bAllowCreate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::NewProp_bAllowCreate_SetBit(void* Obj)
	{
		((TypedElementHierarchyInterface_eventGetParentElement_Parms*)Obj)->bAllowCreate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::NewProp_bAllowCreate = { "bAllowCreate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TypedElementHierarchyInterface_eventGetParentElement_Parms), &Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::NewProp_bAllowCreate_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::NewProp_bAllowCreate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::NewProp_bAllowCreate_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementHierarchyInterface_eventGetParentElement_Parms, ReturnValue), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::NewProp_InElementHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::NewProp_bAllowCreate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|Hierarchy" },
		{ "Comment", "/**\n\x09 * Get the logical parent of this element, if any.\n\x09 * eg) A component might return its actor, or a static mesh instance might return its ISM component.\n\x09 */" },
		{ "CPP_Default_bAllowCreate", "true" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementHierarchyInterface.h" },
		{ "ToolTip", "Get the logical parent of this element, if any.\neg) A component might return its actor, or a static mesh instance might return its ISM component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementHierarchyInterface, nullptr, "GetParentElement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::TypedElementHierarchyInterface_eventGetParentElement_Parms), Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementHierarchyInterface);
	UClass* Z_Construct_UClass_UTypedElementHierarchyInterface_NoRegister()
	{
		return UTypedElementHierarchyInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementHierarchyInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementHierarchyInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTypedElementHierarchyInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTypedElementHierarchyInterface_GetChildElements, "GetChildElements" }, // 1530499234
		{ &Z_Construct_UFunction_UTypedElementHierarchyInterface_GetParentElement, "GetParentElement" }, // 3810760822
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementHierarchyInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementHierarchyInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementHierarchyInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITypedElementHierarchyInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementHierarchyInterface_Statics::ClassParams = {
		&UTypedElementHierarchyInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementHierarchyInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementHierarchyInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementHierarchyInterface()
	{
		if (!Z_Registration_Info_UClass_UTypedElementHierarchyInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementHierarchyInterface.OuterSingleton, Z_Construct_UClass_UTypedElementHierarchyInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementHierarchyInterface.OuterSingleton;
	}
	template<> TYPEDELEMENTRUNTIME_API UClass* StaticClass<UTypedElementHierarchyInterface>()
	{
		return UTypedElementHierarchyInterface::StaticClass();
	}
	UTypedElementHierarchyInterface::UTypedElementHierarchyInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementHierarchyInterface);
	UTypedElementHierarchyInterface::~UTypedElementHierarchyInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementHierarchyInterface, UTypedElementHierarchyInterface::StaticClass, TEXT("UTypedElementHierarchyInterface"), &Z_Registration_Info_UClass_UTypedElementHierarchyInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementHierarchyInterface), 1481080909U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_589408961(TEXT("/Script/TypedElementRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
