// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/Interfaces/TypedElementAssetDataInterface.h"
#include "Elements/Framework/TypedElementHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementAssetDataInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementHandle();
	TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementAssetDataInterface();
	TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementAssetDataInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TypedElementRuntime();
// End Cross Module References
	DEFINE_FUNCTION(ITypedElementAssetDataInterface::execGetAssetData)
	{
		P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAssetData*)Z_Param__Result=P_THIS->GetAssetData(Z_Param_Out_InElementHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITypedElementAssetDataInterface::execGetAllReferencedAssetDatas)
	{
		P_GET_STRUCT_REF(FScriptTypedElementHandle,Z_Param_Out_InElementHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAssetData>*)Z_Param__Result=P_THIS->GetAllReferencedAssetDatas(Z_Param_Out_InElementHandle);
		P_NATIVE_END;
	}
	void UTypedElementAssetDataInterface::StaticRegisterNativesUTypedElementAssetDataInterface()
	{
		UClass* Class = UTypedElementAssetDataInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllReferencedAssetDatas", &ITypedElementAssetDataInterface::execGetAllReferencedAssetDatas },
			{ "GetAssetData", &ITypedElementAssetDataInterface::execGetAssetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct TypedElementAssetDataInterface_eventGetAllReferencedAssetDatas_Parms
		{
			FScriptTypedElementHandle InElementHandle;
			TArray<FAssetData> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementAssetDataInterface_eventGetAllReferencedAssetDatas_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::NewProp_InElementHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::NewProp_InElementHandle_MetaData)) }; // 915069018
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementAssetDataInterface_eventGetAllReferencedAssetDatas_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::NewProp_InElementHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|AssetData" },
		{ "Comment", "/**\n\x09 * Returns any asset datas for content objects referenced by handle.\n\x09 * If the given handle itself has valid asset data, it should be returned as the last element of the array.\n\x09 *\n\x09 * @returns An array of valid asset datas.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementAssetDataInterface.h" },
		{ "ToolTip", "Returns any asset datas for content objects referenced by handle.\nIf the given handle itself has valid asset data, it should be returned as the last element of the array.\n\n@returns An array of valid asset datas." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementAssetDataInterface, nullptr, "GetAllReferencedAssetDatas", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::TypedElementAssetDataInterface_eventGetAllReferencedAssetDatas_Parms), Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct TypedElementAssetDataInterface_eventGetAssetData_Parms
		{
			FScriptTypedElementHandle InElementHandle;
			FAssetData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InElementHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InElementHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::NewProp_InElementHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::NewProp_InElementHandle = { "InElementHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementAssetDataInterface_eventGetAssetData_Parms, InElementHandle), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::NewProp_InElementHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::NewProp_InElementHandle_MetaData)) }; // 915069018
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TypedElementAssetDataInterface_eventGetAssetData_Parms, ReturnValue), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::NewProp_InElementHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementInterfaces|AssetData" },
		{ "Comment", "/**\n\x09 * Returns the asset data for the given handle, if it exists.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementAssetDataInterface.h" },
		{ "ToolTip", "Returns the asset data for the given handle, if it exists." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementAssetDataInterface, nullptr, "GetAssetData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::TypedElementAssetDataInterface_eventGetAssetData_Parms), Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementAssetDataInterface);
	UClass* Z_Construct_UClass_UTypedElementAssetDataInterface_NoRegister()
	{
		return UTypedElementAssetDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementAssetDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementAssetDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTypedElementAssetDataInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAllReferencedAssetDatas, "GetAllReferencedAssetDatas" }, // 990461810
		{ &Z_Construct_UFunction_UTypedElementAssetDataInterface_GetAssetData, "GetAssetData" }, // 2361194337
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementAssetDataInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementAssetDataInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementAssetDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITypedElementAssetDataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementAssetDataInterface_Statics::ClassParams = {
		&UTypedElementAssetDataInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementAssetDataInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementAssetDataInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementAssetDataInterface()
	{
		if (!Z_Registration_Info_UClass_UTypedElementAssetDataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementAssetDataInterface.OuterSingleton, Z_Construct_UClass_UTypedElementAssetDataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementAssetDataInterface.OuterSingleton;
	}
	template<> TYPEDELEMENTRUNTIME_API UClass* StaticClass<UTypedElementAssetDataInterface>()
	{
		return UTypedElementAssetDataInterface::StaticClass();
	}
	UTypedElementAssetDataInterface::UTypedElementAssetDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementAssetDataInterface);
	UTypedElementAssetDataInterface::~UTypedElementAssetDataInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementAssetDataInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementAssetDataInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementAssetDataInterface, UTypedElementAssetDataInterface::StaticClass, TEXT("UTypedElementAssetDataInterface"), &Z_Registration_Info_UClass_UTypedElementAssetDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementAssetDataInterface), 1064511925U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementAssetDataInterface_h_243671785(TEXT("/Script/TypedElementRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementAssetDataInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementAssetDataInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
