// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithRuntimeBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithRuntimeBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DATASMITHRUNTIME_API UClass* Z_Construct_UClass_ADatasmithRuntimeActor_NoRegister();
	DATASMITHRUNTIME_API UClass* Z_Construct_UClass_UDatasmithRuntimeLibrary();
	DATASMITHRUNTIME_API UClass* Z_Construct_UClass_UDatasmithRuntimeLibrary_NoRegister();
	DATASMITHRUNTIME_API UClass* Z_Construct_UClass_UDirectLinkProxy();
	DATASMITHRUNTIME_API UClass* Z_Construct_UClass_UDirectLinkProxy_NoRegister();
	DATASMITHRUNTIME_API UFunction* Z_Construct_UDelegateFunction_DatasmithRuntime_DatasmithRuntimeChangeEvent__DelegateSignature();
	DATASMITHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithRuntimeSourceInfo();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DatasmithRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatasmithRuntimeSourceInfo;
class UScriptStruct* FDatasmithRuntimeSourceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithRuntimeSourceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatasmithRuntimeSourceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithRuntimeSourceInfo, (UObject*)Z_Construct_UPackage__Script_DatasmithRuntime(), TEXT("DatasmithRuntimeSourceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DatasmithRuntimeSourceInfo.OuterSingleton;
}
template<> DATASMITHRUNTIME_API UScriptStruct* StaticStruct<FDatasmithRuntimeSourceInfo>()
{
	return FDatasmithRuntimeSourceInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDatasmithRuntimeSourceInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithRuntimeSourceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DatasmithRuntimeBlueprintLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatasmithRuntimeSourceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithRuntimeSourceInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithRuntimeSourceInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "DatasmithRuntime" },
		{ "ModuleRelativePath", "Public/DatasmithRuntimeBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDatasmithRuntimeSourceInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDatasmithRuntimeSourceInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithRuntimeSourceInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithRuntimeSourceInfo_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithRuntimeSourceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithRuntimeSourceInfo_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithRuntimeSourceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithRuntime,
		nullptr,
		&NewStructOps,
		"DatasmithRuntimeSourceInfo",
		sizeof(FDatasmithRuntimeSourceInfo),
		alignof(FDatasmithRuntimeSourceInfo),
		Z_Construct_UScriptStruct_FDatasmithRuntimeSourceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithRuntimeSourceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithRuntimeSourceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithRuntimeSourceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatasmithRuntimeSourceInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_DatasmithRuntimeSourceInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatasmithRuntimeSourceInfo.InnerSingleton, Z_Construct_UScriptStruct_FDatasmithRuntimeSourceInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DatasmithRuntimeSourceInfo.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_DatasmithRuntime_DatasmithRuntimeChangeEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DatasmithRuntime_DatasmithRuntimeChangeEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DatasmithRuntimeBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DatasmithRuntime_DatasmithRuntimeChangeEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DatasmithRuntime, nullptr, "DatasmithRuntimeChangeEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DatasmithRuntime_DatasmithRuntimeChangeEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DatasmithRuntime_DatasmithRuntimeChangeEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DatasmithRuntime_DatasmithRuntimeChangeEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DatasmithRuntime_DatasmithRuntimeChangeEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDatasmithRuntimeChangeEvent_DelegateWrapper(const FMulticastScriptDelegate& DatasmithRuntimeChangeEvent)
{
	DatasmithRuntimeChangeEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UDirectLinkProxy::execGetListOfSources)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDatasmithRuntimeSourceInfo>*)Z_Param__Result=P_THIS->GetListOfSources();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectLinkProxy::execGetEndPointName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetEndPointName();
		P_NATIVE_END;
	}
	void UDirectLinkProxy::StaticRegisterNativesUDirectLinkProxy()
	{
		UClass* Class = UDirectLinkProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEndPointName", &UDirectLinkProxy::execGetEndPointName },
			{ "GetListOfSources", &UDirectLinkProxy::execGetListOfSources },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDirectLinkProxy_GetEndPointName_Statics
	{
		struct DirectLinkProxy_eventGetEndPointName_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDirectLinkProxy_GetEndPointName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectLinkProxy_eventGetEndPointName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectLinkProxy_GetEndPointName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkProxy_GetEndPointName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectLinkProxy_GetEndPointName_Statics::Function_MetaDataParams[] = {
		{ "Category", "DirectLink" },
		{ "ModuleRelativePath", "Public/DatasmithRuntimeBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectLinkProxy_GetEndPointName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectLinkProxy, nullptr, "GetEndPointName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectLinkProxy_GetEndPointName_Statics::DirectLinkProxy_eventGetEndPointName_Parms), Z_Construct_UFunction_UDirectLinkProxy_GetEndPointName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkProxy_GetEndPointName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectLinkProxy_GetEndPointName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkProxy_GetEndPointName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectLinkProxy_GetEndPointName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectLinkProxy_GetEndPointName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectLinkProxy_GetListOfSources_Statics
	{
		struct DirectLinkProxy_eventGetListOfSources_Parms
		{
			TArray<FDatasmithRuntimeSourceInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDirectLinkProxy_GetListOfSources_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDatasmithRuntimeSourceInfo, METADATA_PARAMS(nullptr, 0) }; // 3294375039
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDirectLinkProxy_GetListOfSources_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectLinkProxy_eventGetListOfSources_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3294375039
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectLinkProxy_GetListOfSources_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkProxy_GetListOfSources_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkProxy_GetListOfSources_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectLinkProxy_GetListOfSources_Statics::Function_MetaDataParams[] = {
		{ "Category", "DirectLink" },
		{ "ModuleRelativePath", "Public/DatasmithRuntimeBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectLinkProxy_GetListOfSources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectLinkProxy, nullptr, "GetListOfSources", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectLinkProxy_GetListOfSources_Statics::DirectLinkProxy_eventGetListOfSources_Parms), Z_Construct_UFunction_UDirectLinkProxy_GetListOfSources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkProxy_GetListOfSources_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectLinkProxy_GetListOfSources_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkProxy_GetListOfSources_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectLinkProxy_GetListOfSources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectLinkProxy_GetListOfSources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDirectLinkProxy);
	UClass* Z_Construct_UClass_UDirectLinkProxy_NoRegister()
	{
		return UDirectLinkProxy::StaticClass();
	}
	struct Z_Construct_UClass_UDirectLinkProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDirectLinkChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDirectLinkChange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDirectLinkProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDirectLinkProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDirectLinkProxy_GetEndPointName, "GetEndPointName" }, // 3765880856
		{ &Z_Construct_UFunction_UDirectLinkProxy_GetListOfSources, "GetListOfSources" }, // 4239648080
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectLinkProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Class to interface with the DirectLink end point\n" },
		{ "IncludePath", "DatasmithRuntimeBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/DatasmithRuntimeBlueprintLibrary.h" },
		{ "ToolTip", "Class to interface with the DirectLink end point" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectLinkProxy_Statics::NewProp_OnDirectLinkChange_MetaData[] = {
		{ "Comment", "// Dynamic delegate used to trigger an event in the Game when there is\n// a change in the DirectLink network\n" },
		{ "ModuleRelativePath", "Public/DatasmithRuntimeBlueprintLibrary.h" },
		{ "ToolTip", "Dynamic delegate used to trigger an event in the Game when there is\na change in the DirectLink network" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDirectLinkProxy_Statics::NewProp_OnDirectLinkChange = { "OnDirectLinkChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectLinkProxy, OnDirectLinkChange), Z_Construct_UDelegateFunction_DatasmithRuntime_DatasmithRuntimeChangeEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDirectLinkProxy_Statics::NewProp_OnDirectLinkChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectLinkProxy_Statics::NewProp_OnDirectLinkChange_MetaData)) }; // 1758351995
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDirectLinkProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectLinkProxy_Statics::NewProp_OnDirectLinkChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDirectLinkProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDirectLinkProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDirectLinkProxy_Statics::ClassParams = {
		&UDirectLinkProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDirectLinkProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDirectLinkProxy_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDirectLinkProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectLinkProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDirectLinkProxy()
	{
		if (!Z_Registration_Info_UClass_UDirectLinkProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDirectLinkProxy.OuterSingleton, Z_Construct_UClass_UDirectLinkProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDirectLinkProxy.OuterSingleton;
	}
	template<> DATASMITHRUNTIME_API UClass* StaticClass<UDirectLinkProxy>()
	{
		return UDirectLinkProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDirectLinkProxy);
	DEFINE_FUNCTION(UDatasmithRuntimeLibrary::execLoadFileFromExplorer)
	{
		P_GET_OBJECT(ADatasmithRuntimeActor,Z_Param_DatasmithRuntimeActor);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDatasmithRuntimeLibrary::LoadFileFromExplorer(Z_Param_DatasmithRuntimeActor,Z_Param_DefaultPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithRuntimeLibrary::execGetDirectLinkProxy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDirectLinkProxy**)Z_Param__Result=UDatasmithRuntimeLibrary::GetDirectLinkProxy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithRuntimeLibrary::execResetActor)
	{
		P_GET_OBJECT(ADatasmithRuntimeActor,Z_Param_DatasmithRuntimeActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDatasmithRuntimeLibrary::ResetActor(Z_Param_DatasmithRuntimeActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithRuntimeLibrary::execLoadFile)
	{
		P_GET_OBJECT(ADatasmithRuntimeActor,Z_Param_DatasmithRuntimeActor);
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDatasmithRuntimeLibrary::LoadFile(Z_Param_DatasmithRuntimeActor,Z_Param_FilePath);
		P_NATIVE_END;
	}
	void UDatasmithRuntimeLibrary::StaticRegisterNativesUDatasmithRuntimeLibrary()
	{
		UClass* Class = UDatasmithRuntimeLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDirectLinkProxy", &UDatasmithRuntimeLibrary::execGetDirectLinkProxy },
			{ "LoadFile", &UDatasmithRuntimeLibrary::execLoadFile },
			{ "LoadFileFromExplorer", &UDatasmithRuntimeLibrary::execLoadFileFromExplorer },
			{ "ResetActor", &UDatasmithRuntimeLibrary::execResetActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatasmithRuntimeLibrary_GetDirectLinkProxy_Statics
	{
		struct DatasmithRuntimeLibrary_eventGetDirectLinkProxy_Parms
		{
			UDirectLinkProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithRuntimeLibrary_GetDirectLinkProxy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithRuntimeLibrary_eventGetDirectLinkProxy_Parms, ReturnValue), Z_Construct_UClass_UDirectLinkProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithRuntimeLibrary_GetDirectLinkProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithRuntimeLibrary_GetDirectLinkProxy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithRuntimeLibrary_GetDirectLinkProxy_Statics::Function_MetaDataParams[] = {
		{ "Category", "DatasmithRuntime" },
		{ "Comment", "/** Returns an interface to the DirectLink end point */" },
		{ "ModuleRelativePath", "Public/DatasmithRuntimeBlueprintLibrary.h" },
		{ "ToolTip", "Returns an interface to the DirectLink end point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithRuntimeLibrary_GetDirectLinkProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithRuntimeLibrary, nullptr, "GetDirectLinkProxy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithRuntimeLibrary_GetDirectLinkProxy_Statics::DatasmithRuntimeLibrary_eventGetDirectLinkProxy_Parms), Z_Construct_UFunction_UDatasmithRuntimeLibrary_GetDirectLinkProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithRuntimeLibrary_GetDirectLinkProxy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithRuntimeLibrary_GetDirectLinkProxy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithRuntimeLibrary_GetDirectLinkProxy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithRuntimeLibrary_GetDirectLinkProxy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithRuntimeLibrary_GetDirectLinkProxy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFile_Statics
	{
		struct DatasmithRuntimeLibrary_eventLoadFile_Parms
		{
			ADatasmithRuntimeActor* DatasmithRuntimeActor;
			FString FilePath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DatasmithRuntimeActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFile_Statics::NewProp_DatasmithRuntimeActor = { "DatasmithRuntimeActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithRuntimeLibrary_eventLoadFile_Parms, DatasmithRuntimeActor), Z_Construct_UClass_ADatasmithRuntimeActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFile_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithRuntimeLibrary_eventLoadFile_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFile_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFile_Statics::NewProp_FilePath_MetaData)) };
	void Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DatasmithRuntimeLibrary_eventLoadFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithRuntimeLibrary_eventLoadFile_Parms), &Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFile_Statics::NewProp_DatasmithRuntimeActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFile_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "DatasmithRuntime" },
		{ "Comment", "/**\n\x09 * Load a file using the Datasmith translator associated with it\n\x09 * @param DatasmithRuntimeActor\x09The actor to load the file into\n\x09 * @param FilePath The path to the file to load.\n\x09 * @return\x09true if an associated translator has been \n\x09 */" },
		{ "ModuleRelativePath", "Public/DatasmithRuntimeBlueprintLibrary.h" },
		{ "ToolTip", "Load a file using the Datasmith translator associated with it\n@param DatasmithRuntimeActor The actor to load the file into\n@param FilePath The path to the file to load.\n@return      true if an associated translator has been" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithRuntimeLibrary, nullptr, "LoadFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFile_Statics::DatasmithRuntimeLibrary_eventLoadFile_Parms), Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFileFromExplorer_Statics
	{
		struct DatasmithRuntimeLibrary_eventLoadFileFromExplorer_Parms
		{
			ADatasmithRuntimeActor* DatasmithRuntimeActor;
			FString DefaultPath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DatasmithRuntimeActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFileFromExplorer_Statics::NewProp_DatasmithRuntimeActor = { "DatasmithRuntimeActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithRuntimeLibrary_eventLoadFileFromExplorer_Parms, DatasmithRuntimeActor), Z_Construct_UClass_ADatasmithRuntimeActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFileFromExplorer_Statics::NewProp_DefaultPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFileFromExplorer_Statics::NewProp_DefaultPath = { "DefaultPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithRuntimeLibrary_eventLoadFileFromExplorer_Parms, DefaultPath), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFileFromExplorer_Statics::NewProp_DefaultPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFileFromExplorer_Statics::NewProp_DefaultPath_MetaData)) };
	void Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFileFromExplorer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DatasmithRuntimeLibrary_eventLoadFileFromExplorer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFileFromExplorer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithRuntimeLibrary_eventLoadFileFromExplorer_Parms), &Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFileFromExplorer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFileFromExplorer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFileFromExplorer_Statics::NewProp_DatasmithRuntimeActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFileFromExplorer_Statics::NewProp_DefaultPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFileFromExplorer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFileFromExplorer_Statics::Function_MetaDataParams[] = {
		{ "Category", "DatasmithRuntimeHelper" },
		{ "Comment", "/**\n\x09 * Open a file browser to select a file and call LoadFile with the selected file\n\x09 * @param DatasmithRuntimeActor\x09The actor to load the file into\n\x09 * @param DefaultPath Path to open the file browser in.\n\x09 * @return\x09true if an associated translator has been \n\x09 */" },
		{ "ModuleRelativePath", "Public/DatasmithRuntimeBlueprintLibrary.h" },
		{ "ToolTip", "Open a file browser to select a file and call LoadFile with the selected file\n@param DatasmithRuntimeActor The actor to load the file into\n@param DefaultPath Path to open the file browser in.\n@return      true if an associated translator has been" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFileFromExplorer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithRuntimeLibrary, nullptr, "LoadFileFromExplorer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFileFromExplorer_Statics::DatasmithRuntimeLibrary_eventLoadFileFromExplorer_Parms), Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFileFromExplorer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFileFromExplorer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFileFromExplorer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFileFromExplorer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFileFromExplorer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFileFromExplorer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithRuntimeLibrary_ResetActor_Statics
	{
		struct DatasmithRuntimeLibrary_eventResetActor_Parms
		{
			ADatasmithRuntimeActor* DatasmithRuntimeActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DatasmithRuntimeActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithRuntimeLibrary_ResetActor_Statics::NewProp_DatasmithRuntimeActor = { "DatasmithRuntimeActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithRuntimeLibrary_eventResetActor_Parms, DatasmithRuntimeActor), Z_Construct_UClass_ADatasmithRuntimeActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithRuntimeLibrary_ResetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithRuntimeLibrary_ResetActor_Statics::NewProp_DatasmithRuntimeActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithRuntimeLibrary_ResetActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "DatasmithRuntime" },
		{ "ModuleRelativePath", "Public/DatasmithRuntimeBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithRuntimeLibrary_ResetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithRuntimeLibrary, nullptr, "ResetActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithRuntimeLibrary_ResetActor_Statics::DatasmithRuntimeLibrary_eventResetActor_Parms), Z_Construct_UFunction_UDatasmithRuntimeLibrary_ResetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithRuntimeLibrary_ResetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithRuntimeLibrary_ResetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithRuntimeLibrary_ResetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithRuntimeLibrary_ResetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithRuntimeLibrary_ResetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithRuntimeLibrary);
	UClass* Z_Construct_UClass_UDatasmithRuntimeLibrary_NoRegister()
	{
		return UDatasmithRuntimeLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithRuntimeLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithRuntimeLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasmithRuntimeLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatasmithRuntimeLibrary_GetDirectLinkProxy, "GetDirectLinkProxy" }, // 3234025394
		{ &Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFile, "LoadFile" }, // 3445015578
		{ &Z_Construct_UFunction_UDatasmithRuntimeLibrary_LoadFileFromExplorer, "LoadFileFromExplorer" }, // 3874001451
		{ &Z_Construct_UFunction_UDatasmithRuntimeLibrary_ResetActor, "ResetActor" }, // 1418696287
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithRuntimeLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithRuntimeBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/DatasmithRuntimeBlueprintLibrary.h" },
		{ "ScriptName", "DatasmithRuntimeLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithRuntimeLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithRuntimeLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithRuntimeLibrary_Statics::ClassParams = {
		&UDatasmithRuntimeLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithRuntimeLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithRuntimeLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithRuntimeLibrary()
	{
		if (!Z_Registration_Info_UClass_UDatasmithRuntimeLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithRuntimeLibrary.OuterSingleton, Z_Construct_UClass_UDatasmithRuntimeLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithRuntimeLibrary.OuterSingleton;
	}
	template<> DATASMITHRUNTIME_API UClass* StaticClass<UDatasmithRuntimeLibrary>()
	{
		return UDatasmithRuntimeLibrary::StaticClass();
	}
	UDatasmithRuntimeLibrary::UDatasmithRuntimeLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithRuntimeLibrary);
	UDatasmithRuntimeLibrary::~UDatasmithRuntimeLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h_Statics::ScriptStructInfo[] = {
		{ FDatasmithRuntimeSourceInfo::StaticStruct, Z_Construct_UScriptStruct_FDatasmithRuntimeSourceInfo_Statics::NewStructOps, TEXT("DatasmithRuntimeSourceInfo"), &Z_Registration_Info_UScriptStruct_DatasmithRuntimeSourceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatasmithRuntimeSourceInfo), 3294375039U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDirectLinkProxy, UDirectLinkProxy::StaticClass, TEXT("UDirectLinkProxy"), &Z_Registration_Info_UClass_UDirectLinkProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDirectLinkProxy), 104910974U) },
		{ Z_Construct_UClass_UDatasmithRuntimeLibrary, UDatasmithRuntimeLibrary::StaticClass, TEXT("UDatasmithRuntimeLibrary"), &Z_Registration_Info_UClass_UDatasmithRuntimeLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithRuntimeLibrary), 2637334244U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h_1069085810(TEXT("/Script/DatasmithRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntimeBlueprintLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
