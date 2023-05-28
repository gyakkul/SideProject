// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DirectLinkExtensionBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectLinkExtensionBlueprintLibrary() {}
// Cross Module References
	DIRECTLINKEXTENSION_API UClass* Z_Construct_UClass_UDirectLinkExtensionBlueprintLibrary();
	DIRECTLINKEXTENSION_API UClass* Z_Construct_UClass_UDirectLinkExtensionBlueprintLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DirectLinkExtension();
// End Cross Module References
	DEFINE_FUNCTION(UDirectLinkExtensionBlueprintLibrary::execParseDirectLinkSourceUri)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SourceUriString);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutComputerName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutEndpointName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutExecutableName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutSourceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDirectLinkExtensionBlueprintLibrary::ParseDirectLinkSourceUri(Z_Param_SourceUriString,Z_Param_Out_OutComputerName,Z_Param_Out_OutEndpointName,Z_Param_Out_OutExecutableName,Z_Param_Out_OutSourceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDirectLinkExtensionBlueprintLibrary::execGetAvailableDirectLinkSourcesUri)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UDirectLinkExtensionBlueprintLibrary::GetAvailableDirectLinkSourcesUri();
		P_NATIVE_END;
	}
	void UDirectLinkExtensionBlueprintLibrary::StaticRegisterNativesUDirectLinkExtensionBlueprintLibrary()
	{
		UClass* Class = UDirectLinkExtensionBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAvailableDirectLinkSourcesUri", &UDirectLinkExtensionBlueprintLibrary::execGetAvailableDirectLinkSourcesUri },
			{ "ParseDirectLinkSourceUri", &UDirectLinkExtensionBlueprintLibrary::execParseDirectLinkSourceUri },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_GetAvailableDirectLinkSourcesUri_Statics
	{
		struct DirectLinkExtensionBlueprintLibrary_eventGetAvailableDirectLinkSourcesUri_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_GetAvailableDirectLinkSourcesUri_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_GetAvailableDirectLinkSourcesUri_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectLinkExtensionBlueprintLibrary_eventGetAvailableDirectLinkSourcesUri_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_GetAvailableDirectLinkSourcesUri_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_GetAvailableDirectLinkSourcesUri_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_GetAvailableDirectLinkSourcesUri_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_GetAvailableDirectLinkSourcesUri_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | DirectLink" },
		{ "ModuleRelativePath", "Public/DirectLinkExtensionBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_GetAvailableDirectLinkSourcesUri_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectLinkExtensionBlueprintLibrary, nullptr, "GetAvailableDirectLinkSourcesUri", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_GetAvailableDirectLinkSourcesUri_Statics::DirectLinkExtensionBlueprintLibrary_eventGetAvailableDirectLinkSourcesUri_Parms), Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_GetAvailableDirectLinkSourcesUri_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_GetAvailableDirectLinkSourcesUri_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_GetAvailableDirectLinkSourcesUri_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_GetAvailableDirectLinkSourcesUri_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_GetAvailableDirectLinkSourcesUri()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_GetAvailableDirectLinkSourcesUri_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics
	{
		struct DirectLinkExtensionBlueprintLibrary_eventParseDirectLinkSourceUri_Parms
		{
			FString SourceUriString;
			FString OutComputerName;
			FString OutEndpointName;
			FString OutExecutableName;
			FString OutSourceName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceUriString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceUriString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutComputerName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutEndpointName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutExecutableName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutSourceName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics::NewProp_SourceUriString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics::NewProp_SourceUriString = { "SourceUriString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectLinkExtensionBlueprintLibrary_eventParseDirectLinkSourceUri_Parms, SourceUriString), METADATA_PARAMS(Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics::NewProp_SourceUriString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics::NewProp_SourceUriString_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics::NewProp_OutComputerName = { "OutComputerName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectLinkExtensionBlueprintLibrary_eventParseDirectLinkSourceUri_Parms, OutComputerName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics::NewProp_OutEndpointName = { "OutEndpointName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectLinkExtensionBlueprintLibrary_eventParseDirectLinkSourceUri_Parms, OutEndpointName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics::NewProp_OutExecutableName = { "OutExecutableName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectLinkExtensionBlueprintLibrary_eventParseDirectLinkSourceUri_Parms, OutExecutableName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics::NewProp_OutSourceName = { "OutSourceName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DirectLinkExtensionBlueprintLibrary_eventParseDirectLinkSourceUri_Parms, OutSourceName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DirectLinkExtensionBlueprintLibrary_eventParseDirectLinkSourceUri_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DirectLinkExtensionBlueprintLibrary_eventParseDirectLinkSourceUri_Parms), &Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics::NewProp_SourceUriString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics::NewProp_OutComputerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics::NewProp_OutEndpointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics::NewProp_OutExecutableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics::NewProp_OutSourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | DirectLink" },
		{ "ModuleRelativePath", "Public/DirectLinkExtensionBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectLinkExtensionBlueprintLibrary, nullptr, "ParseDirectLinkSourceUri", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics::DirectLinkExtensionBlueprintLibrary_eventParseDirectLinkSourceUri_Parms), Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDirectLinkExtensionBlueprintLibrary);
	UClass* Z_Construct_UClass_UDirectLinkExtensionBlueprintLibrary_NoRegister()
	{
		return UDirectLinkExtensionBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDirectLinkExtensionBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDirectLinkExtensionBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DirectLinkExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDirectLinkExtensionBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_GetAvailableDirectLinkSourcesUri, "GetAvailableDirectLinkSourcesUri" }, // 4117676820
		{ &Z_Construct_UFunction_UDirectLinkExtensionBlueprintLibrary_ParseDirectLinkSourceUri, "ParseDirectLinkSourceUri" }, // 2883630394
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectLinkExtensionBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DirectLinkExtensionBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/DirectLinkExtensionBlueprintLibrary.h" },
		{ "ScriptName", "DirectLinkExtensionLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDirectLinkExtensionBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDirectLinkExtensionBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDirectLinkExtensionBlueprintLibrary_Statics::ClassParams = {
		&UDirectLinkExtensionBlueprintLibrary::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDirectLinkExtensionBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectLinkExtensionBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDirectLinkExtensionBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UDirectLinkExtensionBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDirectLinkExtensionBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UDirectLinkExtensionBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDirectLinkExtensionBlueprintLibrary.OuterSingleton;
	}
	template<> DIRECTLINKEXTENSION_API UClass* StaticClass<UDirectLinkExtensionBlueprintLibrary>()
	{
		return UDirectLinkExtensionBlueprintLibrary::StaticClass();
	}
	UDirectLinkExtensionBlueprintLibrary::UDirectLinkExtensionBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDirectLinkExtensionBlueprintLibrary);
	UDirectLinkExtensionBlueprintLibrary::~UDirectLinkExtensionBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DirectLinkExtension_Public_DirectLinkExtensionBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DirectLinkExtension_Public_DirectLinkExtensionBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDirectLinkExtensionBlueprintLibrary, UDirectLinkExtensionBlueprintLibrary::StaticClass, TEXT("UDirectLinkExtensionBlueprintLibrary"), &Z_Registration_Info_UClass_UDirectLinkExtensionBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDirectLinkExtensionBlueprintLibrary), 325557484U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DirectLinkExtension_Public_DirectLinkExtensionBlueprintLibrary_h_1913079712(TEXT("/Script/DirectLinkExtension"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DirectLinkExtension_Public_DirectLinkExtensionBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DirectLinkExtension_Public_DirectLinkExtensionBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
