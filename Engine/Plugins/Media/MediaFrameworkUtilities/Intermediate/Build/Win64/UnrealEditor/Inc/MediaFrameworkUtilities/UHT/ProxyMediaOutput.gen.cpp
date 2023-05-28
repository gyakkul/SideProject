// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaAssets/ProxyMediaOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProxyMediaOutput() {}
// Cross Module References
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UProxyMediaOutput();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UProxyMediaOutput_NoRegister();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaOutput();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaOutput_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MediaFrameworkUtilities();
// End Cross Module References
	DEFINE_FUNCTION(UProxyMediaOutput::execIsProxyValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsProxyValid();
		P_NATIVE_END;
	}
	void UProxyMediaOutput::StaticRegisterNativesUProxyMediaOutput()
	{
		UClass* Class = UProxyMediaOutput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsProxyValid", &UProxyMediaOutput::execIsProxyValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProxyMediaOutput_IsProxyValid_Statics
	{
		struct ProxyMediaOutput_eventIsProxyValid_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UProxyMediaOutput_IsProxyValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ProxyMediaOutput_eventIsProxyValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProxyMediaOutput_IsProxyValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ProxyMediaOutput_eventIsProxyValid_Parms), &Z_Construct_UFunction_UProxyMediaOutput_IsProxyValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProxyMediaOutput_IsProxyValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProxyMediaOutput_IsProxyValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProxyMediaOutput_IsProxyValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media Proxy" },
		{ "Comment", "/**\n\x09 * Is the media proxy has a valid proxy.\n\x09 *\n\x09 * @return true if the proxy is valid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaAssets/ProxyMediaOutput.h" },
		{ "ToolTip", "Is the media proxy has a valid proxy.\n\n@return true if the proxy is valid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProxyMediaOutput_IsProxyValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProxyMediaOutput, nullptr, "IsProxyValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProxyMediaOutput_IsProxyValid_Statics::ProxyMediaOutput_eventIsProxyValid_Parms), Z_Construct_UFunction_UProxyMediaOutput_IsProxyValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProxyMediaOutput_IsProxyValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProxyMediaOutput_IsProxyValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProxyMediaOutput_IsProxyValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProxyMediaOutput_IsProxyValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProxyMediaOutput_IsProxyValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProxyMediaOutput);
	UClass* Z_Construct_UClass_UProxyMediaOutput_NoRegister()
	{
		return UProxyMediaOutput::StaticClass();
	}
	struct Z_Construct_UClass_UProxyMediaOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Proxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Proxy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProxyMediaOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMediaOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaFrameworkUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProxyMediaOutput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProxyMediaOutput_IsProxyValid, "IsProxyValid" }, // 3779380405
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyMediaOutput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A media output that redirect to another media output.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MediaAssets/ProxyMediaOutput.h" },
		{ "ModuleRelativePath", "Public/MediaAssets/ProxyMediaOutput.h" },
		{ "ToolTip", "A media output that redirect to another media output." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyMediaOutput_Statics::NewProp_DynamicProxy_MetaData[] = {
		{ "Comment", "/** Dynamic media output proxy. */" },
		{ "ModuleRelativePath", "Public/MediaAssets/ProxyMediaOutput.h" },
		{ "ToolTip", "Dynamic media output proxy." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UProxyMediaOutput_Statics::NewProp_DynamicProxy = { "DynamicProxy", nullptr, (EPropertyFlags)0x0044000000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProxyMediaOutput, DynamicProxy), Z_Construct_UClass_UMediaOutput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProxyMediaOutput_Statics::NewProp_DynamicProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProxyMediaOutput_Statics::NewProp_DynamicProxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyMediaOutput_Statics::NewProp_Proxy_MetaData[] = {
		{ "Category", "Media Proxy" },
		{ "Comment", "/** Media output proxy. */" },
		{ "ModuleRelativePath", "Public/MediaAssets/ProxyMediaOutput.h" },
		{ "ToolTip", "Media output proxy." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UProxyMediaOutput_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProxyMediaOutput, Proxy), Z_Construct_UClass_UMediaOutput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProxyMediaOutput_Statics::NewProp_Proxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProxyMediaOutput_Statics::NewProp_Proxy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProxyMediaOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProxyMediaOutput_Statics::NewProp_DynamicProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProxyMediaOutput_Statics::NewProp_Proxy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProxyMediaOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProxyMediaOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProxyMediaOutput_Statics::ClassParams = {
		&UProxyMediaOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProxyMediaOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UProxyMediaOutput_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProxyMediaOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProxyMediaOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProxyMediaOutput()
	{
		if (!Z_Registration_Info_UClass_UProxyMediaOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProxyMediaOutput.OuterSingleton, Z_Construct_UClass_UProxyMediaOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProxyMediaOutput.OuterSingleton;
	}
	template<> MEDIAFRAMEWORKUTILITIES_API UClass* StaticClass<UProxyMediaOutput>()
	{
		return UProxyMediaOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProxyMediaOutput);
	UProxyMediaOutput::~UProxyMediaOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaOutput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProxyMediaOutput, UProxyMediaOutput::StaticClass, TEXT("UProxyMediaOutput"), &Z_Registration_Info_UClass_UProxyMediaOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProxyMediaOutput), 2312361011U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaOutput_h_2178053767(TEXT("/Script/MediaFrameworkUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaOutput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
