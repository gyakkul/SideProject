// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaAssets/ProxyMediaSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProxyMediaSource() {}
// Cross Module References
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UProxyMediaSource();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UProxyMediaSource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MediaFrameworkUtilities();
// End Cross Module References
	DEFINE_FUNCTION(UProxyMediaSource::execIsProxyValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsProxyValid();
		P_NATIVE_END;
	}
	void UProxyMediaSource::StaticRegisterNativesUProxyMediaSource()
	{
		UClass* Class = UProxyMediaSource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsProxyValid", &UProxyMediaSource::execIsProxyValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProxyMediaSource_IsProxyValid_Statics
	{
		struct ProxyMediaSource_eventIsProxyValid_Parms
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
	void Z_Construct_UFunction_UProxyMediaSource_IsProxyValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ProxyMediaSource_eventIsProxyValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProxyMediaSource_IsProxyValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ProxyMediaSource_eventIsProxyValid_Parms), &Z_Construct_UFunction_UProxyMediaSource_IsProxyValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProxyMediaSource_IsProxyValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProxyMediaSource_IsProxyValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProxyMediaSource_IsProxyValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media Proxy" },
		{ "Comment", "/**\n\x09 * Is the media proxy has a valid proxy.\n\x09 *\n\x09 * @return true if the proxy is valid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaAssets/ProxyMediaSource.h" },
		{ "ToolTip", "Is the media proxy has a valid proxy.\n\n@return true if the proxy is valid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProxyMediaSource_IsProxyValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProxyMediaSource, nullptr, "IsProxyValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProxyMediaSource_IsProxyValid_Statics::ProxyMediaSource_eventIsProxyValid_Parms), Z_Construct_UFunction_UProxyMediaSource_IsProxyValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProxyMediaSource_IsProxyValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProxyMediaSource_IsProxyValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProxyMediaSource_IsProxyValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProxyMediaSource_IsProxyValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProxyMediaSource_IsProxyValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProxyMediaSource);
	UClass* Z_Construct_UClass_UProxyMediaSource_NoRegister()
	{
		return UProxyMediaSource::StaticClass();
	}
	struct Z_Construct_UClass_UProxyMediaSource_Statics
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
	UObject* (*const Z_Construct_UClass_UProxyMediaSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMediaSource,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaFrameworkUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProxyMediaSource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProxyMediaSource_IsProxyValid, "IsProxyValid" }, // 2538969009
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyMediaSource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A media source that reditect to another media source.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MediaAssets/ProxyMediaSource.h" },
		{ "ModuleRelativePath", "Public/MediaAssets/ProxyMediaSource.h" },
		{ "ToolTip", "A media source that reditect to another media source." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyMediaSource_Statics::NewProp_DynamicProxy_MetaData[] = {
		{ "Comment", "/** Cached media source proxy. */" },
		{ "ModuleRelativePath", "Public/MediaAssets/ProxyMediaSource.h" },
		{ "ToolTip", "Cached media source proxy." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UProxyMediaSource_Statics::NewProp_DynamicProxy = { "DynamicProxy", nullptr, (EPropertyFlags)0x0044000000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProxyMediaSource, DynamicProxy), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProxyMediaSource_Statics::NewProp_DynamicProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProxyMediaSource_Statics::NewProp_DynamicProxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyMediaSource_Statics::NewProp_Proxy_MetaData[] = {
		{ "Category", "Media Proxy" },
		{ "Comment", "/** Media source proxy. */" },
		{ "ModuleRelativePath", "Public/MediaAssets/ProxyMediaSource.h" },
		{ "ToolTip", "Media source proxy." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UProxyMediaSource_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProxyMediaSource, Proxy), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProxyMediaSource_Statics::NewProp_Proxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProxyMediaSource_Statics::NewProp_Proxy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProxyMediaSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProxyMediaSource_Statics::NewProp_DynamicProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProxyMediaSource_Statics::NewProp_Proxy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProxyMediaSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProxyMediaSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProxyMediaSource_Statics::ClassParams = {
		&UProxyMediaSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProxyMediaSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UProxyMediaSource_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProxyMediaSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProxyMediaSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProxyMediaSource()
	{
		if (!Z_Registration_Info_UClass_UProxyMediaSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProxyMediaSource.OuterSingleton, Z_Construct_UClass_UProxyMediaSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProxyMediaSource.OuterSingleton;
	}
	template<> MEDIAFRAMEWORKUTILITIES_API UClass* StaticClass<UProxyMediaSource>()
	{
		return UProxyMediaSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProxyMediaSource);
	UProxyMediaSource::~UProxyMediaSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProxyMediaSource, UProxyMediaSource::StaticClass, TEXT("UProxyMediaSource"), &Z_Registration_Info_UClass_UProxyMediaSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProxyMediaSource), 395061091U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaSource_h_3011015121(TEXT("/Script/MediaFrameworkUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaAssets_ProxyMediaSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
