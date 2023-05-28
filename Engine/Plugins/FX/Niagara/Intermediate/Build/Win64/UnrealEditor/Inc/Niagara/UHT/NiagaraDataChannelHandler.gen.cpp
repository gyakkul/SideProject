// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraDataChannelHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataChannelHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelHandler();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelReader_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelWriter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	DEFINE_FUNCTION(UNiagaraDataChannelHandler::execGetDataChannelReader)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraDataChannelReader**)Z_Param__Result=P_THIS->GetDataChannelReader();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataChannelHandler::execGetDataChannelWriter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraDataChannelWriter**)Z_Param__Result=P_THIS->GetDataChannelWriter();
		P_NATIVE_END;
	}
	void UNiagaraDataChannelHandler::StaticRegisterNativesUNiagaraDataChannelHandler()
	{
		UClass* Class = UNiagaraDataChannelHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDataChannelReader", &UNiagaraDataChannelHandler::execGetDataChannelReader },
			{ "GetDataChannelWriter", &UNiagaraDataChannelHandler::execGetDataChannelWriter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader_Statics
	{
		struct NiagaraDataChannelHandler_eventGetDataChannelReader_Parms
		{
			UNiagaraDataChannelReader* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelHandler_eventGetDataChannelReader_Parms, ReturnValue), Z_Construct_UClass_UNiagaraDataChannelReader_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Channel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelHandler, nullptr, "GetDataChannelReader", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader_Statics::NiagaraDataChannelHandler_eventGetDataChannelReader_Parms), Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter_Statics
	{
		struct NiagaraDataChannelHandler_eventGetDataChannelWriter_Parms
		{
			UNiagaraDataChannelWriter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelHandler_eventGetDataChannelWriter_Parms, ReturnValue), Z_Construct_UClass_UNiagaraDataChannelWriter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Channel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelHandler, nullptr, "GetDataChannelWriter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter_Statics::NiagaraDataChannelHandler_eventGetDataChannelWriter_Parms), Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataChannelHandler);
	UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_NoRegister()
	{
		return UNiagaraDataChannelHandler::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataChannelHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataChannel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Writer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Writer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reader_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Reader;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelReader, "GetDataChannelReader" }, // 3019647186
		{ &Z_Construct_UFunction_UNiagaraDataChannelHandler_GetDataChannelWriter, "GetDataChannelWriter" }, // 1159030324
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "NiagaraDataChannelHandler.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelHandler.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::NewProp_DataChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDataChannelHandler.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::NewProp_DataChannel = { "DataChannel", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataChannelHandler, DataChannel), Z_Construct_UClass_UNiagaraDataChannel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::NewProp_DataChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::NewProp_DataChannel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::NewProp_Writer_MetaData[] = {
		{ "Comment", "/** Helper object allowing BP to write data in this channel. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelHandler.h" },
		{ "ToolTip", "Helper object allowing BP to write data in this channel." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::NewProp_Writer = { "Writer", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataChannelHandler, Writer), Z_Construct_UClass_UNiagaraDataChannelWriter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::NewProp_Writer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::NewProp_Writer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::NewProp_Reader_MetaData[] = {
		{ "Comment", "/** Helper object allowing BP to read data in this channel. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelHandler.h" },
		{ "ToolTip", "Helper object allowing BP to read data in this channel." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::NewProp_Reader = { "Reader", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataChannelHandler, Reader), Z_Construct_UClass_UNiagaraDataChannelReader_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::NewProp_Reader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::NewProp_Reader_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::NewProp_DataChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::NewProp_Writer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::NewProp_Reader,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataChannelHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::ClassParams = {
		&UNiagaraDataChannelHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataChannelHandler()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataChannelHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataChannelHandler.OuterSingleton, Z_Construct_UClass_UNiagaraDataChannelHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataChannelHandler.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataChannelHandler>()
	{
		return UNiagaraDataChannelHandler::StaticClass();
	}
	UNiagaraDataChannelHandler::UNiagaraDataChannelHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataChannelHandler);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataChannelHandler, UNiagaraDataChannelHandler::StaticClass, TEXT("UNiagaraDataChannelHandler"), &Z_Registration_Info_UClass_UNiagaraDataChannelHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataChannelHandler), 1099430216U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h_3550250581(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannelHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
