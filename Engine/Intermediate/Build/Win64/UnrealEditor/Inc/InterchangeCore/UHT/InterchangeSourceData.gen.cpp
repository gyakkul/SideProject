// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeSourceData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeSourceData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeSourceData();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeSourceData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeCore();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeSourceData::execSetFilename)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InFilename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetFilename(Z_Param_InFilename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSourceData::execGetFilename)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFilename();
		P_NATIVE_END;
	}
	void UInterchangeSourceData::StaticRegisterNativesUInterchangeSourceData()
	{
		UClass* Class = UInterchangeSourceData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFilename", &UInterchangeSourceData::execGetFilename },
			{ "SetFilename", &UInterchangeSourceData::execSetFilename },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeSourceData_GetFilename_Statics
	{
		struct InterchangeSourceData_eventGetFilename_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSourceData_GetFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSourceData_eventGetFilename_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSourceData_GetFilename_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceData_GetFilename_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSourceData_GetFilename_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Import Manager" },
		{ "ModuleRelativePath", "Public/InterchangeSourceData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSourceData_GetFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSourceData, nullptr, "GetFilename", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSourceData_GetFilename_Statics::InterchangeSourceData_eventGetFilename_Parms), Z_Construct_UFunction_UInterchangeSourceData_GetFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceData_GetFilename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSourceData_GetFilename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceData_GetFilename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSourceData_GetFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSourceData_GetFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics
	{
		struct InterchangeSourceData_eventSetFilename_Parms
		{
			FString InFilename;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFilename;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::NewProp_InFilename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::NewProp_InFilename = { "InFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSourceData_eventSetFilename_Parms, InFilename), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::NewProp_InFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::NewProp_InFilename_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSourceData_eventSetFilename_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSourceData_eventSetFilename_Parms), &Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::NewProp_InFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Import Manager" },
		{ "ModuleRelativePath", "Public/InterchangeSourceData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSourceData, nullptr, "SetFilename", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::InterchangeSourceData_eventSetFilename_Parms), Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSourceData_SetFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSourceData_SetFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSourceData);
	UClass* Z_Construct_UClass_UInterchangeSourceData_NoRegister()
	{
		return UInterchangeSourceData::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeSourceData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeSourceData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeSourceData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeSourceData_GetFilename, "GetFilename" }, // 667011458
		{ &Z_Construct_UFunction_UInterchangeSourceData_SetFilename, "SetFilename" }, // 1631327322
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeSourceData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Helper class to be able to read different source data\n * File on disk\n * HTTP URL (TODO)\n * Memory buffer (TODO)\n * Stream (TODO)\n */" },
		{ "IncludePath", "InterchangeSourceData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InterchangeSourceData.h" },
		{ "ToolTip", "* Helper class to be able to read different source data\n* File on disk\n* HTTP URL (TODO)\n* Memory buffer (TODO)\n* Stream (TODO)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeSourceData_Statics::NewProp_Filename_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeSourceData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeSourceData_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeSourceData, Filename), METADATA_PARAMS(Z_Construct_UClass_UInterchangeSourceData_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSourceData_Statics::NewProp_Filename_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeSourceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeSourceData_Statics::NewProp_Filename,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeSourceData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeSourceData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSourceData_Statics::ClassParams = {
		&UInterchangeSourceData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInterchangeSourceData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSourceData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeSourceData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSourceData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeSourceData()
	{
		if (!Z_Registration_Info_UClass_UInterchangeSourceData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSourceData.OuterSingleton, Z_Construct_UClass_UInterchangeSourceData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeSourceData.OuterSingleton;
	}
	template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeSourceData>()
	{
		return UInterchangeSourceData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSourceData);
	UInterchangeSourceData::~UInterchangeSourceData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeSourceData, UInterchangeSourceData::StaticClass, TEXT("UInterchangeSourceData"), &Z_Registration_Info_UClass_UInterchangeSourceData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSourceData), 732129868U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_3218895690(TEXT("/Script/InterchangeCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeSourceData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
