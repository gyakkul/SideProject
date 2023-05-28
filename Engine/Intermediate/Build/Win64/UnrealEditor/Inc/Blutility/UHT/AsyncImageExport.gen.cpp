// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/AsyncImageExport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncImageExport() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UAsyncImageExport();
	BLUTILITY_API UClass* Z_Construct_UClass_UAsyncImageExport_NoRegister();
	BLUTILITY_API UFunction* Z_Construct_UDelegateFunction_Blutility_OnExportImageAsyncComplete__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Blutility();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Blutility_OnExportImageAsyncComplete__DelegateSignature_Statics
	{
		struct _Script_Blutility_eventOnExportImageAsyncComplete_Parms
		{
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_Blutility_OnExportImageAsyncComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_Blutility_eventOnExportImageAsyncComplete_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Blutility_OnExportImageAsyncComplete__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_Blutility_eventOnExportImageAsyncComplete_Parms), &Z_Construct_UDelegateFunction_Blutility_OnExportImageAsyncComplete__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Blutility_OnExportImageAsyncComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Blutility_OnExportImageAsyncComplete__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Blutility_OnExportImageAsyncComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncImageExport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Blutility_OnExportImageAsyncComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Blutility, nullptr, "OnExportImageAsyncComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Blutility_OnExportImageAsyncComplete__DelegateSignature_Statics::_Script_Blutility_eventOnExportImageAsyncComplete_Parms), Z_Construct_UDelegateFunction_Blutility_OnExportImageAsyncComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Blutility_OnExportImageAsyncComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Blutility_OnExportImageAsyncComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Blutility_OnExportImageAsyncComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Blutility_OnExportImageAsyncComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Blutility_OnExportImageAsyncComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnExportImageAsyncComplete_DelegateWrapper(const FMulticastScriptDelegate& OnExportImageAsyncComplete, bool bSuccess)
{
	struct _Script_Blutility_eventOnExportImageAsyncComplete_Parms
	{
		bool bSuccess;
	};
	_Script_Blutility_eventOnExportImageAsyncComplete_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	OnExportImageAsyncComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAsyncImageExport::execExportImageAsync)
	{
		P_GET_OBJECT(UTexture,Z_Param_Texture);
		P_GET_PROPERTY(FStrProperty,Z_Param_OutputFile);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncImageExport**)Z_Param__Result=UAsyncImageExport::ExportImageAsync(Z_Param_Texture,Z_Param_OutputFile,Z_Param_Quality);
		P_NATIVE_END;
	}
	void UAsyncImageExport::StaticRegisterNativesUAsyncImageExport()
	{
		UClass* Class = UAsyncImageExport::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExportImageAsync", &UAsyncImageExport::execExportImageAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncImageExport_ExportImageAsync_Statics
	{
		struct AsyncImageExport_eventExportImageAsync_Parms
		{
			UTexture* Texture;
			FString OutputFile;
			int32 Quality;
			UAsyncImageExport* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputFile_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputFile;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Quality;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncImageExport_ExportImageAsync_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncImageExport_eventExportImageAsync_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncImageExport_ExportImageAsync_Statics::NewProp_OutputFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncImageExport_ExportImageAsync_Statics::NewProp_OutputFile = { "OutputFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncImageExport_eventExportImageAsync_Parms, OutputFile), METADATA_PARAMS(Z_Construct_UFunction_UAsyncImageExport_ExportImageAsync_Statics::NewProp_OutputFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncImageExport_ExportImageAsync_Statics::NewProp_OutputFile_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAsyncImageExport_ExportImageAsync_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncImageExport_eventExportImageAsync_Parms, Quality), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncImageExport_ExportImageAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncImageExport_eventExportImageAsync_Parms, ReturnValue), Z_Construct_UClass_UAsyncImageExport_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncImageExport_ExportImageAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncImageExport_ExportImageAsync_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncImageExport_ExportImageAsync_Statics::NewProp_OutputFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncImageExport_ExportImageAsync_Statics::NewProp_Quality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncImageExport_ExportImageAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncImageExport_ExportImageAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "CPP_Default_Quality", "100" },
		{ "ModuleRelativePath", "Public/AsyncImageExport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncImageExport_ExportImageAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncImageExport, nullptr, "ExportImageAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncImageExport_ExportImageAsync_Statics::AsyncImageExport_eventExportImageAsync_Parms), Z_Construct_UFunction_UAsyncImageExport_ExportImageAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncImageExport_ExportImageAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncImageExport_ExportImageAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncImageExport_ExportImageAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncImageExport_ExportImageAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncImageExport_ExportImageAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncImageExport);
	UClass* Z_Construct_UClass_UAsyncImageExport_NoRegister()
	{
		return UAsyncImageExport::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncImageExport_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Complete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Complete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureToExport_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextureToExport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetFile_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetFile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncImageExport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncImageExport_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncImageExport_ExportImageAsync, "ExportImageAsync" }, // 2550438948
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncImageExport_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncImageExport.h" },
		{ "ModuleRelativePath", "Public/AsyncImageExport.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncImageExport_Statics::NewProp_Complete_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncImageExport.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncImageExport_Statics::NewProp_Complete = { "Complete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncImageExport, Complete), Z_Construct_UDelegateFunction_Blutility_OnExportImageAsyncComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncImageExport_Statics::NewProp_Complete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncImageExport_Statics::NewProp_Complete_MetaData)) }; // 2221465570
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncImageExport_Statics::NewProp_TextureToExport_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncImageExport.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAsyncImageExport_Statics::NewProp_TextureToExport = { "TextureToExport", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncImageExport, TextureToExport), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAsyncImageExport_Statics::NewProp_TextureToExport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncImageExport_Statics::NewProp_TextureToExport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncImageExport_Statics::NewProp_Quality_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncImageExport.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAsyncImageExport_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncImageExport, Quality), METADATA_PARAMS(Z_Construct_UClass_UAsyncImageExport_Statics::NewProp_Quality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncImageExport_Statics::NewProp_Quality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncImageExport_Statics::NewProp_TargetFile_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncImageExport.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAsyncImageExport_Statics::NewProp_TargetFile = { "TargetFile", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncImageExport, TargetFile), METADATA_PARAMS(Z_Construct_UClass_UAsyncImageExport_Statics::NewProp_TargetFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncImageExport_Statics::NewProp_TargetFile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncImageExport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncImageExport_Statics::NewProp_Complete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncImageExport_Statics::NewProp_TextureToExport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncImageExport_Statics::NewProp_Quality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncImageExport_Statics::NewProp_TargetFile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncImageExport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncImageExport>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncImageExport_Statics::ClassParams = {
		&UAsyncImageExport::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncImageExport_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncImageExport_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncImageExport_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncImageExport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncImageExport()
	{
		if (!Z_Registration_Info_UClass_UAsyncImageExport.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncImageExport.OuterSingleton, Z_Construct_UClass_UAsyncImageExport_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncImageExport.OuterSingleton;
	}
	template<> BLUTILITY_API UClass* StaticClass<UAsyncImageExport>()
	{
		return UAsyncImageExport::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncImageExport);
	UAsyncImageExport::~UAsyncImageExport() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncImageExport, UAsyncImageExport::StaticClass, TEXT("UAsyncImageExport"), &Z_Registration_Info_UClass_UAsyncImageExport, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncImageExport), 4013558938U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_1571978250(TEXT("/Script/Blutility"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
